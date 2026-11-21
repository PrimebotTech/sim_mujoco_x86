// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hds_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hds_msgs/msg/detail/exception__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hds_msgs
{

namespace msg
{

namespace builder
{

class Init_Exception_info
{
public:
  explicit Init_Exception_info(::hds_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  ::hds_msgs::msg::Exception info(::hds_msgs::msg::Exception::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hds_msgs::msg::Exception msg_;
};

class Init_Exception_code
{
public:
  explicit Init_Exception_code(::hds_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  Init_Exception_info code(::hds_msgs::msg::Exception::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Exception_info(msg_);
  }

private:
  ::hds_msgs::msg::Exception msg_;
};

class Init_Exception_module_id
{
public:
  explicit Init_Exception_module_id(::hds_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  Init_Exception_code module_id(::hds_msgs::msg::Exception::_module_id_type arg)
  {
    msg_.module_id = std::move(arg);
    return Init_Exception_code(msg_);
  }

private:
  ::hds_msgs::msg::Exception msg_;
};

class Init_Exception_type
{
public:
  explicit Init_Exception_type(::hds_msgs::msg::Exception & msg)
  : msg_(msg)
  {}
  Init_Exception_module_id type(::hds_msgs::msg::Exception::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Exception_module_id(msg_);
  }

private:
  ::hds_msgs::msg::Exception msg_;
};

class Init_Exception_timestamp
{
public:
  Init_Exception_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Exception_type timestamp(::hds_msgs::msg::Exception::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Exception_type(msg_);
  }

private:
  ::hds_msgs::msg::Exception msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hds_msgs::msg::Exception>()
{
  return hds_msgs::msg::builder::Init_Exception_timestamp();
}

}  // namespace hds_msgs

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION__BUILDER_HPP_
