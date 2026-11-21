// 嵌入式驱动模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::hal
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x59;  // 嵌入式驱动模块
  }
};

enum class DC : std::uint32_t {
  Undefined                             = 0x00,
  LidarPPSException                     = 0x0000000C,  // 0x590000000C , 360°激光雷达pps同步异常
  LidarPtpVersionNotSupport             = 0x0000000D,  // 0x590000000D , 360°激光雷达ptp版本为1588-v2.1版本，设备不支持该版本
  LidarPtpAndGptpCoexist                = 0x0000000E,  // 0x590000000E , 360°激光雷达ptp和gptp信号同时存在，同步存在问题
  LidarPtpSyncFaultOrLeap               = 0x0000000F,  // 0x590000000F , 360°激光雷达ptp同步中断，或者时间跳变太大
  LidarUdpCommLost                      = 0x00000011,  // 0x5900000011 , 360°激光雷达UDP无通信
  LidarUdpFrameLost                     = 0x00000014,  // 0x5900000014 , 360°激光雷达UDP帧率异常
  LidarEthernetDisconnected             = 0x00000021,  // 0x5900000021 , 360°激光雷达检测到以太网连接曾断开过
  LidarGpsSignalLostTimeSyncFailed      = 0x00000030,  // 0x5900000030 , 360°激光雷达缺失gps信号导致gps时间同步失败
  LidarPpsSignalLostTimeSyncFailed      = 0x00000031,  // 0x5900000031 , 360°激光雷达缺失pps信号导致gps时间同步失败
  LidarScanModuleLowTempHeating         = 0x00000032,  // 0x5900000032 , 360°激光雷达扫描模块低温加热中
  LidarScanModuleAbnormal               = 0x00000033,  // 0x5900000033 , 360°激光雷达扫描模块异常
  LidarScanModuleAbnormalSelfRecovering = 0x00000034,  // 0x5900000034 , 360°激光雷达扫描模块异常，正在尝试自恢复中
  LidarDeviceParameterAbnormal          = 0x00000035,  // 0x5900000035 , 360°激光雷达设备参数异常
  LidarDeviceExternalVoltageAbnormal    = 0x00000038,  // 0x5900000038 , 360°激光雷达设备外部电压异常
  LidarTimeSyncLowAccuracy              = 0x00000039,  // 0x5900000039 , 360°激光雷达时间同步精度低
  LidarDeviceEnvironmentTempHigh        = 0x0000003A,  // 0x590000003A , 360°激光雷达设备运行环境温度偏高
  LidarDeviceEnvironmentTempHigher      = 0x0000003B,  // 0x590000003B , 360°激光雷达设备运行环境温度较高
  LidarSphericalWindowDirty             = 0x0000003C,  // 0x590000003C , 360°激光雷达设备球形光窗存在脏污，设备点云数据可信度较差
  LidarDeviceUpgradeError               = 0x0000003D,  // 0x590000003D , 360°激光雷达设备升级过程中出现错误
  LidarInternalComponent1TempAbnormal   = 0x0000003E,  // 0x590000003E , 360°激光雷达设备内部器件温度异常（内部元器件1）
  LidarInternalComponent2TempAbnormal   = 0x0000003F,  // 0x590000003F , 360°激光雷达设备内部器件温度异常（内部元器件2）
  LidarIMUPaused                        = 0x00000040,  // 0x5900000040 , 360°激光雷达设备内部IMU器件暂停工作
  LidarEnvironmentTempHigh              = 0x00000041,  // 0x5900000041 , 360°激光雷达设备运行环境温度高
  LidarEnvironmentTempOverLimit         = 0x00000042,  // 0x5900000042 , 360°激光雷达设备运行环境温度超过承受极限，设备已停止工作
  LidarTimeSyncHistoryAbnormal          = 0x00000043,  // 0x5900000043 , 360°激光雷达时间同步曾经发生过异常
  LidarGPSTimingSiganlAbnormal          = 0x00000066,  // 0x5900000066 , 360°激光雷达使用GPS授时的时候GPS信号异常
  HalSensorInvalidDeviceConfigFile      = 0x00000067,  // 0x5900000067 , 机上配置文件错误
  HalSensorUnconfiguredLidarFound       = 0x00000068,  // 0x5900000068 , 机上有Lidar被发现但是没有配置序列号
  HalSensorUnconfiguredCameraFound      = 0x00000069   // 0x5900000069 , 机上有相机被发现但是没有配置序列号
};

using DiagCode = DC;

}  // namespace aima::hal

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::hal::DC> {
  using ModuleType = aima::hal::ModuleManifest;
};

}  // namespace aima::module::details