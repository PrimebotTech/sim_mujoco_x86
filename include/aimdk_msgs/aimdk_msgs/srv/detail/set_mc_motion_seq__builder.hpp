// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SetMcMotionSeq.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/set_mc_motion_seq__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcMotionSeq_Request_interrupt
{
public:
  explicit Init_SetMcMotionSeq_Request_interrupt(::aimdk_msgs::srv::SetMcMotionSeq_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SetMcMotionSeq_Request interrupt(::aimdk_msgs::srv::SetMcMotionSeq_Request::_interrupt_type arg)
  {
    msg_.interrupt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotionSeq_Request msg_;
};

class Init_SetMcMotionSeq_Request_motion_seq
{
public:
  explicit Init_SetMcMotionSeq_Request_motion_seq(::aimdk_msgs::srv::SetMcMotionSeq_Request & msg)
  : msg_(msg)
  {}
  Init_SetMcMotionSeq_Request_interrupt motion_seq(::aimdk_msgs::srv::SetMcMotionSeq_Request::_motion_seq_type arg)
  {
    msg_.motion_seq = std::move(arg);
    return Init_SetMcMotionSeq_Request_interrupt(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotionSeq_Request msg_;
};

class Init_SetMcMotionSeq_Request_header
{
public:
  Init_SetMcMotionSeq_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMcMotionSeq_Request_motion_seq header(::aimdk_msgs::srv::SetMcMotionSeq_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetMcMotionSeq_Request_motion_seq(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotionSeq_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcMotionSeq_Request>()
{
  return aimdk_msgs::srv::builder::Init_SetMcMotionSeq_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMcMotionSeq_Response_response
{
public:
  Init_SetMcMotionSeq_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::SetMcMotionSeq_Response response(::aimdk_msgs::srv::SetMcMotionSeq_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SetMcMotionSeq_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SetMcMotionSeq_Response>()
{
  return aimdk_msgs::srv::builder::Init_SetMcMotionSeq_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_MC_MOTION_SEQ__BUILDER_HPP_
