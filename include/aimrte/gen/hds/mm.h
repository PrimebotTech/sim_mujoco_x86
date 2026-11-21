// 地图管理
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::mm
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x52;  // 地图管理
  }
};

enum class DC : std::uint32_t {
  Undefined            = 0x00,
  MMMapNotExisted      = 0x00000001,  // 0x5200000001 , 指定的地图不存在
  MMSQLOperationFailed = 0x00000002   // 0x5200000002 , 数据库操作失败
};

using DiagCode = DC;

}  // namespace aima::mm

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::mm::DC> {
  using ModuleType = aima::mm::ModuleManifest;
};

}  // namespace aima::module::details