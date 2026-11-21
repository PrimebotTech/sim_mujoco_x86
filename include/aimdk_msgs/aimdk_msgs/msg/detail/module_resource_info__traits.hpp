// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/module_resource_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rpc_clients'
// Member 'rpc_services'
#include "aimdk_msgs/msg/detail/module_rpc_info__traits.hpp"
// Member 'pub_channels'
// Member 'sub_channels'
#include "aimdk_msgs/msg/detail/module_channel_info__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ModuleResourceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: module_name
  {
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
    out << ", ";
  }

  // member: rpc_clients
  {
    if (msg.rpc_clients.size() == 0) {
      out << "rpc_clients: []";
    } else {
      out << "rpc_clients: [";
      size_t pending_items = msg.rpc_clients.size();
      for (auto item : msg.rpc_clients) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpc_services
  {
    if (msg.rpc_services.size() == 0) {
      out << "rpc_services: []";
    } else {
      out << "rpc_services: [";
      size_t pending_items = msg.rpc_services.size();
      for (auto item : msg.rpc_services) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pub_channels
  {
    if (msg.pub_channels.size() == 0) {
      out << "pub_channels: []";
    } else {
      out << "pub_channels: [";
      size_t pending_items = msg.pub_channels.size();
      for (auto item : msg.pub_channels) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sub_channels
  {
    if (msg.sub_channels.size() == 0) {
      out << "sub_channels: []";
    } else {
      out << "sub_channels: [";
      size_t pending_items = msg.sub_channels.size();
      for (auto item : msg.sub_channels) {
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
  const ModuleResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module_name: ";
    rosidl_generator_traits::value_to_yaml(msg.module_name, out);
    out << "\n";
  }

  // member: rpc_clients
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpc_clients.size() == 0) {
      out << "rpc_clients: []\n";
    } else {
      out << "rpc_clients:\n";
      for (auto item : msg.rpc_clients) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rpc_services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpc_services.size() == 0) {
      out << "rpc_services: []\n";
    } else {
      out << "rpc_services:\n";
      for (auto item : msg.rpc_services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pub_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pub_channels.size() == 0) {
      out << "pub_channels: []\n";
    } else {
      out << "pub_channels:\n";
      for (auto item : msg.pub_channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sub_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sub_channels.size() == 0) {
      out << "sub_channels: []\n";
    } else {
      out << "sub_channels:\n";
      for (auto item : msg.sub_channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModuleResourceInfo & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::ModuleResourceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::ModuleResourceInfo & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::ModuleResourceInfo>()
{
  return "aimdk_msgs::msg::ModuleResourceInfo";
}

template<>
inline const char * name<aimdk_msgs::msg::ModuleResourceInfo>()
{
  return "aimdk_msgs/msg/ModuleResourceInfo";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::ModuleResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::ModuleResourceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::ModuleResourceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__TRAITS_HPP_
