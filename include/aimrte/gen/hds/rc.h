// 遥控器模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::rc
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x58;  // 遥控器模块
  }
};

enum class DC : std::uint32_t {
  Undefined   = 0x00,
  RcLegOnAuto = 0x00002713  // 0x5800002713 , 自动模式下,用户通过有线/虚拟遥控器输入控制指令
};

using DiagCode = DC;

}  // namespace aima::rc

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::rc::DC> {
  using ModuleType = aima::rc::ModuleManifest;
};

}  // namespace aima::module::details