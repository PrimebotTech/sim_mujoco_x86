// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/SearchMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__SearchMusic_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SearchMusic_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchMusic_Request_
{
  using Type = SearchMusic_Request_<ContainerAllocator>;

  explicit SearchMusic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query = "";
      this->sp = 0l;
      this->size = 0l;
      this->library_mode = 0l;
    }
  }

  explicit SearchMusic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    query(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query = "";
      this->sp = 0l;
      this->size = 0l;
      this->library_mode = 0l;
    }
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _query_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _query_type query;
  using _sp_type =
    int32_t;
  _sp_type sp;
  using _size_type =
    int32_t;
  _size_type size;
  using _library_mode_type =
    int32_t;
  _library_mode_type library_mode;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__query(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->query = _arg;
    return *this;
  }
  Type & set__sp(
    const int32_t & _arg)
  {
    this->sp = _arg;
    return *this;
  }
  Type & set__size(
    const int32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__library_mode(
    const int32_t & _arg)
  {
    this->library_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SP_TYPE_QM =
    0;
  static constexpr int32_t SP_TYPE_XM =
    1;
  static constexpr int32_t LIBRARY_MODE_DEFAULT =
    1;
  static constexpr int32_t LIBRARY_MODE_CHILDREN =
    2;
  static constexpr int32_t SIZE_DEFAULT =
    30;

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SearchMusic_Request
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SearchMusic_Request
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchMusic_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->query != other.query) {
      return false;
    }
    if (this->sp != other.sp) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->library_mode != other.library_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchMusic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchMusic_Request_

// alias to use template instance with default allocator
using SearchMusic_Request =
  aimdk_msgs::srv::SearchMusic_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SearchMusic_Request_<ContainerAllocator>::SP_TYPE_QM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SearchMusic_Request_<ContainerAllocator>::SP_TYPE_XM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SearchMusic_Request_<ContainerAllocator>::LIBRARY_MODE_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SearchMusic_Request_<ContainerAllocator>::LIBRARY_MODE_CHILDREN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SearchMusic_Request_<ContainerAllocator>::SIZE_DEFAULT;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__SearchMusic_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SearchMusic_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchMusic_Response_
{
  using Type = SearchMusic_Response_<ContainerAllocator>;

  explicit SearchMusic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->search_command_id = 0ull;
    }
  }

  explicit SearchMusic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->search_command_id = 0ull;
    }
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;
  using _search_command_id_type =
    uint64_t;
  _search_command_id_type search_command_id;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__search_command_id(
    const uint64_t & _arg)
  {
    this->search_command_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SearchMusic_Response
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SearchMusic_Response
    std::shared_ptr<aimdk_msgs::srv::SearchMusic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchMusic_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->search_command_id != other.search_command_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchMusic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchMusic_Response_

// alias to use template instance with default allocator
using SearchMusic_Response =
  aimdk_msgs::srv::SearchMusic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct SearchMusic
{
  using Request = aimdk_msgs::srv::SearchMusic_Request;
  using Response = aimdk_msgs::srv::SearchMusic_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__STRUCT_HPP_
