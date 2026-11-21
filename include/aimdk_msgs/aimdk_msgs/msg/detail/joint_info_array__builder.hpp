// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JointInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/joint_info_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointInfoArray_joints
{
public:
  explicit Init_JointInfoArray_joints(::aimdk_msgs::msg::JointInfoArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JointInfoArray joints(::aimdk_msgs::msg::JointInfoArray::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfoArray msg_;
};

class Init_JointInfoArray_header
{
public:
  Init_JointInfoArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointInfoArray_joints header(::aimdk_msgs::msg::JointInfoArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointInfoArray_joints(msg_);
  }

private:
  ::aimdk_msgs::msg::JointInfoArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JointInfoArray>()
{
  return aimdk_msgs::msg::builder::Init_JointInfoArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO_ARRAY__BUILDER_HPP_
