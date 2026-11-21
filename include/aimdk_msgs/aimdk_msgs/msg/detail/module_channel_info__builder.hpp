// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/ModuleChannelInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/module_channel_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_ModuleChannelInfo_backends
{
public:
  explicit Init_ModuleChannelInfo_backends(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::ModuleChannelInfo backends(::aimdk_msgs::msg::ModuleChannelInfo::_backends_type arg)
  {
    msg_.backends = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_is_active
{
public:
  explicit Init_ModuleChannelInfo_is_active(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_backends is_active(::aimdk_msgs::msg::ModuleChannelInfo::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_ModuleChannelInfo_backends(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_timeout_threshold
{
public:
  explicit Init_ModuleChannelInfo_timeout_threshold(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_is_active timeout_threshold(::aimdk_msgs::msg::ModuleChannelInfo::_timeout_threshold_type arg)
  {
    msg_.timeout_threshold = std::move(arg);
    return Init_ModuleChannelInfo_is_active(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_window_size
{
public:
  explicit Init_ModuleChannelInfo_window_size(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_timeout_threshold window_size(::aimdk_msgs::msg::ModuleChannelInfo::_window_size_type arg)
  {
    msg_.window_size = std::move(arg);
    return Init_ModuleChannelInfo_timeout_threshold(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_std_dev
{
public:
  explicit Init_ModuleChannelInfo_std_dev(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_window_size std_dev(::aimdk_msgs::msg::ModuleChannelInfo::_std_dev_type arg)
  {
    msg_.std_dev = std::move(arg);
    return Init_ModuleChannelInfo_window_size(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_max_time_diff
{
public:
  explicit Init_ModuleChannelInfo_max_time_diff(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_std_dev max_time_diff(::aimdk_msgs::msg::ModuleChannelInfo::_max_time_diff_type arg)
  {
    msg_.max_time_diff = std::move(arg);
    return Init_ModuleChannelInfo_std_dev(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_min_time_diff
{
public:
  explicit Init_ModuleChannelInfo_min_time_diff(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_max_time_diff min_time_diff(::aimdk_msgs::msg::ModuleChannelInfo::_min_time_diff_type arg)
  {
    msg_.min_time_diff = std::move(arg);
    return Init_ModuleChannelInfo_max_time_diff(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_frequency
{
public:
  explicit Init_ModuleChannelInfo_frequency(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_min_time_diff frequency(::aimdk_msgs::msg::ModuleChannelInfo::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_ModuleChannelInfo_min_time_diff(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_type
{
public:
  explicit Init_ModuleChannelInfo_type(::aimdk_msgs::msg::ModuleChannelInfo & msg)
  : msg_(msg)
  {}
  Init_ModuleChannelInfo_frequency type(::aimdk_msgs::msg::ModuleChannelInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ModuleChannelInfo_frequency(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

class Init_ModuleChannelInfo_name
{
public:
  Init_ModuleChannelInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModuleChannelInfo_type name(::aimdk_msgs::msg::ModuleChannelInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ModuleChannelInfo_type(msg_);
  }

private:
  ::aimdk_msgs::msg::ModuleChannelInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::ModuleChannelInfo>()
{
  return aimdk_msgs::msg::builder::Init_ModuleChannelInfo_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__BUILDER_HPP_
