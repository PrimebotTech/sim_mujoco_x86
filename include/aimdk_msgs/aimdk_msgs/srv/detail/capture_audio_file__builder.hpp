// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/CaptureAudioFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/capture_audio_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureAudioFile_Request_duration
{
public:
  explicit Init_CaptureAudioFile_Request_duration(::aimdk_msgs::srv::CaptureAudioFile_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::CaptureAudioFile_Request duration(::aimdk_msgs::srv::CaptureAudioFile_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Request msg_;
};

class Init_CaptureAudioFile_Request_file
{
public:
  explicit Init_CaptureAudioFile_Request_file(::aimdk_msgs::srv::CaptureAudioFile_Request & msg)
  : msg_(msg)
  {}
  Init_CaptureAudioFile_Request_duration file(::aimdk_msgs::srv::CaptureAudioFile_Request::_file_type arg)
  {
    msg_.file = std::move(arg);
    return Init_CaptureAudioFile_Request_duration(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Request msg_;
};

class Init_CaptureAudioFile_Request_request
{
public:
  Init_CaptureAudioFile_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAudioFile_Request_file request(::aimdk_msgs::srv::CaptureAudioFile_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureAudioFile_Request_file(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::CaptureAudioFile_Request>()
{
  return aimdk_msgs::srv::builder::Init_CaptureAudioFile_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureAudioFile_Response_file
{
public:
  explicit Init_CaptureAudioFile_Response_file(::aimdk_msgs::srv::CaptureAudioFile_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::CaptureAudioFile_Response file(::aimdk_msgs::srv::CaptureAudioFile_Response::_file_type arg)
  {
    msg_.file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Response msg_;
};

class Init_CaptureAudioFile_Response_mic_source
{
public:
  explicit Init_CaptureAudioFile_Response_mic_source(::aimdk_msgs::srv::CaptureAudioFile_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureAudioFile_Response_file mic_source(::aimdk_msgs::srv::CaptureAudioFile_Response::_mic_source_type arg)
  {
    msg_.mic_source = std::move(arg);
    return Init_CaptureAudioFile_Response_file(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Response msg_;
};

class Init_CaptureAudioFile_Response_response
{
public:
  Init_CaptureAudioFile_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureAudioFile_Response_mic_source response(::aimdk_msgs::srv::CaptureAudioFile_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_CaptureAudioFile_Response_mic_source(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureAudioFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::CaptureAudioFile_Response>()
{
  return aimdk_msgs::srv::builder::Init_CaptureAudioFile_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__CAPTURE_AUDIO_FILE__BUILDER_HPP_
