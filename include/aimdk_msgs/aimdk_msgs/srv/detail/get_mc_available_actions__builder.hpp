// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcAvailableActions.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_AVAILABLE_ACTIONS__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_AVAILABLE_ACTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_available_actions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcAvailableActions_Request_request
{
public:
  Init_GetMcAvailableActions_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcAvailableActions_Request request(::aimdk_msgs::srv::GetMcAvailableActions_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcAvailableActions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcAvailableActions_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcAvailableActions_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcAvailableActions_Response_commands
{
public:
  explicit Init_GetMcAvailableActions_Response_commands(::aimdk_msgs::srv::GetMcAvailableActions_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcAvailableActions_Response commands(::aimdk_msgs::srv::GetMcAvailableActions_Response::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcAvailableActions_Response msg_;
};

class Init_GetMcAvailableActions_Response_actions
{
public:
  explicit Init_GetMcAvailableActions_Response_actions(::aimdk_msgs::srv::GetMcAvailableActions_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcAvailableActions_Response_commands actions(::aimdk_msgs::srv::GetMcAvailableActions_Response::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return Init_GetMcAvailableActions_Response_commands(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcAvailableActions_Response msg_;
};

class Init_GetMcAvailableActions_Response_header
{
public:
  Init_GetMcAvailableActions_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcAvailableActions_Response_actions header(::aimdk_msgs::srv::GetMcAvailableActions_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMcAvailableActions_Response_actions(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcAvailableActions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcAvailableActions_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcAvailableActions_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_AVAILABLE_ACTIONS__BUILDER_HPP_
