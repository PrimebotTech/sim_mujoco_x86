// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McMotion_intr_info
{
public:
  explicit Init_McMotion_intr_info(::aimdk_msgs::msg::McMotion & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McMotion intr_info(::aimdk_msgs::msg::McMotion::_intr_info_type arg)
  {
    msg_.intr_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotion msg_;
};

class Init_McMotion_type
{
public:
  explicit Init_McMotion_type(::aimdk_msgs::msg::McMotion & msg)
  : msg_(msg)
  {}
  Init_McMotion_intr_info type(::aimdk_msgs::msg::McMotion::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_McMotion_intr_info(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotion msg_;
};

class Init_McMotion_tag
{
public:
  Init_McMotion_tag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McMotion_type tag(::aimdk_msgs::msg::McMotion::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_McMotion_type(msg_);
  }

private:
  ::aimdk_msgs::msg::McMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McMotion>()
{
  return aimdk_msgs::msg::builder::Init_McMotion_tag();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION__BUILDER_HPP_
