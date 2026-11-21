// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/McMotionRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__McMotionRecord_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__McMotionRecord_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct McMotionRecord_Request_
{
  using Type = McMotionRecord_Request_<ContainerAllocator>;

  explicit McMotionRecord_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->record_area = 0l;
      this->operation_type = 0l;
      this->max_duration = 0l;
      this->folder_path = "";
      this->file_name = "";
    }
  }

  explicit McMotionRecord_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    folder_path(_alloc),
    file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->record_area = 0l;
      this->operation_type = 0l;
      this->max_duration = 0l;
      this->folder_path = "";
      this->file_name = "";
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _record_area_type =
    int32_t;
  _record_area_type record_area;
  using _operation_type_type =
    int32_t;
  _operation_type_type operation_type;
  using _max_duration_type =
    int32_t;
  _max_duration_type max_duration;
  using _folder_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _folder_path_type folder_path;
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__record_area(
    const int32_t & _arg)
  {
    this->record_area = _arg;
    return *this;
  }
  Type & set__operation_type(
    const int32_t & _arg)
  {
    this->operation_type = _arg;
    return *this;
  }
  Type & set__max_duration(
    const int32_t & _arg)
  {
    this->max_duration = _arg;
    return *this;
  }
  Type & set__folder_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->folder_path = _arg;
    return *this;
  }
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RECORD_UPPER =
    1;
  static constexpr int32_t RECORD_LOWER =
    2;
  static constexpr int32_t RECORD_ALL =
    3;
  static constexpr int32_t OPER_START =
    1;
  static constexpr int32_t OPER_STOP =
    2;
  static constexpr int32_t OPER_PAUSE =
    3;
  static constexpr int32_t OPER_RESUME =
    4;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__McMotionRecord_Request
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__McMotionRecord_Request
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMotionRecord_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->record_area != other.record_area) {
      return false;
    }
    if (this->operation_type != other.operation_type) {
      return false;
    }
    if (this->max_duration != other.max_duration) {
      return false;
    }
    if (this->folder_path != other.folder_path) {
      return false;
    }
    if (this->file_name != other.file_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMotionRecord_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMotionRecord_Request_

// alias to use template instance with default allocator
using McMotionRecord_Request =
  aimdk_msgs::srv::McMotionRecord_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::RECORD_UPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::RECORD_LOWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::RECORD_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::OPER_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::OPER_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::OPER_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McMotionRecord_Request_<ContainerAllocator>::OPER_RESUME;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__McMotionRecord_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__McMotionRecord_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct McMotionRecord_Response_
{
  using Type = McMotionRecord_Response_<ContainerAllocator>;

  explicit McMotionRecord_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit McMotionRecord_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__McMotionRecord_Response
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__McMotionRecord_Response
    std::shared_ptr<aimdk_msgs::srv::McMotionRecord_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McMotionRecord_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const McMotionRecord_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McMotionRecord_Response_

// alias to use template instance with default allocator
using McMotionRecord_Response =
  aimdk_msgs::srv::McMotionRecord_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct McMotionRecord
{
  using Request = aimdk_msgs::srv::McMotionRecord_Request;
  using Response = aimdk_msgs::srv::McMotionRecord_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__MC_MOTION_RECORD__STRUCT_HPP_
