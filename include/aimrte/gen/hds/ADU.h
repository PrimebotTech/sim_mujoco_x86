// 通用智能域控
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::ADU
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x30;  // 通用智能域控
  }
};

enum class DC : std::uint32_t {
  Undefined                               = 0x00,
  CpuLoadHigh                             = 0x00000011,  // 0x3000000011 , Orin板CPU负载超阈值
  CpuTempHigh                             = 0x00000012,  // 0x3000000012 , Orin板CPU温度超阈值
  CpuTempHighUnderclocking                = 0x00000013,  // 0x3000000013 , Orin板CPU高温降频
  MemUsageHigh                            = 0x00000014,  // 0x3000000014 , Orin板内存占用超阈值
  DiskTempHigh                            = 0x00000015,  // 0x3000000015 , Orin板硬盘温度超阈值
  DiskUsageHigh                           = 0x00000016,  // 0x3000000016 , Orin板硬盘占用超阈值
  DiskPartitionUsageHigh                  = 0x00000017,  // 0x3000000017 , Orin板硬盘分区占用超阈值
  DiskSmartCriticalAlert                  = 0x00000018,  // 0x3000000018 , Orin板DISK_SMART严重告警
  DiskAvailableSpaceLow                   = 0x00000019,  // 0x3000000019 , Orin板硬盘可用备用空间不足
  DiskAvailableSpaceFull                  = 0x0000001A,  // 0x300000001A , Orin板硬盘可用备用空间使用完毕
  DiskWriteLifeLow                        = 0x0000001B,  // 0x300000001B , Orin板硬盘剩余写寿命不足
  DiskOEError                             = 0x0000001C,  // 0x300000001C , Orin板硬盘OE异常
  DiskCableOrInterfaceError               = 0x0000001D,  // 0x300000001D , Orin板硬盘线缆或接口异常
  DiskReallocationSectorNonZero           = 0x0000001E,  // 0x300000001E , Orin板硬盘重分配扇区数非零
  DiskPendingSectorNonZero                = 0x0000001F,  // 0x300000001F , Orin板硬盘待处置扇区数非零
  DiskBadSectorNonZero                    = 0x00000020,  // 0x3000000020 , Orin板硬盘坏道(不可矫正扇区数非0)
  DiskTerminalCheckError                  = 0x00000021,  // 0x3000000021 , Orin板硬盘终端校验出错
  DiskUnsafeShutdownCountIncrease         = 0x00000022,  // 0x3000000022 , Orin板硬盘不安全关机数增加
  DiskHeliumValueAbnormal                 = 0x00000023,  // 0x3000000023 , Orin板硬盘剩余氦气值异常
  DiskHeliumValueSuspicious               = 0x00000024,  // 0x3000000024 , Orin板硬盘剩余氦气值疑似异常
  DiskFreeFallProtectionCountIncrease     = 0x00000025,  // 0x3000000025 , Orin板硬盘自由落体保护数增加
  DiskFreeFallProtectionCountIncreaseFast = 0x00000026,  // 0x3000000026 , Orin板硬盘自由落体保护数快速增加
  DiskTempAbnormal                        = 0x00000027,  // 0x3000000027 , Orin板硬盘温度异常
  DiskTempOverHeating                     = 0x00000028,  // 0x3000000028 , Orin板硬盘超温异常
  GpuTempHigh                             = 0x00000029,  // 0x3000000029 , Orin板GPU温度超阈值
  MainboardTempHigh                       = 0x0000002A,  // 0x300000002A , Orin板GPU温度达到Slowdown温度
  EthCableDisconnected                    = 0x0000002B,  // 0x300000002B , Orin板GPU接近过热关闭温度
  WifiSignalWeak                          = 0x00000034,  // 0x3000000034 , Orin板WIFI网络信号弱
  WifiDisconnected                        = 0x00000035,  // 0x3000000035 , Orin板WIFI网络断开
  WifiSwitched                            = 0x00000036,  // 0x3000000036 , Orin板WIFI网络切换
  MobileNetworkSignalWeakOrin             = 0x00000038,  // 0x3000000038 , Orin板移动网络信号弱
  MobileNetworkDisconnectedOrin           = 0x00000039,  // 0x3000000039 , Orin板移动网络断开
  UsbDeviceDisconnected                   = 0x0000003B,  // 0x300000003B , Orin板USB设备断开
  DisplayOutputCableDisconnected          = 0x0000003D,  // 0x300000003D , Orin板显示输出线缆断开
  DiskDisconnected                        = 0x0000003F,  // 0x300000003F , Orin板硬盘断开
  FanStop                                 = 0x00000041,  // 0x3000000041 , Orin板风扇停转
  CpuFanStopAndCpuTempHigh                = 0x00000042   // 0x3000000042 , Orin板CPU风扇停转且CPU温度高
};

using DiagCode = DC;

}  // namespace aima::ADU

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::ADU::DC> {
  using ModuleType = aima::ADU::ModuleManifest;
};

}  // namespace aima::module::details