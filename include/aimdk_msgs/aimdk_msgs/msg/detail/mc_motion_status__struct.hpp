// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'player_state'
#include "aimdk_msgs/msg/detail/mc_player_state__struct.hpp"
// Member 'control_area'
#include "aimdk_msgs/msg/detail/mc_control_area__struct.hpp"
// Member 'type'
#include "aimdk_msgs/msg/detail/mc_motion_type__struct.hpp"
// Member 'intr_info'
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.hpp"
// Member 'gravity_state'
#include "aimdk_msgs/msg/detail/mc_mimic_gravity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McMotionStatus __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McMotionStatus __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McMotionStatus_
{
  using Type = McMotionStatus_<ContainerAllocator>;

  explicit McMotionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : player_state(_init),
    control_area(_init),
    type(_init),
    intr_info(_init),
    gravity_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = "";
      this->current_steps = 0l;
    }
  }

  explicit McMotionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : player_state(_alloc, _init),
    control_area(_alloc, _init),
    motion(_alloc),
    type(_alloc, _init),
    intr_info(_alloc, _init),
    gravity_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = "";
      this->current_steps = 0l;
    }
  }

  // field types and members
  using _player_state_type =
    aimdk_msgs::msg::McPlayerState_<ContainerAllocator>;
  _player_state_type player_state;
  using _control_area_type =
    aimdk_msgs::msg::McControlArea_<ContainerAllocator>;
  _control_area_type control_area;
  using _motion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_type motion;
  using _type_type =
    aimdk_msgs::msg::McMotionType_<ContainerAllocator>;
  _type_type type;
  using _intr_info_type =
    aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>;
  _intr_info_type intr_info;
  using _current_steps_type =
    int32_t;
  _current_steps_type current_steps;
  using _gravity_state_type =
    aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>;
  _gravity_state_type gravity_state;

  // setters for named parameter idiom
  Type & set__player_state(
    const aimdk_msgs::msg::McPlayerState_<ContainerAllocator> & _arg)
  {
    this->player_state = _arg;
    return *this;
  }
  Type & set__control_area(
    const aimdk_msgs::msg::McControlArea_<ContainerAllocator> & _arg)
  {
    this->control_area = _arg;
    return *this;
  }
  Type & set__motion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion = _arg;
    return *this;
  }
  Type & set__type(
    const aimdk_msgs::msg::McMotionType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__intr_info(
    const aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> & _arg)
  {
    this->intr_info = _arg;
    return *this;
  }
  Type & set__current_steps(
    const int32_t & _arg)
  {
    this->current_steps = _arg;
    return *this;
  }
  Type & set__gravity_state(
    const aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> & _arg)
  {
    this->gravity_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McMotionStatus
    std::shared_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McMotionStatus
    std::shared_ptr<aimdk_msgs::msg::McMotionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMotionStatus_ & other) const
  {
    if (this->player_state != other.player_state) {
      return false;
    }
    if (this->control_area != other.control_area) {
      return false;
    }
    if (this->motion != other.motion) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->intr_info != other.intr_info) {
      return false;
    }
    if (this->current_steps != other.current_steps) {
      return false;
    }
    if (this->gravity_state != other.gravity_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMotionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMotionStatus_

// alias to use template instance with default allocator
using McMotionStatus =
  aimdk_msgs::msg::McMotionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_STATUS__STRUCT_HPP_
