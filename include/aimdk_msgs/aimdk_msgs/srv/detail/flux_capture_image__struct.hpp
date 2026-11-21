// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/FluxCaptureImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FluxCaptureImage_Request_
{
  using Type = FluxCaptureImage_Request_<ContainerAllocator>;

  explicit FluxCaptureImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0ul;
    }
  }

  explicit FluxCaptureImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quality = 0ul;
    }
  }

  // field types and members
  using _quality_type =
    uint32_t;
  _quality_type quality;

  // setters for named parameter idiom
  Type & set__quality(
    const uint32_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Request
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Request
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FluxCaptureImage_Request_ & other) const
  {
    if (this->quality != other.quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const FluxCaptureImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FluxCaptureImage_Request_

// alias to use template instance with default allocator
using FluxCaptureImage_Request =
  aimdk_msgs::srv::FluxCaptureImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FluxCaptureImage_Response_
{
  using Type = FluxCaptureImage_Response_<ContainerAllocator>;

  explicit FluxCaptureImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->reason = 0l;
      this->message = "";
    }
  }

  explicit FluxCaptureImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
      this->reason = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _status_type =
    int32_t;
  _status_type status;
  using _reason_type =
    int32_t;
  _reason_type reason;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__reason(
    const int32_t & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Response
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__FluxCaptureImage_Response
    std::shared_ptr<aimdk_msgs::srv::FluxCaptureImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FluxCaptureImage_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const FluxCaptureImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FluxCaptureImage_Response_

// alias to use template instance with default allocator
using FluxCaptureImage_Response =
  aimdk_msgs::srv::FluxCaptureImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct FluxCaptureImage
{
  using Request = aimdk_msgs::srv::FluxCaptureImage_Request;
  using Response = aimdk_msgs::srv::FluxCaptureImage_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_CAPTURE_IMAGE__STRUCT_HPP_
