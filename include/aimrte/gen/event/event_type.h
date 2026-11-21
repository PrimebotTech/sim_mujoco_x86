#pragma once

#include <cstdint>
#include <string>

namespace aima::event::details
{

enum class EventType : uint8_t {
  Undefined = 0,
  Event     = 1,
  Counter   = 2,
  Gauge     = 3,
  Boolean   = 4
};

inline std::string ToString(EventType type)
{
  switch (type) {
    case EventType::Event:
      return "Event";
    case EventType::Counter:
      return "Counter";
    case EventType::Gauge:
      return "Gauge";
    case EventType::Boolean:
      return "Boolean";
    default:
      return "";
  }
}

inline EventType FromString(const std::string& str)
{
  if (str == "Event") {
    return EventType::Event;
  }
  if (str == "Counter") {
    return EventType::Counter;
  }
  if (str == "Gauge") {
    return EventType::Gauge;
  }
  if (str == "Boolean") {
    return EventType::Boolean;
  }
  return EventType::Undefined;
}

}  // namespace aima::event::details