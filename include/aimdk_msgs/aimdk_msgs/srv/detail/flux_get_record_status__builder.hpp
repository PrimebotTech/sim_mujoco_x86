// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/FluxGetRecordStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/flux_get_record_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxGetRecordStatus_Request>()
{
  return ::aimdk_msgs::srv::FluxGetRecordStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_FluxGetRecordStatus_Response_source
{
public:
  explicit Init_FluxGetRecordStatus_Response_source(::aimdk_msgs::srv::FluxGetRecordStatus_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::FluxGetRecordStatus_Response source(::aimdk_msgs::srv::FluxGetRecordStatus_Response::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxGetRecordStatus_Response msg_;
};

class Init_FluxGetRecordStatus_Response_duration_sec
{
public:
  explicit Init_FluxGetRecordStatus_Response_duration_sec(::aimdk_msgs::srv::FluxGetRecordStatus_Response & msg)
  : msg_(msg)
  {}
  Init_FluxGetRecordStatus_Response_source duration_sec(::aimdk_msgs::srv::FluxGetRecordStatus_Response::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return Init_FluxGetRecordStatus_Response_source(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxGetRecordStatus_Response msg_;
};

class Init_FluxGetRecordStatus_Response_recording
{
public:
  Init_FluxGetRecordStatus_Response_recording()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FluxGetRecordStatus_Response_duration_sec recording(::aimdk_msgs::srv::FluxGetRecordStatus_Response::_recording_type arg)
  {
    msg_.recording = std::move(arg);
    return Init_FluxGetRecordStatus_Response_duration_sec(msg_);
  }

private:
  ::aimdk_msgs::srv::FluxGetRecordStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::FluxGetRecordStatus_Response>()
{
  return aimdk_msgs::srv::builder::Init_FluxGetRecordStatus_Response_recording();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_GET_RECORD_STATUS__BUILDER_HPP_
