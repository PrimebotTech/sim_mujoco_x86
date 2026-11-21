// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetHalCameraStream.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_hal_camera_stream__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHalCameraStream_Request_stream_ctrl_mask
{
public:
  explicit Init_SetHalCameraStream_Request_stream_ctrl_mask(::aimdk_msgs::srv::SetHalCameraStream_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetHalCameraStream_Request stream_ctrl_mask(::aimdk_msgs::srv::SetHalCameraStream_Request::_stream_ctrl_mask_type arg)
  {
    msg_.stream_ctrl_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Request msg_;
};

class Init_SetHalCameraStream_Request_power_ctrl_mask
{
public:
  explicit Init_SetHalCameraStream_Request_power_ctrl_mask(::aimdk_msgs::srv::SetHalCameraStream_Request & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Request_stream_ctrl_mask power_ctrl_mask(::aimdk_msgs::srv::SetHalCameraStream_Request::_power_ctrl_mask_type arg)
  {
    msg_.power_ctrl_mask = std::move(arg);
    return Init_SetHalCameraStream_Request_stream_ctrl_mask(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Request msg_;
};

class Init_SetHalCameraStream_Request_req_type
{
public:
  explicit Init_SetHalCameraStream_Request_req_type(::aimdk_msgs::srv::SetHalCameraStream_Request & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Request_power_ctrl_mask req_type(::aimdk_msgs::srv::SetHalCameraStream_Request::_req_type_type arg)
  {
    msg_.req_type = std::move(arg);
    return Init_SetHalCameraStream_Request_power_ctrl_mask(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Request msg_;
};

class Init_SetHalCameraStream_Request_trace_id
{
public:
  explicit Init_SetHalCameraStream_Request_trace_id(::aimdk_msgs::srv::SetHalCameraStream_Request & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Request_req_type trace_id(::aimdk_msgs::srv::SetHalCameraStream_Request::_trace_id_type arg)
  {
    msg_.trace_id = std::move(arg);
    return Init_SetHalCameraStream_Request_req_type(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Request msg_;
};

class Init_SetHalCameraStream_Request_request
{
public:
  Init_SetHalCameraStream_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHalCameraStream_Request_trace_id request(::aimdk_msgs::srv::SetHalCameraStream_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetHalCameraStream_Request_trace_id(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetHalCameraStream_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetHalCameraStream_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHalCameraStream_Response_switch_state
{
public:
  explicit Init_SetHalCameraStream_Response_switch_state(::aimdk_msgs::srv::SetHalCameraStream_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetHalCameraStream_Response switch_state(::aimdk_msgs::srv::SetHalCameraStream_Response::_switch_state_type arg)
  {
    msg_.switch_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Response msg_;
};

class Init_SetHalCameraStream_Response_target_state_mask
{
public:
  explicit Init_SetHalCameraStream_Response_target_state_mask(::aimdk_msgs::srv::SetHalCameraStream_Response & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Response_switch_state target_state_mask(::aimdk_msgs::srv::SetHalCameraStream_Response::_target_state_mask_type arg)
  {
    msg_.target_state_mask = std::move(arg);
    return Init_SetHalCameraStream_Response_switch_state(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Response msg_;
};

class Init_SetHalCameraStream_Response_req_result
{
public:
  explicit Init_SetHalCameraStream_Response_req_result(::aimdk_msgs::srv::SetHalCameraStream_Response & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Response_target_state_mask req_result(::aimdk_msgs::srv::SetHalCameraStream_Response::_req_result_type arg)
  {
    msg_.req_result = std::move(arg);
    return Init_SetHalCameraStream_Response_target_state_mask(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Response msg_;
};

class Init_SetHalCameraStream_Response_trace_id
{
public:
  explicit Init_SetHalCameraStream_Response_trace_id(::aimdk_msgs::srv::SetHalCameraStream_Response & msg)
  : msg_(msg)
  {}
  Init_SetHalCameraStream_Response_req_result trace_id(::aimdk_msgs::srv::SetHalCameraStream_Response::_trace_id_type arg)
  {
    msg_.trace_id = std::move(arg);
    return Init_SetHalCameraStream_Response_req_result(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Response msg_;
};

class Init_SetHalCameraStream_Response_response
{
public:
  Init_SetHalCameraStream_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHalCameraStream_Response_trace_id response(::aimdk_msgs::srv::SetHalCameraStream_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetHalCameraStream_Response_trace_id(msg_);
  }

private:
  ::aimdk_msgs::srv::SetHalCameraStream_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetHalCameraStream_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetHalCameraStream_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__BUILDER_HPP_
