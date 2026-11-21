// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/MuteChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__MuteChange __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__MuteChange __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MuteChange_
{
  using Type = MuteChange_<ContainerAllocator>;

  explicit MuteChange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mute = false;
    }
  }

  explicit MuteChange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mute = false;
    }
  }

  // field types and members
  using _mute_type =
    bool;
  _mute_type mute;

  // setters for named parameter idiom
  Type & set__mute(
    const bool & _arg)
  {
    this->mute = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::MuteChange_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::MuteChange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MuteChange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MuteChange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__MuteChange
    std::shared_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__MuteChange
    std::shared_ptr<aimdk_msgs::msg::MuteChange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MuteChange_ & other) const
  {
    if (this->mute != other.mute) {
      return false;
    }
    return true;
  }
  bool operator!=(const MuteChange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MuteChange_

// alias to use template instance with default allocator
using MuteChange =
  aimdk_msgs::msg::MuteChange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MUTE_CHANGE__STRUCT_HPP_
