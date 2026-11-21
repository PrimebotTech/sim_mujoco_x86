// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/RgbdInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/rgbd_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_RgbdInfo_temperature
{
public:
  explicit Init_RgbdInfo_temperature(::aimdk_msgs::msg::RgbdInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::RgbdInfo temperature(::aimdk_msgs::msg::RgbdInfo::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::RgbdInfo msg_;
};

class Init_RgbdInfo_exposure
{
public:
  explicit Init_RgbdInfo_exposure(::aimdk_msgs::msg::RgbdInfo & msg)
  : msg_(msg)
  {}
  Init_RgbdInfo_temperature exposure(::aimdk_msgs::msg::RgbdInfo::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return Init_RgbdInfo_temperature(msg_);
  }

private:
  ::aimdk_msgs::msg::RgbdInfo msg_;
};

class Init_RgbdInfo_header
{
public:
  Init_RgbdInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RgbdInfo_exposure header(::aimdk_msgs::msg::RgbdInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RgbdInfo_exposure(msg_);
  }

private:
  ::aimdk_msgs::msg::RgbdInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::RgbdInfo>()
{
  return aimdk_msgs::msg::builder::Init_RgbdInfo_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__RGBD_INFO__BUILDER_HPP_
