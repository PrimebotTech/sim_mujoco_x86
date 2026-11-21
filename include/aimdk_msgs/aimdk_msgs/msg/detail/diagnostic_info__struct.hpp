// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/DiagnosticInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_HPP_

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
#include "aimdk_msgs/msg/detail/diagnostic_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__DiagnosticInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__DiagnosticInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticInfo_
{
  using Type = DiagnosticInfo_<ContainerAllocator>;

  explicit DiagnosticInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->module_id = 0;
      this->code = 0ul;
      this->diag_code = 0ull;
      this->info = "";
    }
  }

  explicit DiagnosticInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->module_id = 0;
      this->code = 0ul;
      this->diag_code = 0ull;
      this->info = "";
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    aimdk_msgs::msg::DiagnosticType_<ContainerAllocator>;
  _type_type type;
  using _module_id_type =
    uint8_t;
  _module_id_type module_id;
  using _code_type =
    uint32_t;
  _code_type code;
  using _diag_code_type =
    uint64_t;
  _diag_code_type diag_code;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const aimdk_msgs::msg::DiagnosticType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__module_id(
    const uint8_t & _arg)
  {
    this->module_id = _arg;
    return *this;
  }
  Type & set__code(
    const uint32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__diag_code(
    const uint64_t & _arg)
  {
    this->diag_code = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__DiagnosticInfo
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__DiagnosticInfo
    std::shared_ptr<aimdk_msgs::msg::DiagnosticInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticInfo_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->module_id != other.module_id) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->diag_code != other.diag_code) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticInfo_

// alias to use template instance with default allocator
using DiagnosticInfo =
  aimdk_msgs::msg::DiagnosticInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__DIAGNOSTIC_INFO__STRUCT_HPP_
