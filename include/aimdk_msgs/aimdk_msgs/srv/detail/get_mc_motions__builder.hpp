// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcMotions.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_motions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcMotions_Request_form_state
{
public:
  explicit Init_GetMcMotions_Request_form_state(::aimdk_msgs::srv::GetMcMotions_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcMotions_Request form_state(::aimdk_msgs::srv::GetMcMotions_Request::_form_state_type arg)
  {
    msg_.form_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcMotions_Request msg_;
};

class Init_GetMcMotions_Request_header
{
public:
  Init_GetMcMotions_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcMotions_Request_form_state header(::aimdk_msgs::srv::GetMcMotions_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMcMotions_Request_form_state(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcMotions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcMotions_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcMotions_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcMotions_Response_motion
{
public:
  explicit Init_GetMcMotions_Response_motion(::aimdk_msgs::srv::GetMcMotions_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcMotions_Response motion(::aimdk_msgs::srv::GetMcMotions_Response::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcMotions_Response msg_;
};

class Init_GetMcMotions_Response_response
{
public:
  Init_GetMcMotions_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcMotions_Response_motion response(::aimdk_msgs::srv::GetMcMotions_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetMcMotions_Response_motion(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcMotions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcMotions_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcMotions_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_MOTIONS__BUILDER_HPP_
