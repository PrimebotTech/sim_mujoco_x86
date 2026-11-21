// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_common_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McCommonState_posture_state
{
public:
  explicit Init_McCommonState_posture_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McCommonState posture_state(::aimdk_msgs::msg::McCommonState::_posture_state_type arg)
  {
    msg_.posture_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_held_state
{
public:
  explicit Init_McCommonState_held_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_posture_state held_state(::aimdk_msgs::msg::McCommonState::_held_state_type arg)
  {
    msg_.held_state = std::move(arg);
    return Init_McCommonState_posture_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_task_info
{
public:
  explicit Init_McCommonState_task_info(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_held_state task_info(::aimdk_msgs::msg::McCommonState::_task_info_type arg)
  {
    msg_.task_info = std::move(arg);
    return Init_McCommonState_held_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_lift_state
{
public:
  explicit Init_McCommonState_lift_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_task_info lift_state(::aimdk_msgs::msg::McCommonState::_lift_state_type arg)
  {
    msg_.lift_state = std::move(arg);
    return Init_McCommonState_task_info(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_is_fallen
{
public:
  explicit Init_McCommonState_is_fallen(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_lift_state is_fallen(::aimdk_msgs::msg::McCommonState::_is_fallen_type arg)
  {
    msg_.is_fallen = std::move(arg);
    return Init_McCommonState_lift_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_is_moving
{
public:
  explicit Init_McCommonState_is_moving(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_is_fallen is_moving(::aimdk_msgs::msg::McCommonState::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_McCommonState_is_fallen(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_posture
{
public:
  explicit Init_McCommonState_posture(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_is_moving posture(::aimdk_msgs::msg::McCommonState::_posture_type arg)
  {
    msg_.posture = std::move(arg);
    return Init_McCommonState_is_moving(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_form_state
{
public:
  explicit Init_McCommonState_form_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_posture form_state(::aimdk_msgs::msg::McCommonState::_form_state_type arg)
  {
    msg_.form_state = std::move(arg);
    return Init_McCommonState_posture(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_fsm_state
{
public:
  explicit Init_McCommonState_fsm_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_form_state fsm_state(::aimdk_msgs::msg::McCommonState::_fsm_state_type arg)
  {
    msg_.fsm_state = std::move(arg);
    return Init_McCommonState_form_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_motion_status
{
public:
  explicit Init_McCommonState_motion_status(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_fsm_state motion_status(::aimdk_msgs::msg::McCommonState::_motion_status_type arg)
  {
    msg_.motion_status = std::move(arg);
    return Init_McCommonState_fsm_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_runtime_model
{
public:
  explicit Init_McCommonState_runtime_model(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_motion_status runtime_model(::aimdk_msgs::msg::McCommonState::_runtime_model_type arg)
  {
    msg_.runtime_model = std::move(arg);
    return Init_McCommonState_motion_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_action_info
{
public:
  explicit Init_McCommonState_action_info(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_runtime_model action_info(::aimdk_msgs::msg::McCommonState::_action_info_type arg)
  {
    msg_.action_info = std::move(arg);
    return Init_McCommonState_runtime_model(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_input_source
{
public:
  explicit Init_McCommonState_input_source(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_action_info input_source(::aimdk_msgs::msg::McCommonState::_input_source_type arg)
  {
    msg_.input_source = std::move(arg);
    return Init_McCommonState_action_info(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_header
{
public:
  Init_McCommonState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McCommonState_input_source header(::aimdk_msgs::msg::McCommonState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_McCommonState_input_source(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McCommonState>()
{
  return aimdk_msgs::msg::builder::Init_McCommonState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_
