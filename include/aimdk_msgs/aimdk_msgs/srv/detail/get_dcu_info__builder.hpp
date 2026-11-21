// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetDcuInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_dcu_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDcuInfo_Request_request
{
public:
  Init_GetDcuInfo_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetDcuInfo_Request request(::aimdk_msgs::srv::GetDcuInfo_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetDcuInfo_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetDcuInfo_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDcuInfo_Response_safedcu_build_time
{
public:
  explicit Init_GetDcuInfo_Response_safedcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetDcuInfo_Response safedcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response::_safedcu_build_time_type arg)
  {
    msg_.safedcu_build_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_safedcu_hw_ver
{
public:
  explicit Init_GetDcuInfo_Response_safedcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_safedcu_build_time safedcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_safedcu_hw_ver_type arg)
  {
    msg_.safedcu_hw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_safedcu_build_time(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_safedcu_fw_ver
{
public:
  explicit Init_GetDcuInfo_Response_safedcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_safedcu_hw_ver safedcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_safedcu_fw_ver_type arg)
  {
    msg_.safedcu_fw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_safedcu_hw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_ddcu_build_time
{
public:
  explicit Init_GetDcuInfo_Response_ddcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_safedcu_fw_ver ddcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response::_ddcu_build_time_type arg)
  {
    msg_.ddcu_build_time = std::move(arg);
    return Init_GetDcuInfo_Response_safedcu_fw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_ddcu_hw_ver
{
public:
  explicit Init_GetDcuInfo_Response_ddcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_ddcu_build_time ddcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_ddcu_hw_ver_type arg)
  {
    msg_.ddcu_hw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_ddcu_build_time(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_ddcu_fw_ver
{
public:
  explicit Init_GetDcuInfo_Response_ddcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_ddcu_hw_ver ddcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_ddcu_fw_ver_type arg)
  {
    msg_.ddcu_fw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_ddcu_hw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_udcu_build_time
{
public:
  explicit Init_GetDcuInfo_Response_udcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_ddcu_fw_ver udcu_build_time(::aimdk_msgs::srv::GetDcuInfo_Response::_udcu_build_time_type arg)
  {
    msg_.udcu_build_time = std::move(arg);
    return Init_GetDcuInfo_Response_ddcu_fw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_udcu_hw_ver
{
public:
  explicit Init_GetDcuInfo_Response_udcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_udcu_build_time udcu_hw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_udcu_hw_ver_type arg)
  {
    msg_.udcu_hw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_udcu_build_time(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_udcu_fw_ver
{
public:
  explicit Init_GetDcuInfo_Response_udcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDcuInfo_Response_udcu_hw_ver udcu_fw_ver(::aimdk_msgs::srv::GetDcuInfo_Response::_udcu_fw_ver_type arg)
  {
    msg_.udcu_fw_ver = std::move(arg);
    return Init_GetDcuInfo_Response_udcu_hw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

class Init_GetDcuInfo_Response_response
{
public:
  Init_GetDcuInfo_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDcuInfo_Response_udcu_fw_ver response(::aimdk_msgs::srv::GetDcuInfo_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetDcuInfo_Response_udcu_fw_ver(msg_);
  }

private:
  ::aimdk_msgs::srv::GetDcuInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetDcuInfo_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetDcuInfo_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__BUILDER_HPP_
