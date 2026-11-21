// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/EventProbeInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/event_probe_info_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_EventProbeInfoArray_list
{
public:
  explicit Init_EventProbeInfoArray_list(::aimdk_msgs::msg::EventProbeInfoArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::EventProbeInfoArray list(::aimdk_msgs::msg::EventProbeInfoArray::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfoArray msg_;
};

class Init_EventProbeInfoArray_header
{
public:
  Init_EventProbeInfoArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventProbeInfoArray_list header(::aimdk_msgs::msg::EventProbeInfoArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EventProbeInfoArray_list(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfoArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::EventProbeInfoArray>()
{
  return aimdk_msgs::msg::builder::Init_EventProbeInfoArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO_ARRAY__BUILDER_HPP_
