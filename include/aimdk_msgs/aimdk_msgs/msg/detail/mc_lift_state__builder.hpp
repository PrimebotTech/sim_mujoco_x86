// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McLiftState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_lift_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McLiftState_threshold
{
public:
  explicit Init_McLiftState_threshold(::aimdk_msgs::msg::McLiftState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McLiftState threshold(::aimdk_msgs::msg::McLiftState::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McLiftState msg_;
};

class Init_McLiftState_probability
{
public:
  explicit Init_McLiftState_probability(::aimdk_msgs::msg::McLiftState & msg)
  : msg_(msg)
  {}
  Init_McLiftState_threshold probability(::aimdk_msgs::msg::McLiftState::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_McLiftState_threshold(msg_);
  }

private:
  ::aimdk_msgs::msg::McLiftState msg_;
};

class Init_McLiftState_is_lifted
{
public:
  Init_McLiftState_is_lifted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McLiftState_probability is_lifted(::aimdk_msgs::msg::McLiftState::_is_lifted_type arg)
  {
    msg_.is_lifted = std::move(arg);
    return Init_McLiftState_probability(msg_);
  }

private:
  ::aimdk_msgs::msg::McLiftState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McLiftState>()
{
  return aimdk_msgs::msg::builder::Init_McLiftState_is_lifted();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LIFT_STATE__BUILDER_HPP_
