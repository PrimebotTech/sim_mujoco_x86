// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_motor_enable
{
public:
  explicit Init_MotorStatus_motor_enable(::aimdk_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::MotorStatus motor_enable(::aimdk_msgs::msg::MotorStatus::_motor_enable_type arg)
  {
    msg_.motor_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_header
{
public:
  Init_MotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_motor_enable header(::aimdk_msgs::msg::MotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatus_motor_enable(msg_);
  }

private:
  ::aimdk_msgs::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::MotorStatus>()
{
  return aimdk_msgs::msg::builder::Init_MotorStatus_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
