// 感知模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::perception
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x60;  // 感知模块
  }
};

enum class DC : std::uint32_t {
  Undefined               = 0x00,
  LidarDataLost           = 0x00000001,  // 0x6000000001 , 360°激光雷达数据丢失
  RGBDDataLost            = 0x00000002,  // 0x6000000002 , 头部双目相机数据丢失
  LeftFisheyeDataLost     = 0x00000004,  // 0x6000000004 , 胸部左鱼眼相机数据丢失
  RightFisheyeDataLost    = 0x00000005,  // 0x6000000005 , 胸部右鱼眼相机数据丢失
  LidarDataFreAbnormal    = 0x00000006,  // 0x6000000006 , 360°激光雷达数据频率异常
  RGBDDataFreAbnormal     = 0x00000007,  // 0x6000000007 , 头部双目相机数据频率异常
  LeftFisheyeFreAbnormal  = 0x00000009,  // 0x6000000009 , 胸部左鱼眼相机数据频率异常
  RightFisheyeFreAbnormal = 0x0000000A,  // 0x600000000A , 胸部右鱼眼相机数据频率异常
  TimeSyncFailed          = 0x0000000C,  // 0x600000000C , 多传感器时间戳不同步
  CalibFileNotFound       = 0x00000018,  // 0x6000000018 , 标定参数文件不存在
  CalibDataFormatError    = 0x00000019,  // 0x6000000019 , 标定参数文件格式错误
  PerceptionInternalError = 0x0000001A   // 0x600000001A , 软件运行内部运行异常
};

using DiagCode = DC;

}  // namespace aima::perception

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::perception::DC> {
  using ModuleType = aima::perception::ModuleManifest;
};

}  // namespace aima::module::details