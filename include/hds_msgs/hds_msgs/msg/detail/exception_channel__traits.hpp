// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__TRAITS_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hds_msgs/msg/detail/exception_channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'exception_list'
#include "hds_msgs/msg/detail/exception__traits.hpp"

namespace hds_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExceptionChannel & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: exception_list
  {
    if (msg.exception_list.size() == 0) {
      out << "exception_list: []";
    } else {
      out << "exception_list: [";
      size_t pending_items = msg.exception_list.size();
      for (auto item : msg.exception_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExceptionChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: exception_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exception_list.size() == 0) {
      out << "exception_list: []\n";
    } else {
      out << "exception_list:\n";
      for (auto item : msg.exception_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExceptionChannel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hds_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hds_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hds_msgs::msg::ExceptionChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  hds_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hds_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hds_msgs::msg::ExceptionChannel & msg)
{
  return hds_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hds_msgs::msg::ExceptionChannel>()
{
  return "hds_msgs::msg::ExceptionChannel";
}

template<>
inline const char * name<hds_msgs::msg::ExceptionChannel>()
{
  return "hds_msgs/msg/ExceptionChannel";
}

template<>
struct has_fixed_size<hds_msgs::msg::ExceptionChannel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hds_msgs::msg::ExceptionChannel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hds_msgs::msg::ExceptionChannel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__TRAITS_HPP_
