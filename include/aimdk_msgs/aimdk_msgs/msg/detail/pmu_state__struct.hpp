// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PmuState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PmuState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PmuState_
{
  using Type = PmuState_<ContainerAllocator>;

  explicit PmuState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pmu_protocol_version = "";
      this->pmu_hardware_version = "";
      this->pmu_software_version = "";
      this->power_status = 0;
      this->pmu_bool_status = 0ul;
      this->vcc_3v3_voltage = 0.0f;
      this->vcc_1v8_voltage = 0.0f;
      this->vcc_1v2_voltage = 0.0f;
      this->nfc_5v_voltage = 0.0f;
      this->soc_5v_voltage = 0.0f;
      this->sys_5v_voltage = 0.0f;
      this->sys_12v_voltage = 0.0f;
      this->orin_12v_voltage = 0.0f;
      this->ext_12v_voltage = 0.0f;
      this->ext_24v_voltage = 0.0f;
      this->arm_48v_voltage = 0.0f;
      this->leg_48v_voltage = 0.0f;
      this->soc_5v_current = 0.0f;
      this->sys_5v_current = 0.0f;
      this->sys_12v_current = 0.0f;
      this->orin_12v_current = 0.0f;
      this->ext_12v_current = 0.0f;
      this->ext_24v_current = 0.0f;
      this->arm_48v_current = 0.0f;
      this->leg_48v_current = 0.0f;
      this->bms_manufacturer = "";
      this->bms_serial_number = "";
      this->bms_protocol_version = "";
      this->bms_hardware_version = "";
      this->bms_software_version = "";
      this->bms_status = 0ul;
      this->bms_balance_line_resistance = 0;
      this->bms_voltage = 0ul;
      this->bms_current = 0l;
      this->bms_power = 0l;
      this->bms_temperature = 0ul;
      this->bms_remaining_capacity = 0ul;
      this->bms_remaining_capacity_percentage = 0;
      this->bms_cycle_count = 0;
      this->bms_cycle_total_capacity = 0ul;
    }
  }

  explicit PmuState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pmu_protocol_version(_alloc),
    pmu_hardware_version(_alloc),
    pmu_software_version(_alloc),
    bms_manufacturer(_alloc),
    bms_serial_number(_alloc),
    bms_protocol_version(_alloc),
    bms_hardware_version(_alloc),
    bms_software_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pmu_protocol_version = "";
      this->pmu_hardware_version = "";
      this->pmu_software_version = "";
      this->power_status = 0;
      this->pmu_bool_status = 0ul;
      this->vcc_3v3_voltage = 0.0f;
      this->vcc_1v8_voltage = 0.0f;
      this->vcc_1v2_voltage = 0.0f;
      this->nfc_5v_voltage = 0.0f;
      this->soc_5v_voltage = 0.0f;
      this->sys_5v_voltage = 0.0f;
      this->sys_12v_voltage = 0.0f;
      this->orin_12v_voltage = 0.0f;
      this->ext_12v_voltage = 0.0f;
      this->ext_24v_voltage = 0.0f;
      this->arm_48v_voltage = 0.0f;
      this->leg_48v_voltage = 0.0f;
      this->soc_5v_current = 0.0f;
      this->sys_5v_current = 0.0f;
      this->sys_12v_current = 0.0f;
      this->orin_12v_current = 0.0f;
      this->ext_12v_current = 0.0f;
      this->ext_24v_current = 0.0f;
      this->arm_48v_current = 0.0f;
      this->leg_48v_current = 0.0f;
      this->bms_manufacturer = "";
      this->bms_serial_number = "";
      this->bms_protocol_version = "";
      this->bms_hardware_version = "";
      this->bms_software_version = "";
      this->bms_status = 0ul;
      this->bms_balance_line_resistance = 0;
      this->bms_voltage = 0ul;
      this->bms_current = 0l;
      this->bms_power = 0l;
      this->bms_temperature = 0ul;
      this->bms_remaining_capacity = 0ul;
      this->bms_remaining_capacity_percentage = 0;
      this->bms_cycle_count = 0;
      this->bms_cycle_total_capacity = 0ul;
    }
  }

  // field types and members
  using _pmu_protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pmu_protocol_version_type pmu_protocol_version;
  using _pmu_hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pmu_hardware_version_type pmu_hardware_version;
  using _pmu_software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pmu_software_version_type pmu_software_version;
  using _power_status_type =
    uint16_t;
  _power_status_type power_status;
  using _pmu_bool_status_type =
    uint32_t;
  _pmu_bool_status_type pmu_bool_status;
  using _vcc_3v3_voltage_type =
    float;
  _vcc_3v3_voltage_type vcc_3v3_voltage;
  using _vcc_1v8_voltage_type =
    float;
  _vcc_1v8_voltage_type vcc_1v8_voltage;
  using _vcc_1v2_voltage_type =
    float;
  _vcc_1v2_voltage_type vcc_1v2_voltage;
  using _nfc_5v_voltage_type =
    float;
  _nfc_5v_voltage_type nfc_5v_voltage;
  using _soc_5v_voltage_type =
    float;
  _soc_5v_voltage_type soc_5v_voltage;
  using _sys_5v_voltage_type =
    float;
  _sys_5v_voltage_type sys_5v_voltage;
  using _sys_12v_voltage_type =
    float;
  _sys_12v_voltage_type sys_12v_voltage;
  using _orin_12v_voltage_type =
    float;
  _orin_12v_voltage_type orin_12v_voltage;
  using _ext_12v_voltage_type =
    float;
  _ext_12v_voltage_type ext_12v_voltage;
  using _ext_24v_voltage_type =
    float;
  _ext_24v_voltage_type ext_24v_voltage;
  using _arm_48v_voltage_type =
    float;
  _arm_48v_voltage_type arm_48v_voltage;
  using _leg_48v_voltage_type =
    float;
  _leg_48v_voltage_type leg_48v_voltage;
  using _soc_5v_current_type =
    float;
  _soc_5v_current_type soc_5v_current;
  using _sys_5v_current_type =
    float;
  _sys_5v_current_type sys_5v_current;
  using _sys_12v_current_type =
    float;
  _sys_12v_current_type sys_12v_current;
  using _orin_12v_current_type =
    float;
  _orin_12v_current_type orin_12v_current;
  using _ext_12v_current_type =
    float;
  _ext_12v_current_type ext_12v_current;
  using _ext_24v_current_type =
    float;
  _ext_24v_current_type ext_24v_current;
  using _arm_48v_current_type =
    float;
  _arm_48v_current_type arm_48v_current;
  using _leg_48v_current_type =
    float;
  _leg_48v_current_type leg_48v_current;
  using _bms_manufacturer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bms_manufacturer_type bms_manufacturer;
  using _bms_serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bms_serial_number_type bms_serial_number;
  using _bms_protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bms_protocol_version_type bms_protocol_version;
  using _bms_hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bms_hardware_version_type bms_hardware_version;
  using _bms_software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bms_software_version_type bms_software_version;
  using _bms_status_type =
    uint32_t;
  _bms_status_type bms_status;
  using _bms_balance_line_resistance_type =
    uint16_t;
  _bms_balance_line_resistance_type bms_balance_line_resistance;
  using _bms_voltage_type =
    uint32_t;
  _bms_voltage_type bms_voltage;
  using _bms_current_type =
    int32_t;
  _bms_current_type bms_current;
  using _bms_power_type =
    int32_t;
  _bms_power_type bms_power;
  using _bms_temperature_type =
    uint32_t;
  _bms_temperature_type bms_temperature;
  using _bms_remaining_capacity_type =
    uint32_t;
  _bms_remaining_capacity_type bms_remaining_capacity;
  using _bms_remaining_capacity_percentage_type =
    uint8_t;
  _bms_remaining_capacity_percentage_type bms_remaining_capacity_percentage;
  using _bms_cycle_count_type =
    uint16_t;
  _bms_cycle_count_type bms_cycle_count;
  using _bms_cycle_total_capacity_type =
    uint32_t;
  _bms_cycle_total_capacity_type bms_cycle_total_capacity;

  // setters for named parameter idiom
  Type & set__pmu_protocol_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pmu_protocol_version = _arg;
    return *this;
  }
  Type & set__pmu_hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pmu_hardware_version = _arg;
    return *this;
  }
  Type & set__pmu_software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pmu_software_version = _arg;
    return *this;
  }
  Type & set__power_status(
    const uint16_t & _arg)
  {
    this->power_status = _arg;
    return *this;
  }
  Type & set__pmu_bool_status(
    const uint32_t & _arg)
  {
    this->pmu_bool_status = _arg;
    return *this;
  }
  Type & set__vcc_3v3_voltage(
    const float & _arg)
  {
    this->vcc_3v3_voltage = _arg;
    return *this;
  }
  Type & set__vcc_1v8_voltage(
    const float & _arg)
  {
    this->vcc_1v8_voltage = _arg;
    return *this;
  }
  Type & set__vcc_1v2_voltage(
    const float & _arg)
  {
    this->vcc_1v2_voltage = _arg;
    return *this;
  }
  Type & set__nfc_5v_voltage(
    const float & _arg)
  {
    this->nfc_5v_voltage = _arg;
    return *this;
  }
  Type & set__soc_5v_voltage(
    const float & _arg)
  {
    this->soc_5v_voltage = _arg;
    return *this;
  }
  Type & set__sys_5v_voltage(
    const float & _arg)
  {
    this->sys_5v_voltage = _arg;
    return *this;
  }
  Type & set__sys_12v_voltage(
    const float & _arg)
  {
    this->sys_12v_voltage = _arg;
    return *this;
  }
  Type & set__orin_12v_voltage(
    const float & _arg)
  {
    this->orin_12v_voltage = _arg;
    return *this;
  }
  Type & set__ext_12v_voltage(
    const float & _arg)
  {
    this->ext_12v_voltage = _arg;
    return *this;
  }
  Type & set__ext_24v_voltage(
    const float & _arg)
  {
    this->ext_24v_voltage = _arg;
    return *this;
  }
  Type & set__arm_48v_voltage(
    const float & _arg)
  {
    this->arm_48v_voltage = _arg;
    return *this;
  }
  Type & set__leg_48v_voltage(
    const float & _arg)
  {
    this->leg_48v_voltage = _arg;
    return *this;
  }
  Type & set__soc_5v_current(
    const float & _arg)
  {
    this->soc_5v_current = _arg;
    return *this;
  }
  Type & set__sys_5v_current(
    const float & _arg)
  {
    this->sys_5v_current = _arg;
    return *this;
  }
  Type & set__sys_12v_current(
    const float & _arg)
  {
    this->sys_12v_current = _arg;
    return *this;
  }
  Type & set__orin_12v_current(
    const float & _arg)
  {
    this->orin_12v_current = _arg;
    return *this;
  }
  Type & set__ext_12v_current(
    const float & _arg)
  {
    this->ext_12v_current = _arg;
    return *this;
  }
  Type & set__ext_24v_current(
    const float & _arg)
  {
    this->ext_24v_current = _arg;
    return *this;
  }
  Type & set__arm_48v_current(
    const float & _arg)
  {
    this->arm_48v_current = _arg;
    return *this;
  }
  Type & set__leg_48v_current(
    const float & _arg)
  {
    this->leg_48v_current = _arg;
    return *this;
  }
  Type & set__bms_manufacturer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bms_manufacturer = _arg;
    return *this;
  }
  Type & set__bms_serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bms_serial_number = _arg;
    return *this;
  }
  Type & set__bms_protocol_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bms_protocol_version = _arg;
    return *this;
  }
  Type & set__bms_hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bms_hardware_version = _arg;
    return *this;
  }
  Type & set__bms_software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bms_software_version = _arg;
    return *this;
  }
  Type & set__bms_status(
    const uint32_t & _arg)
  {
    this->bms_status = _arg;
    return *this;
  }
  Type & set__bms_balance_line_resistance(
    const uint16_t & _arg)
  {
    this->bms_balance_line_resistance = _arg;
    return *this;
  }
  Type & set__bms_voltage(
    const uint32_t & _arg)
  {
    this->bms_voltage = _arg;
    return *this;
  }
  Type & set__bms_current(
    const int32_t & _arg)
  {
    this->bms_current = _arg;
    return *this;
  }
  Type & set__bms_power(
    const int32_t & _arg)
  {
    this->bms_power = _arg;
    return *this;
  }
  Type & set__bms_temperature(
    const uint32_t & _arg)
  {
    this->bms_temperature = _arg;
    return *this;
  }
  Type & set__bms_remaining_capacity(
    const uint32_t & _arg)
  {
    this->bms_remaining_capacity = _arg;
    return *this;
  }
  Type & set__bms_remaining_capacity_percentage(
    const uint8_t & _arg)
  {
    this->bms_remaining_capacity_percentage = _arg;
    return *this;
  }
  Type & set__bms_cycle_count(
    const uint16_t & _arg)
  {
    this->bms_cycle_count = _arg;
    return *this;
  }
  Type & set__bms_cycle_total_capacity(
    const uint32_t & _arg)
  {
    this->bms_cycle_total_capacity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PmuState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PmuState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PmuState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PmuState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PmuState
    std::shared_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PmuState
    std::shared_ptr<aimdk_msgs::msg::PmuState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PmuState_ & other) const
  {
    if (this->pmu_protocol_version != other.pmu_protocol_version) {
      return false;
    }
    if (this->pmu_hardware_version != other.pmu_hardware_version) {
      return false;
    }
    if (this->pmu_software_version != other.pmu_software_version) {
      return false;
    }
    if (this->power_status != other.power_status) {
      return false;
    }
    if (this->pmu_bool_status != other.pmu_bool_status) {
      return false;
    }
    if (this->vcc_3v3_voltage != other.vcc_3v3_voltage) {
      return false;
    }
    if (this->vcc_1v8_voltage != other.vcc_1v8_voltage) {
      return false;
    }
    if (this->vcc_1v2_voltage != other.vcc_1v2_voltage) {
      return false;
    }
    if (this->nfc_5v_voltage != other.nfc_5v_voltage) {
      return false;
    }
    if (this->soc_5v_voltage != other.soc_5v_voltage) {
      return false;
    }
    if (this->sys_5v_voltage != other.sys_5v_voltage) {
      return false;
    }
    if (this->sys_12v_voltage != other.sys_12v_voltage) {
      return false;
    }
    if (this->orin_12v_voltage != other.orin_12v_voltage) {
      return false;
    }
    if (this->ext_12v_voltage != other.ext_12v_voltage) {
      return false;
    }
    if (this->ext_24v_voltage != other.ext_24v_voltage) {
      return false;
    }
    if (this->arm_48v_voltage != other.arm_48v_voltage) {
      return false;
    }
    if (this->leg_48v_voltage != other.leg_48v_voltage) {
      return false;
    }
    if (this->soc_5v_current != other.soc_5v_current) {
      return false;
    }
    if (this->sys_5v_current != other.sys_5v_current) {
      return false;
    }
    if (this->sys_12v_current != other.sys_12v_current) {
      return false;
    }
    if (this->orin_12v_current != other.orin_12v_current) {
      return false;
    }
    if (this->ext_12v_current != other.ext_12v_current) {
      return false;
    }
    if (this->ext_24v_current != other.ext_24v_current) {
      return false;
    }
    if (this->arm_48v_current != other.arm_48v_current) {
      return false;
    }
    if (this->leg_48v_current != other.leg_48v_current) {
      return false;
    }
    if (this->bms_manufacturer != other.bms_manufacturer) {
      return false;
    }
    if (this->bms_serial_number != other.bms_serial_number) {
      return false;
    }
    if (this->bms_protocol_version != other.bms_protocol_version) {
      return false;
    }
    if (this->bms_hardware_version != other.bms_hardware_version) {
      return false;
    }
    if (this->bms_software_version != other.bms_software_version) {
      return false;
    }
    if (this->bms_status != other.bms_status) {
      return false;
    }
    if (this->bms_balance_line_resistance != other.bms_balance_line_resistance) {
      return false;
    }
    if (this->bms_voltage != other.bms_voltage) {
      return false;
    }
    if (this->bms_current != other.bms_current) {
      return false;
    }
    if (this->bms_power != other.bms_power) {
      return false;
    }
    if (this->bms_temperature != other.bms_temperature) {
      return false;
    }
    if (this->bms_remaining_capacity != other.bms_remaining_capacity) {
      return false;
    }
    if (this->bms_remaining_capacity_percentage != other.bms_remaining_capacity_percentage) {
      return false;
    }
    if (this->bms_cycle_count != other.bms_cycle_count) {
      return false;
    }
    if (this->bms_cycle_total_capacity != other.bms_cycle_total_capacity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PmuState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PmuState_

// alias to use template instance with default allocator
using PmuState =
  aimdk_msgs::msg::PmuState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_HPP_
