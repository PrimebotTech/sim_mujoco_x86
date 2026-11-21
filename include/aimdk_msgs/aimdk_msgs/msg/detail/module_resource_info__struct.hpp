// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ModuleResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rpc_clients'
// Member 'rpc_services'
#include "aimdk_msgs/msg/detail/module_rpc_info__struct.hpp"
// Member 'pub_channels'
// Member 'sub_channels'
#include "aimdk_msgs/msg/detail/module_channel_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ModuleResourceInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ModuleResourceInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModuleResourceInfo_
{
  using Type = ModuleResourceInfo_<ContainerAllocator>;

  explicit ModuleResourceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
    }
  }

  explicit ModuleResourceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
    }
  }

  // field types and members
  using _module_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_name_type module_name;
  using _rpc_clients_type =
    std::vector<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>>>;
  _rpc_clients_type rpc_clients;
  using _rpc_services_type =
    std::vector<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>>>;
  _rpc_services_type rpc_services;
  using _pub_channels_type =
    std::vector<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>>;
  _pub_channels_type pub_channels;
  using _sub_channels_type =
    std::vector<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>>;
  _sub_channels_type sub_channels;

  // setters for named parameter idiom
  Type & set__module_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }
  Type & set__rpc_clients(
    const std::vector<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>>> & _arg)
  {
    this->rpc_clients = _arg;
    return *this;
  }
  Type & set__rpc_services(
    const std::vector<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleRpcInfo_<ContainerAllocator>>> & _arg)
  {
    this->rpc_services = _arg;
    return *this;
  }
  Type & set__pub_channels(
    const std::vector<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>> & _arg)
  {
    this->pub_channels = _arg;
    return *this;
  }
  Type & set__sub_channels(
    const std::vector<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>> & _arg)
  {
    this->sub_channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ModuleResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ModuleResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ModuleResourceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModuleResourceInfo_ & other) const
  {
    if (this->module_name != other.module_name) {
      return false;
    }
    if (this->rpc_clients != other.rpc_clients) {
      return false;
    }
    if (this->rpc_services != other.rpc_services) {
      return false;
    }
    if (this->pub_channels != other.pub_channels) {
      return false;
    }
    if (this->sub_channels != other.sub_channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModuleResourceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModuleResourceInfo_

// alias to use template instance with default allocator
using ModuleResourceInfo =
  aimdk_msgs::msg::ModuleResourceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_RESOURCE_INFO__STRUCT_HPP_
