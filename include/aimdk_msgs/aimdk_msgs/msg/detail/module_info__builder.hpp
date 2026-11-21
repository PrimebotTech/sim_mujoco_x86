// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ModuleInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/module_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ModuleInfo_info
{
public:
  explicit Init_ModuleInfo_info(::aimdk_msgs::msg::ModuleInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ModuleInfo info(::aimdk_msgs::msg::ModuleInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleInfo msg_;
};

class Init_ModuleInfo_module_id
{
public:
  explicit Init_ModuleInfo_module_id(::aimdk_msgs::msg::ModuleInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleInfo_info module_id(::aimdk_msgs::msg::ModuleInfo::_module_id_type arg)
  {
    msg_.module_id = std::move(arg);
    return Init_ModuleInfo_info(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleInfo msg_;
};

class Init_ModuleInfo_header
{
public:
  Init_ModuleInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModuleInfo_module_id header(::aimdk_msgs::msg::ModuleInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModuleInfo_module_id(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ModuleInfo>()
{
  return aimdk_msgs::msg::builder::Init_ModuleInfo_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_INFO__BUILDER_HPP_
