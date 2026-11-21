// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/StopCaptureAudioFile.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__STRUCT_HPP_

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
// Member 'file'
#include "aimdk_msgs/msg/detail/audio_file__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopCaptureAudioFile_Request_
{
  using Type = StopCaptureAudioFile_Request_<ContainerAllocator>;

  explicit StopCaptureAudioFile_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init),
    file(_init)
  {
    (void)_init;
  }

  explicit StopCaptureAudioFile_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    file(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;
  using _file_type =
    aimdk_msgs::msg::AudioFile_<ContainerAllocator>;
  _file_type file;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__file(
    const aimdk_msgs::msg::AudioFile_<ContainerAllocator> & _arg)
  {
    this->file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Request
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Request
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopCaptureAudioFile_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->file != other.file) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopCaptureAudioFile_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopCaptureAudioFile_Request_

// alias to use template instance with default allocator
using StopCaptureAudioFile_Request =
  aimdk_msgs::srv::StopCaptureAudioFile_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopCaptureAudioFile_Response_
{
  using Type = StopCaptureAudioFile_Response_<ContainerAllocator>;

  explicit StopCaptureAudioFile_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit StopCaptureAudioFile_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Response
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__StopCaptureAudioFile_Response
    std::shared_ptr<aimdk_msgs::srv::StopCaptureAudioFile_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopCaptureAudioFile_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopCaptureAudioFile_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopCaptureAudioFile_Response_

// alias to use template instance with default allocator
using StopCaptureAudioFile_Response =
  aimdk_msgs::srv::StopCaptureAudioFile_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct StopCaptureAudioFile
{
  using Request = aimdk_msgs::srv::StopCaptureAudioFile_Request;
  using Response = aimdk_msgs::srv::StopCaptureAudioFile_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__STOP_CAPTURE_AUDIO_FILE__STRUCT_HPP_
