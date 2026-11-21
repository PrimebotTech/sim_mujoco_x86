// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/GetDcuInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDcuInfo_Request_
{
  using Type = GetDcuInfo_Request_<ContainerAllocator>;

  explicit GetDcuInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit GetDcuInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Request
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Request
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDcuInfo_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDcuInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDcuInfo_Request_

// alias to use template instance with default allocator
using GetDcuInfo_Request =
  aimdk_msgs::srv::GetDcuInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDcuInfo_Response_
{
  using Type = GetDcuInfo_Response_<ContainerAllocator>;

  explicit GetDcuInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->udcu_fw_ver = "";
      this->udcu_hw_ver = "";
      this->udcu_build_time = "";
      this->ddcu_fw_ver = "";
      this->ddcu_hw_ver = "";
      this->ddcu_build_time = "";
      this->safedcu_fw_ver = "";
      this->safedcu_hw_ver = "";
      this->safedcu_build_time = "";
    }
  }

  explicit GetDcuInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init),
    udcu_fw_ver(_alloc),
    udcu_hw_ver(_alloc),
    udcu_build_time(_alloc),
    ddcu_fw_ver(_alloc),
    ddcu_hw_ver(_alloc),
    ddcu_build_time(_alloc),
    safedcu_fw_ver(_alloc),
    safedcu_hw_ver(_alloc),
    safedcu_build_time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->udcu_fw_ver = "";
      this->udcu_hw_ver = "";
      this->udcu_build_time = "";
      this->ddcu_fw_ver = "";
      this->ddcu_hw_ver = "";
      this->ddcu_build_time = "";
      this->safedcu_fw_ver = "";
      this->safedcu_hw_ver = "";
      this->safedcu_build_time = "";
    }
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _response_type response;
  using _udcu_fw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _udcu_fw_ver_type udcu_fw_ver;
  using _udcu_hw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _udcu_hw_ver_type udcu_hw_ver;
  using _udcu_build_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _udcu_build_time_type udcu_build_time;
  using _ddcu_fw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ddcu_fw_ver_type ddcu_fw_ver;
  using _ddcu_hw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ddcu_hw_ver_type ddcu_hw_ver;
  using _ddcu_build_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ddcu_build_time_type ddcu_build_time;
  using _safedcu_fw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _safedcu_fw_ver_type safedcu_fw_ver;
  using _safedcu_hw_ver_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _safedcu_hw_ver_type safedcu_hw_ver;
  using _safedcu_build_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _safedcu_build_time_type safedcu_build_time;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__udcu_fw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->udcu_fw_ver = _arg;
    return *this;
  }
  Type & set__udcu_hw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->udcu_hw_ver = _arg;
    return *this;
  }
  Type & set__udcu_build_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->udcu_build_time = _arg;
    return *this;
  }
  Type & set__ddcu_fw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ddcu_fw_ver = _arg;
    return *this;
  }
  Type & set__ddcu_hw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ddcu_hw_ver = _arg;
    return *this;
  }
  Type & set__ddcu_build_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ddcu_build_time = _arg;
    return *this;
  }
  Type & set__safedcu_fw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->safedcu_fw_ver = _arg;
    return *this;
  }
  Type & set__safedcu_hw_ver(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->safedcu_hw_ver = _arg;
    return *this;
  }
  Type & set__safedcu_build_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->safedcu_build_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Response
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetDcuInfo_Response
    std::shared_ptr<aimdk_msgs::srv::GetDcuInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDcuInfo_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->udcu_fw_ver != other.udcu_fw_ver) {
      return false;
    }
    if (this->udcu_hw_ver != other.udcu_hw_ver) {
      return false;
    }
    if (this->udcu_build_time != other.udcu_build_time) {
      return false;
    }
    if (this->ddcu_fw_ver != other.ddcu_fw_ver) {
      return false;
    }
    if (this->ddcu_hw_ver != other.ddcu_hw_ver) {
      return false;
    }
    if (this->ddcu_build_time != other.ddcu_build_time) {
      return false;
    }
    if (this->safedcu_fw_ver != other.safedcu_fw_ver) {
      return false;
    }
    if (this->safedcu_hw_ver != other.safedcu_hw_ver) {
      return false;
    }
    if (this->safedcu_build_time != other.safedcu_build_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDcuInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDcuInfo_Response_

// alias to use template instance with default allocator
using GetDcuInfo_Response =
  aimdk_msgs::srv::GetDcuInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct GetDcuInfo
{
  using Request = aimdk_msgs::srv::GetDcuInfo_Request;
  using Response = aimdk_msgs::srv::GetDcuInfo_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_DCU_INFO__STRUCT_HPP_
