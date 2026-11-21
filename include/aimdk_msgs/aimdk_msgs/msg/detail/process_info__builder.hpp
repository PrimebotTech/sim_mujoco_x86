// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/process_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessInfo_modules
{
public:
  explicit Init_ProcessInfo_modules(::aimdk_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ProcessInfo modules(::aimdk_msgs::msg::ProcessInfo::_modules_type arg)
  {
    msg_.modules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_resource
{
public:
  explicit Init_ProcessInfo_resource(::aimdk_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessInfo_modules resource(::aimdk_msgs::msg::ProcessInfo::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return Init_ProcessInfo_modules(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_app_name
{
public:
  explicit Init_ProcessInfo_app_name(::aimdk_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessInfo_resource app_name(::aimdk_msgs::msg::ProcessInfo::_app_name_type arg)
  {
    msg_.app_name = std::move(arg);
    return Init_ProcessInfo_resource(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_header
{
public:
  Init_ProcessInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessInfo_app_name header(::aimdk_msgs::msg::ProcessInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessInfo_app_name(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ProcessInfo>()
{
  return aimdk_msgs::msg::builder::Init_ProcessInfo_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_
