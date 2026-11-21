// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/TouchState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/touch_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_TouchState_event_type
{
public:
  explicit Init_TouchState_event_type(::aimdk_msgs::msg::TouchState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::TouchState event_type(::aimdk_msgs::msg::TouchState::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::TouchState msg_;
};

class Init_TouchState_sensor_id
{
public:
  explicit Init_TouchState_sensor_id(::aimdk_msgs::msg::TouchState & msg)
  : msg_(msg)
  {}
  Init_TouchState_event_type sensor_id(::aimdk_msgs::msg::TouchState::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_TouchState_event_type(msg_);
  }

private:
  ::aimdk_msgs::msg::TouchState msg_;
};

class Init_TouchState_header
{
public:
  Init_TouchState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TouchState_sensor_id header(::aimdk_msgs::msg::TouchState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TouchState_sensor_id(msg_);
  }

private:
  ::aimdk_msgs::msg::TouchState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::TouchState>()
{
  return aimdk_msgs::msg::builder::Init_TouchState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__BUILDER_HPP_
