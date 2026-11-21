// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ThreadResourceInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ThreadResourceInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ThreadResourceInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThreadResourceInfo_
{
  using Type = ThreadResourceInfo_<ContainerAllocator>;

  explicit ThreadResourceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thread_id = 0ull;
      this->thread_name = "";
      this->cpu_usage_ratio = 0.0;
      this->cpu_sched_policy = "";
      this->cpu_sched_priority = 0l;
    }
  }

  explicit ThreadResourceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thread_name(_alloc),
    cpu_sched_policy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thread_id = 0ull;
      this->thread_name = "";
      this->cpu_usage_ratio = 0.0;
      this->cpu_sched_policy = "";
      this->cpu_sched_priority = 0l;
    }
  }

  // field types and members
  using _thread_id_type =
    uint64_t;
  _thread_id_type thread_id;
  using _thread_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _thread_name_type thread_name;
  using _cpu_usage_ratio_type =
    double;
  _cpu_usage_ratio_type cpu_usage_ratio;
  using _cpu_sched_policy_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cpu_sched_policy_type cpu_sched_policy;
  using _cpu_sched_priority_type =
    int32_t;
  _cpu_sched_priority_type cpu_sched_priority;
  using _bounding_cpus_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bounding_cpus_type bounding_cpus;

  // setters for named parameter idiom
  Type & set__thread_id(
    const uint64_t & _arg)
  {
    this->thread_id = _arg;
    return *this;
  }
  Type & set__thread_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->thread_name = _arg;
    return *this;
  }
  Type & set__cpu_usage_ratio(
    const double & _arg)
  {
    this->cpu_usage_ratio = _arg;
    return *this;
  }
  Type & set__cpu_sched_policy(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cpu_sched_policy = _arg;
    return *this;
  }
  Type & set__cpu_sched_priority(
    const int32_t & _arg)
  {
    this->cpu_sched_priority = _arg;
    return *this;
  }
  Type & set__bounding_cpus(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bounding_cpus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ThreadResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ThreadResourceInfo
    std::shared_ptr<aimdk_msgs::msg::ThreadResourceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThreadResourceInfo_ & other) const
  {
    if (this->thread_id != other.thread_id) {
      return false;
    }
    if (this->thread_name != other.thread_name) {
      return false;
    }
    if (this->cpu_usage_ratio != other.cpu_usage_ratio) {
      return false;
    }
    if (this->cpu_sched_policy != other.cpu_sched_policy) {
      return false;
    }
    if (this->cpu_sched_priority != other.cpu_sched_priority) {
      return false;
    }
    if (this->bounding_cpus != other.bounding_cpus) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThreadResourceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThreadResourceInfo_

// alias to use template instance with default allocator
using ThreadResourceInfo =
  aimdk_msgs::msg::ThreadResourceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__THREAD_RESOURCE_INFO__STRUCT_HPP_
