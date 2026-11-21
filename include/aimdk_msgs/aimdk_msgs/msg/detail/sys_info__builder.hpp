// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/SysInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SYS_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SYS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/sys_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_SysInfo_soc1_cpu_temperature
{
public:
  explicit Init_SysInfo_soc1_cpu_temperature(::aimdk_msgs::msg::SysInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::SysInfo soc1_cpu_temperature(::aimdk_msgs::msg::SysInfo::_soc1_cpu_temperature_type arg)
  {
    msg_.soc1_cpu_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::SysInfo msg_;
};

class Init_SysInfo_header
{
public:
  Init_SysInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SysInfo_soc1_cpu_temperature header(::aimdk_msgs::msg::SysInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SysInfo_soc1_cpu_temperature(msg_);
  }

private:
  ::aimdk_msgs::msg::SysInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::SysInfo>()
{
  return aimdk_msgs::msg::builder::Init_SysInfo_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SYS_INFO__BUILDER_HPP_
