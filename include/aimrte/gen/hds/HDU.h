// 头部控制器相关
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::HDU
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x35;  // 头部控制器相关
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::HDU

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::HDU::DC> {
  using ModuleType = aima::HDU::ModuleManifest;
};

}  // namespace aima::module::details