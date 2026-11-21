// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McPosture.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_POSTURE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_POSTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_posture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McPosture_yaw
{
public:
  explicit Init_McPosture_yaw(::aimdk_msgs::msg::McPosture & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McPosture yaw(::aimdk_msgs::msg::McPosture::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McPosture msg_;
};

class Init_McPosture_pitch
{
public:
  explicit Init_McPosture_pitch(::aimdk_msgs::msg::McPosture & msg)
  : msg_(msg)
  {}
  Init_McPosture_yaw pitch(::aimdk_msgs::msg::McPosture::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_McPosture_yaw(msg_);
  }

private:
  ::aimdk_msgs::msg::McPosture msg_;
};

class Init_McPosture_roll
{
public:
  Init_McPosture_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McPosture_pitch roll(::aimdk_msgs::msg::McPosture::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_McPosture_pitch(msg_);
  }

private:
  ::aimdk_msgs::msg::McPosture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McPosture>()
{
  return aimdk_msgs::msg::builder::Init_McPosture_roll();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_POSTURE__BUILDER_HPP_
