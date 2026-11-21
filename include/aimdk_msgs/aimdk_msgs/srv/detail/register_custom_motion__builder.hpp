// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/RegisterCustomMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/register_custom_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterCustomMotion_Request_write_to_disk
{
public:
  explicit Init_RegisterCustomMotion_Request_write_to_disk(::aimdk_msgs::srv::RegisterCustomMotion_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::RegisterCustomMotion_Request write_to_disk(::aimdk_msgs::srv::RegisterCustomMotion_Request::_write_to_disk_type arg)
  {
    msg_.write_to_disk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::RegisterCustomMotion_Request msg_;
};

class Init_RegisterCustomMotion_Request_res_path
{
public:
  explicit Init_RegisterCustomMotion_Request_res_path(::aimdk_msgs::srv::RegisterCustomMotion_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterCustomMotion_Request_write_to_disk res_path(::aimdk_msgs::srv::RegisterCustomMotion_Request::_res_path_type arg)
  {
    msg_.res_path = std::move(arg);
    return Init_RegisterCustomMotion_Request_write_to_disk(msg_);
  }

private:
  ::aimdk_msgs::srv::RegisterCustomMotion_Request msg_;
};

class Init_RegisterCustomMotion_Request_motion
{
public:
  Init_RegisterCustomMotion_Request_motion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterCustomMotion_Request_res_path motion(::aimdk_msgs::srv::RegisterCustomMotion_Request::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return Init_RegisterCustomMotion_Request_res_path(msg_);
  }

private:
  ::aimdk_msgs::srv::RegisterCustomMotion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::RegisterCustomMotion_Request>()
{
  return aimdk_msgs::srv::builder::Init_RegisterCustomMotion_Request_motion();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterCustomMotion_Response_response
{
public:
  Init_RegisterCustomMotion_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::RegisterCustomMotion_Response response(::aimdk_msgs::srv::RegisterCustomMotion_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::RegisterCustomMotion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::RegisterCustomMotion_Response>()
{
  return aimdk_msgs::srv::builder::Init_RegisterCustomMotion_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__BUILDER_HPP_
