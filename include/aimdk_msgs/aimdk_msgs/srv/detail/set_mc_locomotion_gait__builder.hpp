// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetMcLocomotionGait.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_mc_locomotion_gait__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcLocomotionGait_Request_gait
{
public:
  explicit Init_SetMcLocomotionGait_Request_gait(::aimdk_msgs::srv::SetMcLocomotionGait_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetMcLocomotionGait_Request gait(::aimdk_msgs::srv::SetMcLocomotionGait_Request::_gait_type arg)
  {
    msg_.gait = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcLocomotionGait_Request msg_;
};

class Init_SetMcLocomotionGait_Request_header
{
public:
  Init_SetMcLocomotionGait_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMcLocomotionGait_Request_gait header(::aimdk_msgs::srv::SetMcLocomotionGait_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetMcLocomotionGait_Request_gait(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcLocomotionGait_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcLocomotionGait_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetMcLocomotionGait_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcLocomotionGait_Response_response
{
public:
  Init_SetMcLocomotionGait_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetMcLocomotionGait_Response response(::aimdk_msgs::srv::SetMcLocomotionGait_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcLocomotionGait_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcLocomotionGait_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetMcLocomotionGait_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_LOCOMOTION_GAIT__BUILDER_HPP_
