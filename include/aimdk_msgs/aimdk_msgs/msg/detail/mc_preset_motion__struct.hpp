// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McPresetMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McPresetMotion __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McPresetMotion __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McPresetMotion_
{
  using Type = McPresetMotion_<ContainerAllocator>;

  explicit McPresetMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit McPresetMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int32_t DEFAULT_POS =
    0;
  static constexpr int32_t RIGHT_ARM_WAVE =
    1001;
  static constexpr int32_t RIGHT_ARM_HANDSHAKE =
    1002;
  static constexpr int32_t RIGHT_ARM_HANDSHAKE_FOR_1D5METER =
    1003;
  static constexpr int32_t LEFT_ARM_WAVE =
    1011;
  static constexpr int32_t LEFT_ARM_HANDSHAKE =
    1012;
  static constexpr int32_t LEFT_ARM_HANDSHAKE_FOR_1D5METER =
    1013;
  static constexpr int32_t BOTH_HANDS_MAKE_HEART =
    2001;
  static constexpr int32_t BOTH_HANDS_ACTION_HAPPY =
    2002;
  static constexpr int32_t BOTH_HANDS_ACTION_TALKING =
    2003;
  static constexpr int32_t T1_TALK1 =
    2004;
  static constexpr int32_t T1_TALK2 =
    2005;
  static constexpr int32_t T1_TALK3 =
    2006;
  static constexpr int32_t T1_TALK4 =
    2007;
  static constexpr int32_t T1_TALK5 =
    2008;
  static constexpr int32_t T1_TALK6 =
    2009;
  static constexpr int32_t PHOTO_POSE_1 =
    2011;
  static constexpr int32_t PHOTO_POSE_2 =
    2012;
  static constexpr int32_t PHOTO_POSE_3 =
    2013;
  static constexpr int32_t PHOTO_POSE_4 =
    2014;
  static constexpr int32_t PHOTO_THREE_SHOT =
    2020;
  static constexpr int32_t Q_BECKON =
    3001;
  static constexpr int32_t Q_SHAKE_HANDS =
    3002;
  static constexpr int32_t Q_BUMP_FISTS =
    3003;
  static constexpr int32_t Q_WAVE_HAND =
    3004;
  static constexpr int32_t Q_SHOW_HAPPINESS =
    3005;
  static constexpr int32_t Q_MAKE_HEART =
    3007;
  static constexpr int32_t Q_CHEER_ON =
    3008;
  static constexpr int32_t Q_STRETCH =
    3010;
  static constexpr int32_t Q_SPEAK_A =
    3012;
  static constexpr int32_t Q_SPEAK_B =
    3013;
  static constexpr int32_t Q_SPEAK_C =
    3014;
  static constexpr int32_t Q_HUG =
    3018;
  static constexpr int32_t Q_REFUSE =
    3021;
  static constexpr int32_t Q_DANCE_A =
    3046;
  static constexpr int32_t Q_DANCE_B =
    3047;
  static constexpr int32_t Q_DANCE_C =
    3048;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McPresetMotion
    std::shared_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McPresetMotion
    std::shared_ptr<aimdk_msgs::msg::McPresetMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McPresetMotion_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const McPresetMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McPresetMotion_

// alias to use template instance with default allocator
using McPresetMotion =
  aimdk_msgs::msg::McPresetMotion_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::DEFAULT_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::RIGHT_ARM_WAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::RIGHT_ARM_HANDSHAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::RIGHT_ARM_HANDSHAKE_FOR_1D5METER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::LEFT_ARM_WAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::LEFT_ARM_HANDSHAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::LEFT_ARM_HANDSHAKE_FOR_1D5METER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::BOTH_HANDS_MAKE_HEART;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::BOTH_HANDS_ACTION_HAPPY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::BOTH_HANDS_ACTION_TALKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::T1_TALK6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::PHOTO_POSE_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::PHOTO_POSE_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::PHOTO_POSE_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::PHOTO_POSE_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::PHOTO_THREE_SHOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_BECKON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_SHAKE_HANDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_BUMP_FISTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_WAVE_HAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_SHOW_HAPPINESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_MAKE_HEART;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_CHEER_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_STRETCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_SPEAK_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_SPEAK_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_SPEAK_C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_HUG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_REFUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_DANCE_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_DANCE_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McPresetMotion_<ContainerAllocator>::Q_DANCE_C;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_PRESET_MOTION__STRUCT_HPP_
