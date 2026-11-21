// SLAM模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::slam
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x61;  // SLAM模块
  }
};

enum class DC : std::uint32_t {
  Undefined                     = 0x00,
  MappingImuDataNull            = 0x00000001,  // 0x6100000001 , IMU(livox)数据值为空
  MappingLidarDataNull          = 0x00000002,  // 0x6100000002 , 激光数据值为空
  MappingOdomDataNull           = 0x00000003,  // 0x6100000003 , 底盘数据值为空
  MappingImuDelayed             = 0x00000004,  // 0x6100000004 , IMU消息时间戳严重延迟
  MappingOdomDelayed            = 0x00000005,  // 0x6100000005 , 底盘消息时间戳严重延迟
  MappinglidarDelayed           = 0x00000006,  // 0x6100000006 , 激光消息时间戳严重延迟
  MappingImuTimestampBounce     = 0x00000007,  // 0x6100000007 , IMU消息时间戳回跳
  MappingOdomTimestampBounce    = 0x00000008,  // 0x6100000008 , 底盘消息时间戳回跳
  MappingLidarTimestampBounce   = 0x00000009,  // 0x6100000009 , 激光消息时间戳回跳
  MappingSaveMapDataNull        = 0x0000000A,  // 0x610000000A , 保存地图为空
  MappingConfigFileReadError    = 0x0000000B,  // 0x610000000B , 建图模块配置文件读取失败
  RelocQrDetectTimeout          = 0x00000020,  // 0x6100000020 , 二维码检测超时
  RelocRobotMovigDetectQrFailed = 0x00000021,  // 0x6100000021 , 机器人正在运动，无法检测二维码
  RelocGetOdomLocFailed         = 0x00000022,  // 0x6100000022 , 机器人获取建图或者定位发布位置失败
  RelocGetQrMapFailed           = 0x00000023,  // 0x6100000023 , 机器人获取录制的二维码地图失败
  RelocQrCodeNotInMap           = 0x00000024,  // 0x6100000024 , 二维码在地图中不存在
  RelocGetConfigFileFailed      = 0x00000025,  // 0x6100000025 , 重定位模块配置文件读取失败
  RelocLoadPcdMapFailed         = 0x00000026,  // 0x6100000026 , 点云地图加载失败
  RelocLidarDataNull            = 0x00000027,  // 0x6100000027 , 没有激光数据值
  RelocFailedForLowScore        = 0x00000028,  // 0x6100000028 , 点云匹配得分低导致重定位失败
  LocImuDataDelayed             = 0x0000003D,  // 0x610000003D , IMU消息严重延迟
  LocOdomDataDelayed            = 0x0000003E,  // 0x610000003E , 底盘状态消息严重延迟(SLAM)
  LocLidarDataDelayed           = 0x0000003F,  // 0x610000003F , 激光消息严重延迟
  LocImuTimestampBounce         = 0x00000040,  // 0x6100000040 , IMU消息时间戳回跳
  LocOdomTimestampBounce        = 0x00000041,  // 0x6100000041 , 底盘消息时间戳回跳
  LocLidarTimestampBounce       = 0x00000042,  // 0x6100000042 , 激光消息时间戳回跳
  LocLidarDataNull              = 0x00000043,  // 0x6100000043 , 激光点云数据值没有数据
  LocLidarLocDegraded           = 0x00000044,  // 0x6100000044 , 激光定位进入退化状态
  LocLocaizationIsFailed        = 0x00000045,  // 0x6100000045 , 定位失败
  OdomImuComErr                 = 0x00000050,  // 0x6100000050 , IMU通讯异常
  OdomImuFreErr                 = 0x00000051,  // 0x6100000051 , IMU频率异常
  OdomImuGyroValErr             = 0x00000052,  // 0x6100000052 , 陀螺仪超出有效值
  OdomImuGyroStdErr             = 0x00000053,  // 0x6100000053 , 陀螺仪噪声过大
  OdomImuAccValErr              = 0x00000054,  // 0x6100000054 , 加速度计超出有效值
  OdomImuAccStdErr              = 0x00000055,  // 0x6100000055 , 加速度计噪声过大
  OdomImuTimeOut                = 0x00000056,  // 0x6100000056 , IMU有效数据超时
  OdomChassisComErr             = 0x00000057,  // 0x6100000057 , 关节运动学数据通讯异常
  OdomChassisFreErr             = 0x00000058,  // 0x6100000058 , 关节运动学数据更新频率异常
  OdomChassisValErr             = 0x00000059,  // 0x6100000059 , 关节运动学数据超量程
  OdomChassisStdErr             = 0x0000005A,  // 0x610000005A , 关节运动学数据跳变
  OdomChassisTimeOut            = 0x0000005B,  // 0x610000005B , 关节运动学有效数据超时
  OdomAlgSensorTimeOut          = 0x0000005C,  // 0x610000005C , 传感器数据时间同步异常
  OdomAlgPosErr                 = 0x0000005D,  // 0x610000005D , odom位置解算跳变
  OdomAlgVelErr                 = 0x0000005E,  // 0x610000005E , odom速度解算跳变
  OdomAlgYawErr                 = 0x0000005F   // 0x610000005F , odom位置航向跳变
};

using DiagCode = DC;

}  // namespace aima::slam

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::slam::DC> {
  using ModuleType = aima::slam::ModuleManifest;
};

}  // namespace aima::module::details