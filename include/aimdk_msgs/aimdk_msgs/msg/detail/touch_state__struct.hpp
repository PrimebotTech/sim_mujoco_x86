// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/TouchState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__TouchState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__TouchState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TouchState_
{
  using Type = TouchState_<ContainerAllocator>;

  explicit TouchState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->event_type = 0;
    }
  }

  explicit TouchState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->event_type = 0;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    uint8_t;
  _sensor_id_type sensor_id;
  using _event_type_type =
    uint8_t;
  _event_type_type event_type;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const uint8_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__event_type(
    const uint8_t & _arg)
  {
    this->event_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TOUCH_EVENT_NONE =
    0u;
  static constexpr uint8_t TOUCH_EVENT_SINGLE_CLICK =
    1u;
  static constexpr uint8_t TOUCH_EVENT_DOUBLE_CLICK =
    2u;
  static constexpr uint8_t TOUCH_EVENT_TRIPLE_CLICK =
    3u;
  static constexpr uint8_t TOUCH_EVENT_QUADRUPLE_CLICK =
    4u;
  static constexpr uint8_t TOUCH_EVENT_QUINTUPLE_CLICK =
    5u;
  static constexpr uint8_t TOUCH_EVENT_SEXTUPLE_CLICK =
    6u;
  static constexpr uint8_t TOUCH_EVENT_MULTI_CLICK =
    7u;
  static constexpr uint8_t TOUCH_EVENT_SLIDE_LEFT =
    8u;
  static constexpr uint8_t TOUCH_EVENT_SLIDE_RIGHT =
    9u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::TouchState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::TouchState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::TouchState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::TouchState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__TouchState
    std::shared_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__TouchState
    std::shared_ptr<aimdk_msgs::msg::TouchState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TouchState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->event_type != other.event_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const TouchState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TouchState_

// alias to use template instance with default allocator
using TouchState =
  aimdk_msgs::msg::TouchState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_SINGLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_DOUBLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_TRIPLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_QUADRUPLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_QUINTUPLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_SEXTUPLE_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_MULTI_CLICK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_SLIDE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TouchState_<ContainerAllocator>::TOUCH_EVENT_SLIDE_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_HPP_
