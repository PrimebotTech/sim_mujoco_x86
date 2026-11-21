// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetRobotRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_robot_runtime_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRobotRuntimeModel_Request_runtime_model
{
public:
  explicit Init_SetRobotRuntimeModel_Request_runtime_model(::aimdk_msgs::srv::SetRobotRuntimeModel_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetRobotRuntimeModel_Request runtime_model(::aimdk_msgs::srv::SetRobotRuntimeModel_Request::_runtime_model_type arg)
  {
    msg_.runtime_model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetRobotRuntimeModel_Request msg_;
};

class Init_SetRobotRuntimeModel_Request_header
{
public:
  Init_SetRobotRuntimeModel_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotRuntimeModel_Request_runtime_model header(::aimdk_msgs::srv::SetRobotRuntimeModel_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetRobotRuntimeModel_Request_runtime_model(msg_);
  }

private:
  ::aimdk_msgs::srv::SetRobotRuntimeModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetRobotRuntimeModel_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetRobotRuntimeModel_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRobotRuntimeModel_Response_response
{
public:
  Init_SetRobotRuntimeModel_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetRobotRuntimeModel_Response response(::aimdk_msgs::srv::SetRobotRuntimeModel_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetRobotRuntimeModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetRobotRuntimeModel_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetRobotRuntimeModel_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__BUILDER_HPP_
