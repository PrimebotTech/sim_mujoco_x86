// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/CaptureJpegImage.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureJpegImage_Request_
{
  using Type = CaptureJpegImage_Request_<ContainerAllocator>;

  explicit CaptureJpegImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = "";
      this->timeout_ms = 0ul;
    }
  }

  explicit CaptureJpegImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    camera_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = "";
      this->timeout_ms = 0ul;
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _camera_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_id_type camera_id;
  using _timeout_ms_type =
    uint32_t;
  _timeout_ms_type timeout_ms;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__camera_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Request
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Request
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureJpegImage_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureJpegImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureJpegImage_Request_

// alias to use template instance with default allocator
using CaptureJpegImage_Request =
  aimdk_msgs::srv::CaptureJpegImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"
// Member 'jpeg'
#include "aimdk_msgs/msg/detail/jpeg_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureJpegImage_Response_
{
  using Type = CaptureJpegImage_Response_<ContainerAllocator>;

  explicit CaptureJpegImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init),
    jpeg(_init)
  {
    (void)_init;
  }

  explicit CaptureJpegImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init),
    jpeg(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;
  using _jpeg_type =
    aimdk_msgs::msg::JpegImage_<ContainerAllocator>;
  _jpeg_type jpeg;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__jpeg(
    const aimdk_msgs::msg::JpegImage_<ContainerAllocator> & _arg)
  {
    this->jpeg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Response
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__CaptureJpegImage_Response
    std::shared_ptr<aimdk_msgs::srv::CaptureJpegImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureJpegImage_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->jpeg != other.jpeg) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureJpegImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureJpegImage_Response_

// alias to use template instance with default allocator
using CaptureJpegImage_Response =
  aimdk_msgs::srv::CaptureJpegImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct CaptureJpegImage
{
  using Request = aimdk_msgs::srv::CaptureJpegImage_Request;
  using Response = aimdk_msgs::srv::CaptureJpegImage_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__CAPTURE_JPEG_IMAGE__STRUCT_HPP_
