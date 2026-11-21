// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ManipulationCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/manipulation_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationCommandArray_manipulations
{
public:
  explicit Init_ManipulationCommandArray_manipulations(::aimdk_msgs::msg::ManipulationCommandArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ManipulationCommandArray manipulations(::aimdk_msgs::msg::ManipulationCommandArray::_manipulations_type arg)
  {
    msg_.manipulations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommandArray msg_;
};

class Init_ManipulationCommandArray_header
{
public:
  Init_ManipulationCommandArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationCommandArray_manipulations header(::aimdk_msgs::msg::ManipulationCommandArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ManipulationCommandArray_manipulations(msg_);
  }

private:
  ::aimdk_msgs::msg::ManipulationCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ManipulationCommandArray>()
{
  return aimdk_msgs::msg::builder::Init_ManipulationCommandArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__BUILDER_HPP_
