// 进程管理
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::em
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x54;  // 进程管理
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::em

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::em::DC> {
  using ModuleType = aima::em::ModuleManifest;
};

}  // namespace aima::module::details