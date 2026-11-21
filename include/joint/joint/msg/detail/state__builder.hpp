// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from joint:msg/State.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__STATE__BUILDER_HPP_
#define JOINT__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "joint/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace joint
{

namespace msg
{

namespace builder
{

class Init_State_effort
{
public:
  explicit Init_State_effort(::joint::msg::State & msg)
  : msg_(msg)
  {}
  ::joint::msg::State effort(::joint::msg::State::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::joint::msg::State msg_;
};

class Init_State_velocity
{
public:
  explicit Init_State_velocity(::joint::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_effort velocity(::joint::msg::State::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_State_effort(msg_);
  }

private:
  ::joint::msg::State msg_;
};

class Init_State_position
{
public:
  explicit Init_State_position(::joint::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_velocity position(::joint::msg::State::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_State_velocity(msg_);
  }

private:
  ::joint::msg::State msg_;
};

class Init_State_sequence
{
public:
  explicit Init_State_sequence(::joint::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_position sequence(::joint::msg::State::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_State_position(msg_);
  }

private:
  ::joint::msg::State msg_;
};

class Init_State_name
{
public:
  Init_State_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_sequence name(::joint::msg::State::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_State_sequence(msg_);
  }

private:
  ::joint::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::joint::msg::State>()
{
  return joint::msg::builder::Init_State_name();
}

}  // namespace joint

#endif  // JOINT__MSG__DETAIL__STATE__BUILDER_HPP_
