// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from joint:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
#define JOINT__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "joint/msg/detail/joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace joint
{

namespace msg
{

namespace builder
{

class Init_JointCommand_joints
{
public:
  explicit Init_JointCommand_joints(::joint::msg::JointCommand & msg)
  : msg_(msg)
  {}
  ::joint::msg::JointCommand joints(::joint::msg::JointCommand::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::joint::msg::JointCommand msg_;
};

class Init_JointCommand_header
{
public:
  Init_JointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCommand_joints header(::joint::msg::JointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCommand_joints(msg_);
  }

private:
  ::joint::msg::JointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::joint::msg::JointCommand>()
{
  return joint::msg::builder::Init_JointCommand_header();
}

}  // namespace joint

#endif  // JOINT__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
