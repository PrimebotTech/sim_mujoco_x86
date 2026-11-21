// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/LidarRawData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/lidar_raw_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_LidarRawData_difop_data
{
public:
  explicit Init_LidarRawData_difop_data(::aimdk_msgs::msg::LidarRawData & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::LidarRawData difop_data(::aimdk_msgs::msg::LidarRawData::_difop_data_type arg)
  {
    msg_.difop_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::LidarRawData msg_;
};

class Init_LidarRawData_msop_data
{
public:
  explicit Init_LidarRawData_msop_data(::aimdk_msgs::msg::LidarRawData & msg)
  : msg_(msg)
  {}
  Init_LidarRawData_difop_data msop_data(::aimdk_msgs::msg::LidarRawData::_msop_data_type arg)
  {
    msg_.msop_data = std::move(arg);
    return Init_LidarRawData_difop_data(msg_);
  }

private:
  ::aimdk_msgs::msg::LidarRawData msg_;
};

class Init_LidarRawData_header
{
public:
  Init_LidarRawData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarRawData_msop_data header(::aimdk_msgs::msg::LidarRawData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LidarRawData_msop_data(msg_);
  }

private:
  ::aimdk_msgs::msg::LidarRawData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::LidarRawData>()
{
  return aimdk_msgs::msg::builder::Init_LidarRawData_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__BUILDER_HPP_
