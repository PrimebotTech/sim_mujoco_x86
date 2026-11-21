// 技能模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::skills
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x70;  // 技能模块
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::skills

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::skills::DC> {
  using ModuleType = aima::skills::ModuleManifest;
};

}  // namespace aima::module::details