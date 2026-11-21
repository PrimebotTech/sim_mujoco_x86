// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McCustomJointCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_custom_joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McCustomJointCommand_joints
{
public:
  explicit Init_McCustomJointCommand_joints(::aimdk_msgs::msg::McCustomJointCommand & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McCustomJointCommand joints(::aimdk_msgs::msg::McCustomJointCommand::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McCustomJointCommand msg_;
};

class Init_McCustomJointCommand_header
{
public:
  Init_McCustomJointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McCustomJointCommand_joints header(::aimdk_msgs::msg::McCustomJointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_McCustomJointCommand_joints(msg_);
  }

private:
  ::aimdk_msgs::msg::McCustomJointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McCustomJointCommand>()
{
  return aimdk_msgs::msg::builder::Init_McCustomJointCommand_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_CUSTOM_JOINT_COMMAND__BUILDER_HPP_
