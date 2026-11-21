// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/DiagnosticInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/diagnostic_info_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticInfoArray_diagnostics
{
public:
  explicit Init_DiagnosticInfoArray_diagnostics(::aimdk_msgs::msg::DiagnosticInfoArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::DiagnosticInfoArray diagnostics(::aimdk_msgs::msg::DiagnosticInfoArray::_diagnostics_type arg)
  {
    msg_.diagnostics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfoArray msg_;
};

class Init_DiagnosticInfoArray_header
{
public:
  Init_DiagnosticInfoArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticInfoArray_diagnostics header(::aimdk_msgs::msg::DiagnosticInfoArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticInfoArray_diagnostics(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfoArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::DiagnosticInfoArray>()
{
  return aimdk_msgs::msg::builder::Init_DiagnosticInfoArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__BUILDER_HPP_
