// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/FluxCaptureImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/flux_capture_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_FluxCaptureImage_Request_quality
{
public:
  Init_FluxCaptureImage_Request_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::FluxCaptureImage_Request quality(::aimdk_msgs::srv::FluxCaptureImage_Request::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxCaptureImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxCaptureImage_Request>()
{
  return aimdk_msgs::srv::builder::Init_FluxCaptureImage_Request_quality();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_FluxCaptureImage_Response_message
{
public:
  explicit Init_FluxCaptureImage_Response_message(::aimdk_msgs::srv::FluxCaptureImage_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::FluxCaptureImage_Response message(::aimdk_msgs::srv::FluxCaptureImage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxCaptureImage_Response msg_;
};

class Init_FluxCaptureImage_Response_reason
{
public:
  explicit Init_FluxCaptureImage_Response_reason(::aimdk_msgs::srv::FluxCaptureImage_Response & msg)
  : msg_(msg)
  {}
  Init_FluxCaptureImage_Response_message reason(::aimdk_msgs::srv::FluxCaptureImage_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_FluxCaptureImage_Response_message(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxCaptureImage_Response msg_;
};

class Init_FluxCaptureImage_Response_status
{
public:
  Init_FluxCaptureImage_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluxCaptureImage_Response_reason status(::aimdk_msgs::srv::FluxCaptureImage_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FluxCaptureImage_Response_reason(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxCaptureImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxCaptureImage_Response>()
{
  return aimdk_msgs::srv::builder::Init_FluxCaptureImage_Response_status();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__BUILDER_HPP_
