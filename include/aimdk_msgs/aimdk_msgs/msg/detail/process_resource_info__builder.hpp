// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/process_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessResourceInfo_threads
{
public:
  explicit Init_ProcessResourceInfo_threads(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ProcessResourceInfo threads(::aimdk_msgs::msg::ProcessResourceInfo::_threads_type arg)
  {
    msg_.threads = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_thread_count
{
public:
  explicit Init_ProcessResourceInfo_thread_count(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessResourceInfo_threads thread_count(::aimdk_msgs::msg::ProcessResourceInfo::_thread_count_type arg)
  {
    msg_.thread_count = std::move(arg);
    return Init_ProcessResourceInfo_threads(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_process_cpu_usage_ratio
{
public:
  explicit Init_ProcessResourceInfo_process_cpu_usage_ratio(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessResourceInfo_thread_count process_cpu_usage_ratio(::aimdk_msgs::msg::ProcessResourceInfo::_process_cpu_usage_ratio_type arg)
  {
    msg_.process_cpu_usage_ratio = std::move(arg);
    return Init_ProcessResourceInfo_thread_count(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_process_mem_usage_ratio
{
public:
  explicit Init_ProcessResourceInfo_process_mem_usage_ratio(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessResourceInfo_process_cpu_usage_ratio process_mem_usage_ratio(::aimdk_msgs::msg::ProcessResourceInfo::_process_mem_usage_ratio_type arg)
  {
    msg_.process_mem_usage_ratio = std::move(arg);
    return Init_ProcessResourceInfo_process_cpu_usage_ratio(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_process_mem_usage
{
public:
  explicit Init_ProcessResourceInfo_process_mem_usage(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessResourceInfo_process_mem_usage_ratio process_mem_usage(::aimdk_msgs::msg::ProcessResourceInfo::_process_mem_usage_type arg)
  {
    msg_.process_mem_usage = std::move(arg);
    return Init_ProcessResourceInfo_process_mem_usage_ratio(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_process_name
{
public:
  explicit Init_ProcessResourceInfo_process_name(::aimdk_msgs::msg::ProcessResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessResourceInfo_process_mem_usage process_name(::aimdk_msgs::msg::ProcessResourceInfo::_process_name_type arg)
  {
    msg_.process_name = std::move(arg);
    return Init_ProcessResourceInfo_process_mem_usage(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

class Init_ProcessResourceInfo_process_id
{
public:
  Init_ProcessResourceInfo_process_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessResourceInfo_process_name process_id(::aimdk_msgs::msg::ProcessResourceInfo::_process_id_type arg)
  {
    msg_.process_id = std::move(arg);
    return Init_ProcessResourceInfo_process_name(msg_);
  }

private:
  ::aimdk_msgs::msg::ProcessResourceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ProcessResourceInfo>()
{
  return aimdk_msgs::msg::builder::Init_ProcessResourceInfo_process_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__BUILDER_HPP_
