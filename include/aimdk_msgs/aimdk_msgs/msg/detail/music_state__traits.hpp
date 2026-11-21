// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/music_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MusicState & msg,
  std::ostream & out)
{
  out << "{";
  // member: control_command_id
  {
    out << "control_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_id, out);
    out << ", ";
  }

  // member: playback_state
  {
    out << "playback_state: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_state, out);
    out << ", ";
  }

  // member: song_name
  {
    out << "song_name: ";
    rosidl_generator_traits::value_to_yaml(msg.song_name, out);
    out << ", ";
  }

  // member: artist
  {
    if (msg.artist.size() == 0) {
      out << "artist: []";
    } else {
      out << "artist: [";
      size_t pending_items = msg.artist.size();
      for (auto item : msg.artist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_duration
  {
    out << "total_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.total_duration, out);
    out << ", ";
  }

  // member: current_time
  {
    out << "current_time: ";
    rosidl_generator_traits::value_to_yaml(msg.current_time, out);
    out << ", ";
  }

  // member: vip_song
  {
    out << "vip_song: ";
    rosidl_generator_traits::value_to_yaml(msg.vip_song, out);
    out << ", ";
  }

  // member: trail
  {
    out << "trail: ";
    rosidl_generator_traits::value_to_yaml(msg.trail, out);
    out << ", ";
  }

  // member: playable_code
  {
    out << "playable_code: ";
    rosidl_generator_traits::value_to_yaml(msg.playable_code, out);
    out << ", ";
  }

  // member: qualities
  {
    if (msg.qualities.size() == 0) {
      out << "qualities: []";
    } else {
      out << "qualities: [";
      size_t pending_items = msg.qualities.size();
      for (auto item : msg.qualities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quality_index
  {
    out << "quality_index: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_index, out);
    out << ", ";
  }

  // member: search_command_id
  {
    out << "search_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.search_command_id, out);
    out << ", ";
  }

  // member: song_list_name
  {
    out << "song_list_name: ";
    rosidl_generator_traits::value_to_yaml(msg.song_list_name, out);
    out << ", ";
  }

  // member: song_list_size
  {
    out << "song_list_size: ";
    rosidl_generator_traits::value_to_yaml(msg.song_list_size, out);
    out << ", ";
  }

  // member: playback_index
  {
    out << "playback_index: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_index, out);
    out << ", ";
  }

  // member: sp
  {
    out << "sp: ";
    rosidl_generator_traits::value_to_yaml(msg.sp, out);
    out << ", ";
  }

  // member: search_resp_status
  {
    out << "search_resp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_status, out);
    out << ", ";
  }

  // member: search_resp_tts_text
  {
    out << "search_resp_tts_text: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_tts_text, out);
    out << ", ";
  }

  // member: search_resp_code
  {
    out << "search_resp_code: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_code, out);
    out << ", ";
  }

  // member: url_resp_warning
  {
    out << "url_resp_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.url_resp_warning, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MusicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_id, out);
    out << "\n";
  }

  // member: playback_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playback_state: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_state, out);
    out << "\n";
  }

  // member: song_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "song_name: ";
    rosidl_generator_traits::value_to_yaml(msg.song_name, out);
    out << "\n";
  }

  // member: artist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.artist.size() == 0) {
      out << "artist: []\n";
    } else {
      out << "artist:\n";
      for (auto item : msg.artist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: total_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.total_duration, out);
    out << "\n";
  }

  // member: current_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_time: ";
    rosidl_generator_traits::value_to_yaml(msg.current_time, out);
    out << "\n";
  }

  // member: vip_song
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vip_song: ";
    rosidl_generator_traits::value_to_yaml(msg.vip_song, out);
    out << "\n";
  }

  // member: trail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trail: ";
    rosidl_generator_traits::value_to_yaml(msg.trail, out);
    out << "\n";
  }

  // member: playable_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playable_code: ";
    rosidl_generator_traits::value_to_yaml(msg.playable_code, out);
    out << "\n";
  }

  // member: qualities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qualities.size() == 0) {
      out << "qualities: []\n";
    } else {
      out << "qualities:\n";
      for (auto item : msg.qualities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quality_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_index: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_index, out);
    out << "\n";
  }

  // member: search_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.search_command_id, out);
    out << "\n";
  }

  // member: song_list_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "song_list_name: ";
    rosidl_generator_traits::value_to_yaml(msg.song_list_name, out);
    out << "\n";
  }

  // member: song_list_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "song_list_size: ";
    rosidl_generator_traits::value_to_yaml(msg.song_list_size, out);
    out << "\n";
  }

  // member: playback_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playback_index: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_index, out);
    out << "\n";
  }

  // member: sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sp: ";
    rosidl_generator_traits::value_to_yaml(msg.sp, out);
    out << "\n";
  }

  // member: search_resp_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_resp_status: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_status, out);
    out << "\n";
  }

  // member: search_resp_tts_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_resp_tts_text: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_tts_text, out);
    out << "\n";
  }

  // member: search_resp_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_resp_code: ";
    rosidl_generator_traits::value_to_yaml(msg.search_resp_code, out);
    out << "\n";
  }

  // member: url_resp_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url_resp_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.url_resp_warning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MusicState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::MusicState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::MusicState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::MusicState>()
{
  return "aimdk_msgs::msg::MusicState";
}

template<>
inline const char * name<aimdk_msgs::msg::MusicState>()
{
  return "aimdk_msgs/msg/MusicState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::MusicState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::MusicState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::MusicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_STATE__TRAITS_HPP_
