// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/joint_mit_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointMitParams_kd_min
{
public:
  explicit Init_JointMitParams_kd_min(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::JointMitParams kd_min(::aimdk_msgs::msg::JointMitParams::_kd_min_type arg)
  {
    msg_.kd_min = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_kd_max
{
public:
  explicit Init_JointMitParams_kd_max(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_kd_min kd_max(::aimdk_msgs::msg::JointMitParams::_kd_max_type arg)
  {
    msg_.kd_max = std::move(arg);
    return Init_JointMitParams_kd_min(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_kp_min
{
public:
  explicit Init_JointMitParams_kp_min(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_kd_max kp_min(::aimdk_msgs::msg::JointMitParams::_kp_min_type arg)
  {
    msg_.kp_min = std::move(arg);
    return Init_JointMitParams_kd_max(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_kp_max
{
public:
  explicit Init_JointMitParams_kp_max(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_kp_min kp_max(::aimdk_msgs::msg::JointMitParams::_kp_max_type arg)
  {
    msg_.kp_max = std::move(arg);
    return Init_JointMitParams_kp_min(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_tor_min
{
public:
  explicit Init_JointMitParams_tor_min(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_kp_max tor_min(::aimdk_msgs::msg::JointMitParams::_tor_min_type arg)
  {
    msg_.tor_min = std::move(arg);
    return Init_JointMitParams_kp_max(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_tor_max
{
public:
  explicit Init_JointMitParams_tor_max(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_tor_min tor_max(::aimdk_msgs::msg::JointMitParams::_tor_max_type arg)
  {
    msg_.tor_max = std::move(arg);
    return Init_JointMitParams_tor_min(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_vel_min
{
public:
  explicit Init_JointMitParams_vel_min(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_tor_max vel_min(::aimdk_msgs::msg::JointMitParams::_vel_min_type arg)
  {
    msg_.vel_min = std::move(arg);
    return Init_JointMitParams_tor_max(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_vel_max
{
public:
  explicit Init_JointMitParams_vel_max(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_vel_min vel_max(::aimdk_msgs::msg::JointMitParams::_vel_max_type arg)
  {
    msg_.vel_max = std::move(arg);
    return Init_JointMitParams_vel_min(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_pos_min
{
public:
  explicit Init_JointMitParams_pos_min(::aimdk_msgs::msg::JointMitParams & msg)
  : msg_(msg)
  {}
  Init_JointMitParams_vel_max pos_min(::aimdk_msgs::msg::JointMitParams::_pos_min_type arg)
  {
    msg_.pos_min = std::move(arg);
    return Init_JointMitParams_vel_max(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

class Init_JointMitParams_pos_max
{
public:
  Init_JointMitParams_pos_max()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointMitParams_pos_min pos_max(::aimdk_msgs::msg::JointMitParams::_pos_max_type arg)
  {
    msg_.pos_max = std::move(arg);
    return Init_JointMitParams_pos_min(msg_);
  }

private:
  ::aimdk_msgs::msg::JointMitParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::JointMitParams>()
{
  return aimdk_msgs::msg::builder::Init_JointMitParams_pos_max();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__BUILDER_HPP_
