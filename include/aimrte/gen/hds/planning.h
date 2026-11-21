// 规控及导航
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::planning
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x62;  // 规控及导航
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::planning

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::planning::DC> {
  using ModuleType = aima::planning::ModuleManifest;
};

}  // namespace aima::module::details