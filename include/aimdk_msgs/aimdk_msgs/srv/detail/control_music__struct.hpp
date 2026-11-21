// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/ControlMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__ControlMusic_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__ControlMusic_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlMusic_Request_
{
  using Type = ControlMusic_Request_<ContainerAllocator>;

  explicit ControlMusic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->play_index = 0l;
      this->no_auto_next = false;
      this->debug_args = "";
    }
  }

  explicit ControlMusic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    debug_args(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->play_index = 0l;
      this->no_auto_next = false;
      this->debug_args = "";
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _control_type_type =
    int32_t;
  _control_type_type control_type;
  using _play_index_type =
    int32_t;
  _play_index_type play_index;
  using _no_auto_next_type =
    bool;
  _no_auto_next_type no_auto_next;
  using _debug_args_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_args_type debug_args;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__control_type(
    const int32_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__play_index(
    const int32_t & _arg)
  {
    this->play_index = _arg;
    return *this;
  }
  Type & set__no_auto_next(
    const bool & _arg)
  {
    this->no_auto_next = _arg;
    return *this;
  }
  Type & set__debug_args(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_args = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CONTROL_TYPE_NONE =
    0;
  static constexpr int32_t CONTROL_TYPE_PLAY =
    1;
  static constexpr int32_t CONTROL_TYPE_STOP =
    2;
  static constexpr int32_t CONTROL_TYPE_PAUSE =
    3;
  static constexpr int32_t CONTROL_TYPE_RESUME =
    4;
  static constexpr int32_t CONTROL_TYPE_PREVIOUS =
    5;
  static constexpr int32_t CONTROL_TYPE_NEXT =
    6;
  static constexpr int32_t CONTROL_TYPE_DEBUG =
    1000;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__ControlMusic_Request
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__ControlMusic_Request
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMusic_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->play_index != other.play_index) {
      return false;
    }
    if (this->no_auto_next != other.no_auto_next) {
      return false;
    }
    if (this->debug_args != other.debug_args) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMusic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMusic_Request_

// alias to use template instance with default allocator
using ControlMusic_Request =
  aimdk_msgs::srv::ControlMusic_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_PLAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_PREVIOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_NEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ControlMusic_Request_<ContainerAllocator>::CONTROL_TYPE_DEBUG;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__ControlMusic_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__ControlMusic_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlMusic_Response_
{
  using Type = ControlMusic_Response_<ContainerAllocator>;

  explicit ControlMusic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_command_id = 0ull;
    }
  }

  explicit ControlMusic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_command_id = 0ull;
    }
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;
  using _control_command_id_type =
    uint64_t;
  _control_command_id_type control_command_id;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__control_command_id(
    const uint64_t & _arg)
  {
    this->control_command_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__ControlMusic_Response
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__ControlMusic_Response
    std::shared_ptr<aimdk_msgs::srv::ControlMusic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMusic_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->control_command_id != other.control_command_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMusic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMusic_Response_

// alias to use template instance with default allocator
using ControlMusic_Response =
  aimdk_msgs::srv::ControlMusic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct ControlMusic
{
  using Request = aimdk_msgs::srv::ControlMusic_Request;
  using Response = aimdk_msgs::srv::ControlMusic_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__CONTROL_MUSIC__STRUCT_HPP_
