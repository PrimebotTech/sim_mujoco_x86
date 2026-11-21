// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/Pmu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'protocol_version'
// Member 'hardware_version'
// Member 'software_version'
// Member 'orin_hardware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Pmu in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__Pmu
{
  /// 数据头
  aimdk_msgs__msg__MessageHeader header;
  /// 版本信息
  /// 协议版本
  rosidl_runtime_c__String protocol_version;
  /// 硬件版本
  rosidl_runtime_c__String hardware_version;
  /// 软件版本
  rosidl_runtime_c__String software_version;
  /// ORIN版本
  rosidl_runtime_c__String orin_hardware_version;
  /// 状态字
  uint16_t status_word;
  /// 错误码
  /// 预留
  uint32_t status;
  /// 电压信息
  /// LDO 3v3电压(单位: V)
  float vcc_3v3_voltage;
  /// LDO 1v8电压(单位: V)
  float vcc_1v8_voltage;
  /// LDO 1v2电压(单位: V)
  float vcc_1v2_voltage;
  /// NFC 5v电压(单位: V)
  float nfc_5v_voltage;
  /// 外设 5V电压(单位: V)
  float periph_5v_voltage;
  /// LCD电压(单位: V)
  float lcd_voltage;
  /// 系统第二路 12v电压(单位: V)
  float sys2_12v_voltage;
  /// Soc0 5V电压(单位: V)
  float soc0_5v_voltage;
  /// 系统 5V电压 (单位: V)
  float sys_5v_voltage;
  /// 系统 12V电压(单位: V)
  float sys_12v_voltage;
  /// Soc1 12v电压(单位: V)
  float soc1_12v_voltage;
  /// 扩展接口 12V电压(单位: V)
  float ext_12v_voltage;
  /// 扩展接口 24V电压(单位: V)
  float ext_24v_voltage;
  /// 上肢 48V电压(单位: V)
  float arm_48v_voltage;
  /// 下肢 48V电压(单位: V)
  float leg_48v_voltage;
  /// 电流信息
  /// Soc0 5V电流(单位: A)
  float soc0_5v_current;
  /// 外设 5V电流(单位: A)
  float periph_5v_current;
  /// 系统第二路 12V电流(单位: A)
  float sys2_12v_current;
  /// 系统 5V电流(单位: A)
  float sys_5v_current;
  /// 系统 12V电流(单位: A)
  float sys_12v_current;
  /// Soc1 12v电流(单位: A)
  float soc1_12v_current;
  /// 扩展接口 12V电流(单位: A)
  float ext_12v_current;
  /// 扩展接口 24V电流(单位: A)
  float ext_24v_current;
  /// 上肢 48V电流(单位: A)
  float arm_48v_current;
  /// 下肢 48V电流(单位: A)
  float leg_48v_current;
  /// 温度信息
  /// 48V→12V Orin 左侧温度(单位: ℃)
  float temp_48to12_orin_left;
  /// 48V→12V Orin 底部温度(单位: ℃)
  float temp_48to12_orin_bottom;
  /// 12V 外设 MOS 温度(单位: ℃)
  float temp_12v_ext_mos;
  /// 12V→5V 转换温度(单位: ℃)
  float temp_12to5;
  /// eMMC 温度(单位: ℃)
  float temp_emmc;
  /// SoC 温度(单位: ℃)
  float temp_soc;
} aimdk_msgs__msg__Pmu;

// Struct for a sequence of aimdk_msgs__msg__Pmu.
typedef struct aimdk_msgs__msg__Pmu__Sequence
{
  aimdk_msgs__msg__Pmu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__Pmu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU__STRUCT_H_
