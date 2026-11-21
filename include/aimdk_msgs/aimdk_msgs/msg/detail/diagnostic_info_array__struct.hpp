// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/DiagnosticInfoArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_HPP_

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
// Member 'diagnostics'
#include "aimdk_msgs/msg/detail/diagnostic_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__DiagnosticInfoArray __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__DiagnosticInfoArray __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticInfoArray_
{
  using Type = DiagnosticInfoArray_<ContainerAllocator>;

  explicit DiagnosticInfoArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DiagnosticInfoArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _diagnostics_type =
    std::vector<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>>;
  _diagnostics_type diagnostics;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__diagnostics(
    const std::vector<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>> & _arg)
  {
    this->diagnostics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__DiagnosticInfoArray
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__DiagnosticInfoArray
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfoArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticInfoArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->diagnostics != other.diagnostics) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticInfoArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticInfoArray_

// alias to use template instance with default allocator
using DiagnosticInfoArray =
  aimdk_msgs::msg::DiagnosticInfoArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO_ARRAY__STRUCT_HPP_
