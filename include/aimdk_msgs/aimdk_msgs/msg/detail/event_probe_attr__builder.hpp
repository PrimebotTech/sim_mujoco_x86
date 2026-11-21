// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/EventProbeAttr.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/event_probe_attr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_EventProbeAttr_value_bool
{
public:
  explicit Init_EventProbeAttr_value_bool(::aimdk_msgs::msg::EventProbeAttr & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::EventProbeAttr value_bool(::aimdk_msgs::msg::EventProbeAttr::_value_bool_type arg)
  {
    msg_.value_bool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

class Init_EventProbeAttr_value_string
{
public:
  explicit Init_EventProbeAttr_value_string(::aimdk_msgs::msg::EventProbeAttr & msg)
  : msg_(msg)
  {}
  Init_EventProbeAttr_value_bool value_string(::aimdk_msgs::msg::EventProbeAttr::_value_string_type arg)
  {
    msg_.value_string = std::move(arg);
    return Init_EventProbeAttr_value_bool(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

class Init_EventProbeAttr_value_double
{
public:
  explicit Init_EventProbeAttr_value_double(::aimdk_msgs::msg::EventProbeAttr & msg)
  : msg_(msg)
  {}
  Init_EventProbeAttr_value_string value_double(::aimdk_msgs::msg::EventProbeAttr::_value_double_type arg)
  {
    msg_.value_double = std::move(arg);
    return Init_EventProbeAttr_value_string(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

class Init_EventProbeAttr_value_int
{
public:
  explicit Init_EventProbeAttr_value_int(::aimdk_msgs::msg::EventProbeAttr & msg)
  : msg_(msg)
  {}
  Init_EventProbeAttr_value_double value_int(::aimdk_msgs::msg::EventProbeAttr::_value_int_type arg)
  {
    msg_.value_int = std::move(arg);
    return Init_EventProbeAttr_value_double(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

class Init_EventProbeAttr_type
{
public:
  explicit Init_EventProbeAttr_type(::aimdk_msgs::msg::EventProbeAttr & msg)
  : msg_(msg)
  {}
  Init_EventProbeAttr_value_int type(::aimdk_msgs::msg::EventProbeAttr::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EventProbeAttr_value_int(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

class Init_EventProbeAttr_key
{
public:
  Init_EventProbeAttr_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventProbeAttr_type key(::aimdk_msgs::msg::EventProbeAttr::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_EventProbeAttr_type(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeAttr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::EventProbeAttr>()
{
  return aimdk_msgs::msg::builder::Init_EventProbeAttr_key();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__BUILDER_HPP_
