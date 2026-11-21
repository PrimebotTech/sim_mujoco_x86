// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McMotionIntrInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McMotionIntrInfo_breakpoint_steps
{
public:
  explicit Init_McMotionIntrInfo_breakpoint_steps(::aimdk_msgs::msg::McMotionIntrInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McMotionIntrInfo breakpoint_steps(::aimdk_msgs::msg::McMotionIntrInfo::_breakpoint_steps_type arg)
  {
    msg_.breakpoint_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionIntrInfo msg_;
};

class Init_McMotionIntrInfo_intr_type
{
public:
  Init_McMotionIntrInfo_intr_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McMotionIntrInfo_breakpoint_steps intr_type(::aimdk_msgs::msg::McMotionIntrInfo::_intr_type_type arg)
  {
    msg_.intr_type = std::move(arg);
    return Init_McMotionIntrInfo_breakpoint_steps(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionIntrInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McMotionIntrInfo>()
{
  return aimdk_msgs::msg::builder::Init_McMotionIntrInfo_intr_type();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__BUILDER_HPP_
