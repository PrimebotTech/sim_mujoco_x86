// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetMcMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_mc_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcMotion_Request_operation
{
public:
  explicit Init_SetMcMotion_Request_operation(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetMcMotion_Request operation(::aimdk_msgs::srv::SetMcMotion_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_interrupt
{
public:
  explicit Init_SetMcMotion_Request_interrupt(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_operation interrupt(::aimdk_msgs::srv::SetMcMotion_Request::_interrupt_type arg)
  {
    msg_.interrupt = std::move(arg);
    return Init_SetMcMotion_Request_operation(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_resource
{
public:
  explicit Init_SetMcMotion_Request_resource(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_interrupt resource(::aimdk_msgs::srv::SetMcMotion_Request::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return Init_SetMcMotion_Request_interrupt(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_model
{
public:
  explicit Init_SetMcMotion_Request_model(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_resource model(::aimdk_msgs::srv::SetMcMotion_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_SetMcMotion_Request_resource(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_motion
{
public:
  explicit Init_SetMcMotion_Request_motion(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_model motion(::aimdk_msgs::srv::SetMcMotion_Request::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return Init_SetMcMotion_Request_model(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_type
{
public:
  explicit Init_SetMcMotion_Request_type(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_motion type(::aimdk_msgs::srv::SetMcMotion_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetMcMotion_Request_motion(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_source
{
public:
  explicit Init_SetMcMotion_Request_source(::aimdk_msgs::srv::SetMcMotion_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotion_Request_type source(::aimdk_msgs::srv::SetMcMotion_Request::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_SetMcMotion_Request_type(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

class Init_SetMcMotion_Request_header
{
public:
  Init_SetMcMotion_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMcMotion_Request_source header(::aimdk_msgs::srv::SetMcMotion_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetMcMotion_Request_source(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcMotion_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetMcMotion_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcMotion_Response_response
{
public:
  Init_SetMcMotion_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetMcMotion_Response response(::aimdk_msgs::srv::SetMcMotion_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcMotion_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetMcMotion_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION__BUILDER_HPP_
