// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/MicSourceChange.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__MicSourceChange __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__MicSourceChange __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MicSourceChange_
{
  using Type = MicSourceChange_<ContainerAllocator>;

  explicit MicSourceChange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_source = 0ul;
      this->pid = 0ul;
      this->vid = 0ul;
    }
  }

  explicit MicSourceChange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mic_source = 0ul;
      this->pid = 0ul;
      this->vid = 0ul;
    }
  }

  // field types and members
  using _mic_source_type =
    uint32_t;
  _mic_source_type mic_source;
  using _pid_type =
    uint32_t;
  _pid_type pid;
  using _vid_type =
    uint32_t;
  _vid_type vid;

  // setters for named parameter idiom
  Type & set__mic_source(
    const uint32_t & _arg)
  {
    this->mic_source = _arg;
    return *this;
  }
  Type & set__pid(
    const uint32_t & _arg)
  {
    this->pid = _arg;
    return *this;
  }
  Type & set__vid(
    const uint32_t & _arg)
  {
    this->vid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__MicSourceChange
    std::shared_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__MicSourceChange
    std::shared_ptr<aimdk_msgs::msg::MicSourceChange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicSourceChange_ & other) const
  {
    if (this->mic_source != other.mic_source) {
      return false;
    }
    if (this->pid != other.pid) {
      return false;
    }
    if (this->vid != other.vid) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicSourceChange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicSourceChange_

// alias to use template instance with default allocator
using MicSourceChange =
  aimdk_msgs::msg::MicSourceChange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MIC_SOURCE_CHANGE__STRUCT_HPP_
