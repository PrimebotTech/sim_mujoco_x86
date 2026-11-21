// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McAction.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McAction __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McAction __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McAction_
{
  using Type = McAction_<ContainerAllocator>;

  explicit McAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit McAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int32_t DAMPING_DEFAULT =
    2;
  static constexpr int32_t QUAD_LIE_DOWN =
    3;
  static constexpr int32_t QUADRUPED_TO_BIPED =
    10;
  static constexpr int32_t QUADRUPED_TO_BIPED_ROTATE =
    11;
  static constexpr int32_t QUADRUPED_TO_BIPED_FRONTFLIP =
    12;
  static constexpr int32_t BIPED_TO_QUADRUPED =
    20;
  static constexpr int32_t BIPED_TO_QUADRUPED_ROTATE =
    21;
  static constexpr int32_t BIPED_TO_QUADRUPED_FRONTFLIP =
    22;
  static constexpr int32_t QUADRUPED_RECOVERY =
    100;
  static constexpr int32_t QUADRUPED_STAND_DEFAULT =
    101;
  static constexpr int32_t QUADRUPED_LOCOMOTION_DEFAULT =
    102;
  static constexpr int32_t QUADRUPED_LOCOMOTION_RUN =
    112;
  static constexpr int32_t QUADRUPED_LOCOMOTION_TERRAIN =
    103;
  static constexpr int32_t QUADRUPED_LOCOMOTION_BIONIC =
    104;
  static constexpr int32_t QUADRUPED_LOCOMOTION_FRONTFLIP =
    105;
  static constexpr int32_t QUADRUPED_LOCOMOTION_BACKFLIP =
    106;
  static constexpr int32_t QUADRUPED_LOCOMOTION_HANDSHAKE =
    107;
  static constexpr int32_t QUADRUPED_LOCOMOTION_SIT =
    108;
  static constexpr int32_t QUADRUPED_LOCOMOTION_DANCE =
    109;
  static constexpr int32_t QUADRUPED_GET_DOWN_DEFAULT =
    110;
  static constexpr int32_t QUADRUPED_SIT_DOWN_DEFAULT =
    111;
  static constexpr int32_t QUADRUPED_LOCOMOTION_PRIDE =
    113;
  static constexpr int32_t QUADRUPED_LOCOMOTION_PLEASURE =
    114;
  static constexpr int32_t QUADRUPED_READY_STAND_DEFAULT =
    115;
  static constexpr int32_t QUADRUPED_LOCOMOTION_JUMP =
    116;
  static constexpr int32_t QUADRUPED_LOCOMOTION_STRETCH =
    117;
  static constexpr int32_t QUADRUPED_PUSH_UP =
    118;
  static constexpr int32_t QUADRUPED_MIMIC =
    119;
  static constexpr int32_t QUADRUPED_CROUCH_DEFAULT =
    120;
  static constexpr int32_t QUADRUPED_LOCOMOTION_STEP =
    121;
  static constexpr int32_t QUADRUPED_STAND_REVERSE_DEFAULT =
    122;
  static constexpr int32_t QUADRUPED_LOCOMOTION_REVERSE_DEFAULT =
    123;
  static constexpr int32_t QUADRUPED_BODY_ADJUST_DEFAULT =
    124;
  static constexpr int32_t QUADRUPED_LOCOMOTION_STAIRS =
    125;
  static constexpr int32_t BIPED_RECOVERY =
    200;
  static constexpr int32_t BIPED_STAND_DEFAULT =
    201;
  static constexpr int32_t BIPED_LOCOMOTION_DEFAULT =
    202;
  static constexpr int32_t BIPED_LOCOMOTION_TERRAIN =
    203;
  static constexpr int32_t BIPED_LOCOMOTION_MOONWALK =
    206;
  static constexpr int32_t BIPED_LOCOMOTION_RUN =
    207;
  static constexpr int32_t BIPED_MIMIC =
    208;
  static constexpr int32_t BIPED_LOCOMOTION_WBC =
    300;
  static constexpr int32_t BIPED_LOCOMOTION_ANIMATION =
    301;
  static constexpr int32_t BIPED_RECORD_UPPER =
    302;
  static constexpr int32_t BIPED_GIMBAL =
    303;
  static constexpr int32_t BIPED_NPZ_MIMIC =
    304;
  static constexpr int32_t BIPED_LOCOMOTION_WBCDANCE =
    305;
  static constexpr int32_t STORE_DEFAULT =
    1001;
  static constexpr int32_t BIPED_WALK_RUN =
    1002;
  static constexpr int32_t MIMIC =
    1003;
  static constexpr int32_t MIMIC_LINKCRAFT =
    1004;
  static constexpr int32_t BIPED_WHOLE_BODY_CTRL =
    1005;
  static constexpr int32_t MIMIC_OPENSOURCE =
    1006;
  static constexpr int32_t STAND_UP =
    1007;
  static constexpr int32_t LYING_DEFAULT =
    1008;
  static constexpr int32_t LIE_FACE_DOWN =
    1009;
  static constexpr int32_t LIE_FACE_UP =
    1010;
  static constexpr int32_t BIPED_QUIET_WALK =
    1011;
  static constexpr int32_t BIPED_BLIND_TERRAIN =
    1012;
  static constexpr int32_t BIPED_SIT_DOWN =
    1013;
  static constexpr int32_t BIPED_CUSTOM_UPPER =
    1014;
  static constexpr int32_t BIPED_RUN =
    1015;
  static constexpr int32_t BIPED_TAKE_SEAT =
    1016;
  static constexpr int32_t BIPED_LEAVE_SEAT =
    1017;
  static constexpr int32_t MIMIC_V2 =
    1018;
  static constexpr int32_t MIMIC_OPENSOURCE_V2 =
    1019;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McAction
    std::shared_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McAction
    std::shared_ptr<aimdk_msgs::msg::McAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McAction_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const McAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McAction_

// alias to use template instance with default allocator
using McAction =
  aimdk_msgs::msg::McAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::PASSIVE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::DAMPING_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUAD_LIE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_TO_BIPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_TO_BIPED_ROTATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_TO_BIPED_FRONTFLIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_TO_QUADRUPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_TO_QUADRUPED_ROTATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_TO_QUADRUPED_FRONTFLIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_RECOVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_STAND_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_TERRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_BIONIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_FRONTFLIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_BACKFLIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_HANDSHAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_SIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_DANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_GET_DOWN_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_SIT_DOWN_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_PRIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_PLEASURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_READY_STAND_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_JUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_STRETCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_PUSH_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_MIMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_CROUCH_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_STEP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_STAND_REVERSE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_REVERSE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_BODY_ADJUST_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::QUADRUPED_LOCOMOTION_STAIRS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_RECOVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_STAND_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_TERRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_MOONWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_MIMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_WBC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_ANIMATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_RECORD_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_GIMBAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_NPZ_MIMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LOCOMOTION_WBCDANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::STORE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_WALK_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::MIMIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::MIMIC_LINKCRAFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_WHOLE_BODY_CTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::MIMIC_OPENSOURCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::STAND_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::LYING_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::LIE_FACE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::LIE_FACE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_QUIET_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_BLIND_TERRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_SIT_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_CUSTOM_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_TAKE_SEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::BIPED_LEAVE_SEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::MIMIC_V2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McAction_<ContainerAllocator>::MIMIC_OPENSOURCE_V2;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_ACTION__STRUCT_HPP_
