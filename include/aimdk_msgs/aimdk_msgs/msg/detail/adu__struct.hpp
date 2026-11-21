// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/Adu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__msg__Adu __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__Adu __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Adu_
{
  using Type = Adu_<ContainerAllocator>;

  explicit Adu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->status_word = 0;
      this->error_code = 0ul;
      this->board_12v_voltage = 0.0f;
      this->board_5v_voltage = 0.0f;
      this->board_3v3_voltage = 0.0f;
      this->board_1v2_voltage = 0.0f;
      this->board_1v8_voltage = 0.0f;
      this->board_3v8_voltage = 0.0f;
      this->system_12v_current = 0.0f;
      this->board_temperature_voltage = 0.0f;
      this->board_hardware_voltage = 0.0f;
      this->ntc_temperature = 0.0f;
      this->fan1_target_speed = 0ul;
      this->fan1_feedback_speed = 0ul;
      this->fan2_target_speed = 0ul;
      this->fan2_feedback_speed = 0ul;
    }
  }

  explicit Adu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc),
    hardware_version(_alloc),
    software_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->status_word = 0;
      this->error_code = 0ul;
      this->board_12v_voltage = 0.0f;
      this->board_5v_voltage = 0.0f;
      this->board_3v3_voltage = 0.0f;
      this->board_1v2_voltage = 0.0f;
      this->board_1v8_voltage = 0.0f;
      this->board_3v8_voltage = 0.0f;
      this->system_12v_current = 0.0f;
      this->board_temperature_voltage = 0.0f;
      this->board_hardware_voltage = 0.0f;
      this->ntc_temperature = 0.0f;
      this->fan1_target_speed = 0ul;
      this->fan1_feedback_speed = 0ul;
      this->fan2_target_speed = 0ul;
      this->fan2_feedback_speed = 0ul;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_version_type hardware_version;
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _status_word_type =
    uint16_t;
  _status_word_type status_word;
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;
  using _board_12v_voltage_type =
    float;
  _board_12v_voltage_type board_12v_voltage;
  using _board_5v_voltage_type =
    float;
  _board_5v_voltage_type board_5v_voltage;
  using _board_3v3_voltage_type =
    float;
  _board_3v3_voltage_type board_3v3_voltage;
  using _board_1v2_voltage_type =
    float;
  _board_1v2_voltage_type board_1v2_voltage;
  using _board_1v8_voltage_type =
    float;
  _board_1v8_voltage_type board_1v8_voltage;
  using _board_3v8_voltage_type =
    float;
  _board_3v8_voltage_type board_3v8_voltage;
  using _system_12v_current_type =
    float;
  _system_12v_current_type system_12v_current;
  using _board_temperature_voltage_type =
    float;
  _board_temperature_voltage_type board_temperature_voltage;
  using _board_hardware_voltage_type =
    float;
  _board_hardware_voltage_type board_hardware_voltage;
  using _ntc_temperature_type =
    float;
  _ntc_temperature_type ntc_temperature;
  using _fan1_target_speed_type =
    uint32_t;
  _fan1_target_speed_type fan1_target_speed;
  using _fan1_feedback_speed_type =
    uint32_t;
  _fan1_feedback_speed_type fan1_feedback_speed;
  using _fan2_target_speed_type =
    uint32_t;
  _fan2_target_speed_type fan2_target_speed;
  using _fan2_feedback_speed_type =
    uint32_t;
  _fan2_feedback_speed_type fan2_feedback_speed;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__status_word(
    const uint16_t & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__board_12v_voltage(
    const float & _arg)
  {
    this->board_12v_voltage = _arg;
    return *this;
  }
  Type & set__board_5v_voltage(
    const float & _arg)
  {
    this->board_5v_voltage = _arg;
    return *this;
  }
  Type & set__board_3v3_voltage(
    const float & _arg)
  {
    this->board_3v3_voltage = _arg;
    return *this;
  }
  Type & set__board_1v2_voltage(
    const float & _arg)
  {
    this->board_1v2_voltage = _arg;
    return *this;
  }
  Type & set__board_1v8_voltage(
    const float & _arg)
  {
    this->board_1v8_voltage = _arg;
    return *this;
  }
  Type & set__board_3v8_voltage(
    const float & _arg)
  {
    this->board_3v8_voltage = _arg;
    return *this;
  }
  Type & set__system_12v_current(
    const float & _arg)
  {
    this->system_12v_current = _arg;
    return *this;
  }
  Type & set__board_temperature_voltage(
    const float & _arg)
  {
    this->board_temperature_voltage = _arg;
    return *this;
  }
  Type & set__board_hardware_voltage(
    const float & _arg)
  {
    this->board_hardware_voltage = _arg;
    return *this;
  }
  Type & set__ntc_temperature(
    const float & _arg)
  {
    this->ntc_temperature = _arg;
    return *this;
  }
  Type & set__fan1_target_speed(
    const uint32_t & _arg)
  {
    this->fan1_target_speed = _arg;
    return *this;
  }
  Type & set__fan1_feedback_speed(
    const uint32_t & _arg)
  {
    this->fan1_feedback_speed = _arg;
    return *this;
  }
  Type & set__fan2_target_speed(
    const uint32_t & _arg)
  {
    this->fan2_target_speed = _arg;
    return *this;
  }
  Type & set__fan2_feedback_speed(
    const uint32_t & _arg)
  {
    this->fan2_feedback_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::Adu_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::Adu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Adu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Adu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__Adu
    std::shared_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__Adu
    std::shared_ptr<aimdk_msgs::msg::Adu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Adu_ & other) const
  {
    if (this->header != other.header) {
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
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->board_12v_voltage != other.board_12v_voltage) {
      return false;
    }
    if (this->board_5v_voltage != other.board_5v_voltage) {
      return false;
    }
    if (this->board_3v3_voltage != other.board_3v3_voltage) {
      return false;
    }
    if (this->board_1v2_voltage != other.board_1v2_voltage) {
      return false;
    }
    if (this->board_1v8_voltage != other.board_1v8_voltage) {
      return false;
    }
    if (this->board_3v8_voltage != other.board_3v8_voltage) {
      return false;
    }
    if (this->system_12v_current != other.system_12v_current) {
      return false;
    }
    if (this->board_temperature_voltage != other.board_temperature_voltage) {
      return false;
    }
    if (this->board_hardware_voltage != other.board_hardware_voltage) {
      return false;
    }
    if (this->ntc_temperature != other.ntc_temperature) {
      return false;
    }
    if (this->fan1_target_speed != other.fan1_target_speed) {
      return false;
    }
    if (this->fan1_feedback_speed != other.fan1_feedback_speed) {
      return false;
    }
    if (this->fan2_target_speed != other.fan2_target_speed) {
      return false;
    }
    if (this->fan2_feedback_speed != other.fan2_feedback_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Adu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Adu_

// alias to use template instance with default allocator
using Adu =
  aimdk_msgs::msg::Adu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_HPP_
