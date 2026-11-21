// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/CommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__CommonState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__CommonState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommonState_
{
  using Type = CommonState_<ContainerAllocator>;

  explicit CommonState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->reason = 0ul;
    }
  }

  explicit CommonState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->reason = 0ul;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;
  using _reason_type =
    uint32_t;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__reason(
    const uint32_t & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t UNKNOWN =
    0;
  static constexpr int32_t SUCCESS =
    1;
  static constexpr int32_t FAILURE =
    2;
  static constexpr int32_t ABORTED =
    3;
  static constexpr int32_t TIMEOUT =
    4;
  static constexpr int32_t INVALID =
    5;
  static constexpr int32_t IN_MANUAL =
    6;
  static constexpr int32_t NOT_READY =
    100;
  static constexpr int32_t PENDING =
    200;
  static constexpr int32_t CREATED =
    300;
  static constexpr int32_t RUNNING =
    400;
  static constexpr uint32_t REASON_SUCCESS =
    0u;
  static constexpr uint32_t REASON_OPENBOX =
    1u;
  static constexpr uint32_t REASON_STARTUP_CHECK =
    2u;
  static constexpr uint32_t REASON_SHUTDOWN =
    3u;
  static constexpr uint32_t REASON_FROM =
    4u;
  static constexpr uint32_t REASON_LOW_BATTERY =
    5u;
  static constexpr uint32_t REASON_CHARGE =
    6u;
  static constexpr uint32_t REASON_NO_WHITELIST =
    7u;
  static constexpr uint32_t REASON_HDS =
    8u;
  static constexpr uint32_t REASON_ACTION =
    9u;
  static constexpr uint32_t REASON_OBSTACLE_FORWARD =
    10u;
  static constexpr uint32_t REASON_OBSTACLE_BACK =
    11u;
  static constexpr uint32_t REASON_OBSTACLE_LEFT =
    12u;
  static constexpr uint32_t REASON_OBSTACLE_RIGHT =
    13u;
  static constexpr uint32_t REASON_OBSTACLE_UP =
    14u;
  static constexpr uint32_t REASON_TASK_RUNNING =
    15u;
  static constexpr uint32_t REASON_TARGET_STATE =
    16u;
  static constexpr uint32_t REASON_NOT_FOUND =
    17u;
  static constexpr uint32_t REASON_NO_SKILL_LIST =
    18u;
  static constexpr uint32_t REASON_FORM_MIS_MATCH =
    19u;
  static constexpr uint32_t REASON_ACTION_NOT_MATCH =
    20u;
  static constexpr uint32_t REASON_ACTION_BLACKLISTED =
    21u;
  static constexpr uint32_t REASON_NO_TRANSFER_PATH =
    22u;
  static constexpr uint32_t REASON_NO_ELIGIBLE_SKILL =
    23u;
  static constexpr uint32_t REASON_INDOOR_WHOLE_BODY =
    24u;
  static constexpr uint32_t REASON_ENGINE_NOT_READY =
    25u;
  static constexpr uint32_t REASON_NOT_SUPPORTED =
    26u;
  static constexpr uint32_t REASON_STAND_UP_IN_PROGRESS =
    27u;
  static constexpr uint32_t REASON_NOT_INTERRUPTIBLE =
    28u;
  static constexpr uint32_t REASON_INTERRUPT_INVALID =
    29u;
  static constexpr uint32_t REASON_TRANSFORM_CONDITION =
    30u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::CommonState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::CommonState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::CommonState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::CommonState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__CommonState
    std::shared_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__CommonState
    std::shared_ptr<aimdk_msgs::msg::CommonState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommonState_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommonState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommonState_

// alias to use template instance with default allocator
using CommonState =
  aimdk_msgs::msg::CommonState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::IN_MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::PENDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::CREATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CommonState_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OPENBOX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_STARTUP_CHECK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_SHUTDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_FROM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_LOW_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NO_WHITELIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_HDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OBSTACLE_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OBSTACLE_BACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OBSTACLE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OBSTACLE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_OBSTACLE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_TASK_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_TARGET_STATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NO_SKILL_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_FORM_MIS_MATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_ACTION_NOT_MATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_ACTION_BLACKLISTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NO_TRANSFER_PATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NO_ELIGIBLE_SKILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_INDOOR_WHOLE_BODY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_ENGINE_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NOT_SUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_STAND_UP_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_NOT_INTERRUPTIBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_INTERRUPT_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CommonState_<ContainerAllocator>::REASON_TRANSFORM_CONDITION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__COMMON_STATE__STRUCT_HPP_
