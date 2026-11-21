// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hds_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hds_msgs/msg/detail/exception__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hds_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Exception & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: module_id
  {
    out << "module_id: ";
    rosidl_generator_traits::value_to_yaml(msg.module_id, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Exception & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: module_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_id: ";
    rosidl_generator_traits::value_to_yaml(msg.module_id, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Exception & msg, bool use_flow_style = false)
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
  const hds_msgs::msg::Exception & msg,
  std::ostream & out, size_t indentation = 0)
{
  hds_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hds_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hds_msgs::msg::Exception & msg)
{
  return hds_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hds_msgs::msg::Exception>()
{
  return "hds_msgs::msg::Exception";
}

template<>
inline const char * name<hds_msgs::msg::Exception>()
{
  return "hds_msgs/msg/Exception";
}

template<>
struct has_fixed_size<hds_msgs::msg::Exception>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hds_msgs::msg::Exception>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hds_msgs::msg::Exception>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION__TRAITS_HPP_
