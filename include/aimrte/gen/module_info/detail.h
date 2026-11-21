//
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

namespace aima::module::details
{

template <class TModelInfo>
struct ModuleTypeTrait;

struct ModuleInfo {
  std::string name;
  std::string description;
};

inline static std::unordered_map<uint32_t, ModuleInfo> g_module_manifest_map = {
  {48, {.name = "ADU", .description = "通用智能域控"}},
  {50, {.name = "PDU", .description = "驱动控制相关"}},
  {52, {.name = "MDU", .description = "运控区域控制器"}},
  {53, {.name = "HDU", .description = "头部控制器相关"}},
  {80, {.name = "task_engine", .description = "任务系统"}},
  {81, {.name = "hds", .description = "健康管理HDS"}},
  {82, {.name = "mm", .description = "地图管理"}},
  {83, {.name = "ota", .description = "OTA"}},
  {84, {.name = "em", .description = "进程管理"}},
  {85, {.name = "sm", .description = "系统状态管理模块"}},
  {86, {.name = "media", .description = "多媒体"}},
  {87, {.name = "framework", .description = "基础功能模块，框架类"}},
  {88, {.name = "rc", .description = "遥控器模块"}},
  {89, {.name = "hal", .description = "嵌入式驱动模块"}},
  {96, {.name = "perception", .description = "感知模块"}},
  {97, {.name = "slam", .description = "SLAM模块"}},
  {98, {.name = "planning", .description = "规控及导航"}},
  {99, {.name = "mc", .description = "运控"}},
  {100, {.name = "speech", .description = "语音模块"}},
  {102, {.name = "slam_vieo", .description = "高精导航"}},
  {112, {.name = "skills", .description = "技能模块"}},
  {113, {.name = "embodied", .description = "具身框架模块"}}

};

}  // namespace aima::module::details