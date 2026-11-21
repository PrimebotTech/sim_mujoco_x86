// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/MicSourceChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mic_source_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_MicSourceChange_vid
{
public:
  explicit Init_MicSourceChange_vid(::aimdk_msgs::msg::MicSourceChange & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::MicSourceChange vid(::aimdk_msgs::msg::MicSourceChange::_vid_type arg)
  {
    msg_.vid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::MicSourceChange msg_;
};

class Init_MicSourceChange_pid
{
public:
  explicit Init_MicSourceChange_pid(::aimdk_msgs::msg::MicSourceChange & msg)
  : msg_(msg)
  {}
  Init_MicSourceChange_vid pid(::aimdk_msgs::msg::MicSourceChange::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_MicSourceChange_vid(msg_);
  }

private:
  ::aimdk_msgs::msg::MicSourceChange msg_;
};

class Init_MicSourceChange_mic_source
{
public:
  Init_MicSourceChange_mic_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicSourceChange_pid mic_source(::aimdk_msgs::msg::MicSourceChange::_mic_source_type arg)
  {
    msg_.mic_source = std::move(arg);
    return Init_MicSourceChange_pid(msg_);
  }

private:
  ::aimdk_msgs::msg::MicSourceChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::MicSourceChange>()
{
  return aimdk_msgs::msg::builder::Init_MicSourceChange_mic_source();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__BUILDER_HPP_
