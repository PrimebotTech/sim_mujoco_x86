// perception
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

namespace aima::event::perception
{

enum class EventCode : std::uint64_t {
  Undefined = 0x00,
  TestGauge = 0x6003000000000002  // 感知事件1
};

/********************************** 事件 TestGauge **********************************/
struct TestGauge : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<bool> TestGaugeV1;
    std::optional<double> TestGaugeV2;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 0.1;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 96;   // 模块ID
  static constexpr uint32_t event_id                    = 2;    // 事件ID
  static constexpr EventCode code                       = EventCode::TestGauge;
  static constexpr const char* name                     = "TestGauge";
  static constexpr const char* description              = "感知事件1";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit TestGauge(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.TestGaugeV1) {
      any.push_back(aima::event::EventBase::AnyAttribute{"TestGaugeV1", attribute.TestGaugeV1.value()});
    }
    if (attribute.TestGaugeV2) {
      any.push_back(aima::event::EventBase::AnyAttribute{"TestGaugeV2", attribute.TestGaugeV2.value()});
    }
    return any;
  }
};

}  // namespace aima::event::perception