// 健康管理HDS
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::hds
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x51;  // 健康管理HDS
  }
};

enum class DC : std::uint32_t {
  Undefined                = 0x00,
  CpuUsageOverLimitOrin    = 0x00000001,  // 0x5100000001 , Orin板CPU使用率异常-健康诊断
  MemoryUsageOverLimitOrin = 0x00000002,  // 0x5100000002 , Orin板内存使用率异常-健康诊断
  DiskUsageOverlimitOrin   = 0x00000003,  // 0x5100000003 , Orin板磁盘使用率异常-健康诊断
  BatteryLow               = 0x00000004,  // 0x5100000004 , 低电量一级报警
  BatteryLowLimit          = 0x00000005,  // 0x5100000005 , 电量极低
  PerceptionHbTimeout      = 0x00000006,  // 0x5100000006 , 感知模块进程心跳异常
  PncHbTimeout             = 0x00000008,  // 0x5100000008 , 规控模块进程心跳异常
  InteractionHbTimeout     = 0x00000009,  // 0x5100000009 , 语音交互模块进程心跳异常
  MotionPlayerHbTimeout    = 0x0000000A,  // 0x510000000A , 自然动作模块进程心跳异常
  TaskEngineHbTimeout      = 0x0000000B,  // 0x510000000B , 任务管理模块进程心跳异常
  MmHbTimeout              = 0x0000000C,  // 0x510000000C , 地图管理模块进程心跳异常
  SmHbTimeout              = 0x0000000D,  // 0x510000000D , 状态管理模块进程心跳异常
  McHbTimeout              = 0x0000000E,  // 0x510000000E , 运控模块进程心跳异常
  TopicHzAbnormal          = 0x0000000F,  // 0x510000000F , SOC话题频率异常
  HdsHbTimeout             = 0x00000010,  // 0x5100000010 , 健康管理模块进程心跳异常
  HalEthercatHbTimeout     = 0x00000011,  // 0x5100000011 , HAL_Ethercat进程心跳异常
  HalSensorHbTimeout       = 0x00000012,  // 0x5100000012 , HAL_Sensor心跳异常
  AgentHbTimeout           = 0x00000013,  // 0x5100000013 , 智能体Agent模块进程心跳异常
  OtaHbTimeout             = 0x00000015,  // 0x5100000015 , OTA模块进程心跳异常
  BatteryLow2              = 0x00000020,  // 0x5100000020 , 电量低
  CpuUsageOverLimitX86     = 0x0000003C,  // 0x510000003C , x86板CPU使用率异常-健康诊断
  DiskUsageOverlimitX86    = 0x0000003D,  // 0x510000003D , x86板磁盘使用率异常-健康诊断
  MemoryUsageOverLimitX86  = 0x0000003E,  // 0x510000003E , x86板内存使用率异常-健康诊断
  EmergencyStop            = 0x00000064   // 0x5100000064 , 急停拍下
};

using DiagCode = DC;

}  // namespace aima::hds

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::hds::DC> {
  using ModuleType = aima::hds::ModuleManifest;
};

}  // namespace aima::module::details