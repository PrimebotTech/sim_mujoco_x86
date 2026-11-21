// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__BUILDER_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hds_msgs/msg/detail/exception_channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hds_msgs
{

namespace msg
{

namespace builder
{

class Init_ExceptionChannel_exception_list
{
public:
  explicit Init_ExceptionChannel_exception_list(::hds_msgs::msg::ExceptionChannel & msg)
  : msg_(msg)
  {}
  ::hds_msgs::msg::ExceptionChannel exception_list(::hds_msgs::msg::ExceptionChannel::_exception_list_type arg)
  {
    msg_.exception_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hds_msgs::msg::ExceptionChannel msg_;
};

class Init_ExceptionChannel_timestamp
{
public:
  Init_ExceptionChannel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExceptionChannel_exception_list timestamp(::hds_msgs::msg::ExceptionChannel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ExceptionChannel_exception_list(msg_);
  }

private:
  ::hds_msgs::msg::ExceptionChannel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hds_msgs::msg::ExceptionChannel>()
{
  return hds_msgs::msg::builder::Init_ExceptionChannel_timestamp();
}

}  // namespace hds_msgs

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__BUILDER_HPP_
