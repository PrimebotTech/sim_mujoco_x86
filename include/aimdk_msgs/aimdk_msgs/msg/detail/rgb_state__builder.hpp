// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/RGBState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__RGB_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__RGB_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/rgb_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_RGBState_period
{
public:
  explicit Init_RGBState_period(::aimdk_msgs::msg::RGBState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::RGBState period(::aimdk_msgs::msg::RGBState::_period_type arg)
  {
    msg_.period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

class Init_RGBState_b
{
public:
  explicit Init_RGBState_b(::aimdk_msgs::msg::RGBState & msg)
  : msg_(msg)
  {}
  Init_RGBState_period b(::aimdk_msgs::msg::RGBState::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_RGBState_period(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

class Init_RGBState_g
{
public:
  explicit Init_RGBState_g(::aimdk_msgs::msg::RGBState & msg)
  : msg_(msg)
  {}
  Init_RGBState_b g(::aimdk_msgs::msg::RGBState::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_RGBState_b(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

class Init_RGBState_r
{
public:
  explicit Init_RGBState_r(::aimdk_msgs::msg::RGBState & msg)
  : msg_(msg)
  {}
  Init_RGBState_g r(::aimdk_msgs::msg::RGBState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_RGBState_g(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

class Init_RGBState_display_mode
{
public:
  explicit Init_RGBState_display_mode(::aimdk_msgs::msg::RGBState & msg)
  : msg_(msg)
  {}
  Init_RGBState_r display_mode(::aimdk_msgs::msg::RGBState::_display_mode_type arg)
  {
    msg_.display_mode = std::move(arg);
    return Init_RGBState_r(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

class Init_RGBState_header
{
public:
  Init_RGBState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBState_display_mode header(::aimdk_msgs::msg::RGBState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RGBState_display_mode(msg_);
  }

private:
  ::aimdk_msgs::msg::RGBState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::RGBState>()
{
  return aimdk_msgs::msg::builder::Init_RGBState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__RGB_STATE__BUILDER_HPP_
