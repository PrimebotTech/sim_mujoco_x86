// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__EmergencyState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__EmergencyState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyState_
{
  using Type = EmergencyState_<ContainerAllocator>;

  explicit EmergencyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_state = 0l;
    }
  }

  explicit EmergencyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_state = 0l;
    }
  }

  // field types and members
  using _emergency_state_type =
    int32_t;
  _emergency_state_type emergency_state;

  // setters for named parameter idiom
  Type & set__emergency_state(
    const int32_t & _arg)
  {
    this->emergency_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::EmergencyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::EmergencyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EmergencyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EmergencyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__EmergencyState
    std::shared_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__EmergencyState
    std::shared_ptr<aimdk_msgs::msg::EmergencyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyState_ & other) const
  {
    if (this->emergency_state != other.emergency_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyState_

// alias to use template instance with default allocator
using EmergencyState =
  aimdk_msgs::msg::EmergencyState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_
