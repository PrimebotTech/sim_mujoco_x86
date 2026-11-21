// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McFullAction.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McFullAction __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McFullAction __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McFullAction_
{
  using Type = McFullAction_<ContainerAllocator>;

  explicit McFullAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit McFullAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t PASSIVE_DEFAULT =
    1;
  static constexpr int32_t QUADRUPED_TO_BIPED =
    2;
  static constexpr int32_t BIPED_TO_QUADRUPED =
    3;
  static constexpr int32_t QUADRUPED_RECOVERY =
    100;
  static constexpr int32_t QUADRUPED_STAND_DEFAULT =
    101;
  static constexpr int32_t QUADRUPED_LOCOMOTION_DEFAULT =
    102;
  static constexpr int32_t QUADRUPED_LOCOMOTION_TERRAIN =
    103;
  static constexpr int32_t BIPED_RECOVERY =
    200;
  static constexpr int32_t BIPED_STAND_DEFAULT =
    201;
  static constexpr int32_t BIPED_LOCOMOTION_DEFAULT =
    202;
  static constexpr int32_t BIPED_LOCOMOTION_TERRAIN =
    203;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McFullAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McFullAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McFullAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McFullAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McFullAction
    std::shared_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McFullAction
    std::shared_ptr<aimdk_msgs::msg::McFullAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McFullAction_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const McFullAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McFullAction_

// alias to use template instance with default allocator
using McFullAction =
  aimdk_msgs::msg::McFullAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::PASSIVE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::QUADRUPED_TO_BIPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::BIPED_TO_QUADRUPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::QUADRUPED_RECOVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::QUADRUPED_STAND_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_TERRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::BIPED_RECOVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::BIPED_STAND_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::BIPED_LOCOMOTION_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McFullAction_<ContainerAllocator>::BIPED_LOCOMOTION_TERRAIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_FULL_ACTION__STRUCT_HPP_
