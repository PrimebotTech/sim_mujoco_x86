#pragma once

#include <chrono>
#include <cstdint>
#include <string>
#include <variant>
#include <vector>

#include "./event_type.h"

namespace aima::event
{
enum class Status {
  Default,  // 默认
  Start,    // 开始
  End,      // 结束
};

struct EventBase {
  struct Common {
    double detect_frequency;  // 检测频率 HZ
    double report_frequency;  // 上报频率 HZ
    uint8_t module_id;        // 模块ID
    uint32_t event_id;        // 事件ID
    uint64_t code;            // 事件ID
    std::string name;         // 事件名称
    std::string description;  // 事件描述
    aima::event::details::EventType type;
    Status status      = Status::Default;
    uint64_t timestamp = 0;
  };

  struct AnyAttribute {
    std::string key;
    std::variant<double, int, std::string, bool> value;

    template <typename T>
    AnyAttribute(std::string k, T v) : key(k), value(v)
    {
    }
  };

  Status status      = Status::Default;
  uint64_t timestamp = 0;

  explicit EventBase() : status(Status::Default) {}

  explicit EventBase(Status s) : status(s)
  {
    timestamp = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
  }

  virtual ~EventBase() {}

  virtual Common GetCommon() const                          = 0;
  virtual std::vector<AnyAttribute> GetAnyAttribute() const = 0;  // 任意属性
};

}  // namespace aima::event