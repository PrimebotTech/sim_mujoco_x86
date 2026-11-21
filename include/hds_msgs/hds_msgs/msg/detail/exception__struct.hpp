// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hds_msgs:msg/Exception.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hds_msgs__msg__Exception __attribute__((deprecated))
#else
# define DEPRECATED__hds_msgs__msg__Exception __declspec(deprecated)
#endif

namespace hds_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Exception_
{
  using Type = Exception_<ContainerAllocator>;

  explicit Exception_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->module_id = 0;
      this->code = 0ul;
      this->info = "";
    }
  }

  explicit Exception_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->module_id = 0;
      this->code = 0ul;
      this->info = "";
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _module_id_type =
    uint8_t;
  _module_id_type module_id;
  using _code_type =
    uint32_t;
  _code_type code;
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
    const uint8_t & _arg)
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
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_NORMAL =
    0u;
  static constexpr uint8_t TYPE_TRIGGER_APPEAR =
    1u;
  static constexpr uint8_t TYPE_TRIGGER_DISAPPEAR =
    2u;

  // pointer types
  using RawPtr =
    hds_msgs::msg::Exception_<ContainerAllocator> *;
  using ConstRawPtr =
    const hds_msgs::msg::Exception_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hds_msgs::msg::Exception_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hds_msgs::msg::Exception_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hds_msgs::msg::Exception_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hds_msgs::msg::Exception_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hds_msgs::msg::Exception_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hds_msgs::msg::Exception_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hds_msgs::msg::Exception_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hds_msgs::msg::Exception_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hds_msgs__msg__Exception
    std::shared_ptr<hds_msgs::msg::Exception_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hds_msgs__msg__Exception
    std::shared_ptr<hds_msgs::msg::Exception_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Exception_ & other) const
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
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Exception_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Exception_

// alias to use template instance with default allocator
using Exception =
  hds_msgs::msg::Exception_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Exception_<ContainerAllocator>::TYPE_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Exception_<ContainerAllocator>::TYPE_TRIGGER_APPEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Exception_<ContainerAllocator>::TYPE_TRIGGER_DISAPPEAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace hds_msgs

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION__STRUCT_HPP_
