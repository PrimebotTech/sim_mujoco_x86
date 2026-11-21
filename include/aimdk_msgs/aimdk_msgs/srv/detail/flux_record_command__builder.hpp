// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/FluxRecordCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/flux_record_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_FluxRecordCommand_Request_duration
{
public:
  explicit Init_FluxRecordCommand_Request_duration(::aimdk_msgs::srv::FluxRecordCommand_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::FluxRecordCommand_Request duration(::aimdk_msgs::srv::FluxRecordCommand_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxRecordCommand_Request msg_;
};

class Init_FluxRecordCommand_Request_command
{
public:
  Init_FluxRecordCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluxRecordCommand_Request_duration command(::aimdk_msgs::srv::FluxRecordCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_FluxRecordCommand_Request_duration(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxRecordCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxRecordCommand_Request>()
{
  return aimdk_msgs::srv::builder::Init_FluxRecordCommand_Request_command();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_FluxRecordCommand_Response_message
{
public:
  explicit Init_FluxRecordCommand_Response_message(::aimdk_msgs::srv::FluxRecordCommand_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::FluxRecordCommand_Response message(::aimdk_msgs::srv::FluxRecordCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxRecordCommand_Response msg_;
};

class Init_FluxRecordCommand_Response_reason
{
public:
  explicit Init_FluxRecordCommand_Response_reason(::aimdk_msgs::srv::FluxRecordCommand_Response & msg)
  : msg_(msg)
  {}
  Init_FluxRecordCommand_Response_message reason(::aimdk_msgs::srv::FluxRecordCommand_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_FluxRecordCommand_Response_message(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxRecordCommand_Response msg_;
};

class Init_FluxRecordCommand_Response_status
{
public:
  Init_FluxRecordCommand_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluxRecordCommand_Response_reason status(::aimdk_msgs::srv::FluxRecordCommand_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FluxRecordCommand_Response_reason(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxRecordCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxRecordCommand_Response>()
{
  return aimdk_msgs::srv::builder::Init_FluxRecordCommand_Response_status();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__BUILDER_HPP_
