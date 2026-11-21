// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from joint:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define JOINT__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "joint/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace joint
{

namespace msg
{

namespace builder
{

class Init_Command_damping
{
public:
  explicit Init_Command_damping(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  ::joint::msg::Command damping(::joint::msg::Command::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_stiffness
{
public:
  explicit Init_Command_stiffness(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_damping stiffness(::joint::msg::Command::_stiffness_type arg)
  {
    msg_.stiffness = std::move(arg);
    return Init_Command_damping(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_effort
{
public:
  explicit Init_Command_effort(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_stiffness effort(::joint::msg::Command::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_Command_stiffness(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_velocity
{
public:
  explicit Init_Command_velocity(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_effort velocity(::joint::msg::Command::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Command_effort(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_position
{
public:
  explicit Init_Command_position(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_velocity position(::joint::msg::Command::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Command_velocity(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_sequence
{
public:
  explicit Init_Command_sequence(::joint::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_position sequence(::joint::msg::Command::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_Command_position(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

class Init_Command_name
{
public:
  Init_Command_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_sequence name(::joint::msg::Command::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Command_sequence(msg_);
  }

private:
  ::joint::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::joint::msg::Command>()
{
  return joint::msg::builder::Init_Command_name();
}

}  // namespace joint

#endif  // JOINT__MSG__DETAIL__COMMAND__BUILDER_HPP_
