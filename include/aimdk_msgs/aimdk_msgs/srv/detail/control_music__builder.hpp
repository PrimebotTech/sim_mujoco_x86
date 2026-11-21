// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/ControlMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/control_music__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlMusic_Request_debug_args
{
public:
  explicit Init_ControlMusic_Request_debug_args(::aimdk_msgs::srv::ControlMusic_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::ControlMusic_Request debug_args(::aimdk_msgs::srv::ControlMusic_Request::_debug_args_type arg)
  {
    msg_.debug_args = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Request msg_;
};

class Init_ControlMusic_Request_no_auto_next
{
public:
  explicit Init_ControlMusic_Request_no_auto_next(::aimdk_msgs::srv::ControlMusic_Request & msg)
  : msg_(msg)
  {}
  Init_ControlMusic_Request_debug_args no_auto_next(::aimdk_msgs::srv::ControlMusic_Request::_no_auto_next_type arg)
  {
    msg_.no_auto_next = std::move(arg);
    return Init_ControlMusic_Request_debug_args(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Request msg_;
};

class Init_ControlMusic_Request_play_index
{
public:
  explicit Init_ControlMusic_Request_play_index(::aimdk_msgs::srv::ControlMusic_Request & msg)
  : msg_(msg)
  {}
  Init_ControlMusic_Request_no_auto_next play_index(::aimdk_msgs::srv::ControlMusic_Request::_play_index_type arg)
  {
    msg_.play_index = std::move(arg);
    return Init_ControlMusic_Request_no_auto_next(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Request msg_;
};

class Init_ControlMusic_Request_control_type
{
public:
  explicit Init_ControlMusic_Request_control_type(::aimdk_msgs::srv::ControlMusic_Request & msg)
  : msg_(msg)
  {}
  Init_ControlMusic_Request_play_index control_type(::aimdk_msgs::srv::ControlMusic_Request::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_ControlMusic_Request_play_index(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Request msg_;
};

class Init_ControlMusic_Request_request
{
public:
  Init_ControlMusic_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMusic_Request_control_type request(::aimdk_msgs::srv::ControlMusic_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ControlMusic_Request_control_type(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::ControlMusic_Request>()
{
  return aimdk_msgs::srv::builder::Init_ControlMusic_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlMusic_Response_control_command_id
{
public:
  explicit Init_ControlMusic_Response_control_command_id(::aimdk_msgs::srv::ControlMusic_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::ControlMusic_Response control_command_id(::aimdk_msgs::srv::ControlMusic_Response::_control_command_id_type arg)
  {
    msg_.control_command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Response msg_;
};

class Init_ControlMusic_Response_response
{
public:
  Init_ControlMusic_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMusic_Response_control_command_id response(::aimdk_msgs::srv::ControlMusic_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_ControlMusic_Response_control_command_id(msg_);
  }

private:
  ::aimdk_msgs::srv::ControlMusic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::ControlMusic_Response>()
{
  return aimdk_msgs::srv::builder::Init_ControlMusic_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__BUILDER_HPP_
