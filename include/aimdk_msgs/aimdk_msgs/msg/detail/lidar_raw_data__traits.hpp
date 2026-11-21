// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/LidarRawData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/lidar_raw_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LidarRawData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: msop_data
  {
    if (msg.msop_data.size() == 0) {
      out << "msop_data: []";
    } else {
      out << "msop_data: [";
      size_t pending_items = msg.msop_data.size();
      for (auto item : msg.msop_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: difop_data
  {
    if (msg.difop_data.size() == 0) {
      out << "difop_data: []";
    } else {
      out << "difop_data: [";
      size_t pending_items = msg.difop_data.size();
      for (auto item : msg.difop_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const LidarRawData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: msop_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.msop_data.size() == 0) {
      out << "msop_data: []\n";
    } else {
      out << "msop_data:\n";
      for (auto item : msg.msop_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: difop_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.difop_data.size() == 0) {
      out << "difop_data: []\n";
    } else {
      out << "difop_data:\n";
      for (auto item : msg.difop_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LidarRawData & msg, bool use_flow_style = false)
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

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::msg::LidarRawData & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::LidarRawData & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::LidarRawData>()
{
  return "aimdk_msgs::msg::LidarRawData";
}

template<>
inline const char * name<aimdk_msgs::msg::LidarRawData>()
{
  return "aimdk_msgs/msg/LidarRawData";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::LidarRawData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::LidarRawData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::LidarRawData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__TRAITS_HPP_
