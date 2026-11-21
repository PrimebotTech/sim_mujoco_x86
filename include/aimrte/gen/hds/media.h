// 多媒体
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::media
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x56;  // 多媒体
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::media

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::media::DC> {
  using ModuleType = aima::media::ModuleManifest;
};

}  // namespace aima::module::details