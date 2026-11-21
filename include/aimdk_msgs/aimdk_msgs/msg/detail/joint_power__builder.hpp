// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JointPower.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/joint_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPower_motor_power_state
{
public:
  explicit Init_JointPower_motor_power_state(::aimdk_msgs::msg::JointPower & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JointPower motor_power_state(::aimdk_msgs::msg::JointPower::_motor_power_state_type arg)
  {
    msg_.motor_power_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JointPower msg_;
};

class Init_JointPower_header
{
public:
  Init_JointPower_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPower_motor_power_state header(::aimdk_msgs::msg::JointPower::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointPower_motor_power_state(msg_);
  }

private:
  ::aimdk_msgs::msg::JointPower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JointPower>()
{
  return aimdk_msgs::msg::builder::Init_JointPower_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_POWER__BUILDER_HPP_
