// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/NeckLightState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__NECK_LIGHT_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__NECK_LIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/neck_light_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_NeckLightState_brightness
{
public:
  explicit Init_NeckLightState_brightness(::aimdk_msgs::msg::NeckLightState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::NeckLightState brightness(::aimdk_msgs::msg::NeckLightState::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::NeckLightState msg_;
};

class Init_NeckLightState_enable
{
public:
  explicit Init_NeckLightState_enable(::aimdk_msgs::msg::NeckLightState & msg)
  : msg_(msg)
  {}
  Init_NeckLightState_brightness enable(::aimdk_msgs::msg::NeckLightState::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_NeckLightState_brightness(msg_);
  }

private:
  ::aimdk_msgs::msg::NeckLightState msg_;
};

class Init_NeckLightState_header
{
public:
  Init_NeckLightState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeckLightState_enable header(::aimdk_msgs::msg::NeckLightState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NeckLightState_enable(msg_);
  }

private:
  ::aimdk_msgs::msg::NeckLightState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::NeckLightState>()
{
  return aimdk_msgs::msg::builder::Init_NeckLightState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__NECK_LIGHT_STATE__BUILDER_HPP_
