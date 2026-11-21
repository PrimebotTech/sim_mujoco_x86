// 基础功能模块，框架类
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::framework
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x57;  // 基础功能模块，框架类
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::framework

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::framework::DC> {
  using ModuleType = aima::framework::ModuleManifest;
};

}  // namespace aima::module::details