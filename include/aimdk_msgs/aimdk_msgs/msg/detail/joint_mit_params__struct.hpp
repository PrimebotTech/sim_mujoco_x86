// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__JointMitParams __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__JointMitParams __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointMitParams_
{
  using Type = JointMitParams_<ContainerAllocator>;

  explicit JointMitParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_max = 0;
      this->pos_min = 0;
      this->vel_max = 0;
      this->vel_min = 0;
      this->tor_max = 0;
      this->tor_min = 0;
      this->kp_max = 0;
      this->kp_min = 0;
      this->kd_max = 0;
      this->kd_min = 0;
    }
  }

  explicit JointMitParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_max = 0;
      this->pos_min = 0;
      this->vel_max = 0;
      this->vel_min = 0;
      this->tor_max = 0;
      this->tor_min = 0;
      this->kp_max = 0;
      this->kp_min = 0;
      this->kd_max = 0;
      this->kd_min = 0;
    }
  }

  // field types and members
  using _pos_max_type =
    int16_t;
  _pos_max_type pos_max;
  using _pos_min_type =
    int16_t;
  _pos_min_type pos_min;
  using _vel_max_type =
    int16_t;
  _vel_max_type vel_max;
  using _vel_min_type =
    int16_t;
  _vel_min_type vel_min;
  using _tor_max_type =
    int16_t;
  _tor_max_type tor_max;
  using _tor_min_type =
    int16_t;
  _tor_min_type tor_min;
  using _kp_max_type =
    int16_t;
  _kp_max_type kp_max;
  using _kp_min_type =
    int16_t;
  _kp_min_type kp_min;
  using _kd_max_type =
    int16_t;
  _kd_max_type kd_max;
  using _kd_min_type =
    int16_t;
  _kd_min_type kd_min;

  // setters for named parameter idiom
  Type & set__pos_max(
    const int16_t & _arg)
  {
    this->pos_max = _arg;
    return *this;
  }
  Type & set__pos_min(
    const int16_t & _arg)
  {
    this->pos_min = _arg;
    return *this;
  }
  Type & set__vel_max(
    const int16_t & _arg)
  {
    this->vel_max = _arg;
    return *this;
  }
  Type & set__vel_min(
    const int16_t & _arg)
  {
    this->vel_min = _arg;
    return *this;
  }
  Type & set__tor_max(
    const int16_t & _arg)
  {
    this->tor_max = _arg;
    return *this;
  }
  Type & set__tor_min(
    const int16_t & _arg)
  {
    this->tor_min = _arg;
    return *this;
  }
  Type & set__kp_max(
    const int16_t & _arg)
  {
    this->kp_max = _arg;
    return *this;
  }
  Type & set__kp_min(
    const int16_t & _arg)
  {
    this->kp_min = _arg;
    return *this;
  }
  Type & set__kd_max(
    const int16_t & _arg)
  {
    this->kd_max = _arg;
    return *this;
  }
  Type & set__kd_min(
    const int16_t & _arg)
  {
    this->kd_min = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::JointMitParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::JointMitParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointMitParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointMitParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__JointMitParams
    std::shared_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__JointMitParams
    std::shared_ptr<aimdk_msgs::msg::JointMitParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMitParams_ & other) const
  {
    if (this->pos_max != other.pos_max) {
      return false;
    }
    if (this->pos_min != other.pos_min) {
      return false;
    }
    if (this->vel_max != other.vel_max) {
      return false;
    }
    if (this->vel_min != other.vel_min) {
      return false;
    }
    if (this->tor_max != other.tor_max) {
      return false;
    }
    if (this->tor_min != other.tor_min) {
      return false;
    }
    if (this->kp_max != other.kp_max) {
      return false;
    }
    if (this->kp_min != other.kp_min) {
      return false;
    }
    if (this->kd_max != other.kd_max) {
      return false;
    }
    if (this->kd_min != other.kd_min) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMitParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMitParams_

// alias to use template instance with default allocator
using JointMitParams =
  aimdk_msgs::msg::JointMitParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_MIT_PARAMS__STRUCT_HPP_
