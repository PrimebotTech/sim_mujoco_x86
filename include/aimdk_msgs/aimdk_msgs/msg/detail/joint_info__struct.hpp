// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/JointInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mit_params'
#include "aimdk_msgs/msg/detail/joint_mit_params__struct.hpp"
// Member 'protect_config'
#include "aimdk_msgs/msg/detail/joint_protect_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__JointInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__JointInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointInfo_
{
  using Type = JointInfo_<ContainerAllocator>;

  explicit JointInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mit_params(_init),
    protect_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->hardware_version = "";
      this->software_version = "";
      this->mode = 0;
    }
  }

  explicit JointInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    hardware_version(_alloc),
    software_version(_alloc),
    mit_params(_alloc, _init),
    protect_config(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->hardware_version = "";
      this->software_version = "";
      this->mode = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_version_type hardware_version;
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _mit_params_type =
    aimdk_msgs::msg::JointMitParams_<ContainerAllocator>;
  _mit_params_type mit_params;
  using _protect_config_type =
    aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator>;
  _protect_config_type protect_config;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_version = _arg;
    return *this;
  }
  Type & set__software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software_version = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__mit_params(
    const aimdk_msgs::msg::JointMitParams_<ContainerAllocator> & _arg)
  {
    this->mit_params = _arg;
    return *this;
  }
  Type & set__protect_config(
    const aimdk_msgs::msg::JointProtectConfig_<ContainerAllocator> & _arg)
  {
    this->protect_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::JointInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::JointInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::JointInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__JointInfo
    std::shared_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__JointInfo
    std::shared_ptr<aimdk_msgs::msg::JointInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->hardware_version != other.hardware_version) {
      return false;
    }
    if (this->software_version != other.software_version) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->mit_params != other.mit_params) {
      return false;
    }
    if (this->protect_config != other.protect_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointInfo_

// alias to use template instance with default allocator
using JointInfo =
  aimdk_msgs::msg::JointInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__JOINT_INFO__STRUCT_HPP_
