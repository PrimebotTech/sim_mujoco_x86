// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/Pmu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__msg__Pmu __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__Pmu __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pmu_
{
  using Type = Pmu_<ContainerAllocator>;

  explicit Pmu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->orin_hardware_version = "";
      this->status_word = 0;
      this->status = 0ul;
      this->vcc_3v3_voltage = 0.0f;
      this->vcc_1v8_voltage = 0.0f;
      this->vcc_1v2_voltage = 0.0f;
      this->nfc_5v_voltage = 0.0f;
      this->periph_5v_voltage = 0.0f;
      this->lcd_voltage = 0.0f;
      this->sys2_12v_voltage = 0.0f;
      this->soc0_5v_voltage = 0.0f;
      this->sys_5v_voltage = 0.0f;
      this->sys_12v_voltage = 0.0f;
      this->soc1_12v_voltage = 0.0f;
      this->ext_12v_voltage = 0.0f;
      this->ext_24v_voltage = 0.0f;
      this->arm_48v_voltage = 0.0f;
      this->leg_48v_voltage = 0.0f;
      this->soc0_5v_current = 0.0f;
      this->periph_5v_current = 0.0f;
      this->sys2_12v_current = 0.0f;
      this->sys_5v_current = 0.0f;
      this->sys_12v_current = 0.0f;
      this->soc1_12v_current = 0.0f;
      this->ext_12v_current = 0.0f;
      this->ext_24v_current = 0.0f;
      this->arm_48v_current = 0.0f;
      this->leg_48v_current = 0.0f;
      this->temp_48to12_orin_left = 0.0f;
      this->temp_48to12_orin_bottom = 0.0f;
      this->temp_12v_ext_mos = 0.0f;
      this->temp_12to5 = 0.0f;
      this->temp_emmc = 0.0f;
      this->temp_soc = 0.0f;
    }
  }

  explicit Pmu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc),
    hardware_version(_alloc),
    software_version(_alloc),
    orin_hardware_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = "";
      this->hardware_version = "";
      this->software_version = "";
      this->orin_hardware_version = "";
      this->status_word = 0;
      this->status = 0ul;
      this->vcc_3v3_voltage = 0.0f;
      this->vcc_1v8_voltage = 0.0f;
      this->vcc_1v2_voltage = 0.0f;
      this->nfc_5v_voltage = 0.0f;
      this->periph_5v_voltage = 0.0f;
      this->lcd_voltage = 0.0f;
      this->sys2_12v_voltage = 0.0f;
      this->soc0_5v_voltage = 0.0f;
      this->sys_5v_voltage = 0.0f;
      this->sys_12v_voltage = 0.0f;
      this->soc1_12v_voltage = 0.0f;
      this->ext_12v_voltage = 0.0f;
      this->ext_24v_voltage = 0.0f;
      this->arm_48v_voltage = 0.0f;
      this->leg_48v_voltage = 0.0f;
      this->soc0_5v_current = 0.0f;
      this->periph_5v_current = 0.0f;
      this->sys2_12v_current = 0.0f;
      this->sys_5v_current = 0.0f;
      this->sys_12v_current = 0.0f;
      this->soc1_12v_current = 0.0f;
      this->ext_12v_current = 0.0f;
      this->ext_24v_current = 0.0f;
      this->arm_48v_current = 0.0f;
      this->leg_48v_current = 0.0f;
      this->temp_48to12_orin_left = 0.0f;
      this->temp_48to12_orin_bottom = 0.0f;
      this->temp_12v_ext_mos = 0.0f;
      this->temp_12to5 = 0.0f;
      this->temp_emmc = 0.0f;
      this->temp_soc = 0.0f;
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
  using _orin_hardware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _orin_hardware_version_type orin_hardware_version;
  using _status_word_type =
    uint16_t;
  _status_word_type status_word;
  using _status_type =
    uint32_t;
  _status_type status;
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
  using _periph_5v_voltage_type =
    float;
  _periph_5v_voltage_type periph_5v_voltage;
  using _lcd_voltage_type =
    float;
  _lcd_voltage_type lcd_voltage;
  using _sys2_12v_voltage_type =
    float;
  _sys2_12v_voltage_type sys2_12v_voltage;
  using _soc0_5v_voltage_type =
    float;
  _soc0_5v_voltage_type soc0_5v_voltage;
  using _sys_5v_voltage_type =
    float;
  _sys_5v_voltage_type sys_5v_voltage;
  using _sys_12v_voltage_type =
    float;
  _sys_12v_voltage_type sys_12v_voltage;
  using _soc1_12v_voltage_type =
    float;
  _soc1_12v_voltage_type soc1_12v_voltage;
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
  using _soc0_5v_current_type =
    float;
  _soc0_5v_current_type soc0_5v_current;
  using _periph_5v_current_type =
    float;
  _periph_5v_current_type periph_5v_current;
  using _sys2_12v_current_type =
    float;
  _sys2_12v_current_type sys2_12v_current;
  using _sys_5v_current_type =
    float;
  _sys_5v_current_type sys_5v_current;
  using _sys_12v_current_type =
    float;
  _sys_12v_current_type sys_12v_current;
  using _soc1_12v_current_type =
    float;
  _soc1_12v_current_type soc1_12v_current;
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
  using _temp_48to12_orin_left_type =
    float;
  _temp_48to12_orin_left_type temp_48to12_orin_left;
  using _temp_48to12_orin_bottom_type =
    float;
  _temp_48to12_orin_bottom_type temp_48to12_orin_bottom;
  using _temp_12v_ext_mos_type =
    float;
  _temp_12v_ext_mos_type temp_12v_ext_mos;
  using _temp_12to5_type =
    float;
  _temp_12to5_type temp_12to5;
  using _temp_emmc_type =
    float;
  _temp_emmc_type temp_emmc;
  using _temp_soc_type =
    float;
  _temp_soc_type temp_soc;

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
  Type & set__orin_hardware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->orin_hardware_version = _arg;
    return *this;
  }
  Type & set__status_word(
    const uint16_t & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__status(
    const uint32_t & _arg)
  {
    this->status = _arg;
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
  Type & set__periph_5v_voltage(
    const float & _arg)
  {
    this->periph_5v_voltage = _arg;
    return *this;
  }
  Type & set__lcd_voltage(
    const float & _arg)
  {
    this->lcd_voltage = _arg;
    return *this;
  }
  Type & set__sys2_12v_voltage(
    const float & _arg)
  {
    this->sys2_12v_voltage = _arg;
    return *this;
  }
  Type & set__soc0_5v_voltage(
    const float & _arg)
  {
    this->soc0_5v_voltage = _arg;
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
  Type & set__soc1_12v_voltage(
    const float & _arg)
  {
    this->soc1_12v_voltage = _arg;
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
  Type & set__soc0_5v_current(
    const float & _arg)
  {
    this->soc0_5v_current = _arg;
    return *this;
  }
  Type & set__periph_5v_current(
    const float & _arg)
  {
    this->periph_5v_current = _arg;
    return *this;
  }
  Type & set__sys2_12v_current(
    const float & _arg)
  {
    this->sys2_12v_current = _arg;
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
  Type & set__soc1_12v_current(
    const float & _arg)
  {
    this->soc1_12v_current = _arg;
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
  Type & set__temp_48to12_orin_left(
    const float & _arg)
  {
    this->temp_48to12_orin_left = _arg;
    return *this;
  }
  Type & set__temp_48to12_orin_bottom(
    const float & _arg)
  {
    this->temp_48to12_orin_bottom = _arg;
    return *this;
  }
  Type & set__temp_12v_ext_mos(
    const float & _arg)
  {
    this->temp_12v_ext_mos = _arg;
    return *this;
  }
  Type & set__temp_12to5(
    const float & _arg)
  {
    this->temp_12to5 = _arg;
    return *this;
  }
  Type & set__temp_emmc(
    const float & _arg)
  {
    this->temp_emmc = _arg;
    return *this;
  }
  Type & set__temp_soc(
    const float & _arg)
  {
    this->temp_soc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::Pmu_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::Pmu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Pmu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::Pmu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__Pmu
    std::shared_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__Pmu
    std::shared_ptr<aimdk_msgs::msg::Pmu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pmu_ & other) const
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
    if (this->orin_hardware_version != other.orin_hardware_version) {
      return false;
    }
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->status != other.status) {
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
    if (this->periph_5v_voltage != other.periph_5v_voltage) {
      return false;
    }
    if (this->lcd_voltage != other.lcd_voltage) {
      return false;
    }
    if (this->sys2_12v_voltage != other.sys2_12v_voltage) {
      return false;
    }
    if (this->soc0_5v_voltage != other.soc0_5v_voltage) {
      return false;
    }
    if (this->sys_5v_voltage != other.sys_5v_voltage) {
      return false;
    }
    if (this->sys_12v_voltage != other.sys_12v_voltage) {
      return false;
    }
    if (this->soc1_12v_voltage != other.soc1_12v_voltage) {
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
    if (this->soc0_5v_current != other.soc0_5v_current) {
      return false;
    }
    if (this->periph_5v_current != other.periph_5v_current) {
      return false;
    }
    if (this->sys2_12v_current != other.sys2_12v_current) {
      return false;
    }
    if (this->sys_5v_current != other.sys_5v_current) {
      return false;
    }
    if (this->sys_12v_current != other.sys_12v_current) {
      return false;
    }
    if (this->soc1_12v_current != other.soc1_12v_current) {
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
    if (this->temp_48to12_orin_left != other.temp_48to12_orin_left) {
      return false;
    }
    if (this->temp_48to12_orin_bottom != other.temp_48to12_orin_bottom) {
      return false;
    }
    if (this->temp_12v_ext_mos != other.temp_12v_ext_mos) {
      return false;
    }
    if (this->temp_12to5 != other.temp_12to5) {
      return false;
    }
    if (this->temp_emmc != other.temp_emmc) {
      return false;
    }
    if (this->temp_soc != other.temp_soc) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pmu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pmu_

// alias to use template instance with default allocator
using Pmu =
  aimdk_msgs::msg::Pmu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_HPP_
