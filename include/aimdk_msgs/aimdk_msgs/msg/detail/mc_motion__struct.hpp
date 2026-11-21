// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/mc_motion_type__struct.hpp"
// Member 'intr_info'
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McMotion __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McMotion __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McMotion_
{
  using Type = McMotion_<ContainerAllocator>;

  explicit McMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    intr_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag = "";
    }
  }

  explicit McMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tag(_alloc),
    type(_alloc, _init),
    intr_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag = "";
    }
  }

  // field types and members
  using _tag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tag_type tag;
  using _type_type =
    aimdk_msgs::msg::McMotionType_<ContainerAllocator>;
  _type_type type;
  using _intr_info_type =
    aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator>;
  _intr_info_type intr_info;

  // setters for named parameter idiom
  Type & set__tag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__type(
    const aimdk_msgs::msg::McMotionType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__intr_info(
    const aimdk_msgs::msg::McMotionIntrInfo_<ContainerAllocator> & _arg)
  {
    this->intr_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McMotion
    std::shared_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McMotion
    std::shared_ptr<aimdk_msgs::msg::McMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMotion_ & other) const
  {
    if (this->tag != other.tag) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->intr_info != other.intr_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMotion_

// alias to use template instance with default allocator
using McMotion =
  aimdk_msgs::msg::McMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_MOTION__STRUCT_HPP_
