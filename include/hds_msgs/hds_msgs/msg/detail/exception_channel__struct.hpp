// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#ifndef HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_HPP_
#define HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'exception_list'
#include "hds_msgs/msg/detail/exception__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hds_msgs__msg__ExceptionChannel __attribute__((deprecated))
#else
# define DEPRECATED__hds_msgs__msg__ExceptionChannel __declspec(deprecated)
#endif

namespace hds_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExceptionChannel_
{
  using Type = ExceptionChannel_<ContainerAllocator>;

  explicit ExceptionChannel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  explicit ExceptionChannel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _exception_list_type =
    std::vector<hds_msgs::msg::Exception_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hds_msgs::msg::Exception_<ContainerAllocator>>>;
  _exception_list_type exception_list;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__exception_list(
    const std::vector<hds_msgs::msg::Exception_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hds_msgs::msg::Exception_<ContainerAllocator>>> & _arg)
  {
    this->exception_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hds_msgs::msg::ExceptionChannel_<ContainerAllocator> *;
  using ConstRawPtr =
    const hds_msgs::msg::ExceptionChannel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hds_msgs::msg::ExceptionChannel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hds_msgs::msg::ExceptionChannel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hds_msgs__msg__ExceptionChannel
    std::shared_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hds_msgs__msg__ExceptionChannel
    std::shared_ptr<hds_msgs::msg::ExceptionChannel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExceptionChannel_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->exception_list != other.exception_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExceptionChannel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExceptionChannel_

// alias to use template instance with default allocator
using ExceptionChannel =
  hds_msgs::msg::ExceptionChannel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hds_msgs

#endif  // HDS_MSGS__MSG__DETAIL__EXCEPTION_CHANNEL__STRUCT_HPP_
