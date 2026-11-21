// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ManipulationCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.hpp"
// Member 'manipulations'
#include "aimdk_msgs/msg/detail/manipulation_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ManipulationCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ManipulationCommandArray __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulationCommandArray_
{
  using Type = ManipulationCommandArray_<ContainerAllocator>;

  explicit ManipulationCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ManipulationCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _manipulations_type =
    std::vector<aimdk_msgs::msg::ManipulationCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ManipulationCommand_<ContainerAllocator>>>;
  _manipulations_type manipulations;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manipulations(
    const std::vector<aimdk_msgs::msg::ManipulationCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ManipulationCommand_<ContainerAllocator>>> & _arg)
  {
    this->manipulations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ManipulationCommandArray
    std::shared_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ManipulationCommandArray
    std::shared_ptr<aimdk_msgs::msg::ManipulationCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulationCommandArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manipulations != other.manipulations) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulationCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulationCommandArray_

// alias to use template instance with default allocator
using ManipulationCommandArray =
  aimdk_msgs::msg::ManipulationCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MANIPULATION_COMMAND_ARRAY__STRUCT_HPP_
