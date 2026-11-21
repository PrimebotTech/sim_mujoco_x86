// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/AudioDeviceInfoList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/audio_device_info_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioDeviceInfoList_output_list
{
public:
  explicit Init_AudioDeviceInfoList_output_list(::aimdk_msgs::msg::AudioDeviceInfoList & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::AudioDeviceInfoList output_list(::aimdk_msgs::msg::AudioDeviceInfoList::_output_list_type arg)
  {
    msg_.output_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfoList msg_;
};

class Init_AudioDeviceInfoList_input_list
{
public:
  Init_AudioDeviceInfoList_input_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioDeviceInfoList_output_list input_list(::aimdk_msgs::msg::AudioDeviceInfoList::_input_list_type arg)
  {
    msg_.input_list = std::move(arg);
    return Init_AudioDeviceInfoList_output_list(msg_);
  }

private:
  ::aimdk_msgs::msg::AudioDeviceInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::AudioDeviceInfoList>()
{
  return aimdk_msgs::msg::builder::Init_AudioDeviceInfoList_input_list();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__BUILDER_HPP_
