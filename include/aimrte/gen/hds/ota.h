// OTA
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>

namespace aima::ota
{

class ModuleManifest
{
 public:
  static constexpr std::uint8_t GetId()
  {
    return 0x53;  // OTA
  }
};

enum class DC : std::uint32_t {
  Undefined                       = 0x00,
  Rollback_DiskSpaceInsufficient  = 0x00000001,  // 0x5300000001 , [OTA回滚]磁盘空间不足
  Rollback_FirmwareFlashFailed    = 0x00000002,  // 0x5300000002 , [OTA回滚]固件刷入失败
  Rollback_NoAvailableVersion     = 0x00000003,  // 0x5300000003 , [OTA回滚]没有可回滚的版本
  Rollback_Soc1CommunicationError = 0x00000004   // 0x5300000004 , [OTA回滚]SOC1通信异常
};

using DiagCode = DC;

}  // namespace aima::ota

namespace aima::module::details
{

template <>
struct ModuleTypeTrait<aima::ota::DC> {
  using ModuleType = aima::ota::ModuleManifest;
};

}  // namespace aima::module::details