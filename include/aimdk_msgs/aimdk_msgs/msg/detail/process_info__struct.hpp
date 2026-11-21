// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_

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
// Member 'resource'
#include "aimdk_msgs/msg/detail/process_resource_info__struct.hpp"
// Member 'modules'
#include "aimdk_msgs/msg/detail/module_resource_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ProcessInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ProcessInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessInfo_
{
  using Type = ProcessInfo_<ContainerAllocator>;

  explicit ProcessInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    resource(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->app_name = "";
    }
  }

  explicit ProcessInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    app_name(_alloc),
    resource(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->app_name = "";
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _app_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_name_type app_name;
  using _resource_type =
    aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>;
  _resource_type resource;
  using _modules_type =
    std::vector<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>>;
  _modules_type modules;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__app_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_name = _arg;
    return *this;
  }
  Type & set__resource(
    const aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> & _arg)
  {
    this->resource = _arg;
    return *this;
  }
  Type & set__modules(
    const std::vector<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>> & _arg)
  {
    this->modules = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ProcessInfo
    std::shared_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ProcessInfo
    std::shared_ptr<aimdk_msgs::msg::ProcessInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->app_name != other.app_name) {
      return false;
    }
    if (this->resource != other.resource) {
      return false;
    }
    if (this->modules != other.modules) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessInfo_

// alias to use template instance with default allocator
using ProcessInfo =
  aimdk_msgs::msg::ProcessInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_
