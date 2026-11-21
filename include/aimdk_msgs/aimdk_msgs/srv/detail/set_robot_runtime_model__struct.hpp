// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/SetRobotRuntimeModel.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__struct.hpp"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotRuntimeModel_Request_
{
  using Type = SetRobotRuntimeModel_Request_<ContainerAllocator>;

  explicit SetRobotRuntimeModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    runtime_model(_init)
  {
    (void)_init;
  }

  explicit SetRobotRuntimeModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    runtime_model(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _runtime_model_type =
    aimdk_msgs::msg::McRuntimeModel_<ContainerAllocator>;
  _runtime_model_type runtime_model;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
    aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Request
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Request
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotRuntimeModel_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->runtime_model != other.runtime_model) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotRuntimeModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotRuntimeModel_Request_

// alias to use template instance with default allocator
using SetRobotRuntimeModel_Request =
  aimdk_msgs::srv::SetRobotRuntimeModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_task_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRobotRuntimeModel_Response_
{
  using Type = SetRobotRuntimeModel_Response_<ContainerAllocator>;

  explicit SetRobotRuntimeModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit SetRobotRuntimeModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Response
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__SetRobotRuntimeModel_Response
    std::shared_ptr<aimdk_msgs::srv::SetRobotRuntimeModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRobotRuntimeModel_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRobotRuntimeModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRobotRuntimeModel_Response_

// alias to use template instance with default allocator
using SetRobotRuntimeModel_Response =
  aimdk_msgs::srv::SetRobotRuntimeModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct SetRobotRuntimeModel
{
  using Request = aimdk_msgs::srv::SetRobotRuntimeModel_Request;
  using Response = aimdk_msgs::srv::SetRobotRuntimeModel_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_ROBOT_RUNTIME_MODEL__STRUCT_HPP_
