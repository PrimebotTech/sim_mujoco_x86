// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GetMusicList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/get_music_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMusicList_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMusicList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMusicList_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::GetMusicList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMusicList_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMusicList_Request>()
{
  return "aimdk_msgs::srv::GetMusicList_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMusicList_Request>()
{
  return "aimdk_msgs/srv/GetMusicList_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMusicList_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMusicList_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetMusicList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'music_list'
#include "aimdk_msgs/msg/detail/music_info__traits.hpp"
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMusicList_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: music_list
  {
    if (msg.music_list.size() == 0) {
      out << "music_list: []";
    } else {
      out << "music_list: [";
      size_t pending_items = msg.music_list.size();
      for (auto item : msg.music_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_index
  {
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMusicList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: music_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.music_list.size() == 0) {
      out << "music_list: []\n";
    } else {
      out << "music_list:\n";
      for (auto item : msg.music_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: current_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_index, out);
    out << "\n";
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMusicList_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::GetMusicList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMusicList_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMusicList_Response>()
{
  return "aimdk_msgs::srv::GetMusicList_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMusicList_Response>()
{
  return "aimdk_msgs/srv/GetMusicList_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMusicList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMusicList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GetMusicList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GetMusicList>()
{
  return "aimdk_msgs::srv::GetMusicList";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMusicList>()
{
  return "aimdk_msgs/srv/GetMusicList";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMusicList>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GetMusicList_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GetMusicList_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMusicList>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GetMusicList_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GetMusicList_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GetMusicList>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GetMusicList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GetMusicList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__TRAITS_HPP_
