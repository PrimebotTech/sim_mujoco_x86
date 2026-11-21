// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/AudioDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/audio_device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioDeviceInfo_is_sel
{
public:
  explicit Init_AudioDeviceInfo_is_sel(::aimdk_msgs::msg::AudioDeviceInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::AudioDeviceInfo is_sel(::aimdk_msgs::msg::AudioDeviceInfo::_is_sel_type arg)
  {
    msg_.is_sel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfo msg_;
};

class Init_AudioDeviceInfo_device_name
{
public:
  explicit Init_AudioDeviceInfo_device_name(::aimdk_msgs::msg::AudioDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_AudioDeviceInfo_is_sel device_name(::aimdk_msgs::msg::AudioDeviceInfo::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_AudioDeviceInfo_is_sel(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfo msg_;
};

class Init_AudioDeviceInfo_device_type
{
public:
  explicit Init_AudioDeviceInfo_device_type(::aimdk_msgs::msg::AudioDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_AudioDeviceInfo_device_name device_type(::aimdk_msgs::msg::AudioDeviceInfo::_device_type_type arg)
  {
    msg_.device_type = std::move(arg);
    return Init_AudioDeviceInfo_device_name(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfo msg_;
};

class Init_AudioDeviceInfo_device_addr
{
public:
  explicit Init_AudioDeviceInfo_device_addr(::aimdk_msgs::msg::AudioDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_AudioDeviceInfo_device_type device_addr(::aimdk_msgs::msg::AudioDeviceInfo::_device_addr_type arg)
  {
    msg_.device_addr = std::move(arg);
    return Init_AudioDeviceInfo_device_type(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfo msg_;
};

class Init_AudioDeviceInfo_id
{
public:
  Init_AudioDeviceInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioDeviceInfo_device_addr id(::aimdk_msgs::msg::AudioDeviceInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AudioDeviceInfo_device_addr(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::AudioDeviceInfo>()
{
  return aimdk_msgs::msg::builder::Init_AudioDeviceInfo_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO__BUILDER_HPP_
