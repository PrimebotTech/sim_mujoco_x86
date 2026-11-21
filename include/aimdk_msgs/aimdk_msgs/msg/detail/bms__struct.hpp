// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/Bms.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__BMS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__BMS__STRUCT_HPP_

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
#include "aimdk_msgs/msg/detail/message_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__Bms __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__Bms __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bms_
{
  using Type = Bms_<ContainerAllocator>;

  explicit Bms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manufacturer = "";
      this->serial_number = "";
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->power_request = 0;
      this->status = 0ul;
      this->balance_line_resistance = 0;
      this->voltage = 0ul;
      this->current = 0l;
      this->power = 0l;
      this->temperature = 0.0f;
      this->remaining_capacity = 0ul;
      this->remaining_capacity_percentage = 0;
      this->cycle_count = 0;
      this->cycle_total_capacity = 0ul;
    }
  }

  explicit Bms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    manufacturer(_alloc),
    serial_number(_alloc),
    protocol_version(_alloc),
    hardware_version(_alloc),
    software_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manufacturer = "";
      this->serial_number = "";
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->power_request = 0;
      this->status = 0ul;
      this->balance_line_resistance = 0;
      this->voltage = 0ul;
      this->current = 0l;
      this->power = 0l;
      this->temperature = 0.0f;
      this->remaining_capacity = 0ul;
      this->remaining_capacity_percentage = 0;
      this->cycle_count = 0;
      this->cycle_total_capacity = 0ul;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _manufacturer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manufacturer_type manufacturer;
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_number_type serial_number;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_version_type hardware_version;
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _power_request_type =
    uint16_t;
  _power_request_type power_request;
  using _status_type =
    uint32_t;
  _status_type status;
  using _balance_line_resistance_type =
    uint16_t;
  _balance_line_resistance_type balance_line_resistance;
  using _voltage_type =
    uint32_t;
  _voltage_type voltage;
  using _current_type =
    int32_t;
  _current_type current;
  using _power_type =
    int32_t;
  _power_type power;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _remaining_capacity_type =
    uint32_t;
  _remaining_capacity_type remaining_capacity;
  using _remaining_capacity_percentage_type =
    uint8_t;
  _remaining_capacity_percentage_type remaining_capacity_percentage;
  using _cycle_count_type =
    uint16_t;
  _cycle_count_type cycle_count;
  using _cycle_total_capacity_type =
    uint32_t;
  _cycle_total_capacity_type cycle_total_capacity;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__manufacturer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manufacturer = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_version = _arg;
    return *this;
  }
  Type & set__software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software_version = _arg;
    return *this;
  }
  Type & set__power_request(
    const uint16_t & _arg)
  {
    this->power_request = _arg;
    return *this;
  }
  Type & set__status(
    const uint32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__balance_line_resistance(
    const uint16_t & _arg)
  {
    this->balance_line_resistance = _arg;
    return *this;
  }
  Type & set__voltage(
    const uint32_t & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const int32_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__power(
    const int32_t & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__remaining_capacity(
    const uint32_t & _arg)
  {
    this->remaining_capacity = _arg;
    return *this;
  }
  Type & set__remaining_capacity_percentage(
    const uint8_t & _arg)
  {
    this->remaining_capacity_percentage = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const uint16_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__cycle_total_capacity(
    const uint32_t & _arg)
  {
    this->cycle_total_capacity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::Bms_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::Bms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Bms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Bms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__Bms
    std::shared_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__Bms
    std::shared_ptr<aimdk_msgs::msg::Bms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bms_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->manufacturer != other.manufacturer) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->hardware_version != other.hardware_version) {
      return false;
    }
    if (this->software_version != other.software_version) {
      return false;
    }
    if (this->power_request != other.power_request) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->balance_line_resistance != other.balance_line_resistance) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->remaining_capacity != other.remaining_capacity) {
      return false;
    }
    if (this->remaining_capacity_percentage != other.remaining_capacity_percentage) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->cycle_total_capacity != other.cycle_total_capacity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bms_

// alias to use template instance with default allocator
using Bms =
  aimdk_msgs::msg::Bms_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__BMS__STRUCT_HPP_
