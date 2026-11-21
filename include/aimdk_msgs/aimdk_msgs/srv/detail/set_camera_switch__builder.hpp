// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetCameraSwitch.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_camera_switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCameraSwitch_Request_camera_enabled
{
public:
  explicit Init_SetCameraSwitch_Request_camera_enabled(::aimdk_msgs::srv::SetCameraSwitch_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetCameraSwitch_Request camera_enabled(::aimdk_msgs::srv::SetCameraSwitch_Request::_camera_enabled_type arg)
  {
    msg_.camera_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetCameraSwitch_Request msg_;
};

class Init_SetCameraSwitch_Request_request
{
public:
  Init_SetCameraSwitch_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCameraSwitch_Request_camera_enabled request(::aimdk_msgs::srv::SetCameraSwitch_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCameraSwitch_Request_camera_enabled(msg_);
  }

private:
  ::aimdk_msgs::srv::SetCameraSwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetCameraSwitch_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetCameraSwitch_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCameraSwitch_Response_camera_enabled
{
public:
  explicit Init_SetCameraSwitch_Response_camera_enabled(::aimdk_msgs::srv::SetCameraSwitch_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetCameraSwitch_Response camera_enabled(::aimdk_msgs::srv::SetCameraSwitch_Response::_camera_enabled_type arg)
  {
    msg_.camera_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetCameraSwitch_Response msg_;
};

class Init_SetCameraSwitch_Response_response
{
public:
  Init_SetCameraSwitch_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCameraSwitch_Response_camera_enabled response(::aimdk_msgs::srv::SetCameraSwitch_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetCameraSwitch_Response_camera_enabled(msg_);
  }

private:
  ::aimdk_msgs::srv::SetCameraSwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetCameraSwitch_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetCameraSwitch_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_CAMERA_SWITCH__BUILDER_HPP_
