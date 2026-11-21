// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/FluxHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/flux_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_FluxHeartbeat_duration_sec
{
public:
  explicit Init_FluxHeartbeat_duration_sec(::aimdk_msgs::msg::FluxHeartbeat & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::FluxHeartbeat duration_sec(::aimdk_msgs::msg::FluxHeartbeat::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::FluxHeartbeat msg_;
};

class Init_FluxHeartbeat_source
{
public:
  explicit Init_FluxHeartbeat_source(::aimdk_msgs::msg::FluxHeartbeat & msg)
  : msg_(msg)
  {}
  Init_FluxHeartbeat_duration_sec source(::aimdk_msgs::msg::FluxHeartbeat::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_FluxHeartbeat_duration_sec(msg_);
  }

private:
  ::aimdk_msgs::msg::FluxHeartbeat msg_;
};

class Init_FluxHeartbeat_recording
{
public:
  Init_FluxHeartbeat_recording()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluxHeartbeat_source recording(::aimdk_msgs::msg::FluxHeartbeat::_recording_type arg)
  {
    msg_.recording = std::move(arg);
    return Init_FluxHeartbeat_source(msg_);
  }

private:
  ::aimdk_msgs::msg::FluxHeartbeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::FluxHeartbeat>()
{
  return aimdk_msgs::msg::builder::Init_FluxHeartbeat_recording();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__BUILDER_HPP_
