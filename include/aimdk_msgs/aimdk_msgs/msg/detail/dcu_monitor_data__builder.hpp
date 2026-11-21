// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/DcuMonitorData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/dcu_monitor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_DcuMonitorData_monitor_data
{
public:
  explicit Init_DcuMonitorData_monitor_data(::aimdk_msgs::msg::DcuMonitorData & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::DcuMonitorData monitor_data(::aimdk_msgs::msg::DcuMonitorData::_monitor_data_type arg)
  {
    msg_.monitor_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::DcuMonitorData msg_;
};

class Init_DcuMonitorData_name
{
public:
  Init_DcuMonitorData_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DcuMonitorData_monitor_data name(::aimdk_msgs::msg::DcuMonitorData::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DcuMonitorData_monitor_data(msg_);
  }

private:
  ::aimdk_msgs::msg::DcuMonitorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::DcuMonitorData>()
{
  return aimdk_msgs::msg::builder::Init_DcuMonitorData_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__DCU_MONITOR_DATA__BUILDER_HPP_
