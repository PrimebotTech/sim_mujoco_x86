// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/jpeg_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JpegImage_image
{
public:
  explicit Init_JpegImage_image(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JpegImage image(::aimdk_msgs::msg::JpegImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_gain
{
public:
  explicit Init_JpegImage_gain(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_image gain(::aimdk_msgs::msg::JpegImage::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_JpegImage_image(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_exposure
{
public:
  explicit Init_JpegImage_exposure(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_gain exposure(::aimdk_msgs::msg::JpegImage::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return Init_JpegImage_gain(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_framerate
{
public:
  explicit Init_JpegImage_framerate(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_exposure framerate(::aimdk_msgs::msg::JpegImage::_framerate_type arg)
  {
    msg_.framerate = std::move(arg);
    return Init_JpegImage_exposure(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_height
{
public:
  explicit Init_JpegImage_height(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_framerate height(::aimdk_msgs::msg::JpegImage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_JpegImage_framerate(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_width
{
public:
  explicit Init_JpegImage_width(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_height width(::aimdk_msgs::msg::JpegImage::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_JpegImage_height(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_device
{
public:
  explicit Init_JpegImage_device(::aimdk_msgs::msg::JpegImage & msg)
  : msg_(msg)
  {}
  Init_JpegImage_width device(::aimdk_msgs::msg::JpegImage::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_JpegImage_width(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

class Init_JpegImage_camera_id
{
public:
  Init_JpegImage_camera_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JpegImage_device camera_id(::aimdk_msgs::msg::JpegImage::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_JpegImage_device(msg_);
  }

private:
  ::aimdk_msgs::msg::JpegImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JpegImage>()
{
  return aimdk_msgs::msg::builder::Init_JpegImage_camera_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JPEG_IMAGE__BUILDER_HPP_
