// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McMimicGravityState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McMimicGravityState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McMimicGravityState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McMimicGravityState_
{
  using Type = McMimicGravityState_<ContainerAllocator>;

  explicit McMimicGravityState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->reference_gravity.begin(), this->reference_gravity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->current_gravity.begin(), this->current_gravity.end(), 0.0f);
      this->deviation_deg = 0.0f;
    }
  }

  explicit McMimicGravityState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_gravity(_alloc),
    current_gravity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->reference_gravity.begin(), this->reference_gravity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->current_gravity.begin(), this->current_gravity.end(), 0.0f);
      this->deviation_deg = 0.0f;
    }
  }

  // field types and members
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _reference_gravity_type =
    std::array<float, 3>;
  _reference_gravity_type reference_gravity;
  using _current_gravity_type =
    std::array<float, 3>;
  _current_gravity_type current_gravity;
  using _deviation_deg_type =
    float;
  _deviation_deg_type deviation_deg;

  // setters for named parameter idiom
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__reference_gravity(
    const std::array<float, 3> & _arg)
  {
    this->reference_gravity = _arg;
    return *this;
  }
  Type & set__current_gravity(
    const std::array<float, 3> & _arg)
  {
    this->current_gravity = _arg;
    return *this;
  }
  Type & set__deviation_deg(
    const float & _arg)
  {
    this->deviation_deg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McMimicGravityState
    std::shared_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McMimicGravityState
    std::shared_ptr<aimdk_msgs::msg::McMimicGravityState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMimicGravityState_ & other) const
  {
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->reference_gravity != other.reference_gravity) {
      return false;
    }
    if (this->current_gravity != other.current_gravity) {
      return false;
    }
    if (this->deviation_deg != other.deviation_deg) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMimicGravityState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMimicGravityState_

// alias to use template instance with default allocator
using McMimicGravityState =
  aimdk_msgs::msg::McMimicGravityState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MIMIC_GRAVITY_STATE__STRUCT_HPP_
