// hds
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

namespace aima::event::hds
{

enum class EventCode : std::uint64_t {
  Undefined = 0x00,
  TestEvent = 0x5101000000000001  // HDS事件1
};

/********************************** 事件 TestEvent **********************************/
struct TestEvent : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<int> TestAttribute1;
    std::optional<std::string> TestAttribute2;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 0.1;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 81;   // 模块ID
  static constexpr uint32_t event_id                    = 1;    // 事件ID
  static constexpr EventCode code                       = EventCode::TestEvent;
  static constexpr const char* name                     = "TestEvent";
  static constexpr const char* description              = "HDS事件1";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Event;

  // 构造函数可传入属性
  explicit TestEvent(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.TestAttribute1) {
      any.push_back(aima::event::EventBase::AnyAttribute{"TestAttribute1", attribute.TestAttribute1.value()});
    }
    if (attribute.TestAttribute2) {
      any.push_back(aima::event::EventBase::AnyAttribute{"TestAttribute2", attribute.TestAttribute2.value()});
    }
    return any;
  }
};

}  // namespace aima::event::hds