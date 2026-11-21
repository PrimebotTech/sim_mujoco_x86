// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/EventProbeInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/event_probe_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_EventProbeInfo_attrs
{
public:
  explicit Init_EventProbeInfo_attrs(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::EventProbeInfo attrs(::aimdk_msgs::msg::EventProbeInfo::_attrs_type arg)
  {
    msg_.attrs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_desc
{
public:
  explicit Init_EventProbeInfo_desc(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_attrs desc(::aimdk_msgs::msg::EventProbeInfo::_desc_type arg)
  {
    msg_.desc = std::move(arg);
    return Init_EventProbeInfo_attrs(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_event_code
{
public:
  explicit Init_EventProbeInfo_event_code(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_desc event_code(::aimdk_msgs::msg::EventProbeInfo::_event_code_type arg)
  {
    msg_.event_code = std::move(arg);
    return Init_EventProbeInfo_desc(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_event_id
{
public:
  explicit Init_EventProbeInfo_event_id(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_event_code event_id(::aimdk_msgs::msg::EventProbeInfo::_event_id_type arg)
  {
    msg_.event_id = std::move(arg);
    return Init_EventProbeInfo_event_code(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_module_id
{
public:
  explicit Init_EventProbeInfo_module_id(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_event_id module_id(::aimdk_msgs::msg::EventProbeInfo::_module_id_type arg)
  {
    msg_.module_id = std::move(arg);
    return Init_EventProbeInfo_event_id(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_type
{
public:
  explicit Init_EventProbeInfo_type(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_module_id type(::aimdk_msgs::msg::EventProbeInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EventProbeInfo_module_id(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_timestamp
{
public:
  explicit Init_EventProbeInfo_timestamp(::aimdk_msgs::msg::EventProbeInfo & msg)
  : msg_(msg)
  {}
  Init_EventProbeInfo_type timestamp(::aimdk_msgs::msg::EventProbeInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EventProbeInfo_type(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

class Init_EventProbeInfo_status
{
public:
  Init_EventProbeInfo_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventProbeInfo_timestamp status(::aimdk_msgs::msg::EventProbeInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EventProbeInfo_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::EventProbeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::EventProbeInfo>()
{
  return aimdk_msgs::msg::builder::Init_EventProbeInfo_status();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__BUILDER_HPP_
