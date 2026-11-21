// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/GetRobotRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_

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
#include "aimdk_msgs/msg/detail/common_task_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotRuntimeModel_Request_
{
  using Type = GetRobotRuntimeModel_Request_<ContainerAllocator>;

  explicit GetRobotRuntimeModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit GetRobotRuntimeModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonTaskRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonTaskRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Request
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Request
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotRuntimeModel_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotRuntimeModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotRuntimeModel_Request_

// alias to use template instance with default allocator
using GetRobotRuntimeModel_Request =
  aimdk_msgs::srv::GetRobotRuntimeModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.hpp"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotRuntimeModel_Response_
{
  using Type = GetRobotRuntimeModel_Response_<ContainerAllocator>;

  explicit GetRobotRuntimeModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init),
    runtime_model(_init)
  {
    (void)_init;
  }

  explicit GetRobotRuntimeModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init),
    runtime_model(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    aimdk_msgs::msg::CommonTaskResponse_<ContainerAllocator>;
  _response_type response;
  using _runtime_model_type =
    aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>;
  _runtime_model_type runtime_model;

  // setters for named parameter idiom
  Type & set__response(
    const aimdk_msgs::msg::CommonTaskResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__runtime_model(
    const aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator> & _arg)
  {
    this->runtime_model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Response
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetRobotRuntimeModel_Response
    std::shared_ptr<aimdk_msgs::srv::GetRobotRuntimeModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotRuntimeModel_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    if (this->runtime_model != other.runtime_model) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotRuntimeModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotRuntimeModel_Response_

// alias to use template instance with default allocator
using GetRobotRuntimeModel_Response =
  aimdk_msgs::srv::GetRobotRuntimeModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct GetRobotRuntimeModel
{
  using Request = aimdk_msgs::srv::GetRobotRuntimeModel_Request;
  using Response = aimdk_msgs::srv::GetRobotRuntimeModel_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_
