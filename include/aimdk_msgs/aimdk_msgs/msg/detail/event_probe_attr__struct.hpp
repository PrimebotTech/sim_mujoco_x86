// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/EventProbeAttr.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__EventProbeAttr __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__EventProbeAttr __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventProbeAttr_
{
  using Type = EventProbeAttr_<ContainerAllocator>;

  explicit EventProbeAttr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->type = 0;
      this->value_int = 0ll;
      this->value_double = 0.0;
      this->value_string = "";
      this->value_bool = false;
    }
  }

  explicit EventProbeAttr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    value_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->type = 0;
      this->value_int = 0ll;
      this->value_double = 0.0;
      this->value_string = "";
      this->value_bool = false;
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _type_type =
    uint8_t;
  _type_type type;
  using _value_int_type =
    int64_t;
  _value_int_type value_int;
  using _value_double_type =
    double;
  _value_double_type value_double;
  using _value_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_string_type value_string;
  using _value_bool_type =
    bool;
  _value_bool_type value_bool;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value_int(
    const int64_t & _arg)
  {
    this->value_int = _arg;
    return *this;
  }
  Type & set__value_double(
    const double & _arg)
  {
    this->value_double = _arg;
    return *this;
  }
  Type & set__value_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value_string = _arg;
    return *this;
  }
  Type & set__value_bool(
    const bool & _arg)
  {
    this->value_bool = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EA_TYPE_DOUBLE =
    0u;
  static constexpr uint8_t EA_TYPE_INT =
    1u;
  static constexpr uint8_t EA_TYPE_STRING =
    2u;
  static constexpr uint8_t EA_TYPE_BOOL =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__EventProbeAttr
    std::shared_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__EventProbeAttr
    std::shared_ptr<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventProbeAttr_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->value_int != other.value_int) {
      return false;
    }
    if (this->value_double != other.value_double) {
      return false;
    }
    if (this->value_string != other.value_string) {
      return false;
    }
    if (this->value_bool != other.value_bool) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventProbeAttr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventProbeAttr_

// alias to use template instance with default allocator
using EventProbeAttr =
  aimdk_msgs::msg::EventProbeAttr_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeAttr_<ContainerAllocator>::EA_TYPE_DOUBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeAttr_<ContainerAllocator>::EA_TYPE_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeAttr_<ContainerAllocator>::EA_TYPE_STRING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeAttr_<ContainerAllocator>::EA_TYPE_BOOL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_ATTR__STRUCT_HPP_
