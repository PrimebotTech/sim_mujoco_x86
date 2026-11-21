// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcJointState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_JOINT_STATE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcJointState_Request_request
{
public:
  Init_GetMcJointState_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcJointState_Request request(::aimdk_msgs::srv::GetMcJointState_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcJointState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcJointState_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcJointState_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcJointState_Response_joints
{
public:
  explicit Init_GetMcJointState_Response_joints(::aimdk_msgs::srv::GetMcJointState_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcJointState_Response joints(::aimdk_msgs::srv::GetMcJointState_Response::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcJointState_Response msg_;
};

class Init_GetMcJointState_Response_header
{
public:
  Init_GetMcJointState_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcJointState_Response_joints header(::aimdk_msgs::srv::GetMcJointState_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMcJointState_Response_joints(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcJointState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcJointState_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcJointState_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_JOINT_STATE__BUILDER_HPP_
