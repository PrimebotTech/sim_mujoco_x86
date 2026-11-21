// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/AudioDeviceInfoList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input_list'
// Member 'output_list'
#include "aimdk_msgs/msg/detail/audio_device_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__AudioDeviceInfoList __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__AudioDeviceInfoList __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioDeviceInfoList_
{
  using Type = AudioDeviceInfoList_<ContainerAllocator>;

  explicit AudioDeviceInfoList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AudioDeviceInfoList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _input_list_type =
    std::vector<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>>>;
  _input_list_type input_list;
  using _output_list_type =
    std::vector<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>>>;
  _output_list_type output_list;

  // setters for named parameter idiom
  Type & set__input_list(
    const std::vector<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>>> & _arg)
  {
    this->input_list = _arg;
    return *this;
  }
  Type & set__output_list(
    const std::vector<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::AudioDeviceInfo_<ContainerAllocator>>> & _arg)
  {
    this->output_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__AudioDeviceInfoList
    std::shared_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__AudioDeviceInfoList
    std::shared_ptr<aimdk_msgs::msg::AudioDeviceInfoList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioDeviceInfoList_ & other) const
  {
    if (this->input_list != other.input_list) {
      return false;
    }
    if (this->output_list != other.output_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioDeviceInfoList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioDeviceInfoList_

// alias to use template instance with default allocator
using AudioDeviceInfoList =
  aimdk_msgs::msg::AudioDeviceInfoList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__AUDIO_DEVICE_INFO_LIST__STRUCT_HPP_
