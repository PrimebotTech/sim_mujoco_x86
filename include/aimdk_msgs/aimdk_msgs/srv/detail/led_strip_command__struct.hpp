// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/LedStripCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__LedStripCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__LedStripCommand_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedStripCommand_Request_
{
  using Type = LedStripCommand_Request_<ContainerAllocator>;

  explicit LedStripCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_strip_mode = 0;
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->period = 0;
    }
  }

  explicit LedStripCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_strip_mode = 0;
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->period = 0;
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _led_strip_mode_type =
    uint8_t;
  _led_strip_mode_type led_strip_mode;
  using _r_type =
    uint8_t;
  _r_type r;
  using _g_type =
    uint8_t;
  _g_type g;
  using _b_type =
    uint8_t;
  _b_type b;
  using _period_type =
    uint16_t;
  _period_type period;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__led_strip_mode(
    const uint8_t & _arg)
  {
    this->led_strip_mode = _arg;
    return *this;
  }
  Type & set__r(
    const uint8_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const uint8_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const uint8_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__period(
    const uint16_t & _arg)
  {
    this->period = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LED_ALL_OFF =
    0u;
  static constexpr uint8_t LED_GREEN_FLOW =
    1u;
  static constexpr uint8_t LED_RAINBOW =
    2u;
  static constexpr uint8_t LED_DANCING =
    3u;
  static constexpr uint8_t LED_TWINKLE =
    4u;
  static constexpr uint8_t LED_TAIL_INCREASE =
    5u;
  static constexpr uint8_t LED_TAIL_DECREASE =
    6u;
  static constexpr uint8_t LED_FOUR_TO_TWO_LEGS =
    7u;
  static constexpr uint8_t LED_TWO_TO_FOUR_LEGS =
    8u;
  static constexpr uint8_t LED_START_UP =
    9u;
  static constexpr uint8_t LED_DISPLAY_CHARGING =
    10u;
  static constexpr uint8_t LED_DISPLAY_FAULT =
    11u;
  static constexpr uint8_t LED_DISPLAY_25_LOW_BATTERY =
    12u;
  static constexpr uint8_t LED_DISPLAY_15_LOW_BATTERY =
    13u;
  static constexpr uint8_t LED_DISPLAY_POWER_OFF =
    14u;
  static constexpr uint8_t LED_DISPLAY_POWER_ON =
    15u;
  static constexpr uint8_t LED_WHITE_FLOW =
    16u;
  static constexpr uint8_t LED_WHITE_ON =
    17u;
  static constexpr uint8_t LED_DISPLAY_25_LOW_TRANSFORM =
    18u;
  static constexpr uint8_t LED_DISPLAY_15_LOW_TRANSFORM =
    19u;
  static constexpr uint8_t LED_WHITE_BREATH =
    20u;
  static constexpr uint8_t LED_CUSTOM_BREATH =
    254u;
  static constexpr uint8_t LED_CUSTOM_BLINK =
    255u;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__LedStripCommand_Request
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__LedStripCommand_Request
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStripCommand_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->led_strip_mode != other.led_strip_mode) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStripCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStripCommand_Request_

// alias to use template instance with default allocator
using LedStripCommand_Request =
  aimdk_msgs::srv::LedStripCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_ALL_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_GREEN_FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_RAINBOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DANCING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_TWINKLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_TAIL_INCREASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_TAIL_DECREASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_FOUR_TO_TWO_LEGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_TWO_TO_FOUR_LEGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_START_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_25_LOW_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_15_LOW_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_POWER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_POWER_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_WHITE_FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_WHITE_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_25_LOW_TRANSFORM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_DISPLAY_15_LOW_TRANSFORM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_WHITE_BREATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_CUSTOM_BREATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedStripCommand_Request_<ContainerAllocator>::LED_CUSTOM_BLINK;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__LedStripCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__LedStripCommand_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedStripCommand_Response_
{
  using Type = LedStripCommand_Response_<ContainerAllocator>;

  explicit LedStripCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LedStripCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _header_type header;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__LedStripCommand_Response
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__LedStripCommand_Response
    std::shared_ptr<aimdk_msgs::srv::LedStripCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStripCommand_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStripCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStripCommand_Response_

// alias to use template instance with default allocator
using LedStripCommand_Response =
  aimdk_msgs::srv::LedStripCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct LedStripCommand
{
  using Request = aimdk_msgs::srv::LedStripCommand_Request;
  using Response = aimdk_msgs::srv::LedStripCommand_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_HPP_
