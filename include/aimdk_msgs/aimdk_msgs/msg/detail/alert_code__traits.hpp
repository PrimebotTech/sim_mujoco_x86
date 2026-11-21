// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/alert_code__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlertCode & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: appeared_timestamp
  {
    out << "appeared_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.appeared_timestamp, out);
    out << ", ";
  }

  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: alert_event_type
  {
    out << "alert_event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_event_type, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: is_audio_cycle
  {
    out << "is_audio_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_audio_cycle, out);
    out << ", ";
  }

  // member: light_msg
  {
    out << "light_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.light_msg, out);
    out << ", ";
  }

  // member: emotion_id
  {
    out << "emotion_id: ";
    rosidl_generator_traits::value_to_yaml(msg.emotion_id, out);
    out << ", ";
  }

  // member: post_process
  {
    out << "post_process: ";
    rosidl_generator_traits::value_to_yaml(msg.post_process, out);
    out << ", ";
  }

  // member: app_show_id
  {
    out << "app_show_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_show_id, out);
    out << ", ";
  }

  // member: breakdown_msg
  {
    out << "breakdown_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.breakdown_msg, out);
    out << ", ";
  }

  // member: capability_limit
  {
    out << "capability_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.capability_limit, out);
    out << ", ";
  }

  // member: diag_name
  {
    out << "diag_name: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_name, out);
    out << ", ";
  }

  // member: audio_strategy
  {
    out << "audio_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_strategy, out);
    out << ", ";
  }

  // member: disabled_capabilities
  {
    if (msg.disabled_capabilities.size() == 0) {
      out << "disabled_capabilities: []";
    } else {
      out << "disabled_capabilities: [";
      size_t pending_items = msg.disabled_capabilities.size();
      for (auto item : msg.disabled_capabilities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nlg_scene_id
  {
    out << "nlg_scene_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nlg_scene_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlertCode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: appeared_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "appeared_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.appeared_timestamp, out);
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

  // member: alert_event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_event_type, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: is_audio_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_audio_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_audio_cycle, out);
    out << "\n";
  }

  // member: light_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.light_msg, out);
    out << "\n";
  }

  // member: emotion_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emotion_id: ";
    rosidl_generator_traits::value_to_yaml(msg.emotion_id, out);
    out << "\n";
  }

  // member: post_process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "post_process: ";
    rosidl_generator_traits::value_to_yaml(msg.post_process, out);
    out << "\n";
  }

  // member: app_show_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_show_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_show_id, out);
    out << "\n";
  }

  // member: breakdown_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "breakdown_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.breakdown_msg, out);
    out << "\n";
  }

  // member: capability_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capability_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.capability_limit, out);
    out << "\n";
  }

  // member: diag_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_name: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_name, out);
    out << "\n";
  }

  // member: audio_strategy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_strategy, out);
    out << "\n";
  }

  // member: disabled_capabilities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disabled_capabilities.size() == 0) {
      out << "disabled_capabilities: []\n";
    } else {
      out << "disabled_capabilities:\n";
      for (auto item : msg.disabled_capabilities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nlg_scene_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nlg_scene_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nlg_scene_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlertCode & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::AlertCode & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::AlertCode & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::AlertCode>()
{
  return "aimdk_msgs::msg::AlertCode";
}

template<>
inline const char * name<aimdk_msgs::msg::AlertCode>()
{
  return "aimdk_msgs/msg/AlertCode";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::AlertCode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::AlertCode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::AlertCode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__TRAITS_HPP_
