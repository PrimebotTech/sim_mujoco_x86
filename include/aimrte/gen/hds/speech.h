// 语音模块
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::speech
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x64;  // 语音模块
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::speech

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::speech::DC> {
  using ModuleType = aima::speech::ModuleManifest;
};

}  // namespace aima::module::details