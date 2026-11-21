// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/DiagnosticInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/diagnostic_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticInfo_info
{
public:
  explicit Init_DiagnosticInfo_info(::aimdk_msgs::msg::DiagnosticInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::DiagnosticInfo info(::aimdk_msgs::msg::DiagnosticInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

class Init_DiagnosticInfo_diag_code
{
public:
  explicit Init_DiagnosticInfo_diag_code(::aimdk_msgs::msg::DiagnosticInfo & msg)
  : msg_(msg)
  {}
  Init_DiagnosticInfo_info diag_code(::aimdk_msgs::msg::DiagnosticInfo::_diag_code_type arg)
  {
    msg_.diag_code = std::move(arg);
    return Init_DiagnosticInfo_info(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

class Init_DiagnosticInfo_code
{
public:
  explicit Init_DiagnosticInfo_code(::aimdk_msgs::msg::DiagnosticInfo & msg)
  : msg_(msg)
  {}
  Init_DiagnosticInfo_diag_code code(::aimdk_msgs::msg::DiagnosticInfo::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_DiagnosticInfo_diag_code(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

class Init_DiagnosticInfo_module_id
{
public:
  explicit Init_DiagnosticInfo_module_id(::aimdk_msgs::msg::DiagnosticInfo & msg)
  : msg_(msg)
  {}
  Init_DiagnosticInfo_code module_id(::aimdk_msgs::msg::DiagnosticInfo::_module_id_type arg)
  {
    msg_.module_id = std::move(arg);
    return Init_DiagnosticInfo_code(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

class Init_DiagnosticInfo_type
{
public:
  explicit Init_DiagnosticInfo_type(::aimdk_msgs::msg::DiagnosticInfo & msg)
  : msg_(msg)
  {}
  Init_DiagnosticInfo_module_id type(::aimdk_msgs::msg::DiagnosticInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DiagnosticInfo_module_id(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

class Init_DiagnosticInfo_timestamp
{
public:
  Init_DiagnosticInfo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticInfo_type timestamp(::aimdk_msgs::msg::DiagnosticInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DiagnosticInfo_type(msg_);
  }

private:
  ::aimdk_msgs::msg::DiagnosticInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::DiagnosticInfo>()
{
  return aimdk_msgs::msg::builder::Init_DiagnosticInfo_timestamp();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__BUILDER_HPP_
