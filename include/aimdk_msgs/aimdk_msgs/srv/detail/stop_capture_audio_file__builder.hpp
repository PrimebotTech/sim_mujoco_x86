// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/StopCaptureAudioFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/stop_capture_audio_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_StopCaptureAudioFile_Request_file
{
public:
  explicit Init_StopCaptureAudioFile_Request_file(::aimdk_msgs::srv::StopCaptureAudioFile_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::StopCaptureAudioFile_Request file(::aimdk_msgs::srv::StopCaptureAudioFile_Request::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::StopCaptureAudioFile_Request msg_;
};

class Init_StopCaptureAudioFile_Request_request
{
public:
  Init_StopCaptureAudioFile_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopCaptureAudioFile_Request_file request(::aimdk_msgs::srv::StopCaptureAudioFile_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopCaptureAudioFile_Request_file(msg_);
  }

private:
  ::aimdk_msgs::srv::StopCaptureAudioFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::StopCaptureAudioFile_Request>()
{
  return aimdk_msgs::srv::builder::Init_StopCaptureAudioFile_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_StopCaptureAudioFile_Response_response
{
public:
  Init_StopCaptureAudioFile_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::StopCaptureAudioFile_Response response(::aimdk_msgs::srv::StopCaptureAudioFile_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::StopCaptureAudioFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::StopCaptureAudioFile_Response>()
{
  return aimdk_msgs::srv::builder::Init_StopCaptureAudioFile_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__BUILDER_HPP_
