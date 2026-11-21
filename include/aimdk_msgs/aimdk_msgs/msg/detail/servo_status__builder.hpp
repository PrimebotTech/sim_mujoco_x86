// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoStatus_position
{
public:
  explicit Init_ServoStatus_position(::aimdk_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ServoStatus position(::aimdk_msgs::msg::ServoStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_header
{
public:
  Init_ServoStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoStatus_position header(::aimdk_msgs::msg::ServoStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoStatus_position(msg_);
  }

private:
  ::aimdk_msgs::msg::ServoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ServoStatus>()
{
  return aimdk_msgs::msg::builder::Init_ServoStatus_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
