// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/AlertCodeArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/alert_code_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertCodeArray_list
{
public:
  explicit Init_AlertCodeArray_list(::aimdk_msgs::msg::AlertCodeArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::AlertCodeArray list(::aimdk_msgs::msg::AlertCodeArray::_list_type arg)
  {
    msg_.list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCodeArray msg_;
};

class Init_AlertCodeArray_header
{
public:
  Init_AlertCodeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertCodeArray_list header(::aimdk_msgs::msg::AlertCodeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AlertCodeArray_list(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCodeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::AlertCodeArray>()
{
  return aimdk_msgs::msg::builder::Init_AlertCodeArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE_ARRAY__BUILDER_HPP_
