// 高精导航
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::slam_vieo
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x66;  // 高精导航
  }
};

enum class DC : std::uint32_t {
  Undefined = 0x00,
};

using DiagCode = DC;

}  // namespace aima::slam_vieo

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::slam_vieo::DC> {
  using ModuleType = aima::slam_vieo::ModuleManifest;
};

}  // namespace aima::module::details