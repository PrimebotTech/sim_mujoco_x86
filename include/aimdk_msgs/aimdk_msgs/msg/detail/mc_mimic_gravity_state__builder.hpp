// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McMimicGravityState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McMimicGravityState_deviation_deg
{
public:
  explicit Init_McMimicGravityState_deviation_deg(::aimdk_msgs::msg::McMimicGravityState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McMimicGravityState deviation_deg(::aimdk_msgs::msg::McMimicGravityState::_deviation_deg_type arg)
  {
    msg_.deviation_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McMimicGravityState msg_;
};

class Init_McMimicGravityState_current_gravity
{
public:
  explicit Init_McMimicGravityState_current_gravity(::aimdk_msgs::msg::McMimicGravityState & msg)
  : msg_(msg)
  {}
  Init_McMimicGravityState_deviation_deg current_gravity(::aimdk_msgs::msg::McMimicGravityState::_current_gravity_type arg)
  {
    msg_.current_gravity = std::move(arg);
    return Init_McMimicGravityState_deviation_deg(msg_);
  }

private:
  ::aimdk_msgs::msg::McMimicGravityState msg_;
};

class Init_McMimicGravityState_reference_gravity
{
public:
  explicit Init_McMimicGravityState_reference_gravity(::aimdk_msgs::msg::McMimicGravityState & msg)
  : msg_(msg)
  {}
  Init_McMimicGravityState_current_gravity reference_gravity(::aimdk_msgs::msg::McMimicGravityState::_reference_gravity_type arg)
  {
    msg_.reference_gravity = std::move(arg);
    return Init_McMimicGravityState_current_gravity(msg_);
  }

private:
  ::aimdk_msgs::msg::McMimicGravityState msg_;
};

class Init_McMimicGravityState_enabled
{
public:
  Init_McMimicGravityState_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McMimicGravityState_reference_gravity enabled(::aimdk_msgs::msg::McMimicGravityState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_McMimicGravityState_reference_gravity(msg_);
  }

private:
  ::aimdk_msgs::msg::McMimicGravityState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McMimicGravityState>()
{
  return aimdk_msgs::msg::builder::Init_McMimicGravityState_enabled();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__BUILDER_HPP_
