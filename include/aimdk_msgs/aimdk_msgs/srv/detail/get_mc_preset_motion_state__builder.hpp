// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcPresetMotionState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_PRESET_MOTION_STATE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_PRESET_MOTION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_preset_motion_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcPresetMotionState_Request_request
{
public:
  Init_GetMcPresetMotionState_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcPresetMotionState_Request request(::aimdk_msgs::srv::GetMcPresetMotionState_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcPresetMotionState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcPresetMotionState_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcPresetMotionState_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcPresetMotionState_Response_response
{
public:
  Init_GetMcPresetMotionState_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcPresetMotionState_Response response(::aimdk_msgs::srv::GetMcPresetMotionState_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcPresetMotionState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcPresetMotionState_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcPresetMotionState_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_PRESET_MOTION_STATE__BUILDER_HPP_
