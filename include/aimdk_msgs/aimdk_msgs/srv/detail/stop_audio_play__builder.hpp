// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/StopAudioPlay.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__STOP_AUDIO_PLAY__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__STOP_AUDIO_PLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/stop_audio_play__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_StopAudioPlay_Request_request
{
public:
  Init_StopAudioPlay_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::StopAudioPlay_Request request(::aimdk_msgs::srv::StopAudioPlay_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::StopAudioPlay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::StopAudioPlay_Request>()
{
  return aimdk_msgs::srv::builder::Init_StopAudioPlay_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_StopAudioPlay_Response_response
{
public:
  Init_StopAudioPlay_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::StopAudioPlay_Response response(::aimdk_msgs::srv::StopAudioPlay_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::StopAudioPlay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::StopAudioPlay_Response>()
{
  return aimdk_msgs::srv::builder::Init_StopAudioPlay_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__STOP_AUDIO_PLAY__BUILDER_HPP_
