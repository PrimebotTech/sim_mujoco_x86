// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/CommonTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/common_task_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_CommonTaskRequest_task_id
{
public:
  explicit Init_CommonTaskRequest_task_id(::aimdk_msgs::msg::CommonTaskRequest & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::CommonTaskRequest task_id(::aimdk_msgs::msg::CommonTaskRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::CommonTaskRequest msg_;
};

class Init_CommonTaskRequest_header
{
public:
  Init_CommonTaskRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommonTaskRequest_task_id header(::aimdk_msgs::msg::CommonTaskRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommonTaskRequest_task_id(msg_);
  }

private:
  ::aimdk_msgs::msg::CommonTaskRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::CommonTaskRequest>()
{
  return aimdk_msgs::msg::builder::Init_CommonTaskRequest_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__COMMON_TASK_REQUEST__BUILDER_HPP_
