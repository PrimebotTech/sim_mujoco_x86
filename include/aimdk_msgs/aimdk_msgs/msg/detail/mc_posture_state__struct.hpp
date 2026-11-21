// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McPostureState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McPostureState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McPostureState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McPostureState_
{
  using Type = McPostureState_<ContainerAllocator>;

  explicit McPostureState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_posture = 0;
    }
  }

  explicit McPostureState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_posture = 0;
    }
  }

  // field types and members
  using _current_posture_type =
    uint8_t;
  _current_posture_type current_posture;

  // setters for named parameter idiom
  Type & set__current_posture(
    const uint8_t & _arg)
  {
    this->current_posture = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t STANDING =
    1u;
  static constexpr uint8_t LYING_FACE_UP =
    2u;
  static constexpr uint8_t LYING_FACE_DOWN =
    3u;
  static constexpr uint8_t SEATED =
    4u;
  static constexpr uint8_t OPEN_BOX =
    5u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McPostureState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McPostureState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McPostureState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McPostureState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McPostureState
    std::shared_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McPostureState
    std::shared_ptr<aimdk_msgs::msg::McPostureState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McPostureState_ & other) const
  {
    if (this->current_posture != other.current_posture) {
      return false;
    }
    return true;
  }
  bool operator!=(const McPostureState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McPostureState_

// alias to use template instance with default allocator
using McPostureState =
  aimdk_msgs::msg::McPostureState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::STANDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::LYING_FACE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::LYING_FACE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::SEATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t McPostureState_<ContainerAllocator>::OPEN_BOX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_POSTURE_STATE__STRUCT_HPP_
