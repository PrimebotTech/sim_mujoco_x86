// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/RegisterCustomMotion.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterCustomMotion_Request_
{
  using Type = RegisterCustomMotion_Request_<ContainerAllocator>;

  explicit RegisterCustomMotion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = "";
      this->res_path = "";
      this->write_to_disk = false;
    }
  }

  explicit RegisterCustomMotion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion(_alloc),
    res_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion = "";
      this->res_path = "";
      this->write_to_disk = false;
    }
  }

  // field types and members
  using _motion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_type motion;
  using _res_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _res_path_type res_path;
  using _write_to_disk_type =
    bool;
  _write_to_disk_type write_to_disk;

  // setters for named parameter idiom
  Type & set__motion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion = _arg;
    return *this;
  }
  Type & set__res_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->res_path = _arg;
    return *this;
  }
  Type & set__write_to_disk(
    const bool & _arg)
  {
    this->write_to_disk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Request
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Request
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterCustomMotion_Request_ & other) const
  {
    if (this->motion != other.motion) {
      return false;
    }
    if (this->res_path != other.res_path) {
      return false;
    }
    if (this->write_to_disk != other.write_to_disk) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterCustomMotion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterCustomMotion_Request_

// alias to use template instance with default allocator
using RegisterCustomMotion_Request =
  aimdk_msgs::srv::RegisterCustomMotion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterCustomMotion_Response_
{
  using Type = RegisterCustomMotion_Response_<ContainerAllocator>;

  explicit RegisterCustomMotion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit RegisterCustomMotion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonTaskResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonTaskResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Response
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__RegisterCustomMotion_Response
    std::shared_ptr<aimdk_msgs::srv::RegisterCustomMotion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterCustomMotion_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterCustomMotion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterCustomMotion_Response_

// alias to use template instance with default allocator
using RegisterCustomMotion_Response =
  aimdk_msgs::srv::RegisterCustomMotion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct RegisterCustomMotion
{
  using Request = aimdk_msgs::srv::RegisterCustomMotion_Request;
  using Response = aimdk_msgs::srv::RegisterCustomMotion_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__REGISTER_CUSTOM_MOTION__STRUCT_HPP_
