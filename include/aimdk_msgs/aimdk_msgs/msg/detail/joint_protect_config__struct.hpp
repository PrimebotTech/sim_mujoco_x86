// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/JointProtectConfig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__JointProtectConfig __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__JointProtectConfig __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointProtectConfig_
{
  using Type = JointProtectConfig_<ContainerAllocator>;

  explicit JointProtectConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l1_mos_protect = 0;
      this->l1_mos_recover = 0;
      this->l1_current_protect = 0;
      this->l1_current_recover = 0;
      this->l1_voltage_protect = 0;
      this->l1_voltage_recover = 0;
      this->l2_mos_protect = 0;
      this->l2_mos_recover = 0;
      this->l2_current_protect = 0;
      this->l2_current_recover = 0;
      this->l2_voltage_protect = 0;
      this->l2_voltage_recover = 0;
    }
  }

  explicit JointProtectConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l1_mos_protect = 0;
      this->l1_mos_recover = 0;
      this->l1_current_protect = 0;
      this->l1_current_recover = 0;
      this->l1_voltage_protect = 0;
      this->l1_voltage_recover = 0;
      this->l2_mos_protect = 0;
      this->l2_mos_recover = 0;
      this->l2_current_protect = 0;
      this->l2_current_recover = 0;
      this->l2_voltage_protect = 0;
      this->l2_voltage_recover = 0;
    }
  }

  // field types and members
  using _l1_mos_protect_type =
    int16_t;
  _l1_mos_protect_type l1_mos_protect;
  using _l1_mos_recover_type =
    int16_t;
  _l1_mos_recover_type l1_mos_recover;
  using _l1_current_protect_type =
    int16_t;
  _l1_current_protect_type l1_current_protect;
  using _l1_current_recover_type =
    int16_t;
  _l1_current_recover_type l1_current_recover;
  using _l1_voltage_protect_type =
    int16_t;
  _l1_voltage_protect_type l1_voltage_protect;
  using _l1_voltage_recover_type =
    int16_t;
  _l1_voltage_recover_type l1_voltage_recover;
  using _l2_mos_protect_type =
    int16_t;
  _l2_mos_protect_type l2_mos_protect;
  using _l2_mos_recover_type =
    int16_t;
  _l2_mos_recover_type l2_mos_recover;
  using _l2_current_protect_type =
    int16_t;
  _l2_current_protect_type l2_current_protect;
  using _l2_current_recover_type =
    int16_t;
  _l2_current_recover_type l2_current_recover;
  using _l2_voltage_protect_type =
    int16_t;
  _l2_voltage_protect_type l2_voltage_protect;
  using _l2_voltage_recover_type =
    int16_t;
  _l2_voltage_recover_type l2_voltage_recover;

  // setters for named parameter idiom
  Type & set__l1_mos_protect(
    const int16_t & _arg)
  {
    this->l1_mos_protect = _arg;
    return *this;
  }
  Type & set__l1_mos_recover(
    const int16_t & _arg)
  {
    this->l1_mos_recover = _arg;
    return *this;
  }
  Type & set__l1_current_protect(
    const int16_t & _arg)
  {
    this->l1_current_protect = _arg;
    return *this;
  }
  Type & set__l1_current_recover(
    const int16_t & _arg)
  {
    this->l1_current_recover = _arg;
    return *this;
  }
  Type & set__l1_voltage_protect(
    const int16_t & _arg)
  {
    this->l1_voltage_protect = _arg;
    return *this;
  }
  Type & set__l1_voltage_recover(
    const int16_t & _arg)
  {
    this->l1_voltage_recover = _arg;
    return *this;
  }
  Type & set__l2_mos_protect(
    const int16_t & _arg)
  {
    this->l2_mos_protect = _arg;
    return *this;
  }
  Type & set__l2_mos_recover(
    const int16_t & _arg)
  {
    this->l2_mos_recover = _arg;
    return *this;
  }
  Type & set__l2_current_protect(
    const int16_t & _arg)
  {
    this->l2_current_protect = _arg;
    return *this;
  }
  Type & set__l2_current_recover(
    const int16_t & _arg)
  {
    this->l2_current_recover = _arg;
    return *this;
  }
  Type & set__l2_voltage_protect(
    const int16_t & _arg)
  {
    this->l2_voltage_protect = _arg;
    return *this;
  }
  Type & set__l2_voltage_recover(
    const int16_t & _arg)
  {
    this->l2_voltage_recover = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__JointProtectConfig
    std::shared_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__JointProtectConfig
    std::shared_ptr<aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointProtectConfig_ & other) const
  {
    if (this->l1_mos_protect != other.l1_mos_protect) {
      return false;
    }
    if (this->l1_mos_recover != other.l1_mos_recover) {
      return false;
    }
    if (this->l1_current_protect != other.l1_current_protect) {
      return false;
    }
    if (this->l1_current_recover != other.l1_current_recover) {
      return false;
    }
    if (this->l1_voltage_protect != other.l1_voltage_protect) {
      return false;
    }
    if (this->l1_voltage_recover != other.l1_voltage_recover) {
      return false;
    }
    if (this->l2_mos_protect != other.l2_mos_protect) {
      return false;
    }
    if (this->l2_mos_recover != other.l2_mos_recover) {
      return false;
    }
    if (this->l2_current_protect != other.l2_current_protect) {
      return false;
    }
    if (this->l2_current_recover != other.l2_current_recover) {
      return false;
    }
    if (this->l2_voltage_protect != other.l2_voltage_protect) {
      return false;
    }
    if (this->l2_voltage_recover != other.l2_voltage_recover) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointProtectConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointProtectConfig_

// alias to use template instance with default allocator
using JointProtectConfig =
  aimdk_msgs::msg::JointProtectConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_PROTECT_CONFIG__STRUCT_HPP_
