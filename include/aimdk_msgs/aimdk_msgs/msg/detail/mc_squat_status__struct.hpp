// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McSquatStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McSquatStatus __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McSquatStatus __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McSquatStatus_
{
  using Type = McSquatStatus_<ContainerAllocator>;

  explicit McSquatStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->offset = 0.0;
      this->squat_limit = 0ul;
    }
  }

  explicit McSquatStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->offset = 0.0;
      this->squat_limit = 0ul;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _offset_type =
    double;
  _offset_type offset;
  using _squat_limit_type =
    uint32_t;
  _squat_limit_type squat_limit;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__squat_limit(
    const uint32_t & _arg)
  {
    this->squat_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McSquatStatus
    std::shared_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McSquatStatus
    std::shared_ptr<aimdk_msgs::msg::McSquatStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McSquatStatus_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->squat_limit != other.squat_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const McSquatStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McSquatStatus_

// alias to use template instance with default allocator
using McSquatStatus =
  aimdk_msgs::msg::McSquatStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SQUAT_STATUS__STRUCT_HPP_
