// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/MotorTest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/motor_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorTest_Request_request_payload
{
public:
  explicit Init_MotorTest_Request_request_payload(::aimdk_msgs::srv::MotorTest_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::MotorTest_Request request_payload(::aimdk_msgs::srv::MotorTest_Request::_request_payload_type arg)
  {
    msg_.request_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

class Init_MotorTest_Request_payload_len
{
public:
  explicit Init_MotorTest_Request_payload_len(::aimdk_msgs::srv::MotorTest_Request & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Request_request_payload payload_len(::aimdk_msgs::srv::MotorTest_Request::_payload_len_type arg)
  {
    msg_.payload_len = std::move(arg);
    return Init_MotorTest_Request_request_payload(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

class Init_MotorTest_Request_can_id
{
public:
  explicit Init_MotorTest_Request_can_id(::aimdk_msgs::srv::MotorTest_Request & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Request_payload_len can_id(::aimdk_msgs::srv::MotorTest_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_MotorTest_Request_payload_len(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

class Init_MotorTest_Request_can_channel
{
public:
  explicit Init_MotorTest_Request_can_channel(::aimdk_msgs::srv::MotorTest_Request & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Request_can_id can_channel(::aimdk_msgs::srv::MotorTest_Request::_can_channel_type arg)
  {
    msg_.can_channel = std::move(arg);
    return Init_MotorTest_Request_can_id(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

class Init_MotorTest_Request_dcu_type
{
public:
  explicit Init_MotorTest_Request_dcu_type(::aimdk_msgs::srv::MotorTest_Request & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Request_can_channel dcu_type(::aimdk_msgs::srv::MotorTest_Request::_dcu_type_type arg)
  {
    msg_.dcu_type = std::move(arg);
    return Init_MotorTest_Request_can_channel(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

class Init_MotorTest_Request_request
{
public:
  Init_MotorTest_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorTest_Request_dcu_type request(::aimdk_msgs::srv::MotorTest_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MotorTest_Request_dcu_type(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::MotorTest_Request>()
{
  return aimdk_msgs::srv::builder::Init_MotorTest_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorTest_Response_response_payload
{
public:
  explicit Init_MotorTest_Response_response_payload(::aimdk_msgs::srv::MotorTest_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::MotorTest_Response response_payload(::aimdk_msgs::srv::MotorTest_Response::_response_payload_type arg)
  {
    msg_.response_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

class Init_MotorTest_Response_payload_len
{
public:
  explicit Init_MotorTest_Response_payload_len(::aimdk_msgs::srv::MotorTest_Response & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Response_response_payload payload_len(::aimdk_msgs::srv::MotorTest_Response::_payload_len_type arg)
  {
    msg_.payload_len = std::move(arg);
    return Init_MotorTest_Response_response_payload(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

class Init_MotorTest_Response_can_id
{
public:
  explicit Init_MotorTest_Response_can_id(::aimdk_msgs::srv::MotorTest_Response & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Response_payload_len can_id(::aimdk_msgs::srv::MotorTest_Response::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_MotorTest_Response_payload_len(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

class Init_MotorTest_Response_can_channel
{
public:
  explicit Init_MotorTest_Response_can_channel(::aimdk_msgs::srv::MotorTest_Response & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Response_can_id can_channel(::aimdk_msgs::srv::MotorTest_Response::_can_channel_type arg)
  {
    msg_.can_channel = std::move(arg);
    return Init_MotorTest_Response_can_id(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

class Init_MotorTest_Response_dcu_type
{
public:
  explicit Init_MotorTest_Response_dcu_type(::aimdk_msgs::srv::MotorTest_Response & msg)
  : msg_(msg)
  {}
  Init_MotorTest_Response_can_channel dcu_type(::aimdk_msgs::srv::MotorTest_Response::_dcu_type_type arg)
  {
    msg_.dcu_type = std::move(arg);
    return Init_MotorTest_Response_can_channel(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

class Init_MotorTest_Response_response
{
public:
  Init_MotorTest_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorTest_Response_dcu_type response(::aimdk_msgs::srv::MotorTest_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_MotorTest_Response_dcu_type(msg_);
  }

private:
  ::aimdk_msgs::srv::MotorTest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::MotorTest_Response>()
{
  return aimdk_msgs::srv::builder::Init_MotorTest_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__MOTOR_TEST__BUILDER_HPP_
