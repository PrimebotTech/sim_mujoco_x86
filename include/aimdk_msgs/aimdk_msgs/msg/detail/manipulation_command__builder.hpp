// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ManipulationCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/manipulation_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationCommand_effort
{
public:
  explicit Init_ManipulationCommand_effort(::aimdk_msgs::msg::ManipulationCommand & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ManipulationCommand effort(::aimdk_msgs::msg::ManipulationCommand::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommand msg_;
};

class Init_ManipulationCommand_velocity
{
public:
  explicit Init_ManipulationCommand_velocity(::aimdk_msgs::msg::ManipulationCommand & msg)
  : msg_(msg)
  {}
  Init_ManipulationCommand_effort velocity(::aimdk_msgs::msg::ManipulationCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ManipulationCommand_effort(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommand msg_;
};

class Init_ManipulationCommand_position
{
public:
  explicit Init_ManipulationCommand_position(::aimdk_msgs::msg::ManipulationCommand & msg)
  : msg_(msg)
  {}
  Init_ManipulationCommand_velocity position(::aimdk_msgs::msg::ManipulationCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ManipulationCommand_velocity(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommand msg_;
};

class Init_ManipulationCommand_name
{
public:
  Init_ManipulationCommand_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationCommand_position name(::aimdk_msgs::msg::ManipulationCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ManipulationCommand_position(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ManipulationCommand>()
{
  return aimdk_msgs::msg::builder::Init_ManipulationCommand_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND__BUILDER_HPP_
