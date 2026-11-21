# --------------------------------------------------------------------------------------------------------------
# hal_rgbd TOF 热切换接口
# 用于整机进入/退出低功耗或充电状态时，热关闭/热启动 TOF 相机
# --------------------------------------------------------------------------------------------------------------

# 请求头
CommonRequest request

# 请求唯一标识，用于问题定位
string trace_id

# 目标相机电源控制mask，0关闭 1打开
uint32 power_ctrl_mask #预留

# 目标相机出流控制mask，0关闭 1打开
uint32 stream_ctrl_mask

uint32 CAMERA_ALL   = 0x1F   # 全部 5 路 TOF（默认）
uint32 CAMERA_TOF_0 = 0x01   # main tof
uint32 CAMERA_TOF_1 = 0x02   # front tof
uint32 CAMERA_TOF_2 = 0x04   # rear tof
uint32 CAMERA_TOF_3 = 0x08   # left tof
uint32 CAMERA_TOF_4 = 0x10   # right tof
# 4ToF起流：stream_ctrl_mask = 0x1F
# 4ToF停流：stream_ctrl_mask = 0x01 (当前仅支持这两种)
# power_ctrl_mask保留，当前仅支持配置0x1F

