// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ThreadResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/thread_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ThreadResourceInfo_bounding_cpus
{
public:
  explicit Init_ThreadResourceInfo_bounding_cpus(::aimdk_msgs::msg::ThreadResourceInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ThreadResourceInfo bounding_cpus(::aimdk_msgs::msg::ThreadResourceInfo::_bounding_cpus_type arg)
  {
    msg_.bounding_cpus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

class Init_ThreadResourceInfo_cpu_sched_priority
{
public:
  explicit Init_ThreadResourceInfo_cpu_sched_priority(::aimdk_msgs::msg::ThreadResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ThreadResourceInfo_bounding_cpus cpu_sched_priority(::aimdk_msgs::msg::ThreadResourceInfo::_cpu_sched_priority_type arg)
  {
    msg_.cpu_sched_priority = std::move(arg);
    return Init_ThreadResourceInfo_bounding_cpus(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

class Init_ThreadResourceInfo_cpu_sched_policy
{
public:
  explicit Init_ThreadResourceInfo_cpu_sched_policy(::aimdk_msgs::msg::ThreadResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ThreadResourceInfo_cpu_sched_priority cpu_sched_policy(::aimdk_msgs::msg::ThreadResourceInfo::_cpu_sched_policy_type arg)
  {
    msg_.cpu_sched_policy = std::move(arg);
    return Init_ThreadResourceInfo_cpu_sched_priority(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

class Init_ThreadResourceInfo_cpu_usage_ratio
{
public:
  explicit Init_ThreadResourceInfo_cpu_usage_ratio(::aimdk_msgs::msg::ThreadResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ThreadResourceInfo_cpu_sched_policy cpu_usage_ratio(::aimdk_msgs::msg::ThreadResourceInfo::_cpu_usage_ratio_type arg)
  {
    msg_.cpu_usage_ratio = std::move(arg);
    return Init_ThreadResourceInfo_cpu_sched_policy(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

class Init_ThreadResourceInfo_thread_name
{
public:
  explicit Init_ThreadResourceInfo_thread_name(::aimdk_msgs::msg::ThreadResourceInfo & msg)
  : msg_(msg)
  {}
  Init_ThreadResourceInfo_cpu_usage_ratio thread_name(::aimdk_msgs::msg::ThreadResourceInfo::_thread_name_type arg)
  {
    msg_.thread_name = std::move(arg);
    return Init_ThreadResourceInfo_cpu_usage_ratio(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

class Init_ThreadResourceInfo_thread_id
{
public:
  Init_ThreadResourceInfo_thread_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThreadResourceInfo_thread_name thread_id(::aimdk_msgs::msg::ThreadResourceInfo::_thread_id_type arg)
  {
    msg_.thread_id = std::move(arg);
    return Init_ThreadResourceInfo_thread_name(msg_);
  }

private:
  ::aimdk_msgs::msg::ThreadResourceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ThreadResourceInfo>()
{
  return aimdk_msgs::msg::builder::Init_ThreadResourceInfo_thread_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__BUILDER_HPP_
