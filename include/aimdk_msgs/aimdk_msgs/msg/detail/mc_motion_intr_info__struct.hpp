// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McMotionIntrInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intr_type'
#include "aimdk_msgs/msg/detail/mc_motion_intr_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McMotionIntrInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McMotionIntrInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McMotionIntrInfo_
{
  using Type = McMotionIntrInfo_<ContainerAllocator>;

  explicit McMotionIntrInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intr_type(_init)
  {
    (void)_init;
  }

  explicit McMotionIntrInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intr_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _intr_type_type =
    aimdk_msgs::msg::McMotionIntrType_<ContainerAllocator>;
  _intr_type_type intr_type;
  using _breakpoint_steps_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _breakpoint_steps_type breakpoint_steps;

  // setters for named parameter idiom
  Type & set__intr_type(
    const aimdk_msgs::msg::McMotionIntrType_<ContainerAllocator> & _arg)
  {
    this->intr_type = _arg;
    return *this;
  }
  Type & set__breakpoint_steps(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->breakpoint_steps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McMotionIntrInfo
    std::shared_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McMotionIntrInfo
    std::shared_ptr<aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMotionIntrInfo_ & other) const
  {
    if (this->intr_type != other.intr_type) {
      return false;
    }
    if (this->breakpoint_steps != other.breakpoint_steps) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMotionIntrInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMotionIntrInfo_

// alias to use template instance with default allocator
using McMotionIntrInfo =
  aimdk_msgs::msg::McMotionIntrInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION_INTR_INFO__STRUCT_HPP_
