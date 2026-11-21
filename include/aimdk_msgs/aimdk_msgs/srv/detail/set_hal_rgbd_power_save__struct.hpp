// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/SetHalRgbdPowerSave.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHalRgbdPowerSave_Request_
{
  using Type = SetHalRgbdPowerSave_Request_<ContainerAllocator>;

  explicit SetHalRgbdPowerSave_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_mask = 0ul;
      this->trigger_type = 0;
      this->trigger_reason = 0;
    }
  }

  explicit SetHalRgbdPowerSave_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_mask = 0ul;
      this->trigger_type = 0;
      this->trigger_reason = 0;
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _camera_mask_type =
    uint32_t;
  _camera_mask_type camera_mask;
  using _trigger_type_type =
    uint8_t;
  _trigger_type_type trigger_type;
  using _trigger_reason_type =
    uint8_t;
  _trigger_reason_type trigger_reason;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__camera_mask(
    const uint32_t & _arg)
  {
    this->camera_mask = _arg;
    return *this;
  }
  Type & set__trigger_type(
    const uint8_t & _arg)
  {
    this->trigger_type = _arg;
    return *this;
  }
  Type & set__trigger_reason(
    const uint8_t & _arg)
  {
    this->trigger_reason = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAMERA_ALL =
    0u;
  static constexpr uint32_t CAMERA_TOF_1 =
    1u;
  static constexpr uint32_t CAMERA_TOF_2 =
    2u;
  static constexpr uint32_t CAMERA_TOF_3 =
    4u;
  static constexpr uint32_t CAMERA_TOF_4 =
    8u;
  static constexpr uint32_t CAMERA_TOF_5 =
    16u;
  static constexpr uint8_t ENTER_POWER_SAVE_MODE =
    0u;
  static constexpr uint8_t EXIT_POWER_SAVE_MODE =
    1u;
  static constexpr uint8_t TRIGGER_UNKNOWN =
    0u;
  static constexpr uint8_t TRIGGER_LOW_POWER =
    1u;
  static constexpr uint8_t TRIGGER_CHARGING =
    2u;
  static constexpr uint8_t TRIGGER_NORMAL =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Request
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Request
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHalRgbdPowerSave_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->camera_mask != other.camera_mask) {
      return false;
    }
    if (this->trigger_type != other.trigger_type) {
      return false;
    }
    if (this->trigger_reason != other.trigger_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHalRgbdPowerSave_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHalRgbdPowerSave_Request_

// alias to use template instance with default allocator
using SetHalRgbdPowerSave_Request =
  aimdk_msgs::srv::SetHalRgbdPowerSave_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_TOF_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_TOF_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_TOF_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_TOF_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::CAMERA_TOF_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::ENTER_POWER_SAVE_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::EXIT_POWER_SAVE_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::TRIGGER_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::TRIGGER_LOW_POWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::TRIGGER_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetHalRgbdPowerSave_Request_<ContainerAllocator>::TRIGGER_NORMAL;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHalRgbdPowerSave_Response_
{
  using Type = SetHalRgbdPowerSave_Response_<ContainerAllocator>;

  explicit SetHalRgbdPowerSave_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit SetHalRgbdPowerSave_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Response
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetHalRgbdPowerSave_Response
    std::shared_ptr<aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHalRgbdPowerSave_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHalRgbdPowerSave_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHalRgbdPowerSave_Response_

// alias to use template instance with default allocator
using SetHalRgbdPowerSave_Response =
  aimdk_msgs::srv::SetHalRgbdPowerSave_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct SetHalRgbdPowerSave
{
  using Request = aimdk_msgs::srv::SetHalRgbdPowerSave_Request;
  using Response = aimdk_msgs::srv::SetHalRgbdPowerSave_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_HAL_RGBD_POWER_SAVE__STRUCT_HPP_
