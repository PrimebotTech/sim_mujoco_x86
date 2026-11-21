// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcLocomotionGait.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_GAIT__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_GAIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_locomotion_gait__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcLocomotionGait_Request_request
{
public:
  Init_GetMcLocomotionGait_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcLocomotionGait_Request request(::aimdk_msgs::srv::GetMcLocomotionGait_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionGait_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcLocomotionGait_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcLocomotionGait_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcLocomotionGait_Response_gait
{
public:
  explicit Init_GetMcLocomotionGait_Response_gait(::aimdk_msgs::srv::GetMcLocomotionGait_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcLocomotionGait_Response gait(::aimdk_msgs::srv::GetMcLocomotionGait_Response::_gait_type arg)
  {
    msg_.gait = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionGait_Response msg_;
};

class Init_GetMcLocomotionGait_Response_header
{
public:
  Init_GetMcLocomotionGait_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcLocomotionGait_Response_gait header(::aimdk_msgs::srv::GetMcLocomotionGait_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMcLocomotionGait_Response_gait(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionGait_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcLocomotionGait_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcLocomotionGait_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_GAIT__BUILDER_HPP_
