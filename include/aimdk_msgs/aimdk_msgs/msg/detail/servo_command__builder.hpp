// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/servo_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoCommand_position
{
public:
  explicit Init_ServoCommand_position(::aimdk_msgs::msg::ServoCommand & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ServoCommand position(::aimdk_msgs::msg::ServoCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ServoCommand msg_;
};

class Init_ServoCommand_header
{
public:
  Init_ServoCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoCommand_position header(::aimdk_msgs::msg::ServoCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ServoCommand_position(msg_);
  }

private:
  ::aimdk_msgs::msg::ServoCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ServoCommand>()
{
  return aimdk_msgs::msg::builder::Init_ServoCommand_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
