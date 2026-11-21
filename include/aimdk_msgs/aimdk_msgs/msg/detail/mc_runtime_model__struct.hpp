// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left_hand_status'
// Member 'right_hand_status'
#include "aimdk_msgs/msg/detail/mc_hand_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McRuntimeModel __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McRuntimeModel __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McRuntimeModel_
{
  using Type = McRuntimeModel_<ContainerAllocator>;

  explicit McRuntimeModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_hand_status(_init),
    right_hand_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waist_status = false;
    }
  }

  explicit McRuntimeModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_hand_status(_alloc, _init),
    right_hand_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waist_status = false;
    }
  }

  // field types and members
  using _waist_status_type =
    bool;
  _waist_status_type waist_status;
  using _left_hand_status_type =
    aimdk_msgs::msg::McHandStatus_<ContainerAllocator>;
  _left_hand_status_type left_hand_status;
  using _right_hand_status_type =
    aimdk_msgs::msg::McHandStatus_<ContainerAllocator>;
  _right_hand_status_type right_hand_status;

  // setters for named parameter idiom
  Type & set__waist_status(
    const bool & _arg)
  {
    this->waist_status = _arg;
    return *this;
  }
  Type & set__left_hand_status(
    const aimdk_msgs::msg::McHandStatus_<ContainerAllocator> & _arg)
  {
    this->left_hand_status = _arg;
    return *this;
  }
  Type & set__right_hand_status(
    const aimdk_msgs::msg::McHandStatus_<ContainerAllocator> & _arg)
  {
    this->right_hand_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McRuntimeModel
    std::shared_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McRuntimeModel
    std::shared_ptr<aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McRuntimeModel_ & other) const
  {
    if (this->waist_status != other.waist_status) {
      return false;
    }
    if (this->left_hand_status != other.left_hand_status) {
      return false;
    }
    if (this->right_hand_status != other.right_hand_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const McRuntimeModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McRuntimeModel_

// alias to use template instance with default allocator
using McRuntimeModel =
  aimdk_msgs::msg::McRuntimeModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_RUNTIME_MODEL__STRUCT_HPP_
