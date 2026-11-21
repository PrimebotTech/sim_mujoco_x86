// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McHandHeldState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_hand_held_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McHandHeldState_hand_held
{
public:
  explicit Init_McHandHeldState_hand_held(::aimdk_msgs::msg::McHandHeldState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McHandHeldState hand_held(::aimdk_msgs::msg::McHandHeldState::_hand_held_type arg)
  {
    msg_.hand_held = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McHandHeldState msg_;
};

class Init_McHandHeldState_is_held
{
public:
  Init_McHandHeldState_is_held()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McHandHeldState_hand_held is_held(::aimdk_msgs::msg::McHandHeldState::_is_held_type arg)
  {
    msg_.is_held = std::move(arg);
    return Init_McHandHeldState_hand_held(msg_);
  }

private:
  ::aimdk_msgs::msg::McHandHeldState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McHandHeldState>()
{
  return aimdk_msgs::msg::builder::Init_McHandHeldState_is_held();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_HAND_HELD_STATE__BUILDER_HPP_
