// 运控
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::mc
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x63;  // 运控
  }
};

enum class DC : std::uint32_t {
  Undefined         = 0x00,
  ImuLost           = 0x00000001,  // 0x6300000001 , 里程计姿态不更新
  OrientationUnsafe = 0x00000004,  // 0x6300000004 , 机身姿态偏移过大
  JointZeroError    = 0x00000005   // 0x6300000005 , 零位异常
};

using DiagCode = DC;

}  // namespace aima::mc

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::mc::DC> {
  using ModuleType = aima::mc::ModuleManifest;
};

}  // namespace aima::module::details