// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/McMotionRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/mc_motion_record__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_McMotionRecord_Request_file_name
{
public:
  explicit Init_McMotionRecord_Request_file_name(::aimdk_msgs::srv::McMotionRecord_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::McMotionRecord_Request file_name(::aimdk_msgs::srv::McMotionRecord_Request::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

class Init_McMotionRecord_Request_folder_path
{
public:
  explicit Init_McMotionRecord_Request_folder_path(::aimdk_msgs::srv::McMotionRecord_Request & msg)
  : msg_(msg)
  {}
  Init_McMotionRecord_Request_file_name folder_path(::aimdk_msgs::srv::McMotionRecord_Request::_folder_path_type arg)
  {
    msg_.folder_path = std::move(arg);
    return Init_McMotionRecord_Request_file_name(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

class Init_McMotionRecord_Request_max_duration
{
public:
  explicit Init_McMotionRecord_Request_max_duration(::aimdk_msgs::srv::McMotionRecord_Request & msg)
  : msg_(msg)
  {}
  Init_McMotionRecord_Request_folder_path max_duration(::aimdk_msgs::srv::McMotionRecord_Request::_max_duration_type arg)
  {
    msg_.max_duration = std::move(arg);
    return Init_McMotionRecord_Request_folder_path(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

class Init_McMotionRecord_Request_operation_type
{
public:
  explicit Init_McMotionRecord_Request_operation_type(::aimdk_msgs::srv::McMotionRecord_Request & msg)
  : msg_(msg)
  {}
  Init_McMotionRecord_Request_max_duration operation_type(::aimdk_msgs::srv::McMotionRecord_Request::_operation_type_type arg)
  {
    msg_.operation_type = std::move(arg);
    return Init_McMotionRecord_Request_max_duration(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

class Init_McMotionRecord_Request_record_area
{
public:
  explicit Init_McMotionRecord_Request_record_area(::aimdk_msgs::srv::McMotionRecord_Request & msg)
  : msg_(msg)
  {}
  Init_McMotionRecord_Request_operation_type record_area(::aimdk_msgs::srv::McMotionRecord_Request::_record_area_type arg)
  {
    msg_.record_area = std::move(arg);
    return Init_McMotionRecord_Request_operation_type(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

class Init_McMotionRecord_Request_request
{
public:
  Init_McMotionRecord_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McMotionRecord_Request_record_area request(::aimdk_msgs::srv::McMotionRecord_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_McMotionRecord_Request_record_area(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::McMotionRecord_Request>()
{
  return aimdk_msgs::srv::builder::Init_McMotionRecord_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_McMotionRecord_Response_response
{
public:
  Init_McMotionRecord_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::McMotionRecord_Response response(::aimdk_msgs::srv::McMotionRecord_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::McMotionRecord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::McMotionRecord_Response>()
{
  return aimdk_msgs::srv::builder::Init_McMotionRecord_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__BUILDER_HPP_
