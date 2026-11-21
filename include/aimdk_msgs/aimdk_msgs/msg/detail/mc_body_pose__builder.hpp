// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McBodyPose.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_body_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McBodyPose_turn_head
{
public:
  explicit Init_McBodyPose_turn_head(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McBodyPose turn_head(::aimdk_msgs::msg::McBodyPose::_turn_head_type arg)
  {
    msg_.turn_head = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_raise_head
{
public:
  explicit Init_McBodyPose_raise_head(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_turn_head raise_head(::aimdk_msgs::msg::McBodyPose::_raise_head_type arg)
  {
    msg_.raise_head = std::move(arg);
    return Init_McBodyPose_turn_head(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_twist_waist
{
public:
  explicit Init_McBodyPose_twist_waist(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_raise_head twist_waist(::aimdk_msgs::msg::McBodyPose::_twist_waist_type arg)
  {
    msg_.twist_waist = std::move(arg);
    return Init_McBodyPose_raise_head(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_bend_sideways
{
public:
  explicit Init_McBodyPose_bend_sideways(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_twist_waist bend_sideways(::aimdk_msgs::msg::McBodyPose::_bend_sideways_type arg)
  {
    msg_.bend_sideways = std::move(arg);
    return Init_McBodyPose_twist_waist(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_bend_forward
{
public:
  explicit Init_McBodyPose_bend_forward(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_bend_sideways bend_forward(::aimdk_msgs::msg::McBodyPose::_bend_forward_type arg)
  {
    msg_.bend_forward = std::move(arg);
    return Init_McBodyPose_bend_sideways(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_stand_height
{
public:
  explicit Init_McBodyPose_stand_height(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_bend_forward stand_height(::aimdk_msgs::msg::McBodyPose::_stand_height_type arg)
  {
    msg_.stand_height = std::move(arg);
    return Init_McBodyPose_bend_forward(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_source
{
public:
  explicit Init_McBodyPose_source(::aimdk_msgs::msg::McBodyPose & msg)
  : msg_(msg)
  {}
  Init_McBodyPose_stand_height source(::aimdk_msgs::msg::McBodyPose::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_McBodyPose_stand_height(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

class Init_McBodyPose_header
{
public:
  Init_McBodyPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McBodyPose_source header(::aimdk_msgs::msg::McBodyPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_McBodyPose_source(msg_);
  }

private:
  ::aimdk_msgs::msg::McBodyPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McBodyPose>()
{
  return aimdk_msgs::msg::builder::Init_McBodyPose_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__BUILDER_HPP_
