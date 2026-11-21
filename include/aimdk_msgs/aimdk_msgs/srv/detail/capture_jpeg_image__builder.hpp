// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/CaptureJpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/capture_jpeg_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureJpegImage_Request_timeout_ms
{
public:
  explicit Init_CaptureJpegImage_Request_timeout_ms(::aimdk_msgs::srv::CaptureJpegImage_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::CaptureJpegImage_Request timeout_ms(::aimdk_msgs::srv::CaptureJpegImage_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureJpegImage_Request msg_;
};

class Init_CaptureJpegImage_Request_camera_id
{
public:
  explicit Init_CaptureJpegImage_Request_camera_id(::aimdk_msgs::srv::CaptureJpegImage_Request & msg)
  : msg_(msg)
  {}
  Init_CaptureJpegImage_Request_timeout_ms camera_id(::aimdk_msgs::srv::CaptureJpegImage_Request::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_CaptureJpegImage_Request_timeout_ms(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureJpegImage_Request msg_;
};

class Init_CaptureJpegImage_Request_request
{
public:
  Init_CaptureJpegImage_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureJpegImage_Request_camera_id request(::aimdk_msgs::srv::CaptureJpegImage_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureJpegImage_Request_camera_id(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureJpegImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::CaptureJpegImage_Request>()
{
  return aimdk_msgs::srv::builder::Init_CaptureJpegImage_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureJpegImage_Response_jpeg
{
public:
  explicit Init_CaptureJpegImage_Response_jpeg(::aimdk_msgs::srv::CaptureJpegImage_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::CaptureJpegImage_Response jpeg(::aimdk_msgs::srv::CaptureJpegImage_Response::_jpeg_type arg)
  {
    msg_.jpeg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureJpegImage_Response msg_;
};

class Init_CaptureJpegImage_Response_response
{
public:
  Init_CaptureJpegImage_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureJpegImage_Response_jpeg response(::aimdk_msgs::srv::CaptureJpegImage_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_CaptureJpegImage_Response_jpeg(msg_);
  }

private:
  ::aimdk_msgs::srv::CaptureJpegImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::CaptureJpegImage_Response>()
{
  return aimdk_msgs::srv::builder::Init_CaptureJpegImage_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__BUILDER_HPP_
