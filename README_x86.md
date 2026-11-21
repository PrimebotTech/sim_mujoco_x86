# Sim Mujoco

Mujoco 仿真环境使用说明。仿真程序运行在 Docker 容器中，需要先启动容器环境。

## 系统架构
```text
+---------------------------------------------------------------------------------+
| 宿主机                                                                           |
|                                                                                 |
|     +--------------------------------+       +----------------------------+     |
|     | 本地代码工作区                   |       | X11 显示窗口               |       |
|     | (仿真与运控工程源码)              |       | (仿真界面原生显示)          |       |
|     | 例如: ~/native_x86_workspace    |       +--------------▲-------------+     |
|     +--------------+------------------+                      │                  |
|                    │ 目录挂载 (-v)                            │ X11 显示流         |
|                    ▼                                         │ (X11-unix 挂载)   |
| +-----------------------------------------------------------------------------+ |
| |                                                                             | |
| |   +-----------------------------+                                           | |
| |   |   运控框架 / 自研算法程序      |                                           | |
| |   |  (mc_framework_ / 用户程序)|                                           | |
| |   |        (终端 2 运行)         |                                           | |
| |   +--------------▲--------------+                                           | |
| |                  │                                                          | |
| |    ROS2 控制下发  │ ▼ 关节控制命令 / 运动速度指令                                | |
| |                  │                                                          | |
| |    ROS2 状态反馈  │ ▲ 关节状态反馈 / 机身 IMU 数据                               | |
| |                  │                                                          | |
| |   +--------------▼--------------+                                           | |
| |   | sim_mujoco_x86 (物理仿真引擎)     |                                       | |
| |   | (终端 1 运行)                |          OpenGL 画面渲染                    | |
| |   +--------------+--------------+─────────────────────────────►             | |
| |                                                                             | |
| |                                 Docker 容器                                  | |
| |                环境: ROS2 Humble / Python 3 / C++ toolchain                  | |
| +-----------------------------------------------------------------------------+ |
+---------------------------------------------------------------------------------+
```

### 组件说明

| 组件 | 说明 | 获取方式 |
|------|------|----------|
| **Docker 容器** | 提供统一的 ROS2 Humble、Python、C++ 编译环境，隔离宿主机依赖 | 访问 [PrimeBot 开发者下载站](https://dev.primebot.com/download) 下载构建包并构建镜像（或导入现成镜像包）；也可从 [GitHub](https://github.com/PrimebotTech) 下载 |
| **sim_mujoco** | MuJoCo 物理仿真引擎，模拟机器人本体动力学，发布关节状态与 IMU 数据，接收关节命令和速度指令 | 访问 [PrimeBot 开发者下载站](https://dev.primebot.com/download) 下载仿真程序压缩包并解压至工作区；也可从 [GitHub](https://github.com/PrimebotTech) 下载 |
| **mc_framework_xx** | 运控框架，订阅关节状态和 IMU 数据，下发关节控制命令给 sim_mujoco（亦可替换为用户自研算法） | 访问 [PrimeBot 开发者下载站](https://dev.primebot.com/download) 下载/ 官方二开交付源码包（或用户自研）；也可从 [GitHub](https://github.com/PrimebotTech) 下载 |


### ROS2 Topic 通信一览

| Topic | 发布者 | 订阅者 | 说明 |
|-------|--------|--------|------|
| `/aima/hal/joint/state` | sim_mujoco | mc_framework_xx | 关节角度/速度状态 |
| `/aima/hal/imu/state` | sim_mujoco | mc_framework_xx | 机器人整体 IMU 数据 |
| `/aima/hal/imu/torso/state` | sim_mujoco | mc_framework_xx | 机器人躯干 IMU 数据 |
| `/aima/hal/joint/command` | mc_framework_xx | sim_mujoco | 关节力矩/位置控制命令 |
| `/aima/mc/locomotion/velocity` | mc_framework_xx | sim_mujoco | 速度运动指令 |

---

## 快速开始

> **重要：** 请确保 `sim_mujoco` 项目位于 `~/native_x86_workspace` 目录下，否则容器内将无法访问仿真程序。

### 整体流程概览

```
构建 Docker 镜像 ──► 启动容器 ──► 配置环境并启动仿真 ──► 另开终端启动运控框架
```

1. **构建 Docker 镜像** — 下载构建包，构建 x86 环境镜像
2. **启动容器** — 用 `docker run` 创建并进入容器，通过原生 X11 显示仿真界面
3. **配置环境并启动仿真** — 加载 ROS2 环境，启动 sim_mujoco 仿真
4. **启动运控框架** — 另开终端进入容器，启动 mc_framework_xx

### 1. 构建 Docker 容器镜像

前往 https://dev.primebot.com/download ，滚动页面到下方 **x86 原生编译** 区域，下载 `docker_x86_native_x86` 构建包。

下载完成后，请参照项目内的 `x86编译完整指南.md` 进行 Docker 镜像构建。

**⚠️** 镜像构建完成后，会自动进入容器，请先执行 `exit` 退出容器，后续步骤会重新创建并启动容器。

### 2. 创建并启动 Docker 容器

在主机终端执行以下操作启动容器：

允许本地 X11 显示连接：

```bash
xhost +local:
```

> 成功后会提示：`non-network local connections being added to access control list`

启动容器：

```bash
docker run -it --rm \
  -e DISPLAY=$DISPLAY \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  --name mujoco_gui \
  --net=host \
  -v ~/native_x86_workspace:/native_x86_workspace \
  native-x86:latest bash
```

> 说明：`~/native_x86_workspace` 挂载到容器内的 `/native_x86_workspace`，仿真程序位于容器中的 `/native_x86_workspace/sim_mujoco`。

### 3. 配置环境并启动仿真（容器内执行）

一次性复制以下命令块，完成环境配置和仿真启动：

```bash
# 进入项目目录
cd /native_x86_workspace/sim_mujoco

# 加载 ROS2 环境
source /opt/ros/humble/setup.bash

# 加载自定义消息包
source share/aimdk_msgs/local_setup.bash

# 进入 bin 目录并赋予执行权限
cd bin
chmod +x ./start_sim_for_mc.sh

# 启动仿真
./start_sim_for_mc.sh -s
```

启动后进入交互式选择界面：

- **q**（机器人系列）选择：**2**
- **t**（机器人型号）选择：**8**
- 按 **回车** 确认启动

---

## 启动运控框架

仿真启动后，需要**再开一个终端**，同样进入容器内启动运控框架。

### 1. 进入容器（主机终端执行）

```bash
docker exec -it mujoco_gui bash
```

### 2. 安装依赖并运行

> **注意：** 请先将运控框架项目放入 `~/native_x86_workspace` 目录下，因为 Docker 容器启动时已将该目录映射为容器内的 `/native_x86_workspace`，否则容器内无法访问运控框架代码。

> **说明：** 以下仅列出基本的安装和启动命令，详细的配置参数、运行模式及调优说明请参考对应项目中的 `README.md` 文档。

根据仿真选择的机器人型号和使用的语言版本，选择对应的命令块执行：

| 仿真选项 | Python 项目 | C++ 项目 |
|---|---|---|
| q=2 | `mc_framework_q1` | `mc_framework_q1_c` |
| t=8 | `mc_framework_t1` | `mc_framework_t1_c` |

运行 Python Q 项目：

```bash
cd /native_x86_workspace/mc_framework_q1

pip install -e . -i https://pypi.tuna.tsinghua.edu.cn/simple

source /opt/ros/humble/setup.bash

source install/setup.bash

python3 examples/run_q1.py
```

运行 C++ Q 项目：

```bash
cd /native_x86_workspace/mc_framework_q1_c

chmod +x ./run.sh

./run.sh
```

运行 Python T 项目：

```bash
cd /native_x86_workspace/mc_framework_t1

pip install -e . -i https://pypi.tuna.tsinghua.edu.cn/simple

source /opt/ros/humble/setup.bash

source install/setup.bash

python3 examples/run_t1.py
```

运行 C++ T 项目：

```bash
cd /native_x86_workspace/mc_framework_t1_c

chmod +x ./run.sh

./run.sh
```
