// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McSquatStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_squat_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McSquatStatus_squat_limit
{
public:
  explicit Init_McSquatStatus_squat_limit(::aimdk_msgs::msg::McSquatStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McSquatStatus squat_limit(::aimdk_msgs::msg::McSquatStatus::_squat_limit_type arg)
  {
    msg_.squat_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McSquatStatus msg_;
};

class Init_McSquatStatus_offset
{
public:
  explicit Init_McSquatStatus_offset(::aimdk_msgs::msg::McSquatStatus & msg)
  : msg_(msg)
  {}
  Init_McSquatStatus_squat_limit offset(::aimdk_msgs::msg::McSquatStatus::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_McSquatStatus_squat_limit(msg_);
  }

private:
  ::aimdk_msgs::msg::McSquatStatus msg_;
};

class Init_McSquatStatus_enable
{
public:
  Init_McSquatStatus_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McSquatStatus_offset enable(::aimdk_msgs::msg::McSquatStatus::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_McSquatStatus_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McSquatStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McSquatStatus>()
{
  return aimdk_msgs::msg::builder::Init_McSquatStatus_enable();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__BUILDER_HPP_
