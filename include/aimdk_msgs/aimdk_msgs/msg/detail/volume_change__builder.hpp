// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/VolumeChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/volume_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_VolumeChange_audio_volume
{
public:
  explicit Init_VolumeChange_audio_volume(::aimdk_msgs::msg::VolumeChange & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::VolumeChange audio_volume(::aimdk_msgs::msg::VolumeChange::_audio_volume_type arg)
  {
    msg_.audio_volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::VolumeChange msg_;
};

class Init_VolumeChange_type
{
public:
  Init_VolumeChange_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VolumeChange_audio_volume type(::aimdk_msgs::msg::VolumeChange::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VolumeChange_audio_volume(msg_);
  }

private:
  ::aimdk_msgs::msg::VolumeChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::VolumeChange>()
{
  return aimdk_msgs::msg::builder::Init_VolumeChange_type();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__VOLUME_CHANGE__BUILDER_HPP_
