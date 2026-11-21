// 运控区域控制器
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::MDU
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x34;  // 运控区域控制器
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::MDU

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::MDU::DC> {
  using ModuleType = aima::MDU::ModuleManifest;
};

}  // namespace aima::module::details