// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McBodyPose.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McBodyPose __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McBodyPose __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McBodyPose_
{
  using Type = McBodyPose_<ContainerAllocator>;

  explicit McBodyPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->stand_height = 0.0;
      this->bend_forward = 0.0;
      this->bend_sideways = 0.0;
      this->twist_waist = 0.0;
      this->raise_head = 0.0;
      this->turn_head = 0.0;
    }
  }

  explicit McBodyPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->stand_height = 0.0;
      this->bend_forward = 0.0;
      this->bend_sideways = 0.0;
      this->twist_waist = 0.0;
      this->raise_head = 0.0;
      this->turn_head = 0.0;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _stand_height_type =
    double;
  _stand_height_type stand_height;
  using _bend_forward_type =
    double;
  _bend_forward_type bend_forward;
  using _bend_sideways_type =
    double;
  _bend_sideways_type bend_sideways;
  using _twist_waist_type =
    double;
  _twist_waist_type twist_waist;
  using _raise_head_type =
    double;
  _raise_head_type raise_head;
  using _turn_head_type =
    double;
  _turn_head_type turn_head;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__stand_height(
    const double & _arg)
  {
    this->stand_height = _arg;
    return *this;
  }
  Type & set__bend_forward(
    const double & _arg)
  {
    this->bend_forward = _arg;
    return *this;
  }
  Type & set__bend_sideways(
    const double & _arg)
  {
    this->bend_sideways = _arg;
    return *this;
  }
  Type & set__twist_waist(
    const double & _arg)
  {
    this->twist_waist = _arg;
    return *this;
  }
  Type & set__raise_head(
    const double & _arg)
  {
    this->raise_head = _arg;
    return *this;
  }
  Type & set__turn_head(
    const double & _arg)
  {
    this->turn_head = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McBodyPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McBodyPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McBodyPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McBodyPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McBodyPose
    std::shared_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McBodyPose
    std::shared_ptr<aimdk_msgs::msg::McBodyPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McBodyPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->stand_height != other.stand_height) {
      return false;
    }
    if (this->bend_forward != other.bend_forward) {
      return false;
    }
    if (this->bend_sideways != other.bend_sideways) {
      return false;
    }
    if (this->twist_waist != other.twist_waist) {
      return false;
    }
    if (this->raise_head != other.raise_head) {
      return false;
    }
    if (this->turn_head != other.turn_head) {
      return false;
    }
    return true;
  }
  bool operator!=(const McBodyPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McBodyPose_

// alias to use template instance with default allocator
using McBodyPose =
  aimdk_msgs::msg::McBodyPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE__STRUCT_HPP_
