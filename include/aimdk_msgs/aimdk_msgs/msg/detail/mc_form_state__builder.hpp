// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McFormState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_form_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McFormState_current_form
{
public:
  Init_McFormState_current_form()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::msg::McFormState current_form(::aimdk_msgs::msg::McFormState::_current_form_type arg)
  {
    msg_.current_form = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McFormState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McFormState>()
{
  return aimdk_msgs::msg::builder::Init_McFormState_current_form();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_FORM_STATE__BUILDER_HPP_
