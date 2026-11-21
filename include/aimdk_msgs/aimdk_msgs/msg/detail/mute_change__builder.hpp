// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/MuteChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mute_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_MuteChange_mute
{
public:
  Init_MuteChange_mute()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::msg::MuteChange mute(::aimdk_msgs::msg::MuteChange::_mute_type arg)
  {
    msg_.mute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::MuteChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::MuteChange>()
{
  return aimdk_msgs::msg::builder::Init_MuteChange_mute();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__BUILDER_HPP_
