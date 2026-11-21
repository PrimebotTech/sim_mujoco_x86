// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McRuntimeModel_right_hand_status
{
public:
  explicit Init_McRuntimeModel_right_hand_status(::aimdk_msgs::msg::McRuntimeModel & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McRuntimeModel right_hand_status(::aimdk_msgs::msg::McRuntimeModel::_right_hand_status_type arg)
  {
    msg_.right_hand_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McRuntimeModel msg_;
};

class Init_McRuntimeModel_left_hand_status
{
public:
  explicit Init_McRuntimeModel_left_hand_status(::aimdk_msgs::msg::McRuntimeModel & msg)
  : msg_(msg)
  {}
  Init_McRuntimeModel_right_hand_status left_hand_status(::aimdk_msgs::msg::McRuntimeModel::_left_hand_status_type arg)
  {
    msg_.left_hand_status = std::move(arg);
    return Init_McRuntimeModel_right_hand_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McRuntimeModel msg_;
};

class Init_McRuntimeModel_waist_status
{
public:
  Init_McRuntimeModel_waist_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McRuntimeModel_left_hand_status waist_status(::aimdk_msgs::msg::McRuntimeModel::_waist_status_type arg)
  {
    msg_.waist_status = std::move(arg);
    return Init_McRuntimeModel_left_hand_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McRuntimeModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McRuntimeModel>()
{
  return aimdk_msgs::msg::builder::Init_McRuntimeModel_waist_status();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__BUILDER_HPP_
