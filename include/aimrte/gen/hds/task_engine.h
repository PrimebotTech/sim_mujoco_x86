// 任务系统
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::task_engine
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x50;  // 任务系统
  }
};

enum class DC : std::uint32_t {
  Undefined      = 0x00,
  NavMapNotFound = 0x00000001,  // 0x5000000001 , 导航找不到地图
  NavUnreachable = 0x00000002,  // 0x5000000002 , 导航目标点不可达
  NavAbnormal    = 0x00000003   // 0x5000000003 , 导航模块通用异常
};

using DiagCode = DC;

}  // namespace aima::task_engine

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::task_engine::DC> {
  using ModuleType = aima::task_engine::ModuleManifest;
};

}  // namespace aima::module::details