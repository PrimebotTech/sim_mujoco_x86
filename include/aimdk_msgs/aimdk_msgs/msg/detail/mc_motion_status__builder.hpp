// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_motion_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McMotionStatus_gravity_state
{
public:
  explicit Init_McMotionStatus_gravity_state(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McMotionStatus gravity_state(::aimdk_msgs::msg::McMotionStatus::_gravity_state_type arg)
  {
    msg_.gravity_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_current_steps
{
public:
  explicit Init_McMotionStatus_current_steps(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  Init_McMotionStatus_gravity_state current_steps(::aimdk_msgs::msg::McMotionStatus::_current_steps_type arg)
  {
    msg_.current_steps = std::move(arg);
    return Init_McMotionStatus_gravity_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_intr_info
{
public:
  explicit Init_McMotionStatus_intr_info(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  Init_McMotionStatus_current_steps intr_info(::aimdk_msgs::msg::McMotionStatus::_intr_info_type arg)
  {
    msg_.intr_info = std::move(arg);
    return Init_McMotionStatus_current_steps(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_type
{
public:
  explicit Init_McMotionStatus_type(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  Init_McMotionStatus_intr_info type(::aimdk_msgs::msg::McMotionStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_McMotionStatus_intr_info(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_motion
{
public:
  explicit Init_McMotionStatus_motion(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  Init_McMotionStatus_type motion(::aimdk_msgs::msg::McMotionStatus::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return Init_McMotionStatus_type(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_control_area
{
public:
  explicit Init_McMotionStatus_control_area(::aimdk_msgs::msg::McMotionStatus & msg)
  : msg_(msg)
  {}
  Init_McMotionStatus_motion control_area(::aimdk_msgs::msg::McMotionStatus::_control_area_type arg)
  {
    msg_.control_area = std::move(arg);
    return Init_McMotionStatus_motion(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

class Init_McMotionStatus_player_state
{
public:
  Init_McMotionStatus_player_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McMotionStatus_control_area player_state(::aimdk_msgs::msg::McMotionStatus::_player_state_type arg)
  {
    msg_.player_state = std::move(arg);
    return Init_McMotionStatus_control_area(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McMotionStatus>()
{
  return aimdk_msgs::msg::builder::Init_McMotionStatus_player_state();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__BUILDER_HPP_
