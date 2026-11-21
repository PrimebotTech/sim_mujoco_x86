// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from joint:msg/State.idl
// generated code does not contain a copyright notice

#ifndef JOINT__MSG__DETAIL__STATE__TRAITS_HPP_
#define JOINT__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "joint/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace joint
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: sequence
  {
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: effort
  {
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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

}  // namespace joint

namespace rosidl_generator_traits
{

[[deprecated("use joint::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const joint::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  joint::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use joint::msg::to_yaml() instead")]]
inline std::string to_yaml(const joint::msg::State & msg)
{
  return joint::msg::to_yaml(msg);
}

template<>
inline const char * data_type<joint::msg::State>()
{
  return "joint::msg::State";
}

template<>
inline const char * name<joint::msg::State>()
{
  return "joint/msg/State";
}

template<>
struct has_fixed_size<joint::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<joint::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<joint::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JOINT__MSG__DETAIL__STATE__TRAITS_HPP_
