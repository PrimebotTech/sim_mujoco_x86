// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/SetHalCameraStream.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHalCameraStream_Request_
{
  using Type = SetHalCameraStream_Request_<ContainerAllocator>;

  explicit SetHalCameraStream_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->req_type = 0;
      this->power_ctrl_mask = 0ul;
      this->stream_ctrl_mask = 0ul;
    }
  }

  explicit SetHalCameraStream_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    trace_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->req_type = 0;
      this->power_ctrl_mask = 0ul;
      this->stream_ctrl_mask = 0ul;
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _trace_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trace_id_type trace_id;
  using _req_type_type =
    uint8_t;
  _req_type_type req_type;
  using _power_ctrl_mask_type =
    uint32_t;
  _power_ctrl_mask_type power_ctrl_mask;
  using _stream_ctrl_mask_type =
    uint32_t;
  _stream_ctrl_mask_type stream_ctrl_mask;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__trace_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trace_id = _arg;
    return *this;
  }
  Type & set__req_type(
    const uint8_t & _arg)
  {
    this->req_type = _arg;
    return *this;
  }
  Type & set__power_ctrl_mask(
    const uint32_t & _arg)
  {
    this->power_ctrl_mask = _arg;
    return *this;
  }
  Type & set__stream_ctrl_mask(
    const uint32_t & _arg)
  {
    this->stream_ctrl_mask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SET =
    0u;
  static constexpr uint8_t GET =
    1u;
  static constexpr uint32_t CAMERA_0 =
    1u;
  static constexpr uint32_t CAMERA_1 =
    2u;
  static constexpr uint32_t CAMERA_2 =
    4u;
  static constexpr uint32_t CAMERA_3 =
    8u;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Request
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Request
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHalCameraStream_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->trace_id != other.trace_id) {
      return false;
    }
    if (this->req_type != other.req_type) {
      return false;
    }
    if (this->power_ctrl_mask != other.power_ctrl_mask) {
      return false;
    }
    if (this->stream_ctrl_mask != other.stream_ctrl_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHalCameraStream_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHalCameraStream_Request_

// alias to use template instance with default allocator
using SetHalCameraStream_Request =
  aimdk_msgs::srv::SetHalCameraStream_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Request_<ContainerAllocator>::SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Request_<ContainerAllocator>::GET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalCameraStream_Request_<ContainerAllocator>::CAMERA_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalCameraStream_Request_<ContainerAllocator>::CAMERA_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalCameraStream_Request_<ContainerAllocator>::CAMERA_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalCameraStream_Request_<ContainerAllocator>::CAMERA_3;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHalCameraStream_Response_
{
  using Type = SetHalCameraStream_Response_<ContainerAllocator>;

  explicit SetHalCameraStream_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->req_result = 0;
      this->target_state_mask = 0ul;
      this->switch_state = 0;
    }
  }

  explicit SetHalCameraStream_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init),
    trace_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->req_result = 0;
      this->target_state_mask = 0ul;
      this->switch_state = 0;
    }
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;
  using _trace_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trace_id_type trace_id;
  using _req_result_type =
    uint8_t;
  _req_result_type req_result;
  using _target_state_mask_type =
    uint32_t;
  _target_state_mask_type target_state_mask;
  using _switch_state_type =
    uint8_t;
  _switch_state_type switch_state;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__trace_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trace_id = _arg;
    return *this;
  }
  Type & set__req_result(
    const uint8_t & _arg)
  {
    this->req_result = _arg;
    return *this;
  }
  Type & set__target_state_mask(
    const uint32_t & _arg)
  {
    this->target_state_mask = _arg;
    return *this;
  }
  Type & set__switch_state(
    const uint8_t & _arg)
  {
    this->switch_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REQ_FAILED =
    0u;
  static constexpr uint8_t REQ_SUCCESS =
    1u;
  static constexpr uint8_t STATE_SWITCHED =
    0u;
  static constexpr uint8_t STATE_SWITCHING =
    1u;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Response
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetHalCameraStream_Response
    std::shared_ptr<aimdk_msgs::srv::SetHalCameraStream_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHalCameraStream_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->trace_id != other.trace_id) {
      return false;
    }
    if (this->req_result != other.req_result) {
      return false;
    }
    if (this->target_state_mask != other.target_state_mask) {
      return false;
    }
    if (this->switch_state != other.switch_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHalCameraStream_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHalCameraStream_Response_

// alias to use template instance with default allocator
using SetHalCameraStream_Response =
  aimdk_msgs::srv::SetHalCameraStream_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Response_<ContainerAllocator>::REQ_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Response_<ContainerAllocator>::REQ_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Response_<ContainerAllocator>::STATE_SWITCHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalCameraStream_Response_<ContainerAllocator>::STATE_SWITCHING;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct SetHalCameraStream
{
  using Request = aimdk_msgs::srv::SetHalCameraStream_Request;
  using Response = aimdk_msgs::srv::SetHalCameraStream_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_CAMERA_STREAM__STRUCT_HPP_
