// skills
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>
#include "./event_base.h"
#include "./event_type.h"

namespace aima::event::skills
{

enum class EventCode : std::uint64_t {
  Undefined   = 0x00,
  TestBoolean = 0x7004000000000004  // 技能事件1
};

/********************************** 事件 TestBoolean **********************************/
struct TestBoolean : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<bool> abc;
    std::optional<double> caf;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 0.1;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 112;  // 模块ID
  static constexpr uint32_t event_id                    = 4;    // 事件ID
  static constexpr EventCode code                       = EventCode::TestBoolean;
  static constexpr const char* name                     = "TestBoolean";
  static constexpr const char* description              = "技能事件1";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Boolean;

  // 构造函数可传入属性
  explicit TestBoolean(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.abc) {
      any.push_back(aima::event::EventBase::AnyAttribute{"abc", attribute.abc.value()});
    }
    if (attribute.caf) {
      any.push_back(aima::event::EventBase::AnyAttribute{"caf", attribute.caf.value()});
    }
    return any;
  }
};

}  // namespace aima::event::skills