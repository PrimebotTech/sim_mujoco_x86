// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'threads'
#include "aimdk_msgs/msg/detail/thread_resource_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ProcessResourceInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ProcessResourceInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessResourceInfo_
{
  using Type = ProcessResourceInfo_<ContainerAllocator>;

  explicit ProcessResourceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process_id = 0ull;
      this->process_name = "";
      this->process_mem_usage = 0ull;
      this->process_mem_usage_ratio = 0.0;
      this->process_cpu_usage_ratio = 0.0;
      this->thread_count = 0ull;
    }
  }

  explicit ProcessResourceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : process_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->process_id = 0ull;
      this->process_name = "";
      this->process_mem_usage = 0ull;
      this->process_mem_usage_ratio = 0.0;
      this->process_cpu_usage_ratio = 0.0;
      this->thread_count = 0ull;
    }
  }

  // field types and members
  using _process_id_type =
    uint64_t;
  _process_id_type process_id;
  using _process_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _process_name_type process_name;
  using _process_mem_usage_type =
    uint64_t;
  _process_mem_usage_type process_mem_usage;
  using _process_mem_usage_ratio_type =
    double;
  _process_mem_usage_ratio_type process_mem_usage_ratio;
  using _process_cpu_usage_ratio_type =
    double;
  _process_cpu_usage_ratio_type process_cpu_usage_ratio;
  using _thread_count_type =
    uint64_t;
  _thread_count_type thread_count;
  using _threads_type =
    std::vector<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>>;
  _threads_type threads;

  // setters for named parameter idiom
  Type & set__process_id(
    const uint64_t & _arg)
  {
    this->process_id = _arg;
    return *this;
  }
  Type & set__process_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->process_name = _arg;
    return *this;
  }
  Type & set__process_mem_usage(
    const uint64_t & _arg)
  {
    this->process_mem_usage = _arg;
    return *this;
  }
  Type & set__process_mem_usage_ratio(
    const double & _arg)
  {
    this->process_mem_usage_ratio = _arg;
    return *this;
  }
  Type & set__process_cpu_usage_ratio(
    const double & _arg)
  {
    this->process_cpu_usage_ratio = _arg;
    return *this;
  }
  Type & set__thread_count(
    const uint64_t & _arg)
  {
    this->thread_count = _arg;
    return *this;
  }
  Type & set__threads(
    const std::vector<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>> & _arg)
  {
    this->threads = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ProcessResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ProcessResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ProcessResourceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessResourceInfo_ & other) const
  {
    if (this->process_id != other.process_id) {
      return false;
    }
    if (this->process_name != other.process_name) {
      return false;
    }
    if (this->process_mem_usage != other.process_mem_usage) {
      return false;
    }
    if (this->process_mem_usage_ratio != other.process_mem_usage_ratio) {
      return false;
    }
    if (this->process_cpu_usage_ratio != other.process_cpu_usage_ratio) {
      return false;
    }
    if (this->thread_count != other.thread_count) {
      return false;
    }
    if (this->threads != other.threads) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessResourceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessResourceInfo_

// alias to use template instance with default allocator
using ProcessResourceInfo =
  aimdk_msgs::msg::ProcessResourceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PROCESS_RESOURCE_INFO__STRUCT_HPP_
