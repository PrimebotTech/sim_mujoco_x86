// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/EventProbeInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "aimdk_msgs/msg/detail/event_probe_type__struct.hpp"
// Member 'attrs'
#include "aimdk_msgs/msg/detail/event_probe_attr__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__EventProbeInfo __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__EventProbeInfo __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventProbeInfo_
{
  using Type = EventProbeInfo_<ContainerAllocator>;

  explicit EventProbeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->timestamp = 0ull;
      this->module_id = 0;
      this->event_id = 0ul;
      this->event_code = 0ull;
      this->desc = "";
    }
  }

  explicit EventProbeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    desc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->timestamp = 0ull;
      this->module_id = 0;
      this->event_id = 0ul;
      this->event_code = 0ull;
      this->desc = "";
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    aimdk_msgs::msg::EventProbeType_<ContainerAllocator>;
  _type_type type;
  using _module_id_type =
    uint8_t;
  _module_id_type module_id;
  using _event_id_type =
    uint32_t;
  _event_id_type event_id;
  using _event_code_type =
    uint64_t;
  _event_code_type event_code;
  using _desc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _desc_type desc;
  using _attrs_type =
    std::vector<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>>;
  _attrs_type attrs;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const aimdk_msgs::msg::EventProbeType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__module_id(
    const uint8_t & _arg)
  {
    this->module_id = _arg;
    return *this;
  }
  Type & set__event_id(
    const uint32_t & _arg)
  {
    this->event_id = _arg;
    return *this;
  }
  Type & set__event_code(
    const uint64_t & _arg)
  {
    this->event_code = _arg;
    return *this;
  }
  Type & set__desc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->desc = _arg;
    return *this;
  }
  Type & set__attrs(
    const std::vector<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::EventProbeAttr_<ContainerAllocator>>> & _arg)
  {
    this->attrs = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EA_STATUS_DEFAULT =
    0u;
  static constexpr uint8_t EA_STATUS_START =
    1u;
  static constexpr uint8_t EA_STATUS_END =
    2u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__EventProbeInfo
    std::shared_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__EventProbeInfo
    std::shared_ptr<aimdk_msgs::msg::EventProbeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventProbeInfo_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->module_id != other.module_id) {
      return false;
    }
    if (this->event_id != other.event_id) {
      return false;
    }
    if (this->event_code != other.event_code) {
      return false;
    }
    if (this->desc != other.desc) {
      return false;
    }
    if (this->attrs != other.attrs) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventProbeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventProbeInfo_

// alias to use template instance with default allocator
using EventProbeInfo =
  aimdk_msgs::msg::EventProbeInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeInfo_<ContainerAllocator>::EA_STATUS_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeInfo_<ContainerAllocator>::EA_STATUS_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventProbeInfo_<ContainerAllocator>::EA_STATUS_END;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_INFO__STRUCT_HPP_
