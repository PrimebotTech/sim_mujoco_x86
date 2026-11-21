#pragma once

namespace aimrt::module::subscribe::data {
enum class JointTag {
  MC_JOINT,   // 仿真环境: 接收MC的命令
  HAL_JOINT,  // 映射环境: 接收HAL的命令
};

enum class ImuTag {
  MC_TORSO,   // 仿真环境: 接收MC的命令
  HAL_TORSO,  // 映射环境: 接收HAL的命令
};
}  // namespace aimrt::module::subscribe::data