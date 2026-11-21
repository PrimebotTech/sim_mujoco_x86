// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/ModuleChannelInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__ModuleChannelInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__ModuleChannelInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModuleChannelInfo_
{
  using Type = ModuleChannelInfo_<ContainerAllocator>;

  explicit ModuleChannelInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->frequency = 0.0;
      this->min_time_diff = 0.0;
      this->max_time_diff = 0.0;
      this->std_dev = 0.0;
      this->window_size = 0l;
      this->timeout_threshold = 0.0;
      this->is_active = false;
    }
  }

  explicit ModuleChannelInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->frequency = 0.0;
      this->min_time_diff = 0.0;
      this->max_time_diff = 0.0;
      this->std_dev = 0.0;
      this->window_size = 0l;
      this->timeout_threshold = 0.0;
      this->is_active = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _frequency_type =
    double;
  _frequency_type frequency;
  using _min_time_diff_type =
    double;
  _min_time_diff_type min_time_diff;
  using _max_time_diff_type =
    double;
  _max_time_diff_type max_time_diff;
  using _std_dev_type =
    double;
  _std_dev_type std_dev;
  using _window_size_type =
    int32_t;
  _window_size_type window_size;
  using _timeout_threshold_type =
    double;
  _timeout_threshold_type timeout_threshold;
  using _is_active_type =
    bool;
  _is_active_type is_active;
  using _backends_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _backends_type backends;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__frequency(
    const double & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__min_time_diff(
    const double & _arg)
  {
    this->min_time_diff = _arg;
    return *this;
  }
  Type & set__max_time_diff(
    const double & _arg)
  {
    this->max_time_diff = _arg;
    return *this;
  }
  Type & set__std_dev(
    const double & _arg)
  {
    this->std_dev = _arg;
    return *this;
  }
  Type & set__window_size(
    const int32_t & _arg)
  {
    this->window_size = _arg;
    return *this;
  }
  Type & set__timeout_threshold(
    const double & _arg)
  {
    this->timeout_threshold = _arg;
    return *this;
  }
  Type & set__is_active(
    const bool & _arg)
  {
    this->is_active = _arg;
    return *this;
  }
  Type & set__backends(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->backends = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__ModuleChannelInfo
    std::shared_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__ModuleChannelInfo
    std::shared_ptr<aimdk_msgs::msg::ModuleChannelInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModuleChannelInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->min_time_diff != other.min_time_diff) {
      return false;
    }
    if (this->max_time_diff != other.max_time_diff) {
      return false;
    }
    if (this->std_dev != other.std_dev) {
      return false;
    }
    if (this->window_size != other.window_size) {
      return false;
    }
    if (this->timeout_threshold != other.timeout_threshold) {
      return false;
    }
    if (this->is_active != other.is_active) {
      return false;
    }
    if (this->backends != other.backends) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModuleChannelInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModuleChannelInfo_

// alias to use template instance with default allocator
using ModuleChannelInfo =
  aimdk_msgs::msg::ModuleChannelInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MODULE_CHANNEL_INFO__STRUCT_HPP_
