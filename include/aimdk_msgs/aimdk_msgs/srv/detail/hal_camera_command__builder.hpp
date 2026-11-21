// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/HALCameraCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/hal_camera_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_HALCameraCommand_Request_param_values
{
public:
  explicit Init_HALCameraCommand_Request_param_values(::aimdk_msgs::srv::HALCameraCommand_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::HALCameraCommand_Request param_values(::aimdk_msgs::srv::HALCameraCommand_Request::_param_values_type arg)
  {
    msg_.param_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Request msg_;
};

class Init_HALCameraCommand_Request_param_keys
{
public:
  explicit Init_HALCameraCommand_Request_param_keys(::aimdk_msgs::srv::HALCameraCommand_Request & msg)
  : msg_(msg)
  {}
  Init_HALCameraCommand_Request_param_values param_keys(::aimdk_msgs::srv::HALCameraCommand_Request::_param_keys_type arg)
  {
    msg_.param_keys = std::move(arg);
    return Init_HALCameraCommand_Request_param_values(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Request msg_;
};

class Init_HALCameraCommand_Request_command
{
public:
  explicit Init_HALCameraCommand_Request_command(::aimdk_msgs::srv::HALCameraCommand_Request & msg)
  : msg_(msg)
  {}
  Init_HALCameraCommand_Request_param_keys command(::aimdk_msgs::srv::HALCameraCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_HALCameraCommand_Request_param_keys(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Request msg_;
};

class Init_HALCameraCommand_Request_request
{
public:
  Init_HALCameraCommand_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HALCameraCommand_Request_command request(::aimdk_msgs::srv::HALCameraCommand_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HALCameraCommand_Request_command(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::HALCameraCommand_Request>()
{
  return aimdk_msgs::srv::builder::Init_HALCameraCommand_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_HALCameraCommand_Response_result_values
{
public:
  explicit Init_HALCameraCommand_Response_result_values(::aimdk_msgs::srv::HALCameraCommand_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::HALCameraCommand_Response result_values(::aimdk_msgs::srv::HALCameraCommand_Response::_result_values_type arg)
  {
    msg_.result_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Response msg_;
};

class Init_HALCameraCommand_Response_result_keys
{
public:
  explicit Init_HALCameraCommand_Response_result_keys(::aimdk_msgs::srv::HALCameraCommand_Response & msg)
  : msg_(msg)
  {}
  Init_HALCameraCommand_Response_result_values result_keys(::aimdk_msgs::srv::HALCameraCommand_Response::_result_keys_type arg)
  {
    msg_.result_keys = std::move(arg);
    return Init_HALCameraCommand_Response_result_values(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Response msg_;
};

class Init_HALCameraCommand_Response_response
{
public:
  Init_HALCameraCommand_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HALCameraCommand_Response_result_keys response(::aimdk_msgs::srv::HALCameraCommand_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_HALCameraCommand_Response_result_keys(msg_);
  }

private:
  ::aimdk_msgs::srv::HALCameraCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::HALCameraCommand_Response>()
{
  return aimdk_msgs::srv::builder::Init_HALCameraCommand_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__HAL_CAMERA_COMMAND__BUILDER_HPP_
