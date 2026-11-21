// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/FluxHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__FluxHeartbeat __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__FluxHeartbeat __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FluxHeartbeat_
{
  using Type = FluxHeartbeat_<ContainerAllocator>;

  explicit FluxHeartbeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recording = 0;
      this->source = "";
      this->duration_sec = 0ll;
    }
  }

  explicit FluxHeartbeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->recording = 0;
      this->source = "";
      this->duration_sec = 0ll;
    }
  }

  // field types and members
  using _recording_type =
    int8_t;
  _recording_type recording;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _duration_sec_type =
    int64_t;
  _duration_sec_type duration_sec;

  // setters for named parameter idiom
  Type & set__recording(
    const int8_t & _arg)
  {
    this->recording = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__duration_sec(
    const int64_t & _arg)
  {
    this->duration_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__FluxHeartbeat
    std::shared_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__FluxHeartbeat
    std::shared_ptr<aimdk_msgs::msg::FluxHeartbeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FluxHeartbeat_ & other) const
  {
    if (this->recording != other.recording) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->duration_sec != other.duration_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const FluxHeartbeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FluxHeartbeat_

// alias to use template instance with default allocator
using FluxHeartbeat =
  aimdk_msgs::msg::FluxHeartbeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__FLUX_HEARTBEAT__STRUCT_HPP_
