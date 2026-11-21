// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/Adu.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Adu in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__Adu
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
  /// 状态位和状态码
  uint16_t status_word;
  /// bit 0:  工作状态
  /// bit 13: 重启请求
  /// bit 14: 下电请求
  /// bit 15: 紧急下电
  uint32_t error_code;
  /// Bit 0：SPI CRC校验错误
  /// Bit 1：12V电源异常
  /// Bit 2：5V电源异常
  /// Bit 3：3.3V电源异常
  /// Bit 4：1.8V电源异常
  /// Bit 5：3.8V电源异常（T项目预留不上报）
  /// Bit 6：1.2V电源异常
  /// Bit 7：12V电流异常
  /// Bit 8：板载温度异常
  /// Bit 9：风扇转速异常
  /// Bit 10：RK通讯异常
  /// Bit 11：HDU通讯异常
  /// ADU板卡电压/电流信息（56Bytes）
  /// ADU板卡12V电压值（单位：V）
  float board_12v_voltage;
  /// ADU板卡5V电压值（单位：V）
  float board_5v_voltage;
  /// ADU板卡3.3V电压值（单位：V）
  float board_3v3_voltage;
  /// ADU板卡1.2V电压值（单位：V）
  float board_1v2_voltage;
  /// ADU板卡1.8V电压值（单位：V）
  float board_1v8_voltage;
  /// ADU板卡3.8V电压值（单位：V，T项目预留不上报）
  float board_3v8_voltage;
  /// ADU板卡系统12V电流值（单位：A）
  float system_12v_current;
  /// ADU板卡温度电压值（单位：V）
  float board_temperature_voltage;
  /// ADU板卡硬件版本电压值（单位：V）
  float board_hardware_voltage;
  /// ADU板载NTC温度与风扇信息（28Bytes）
  /// ADU板载NTC温度数据（单位：℃）
  float ntc_temperature;
  /// 风扇1控制转速比例（单位：%，T项目预留不上报）
  uint32_t fan1_target_speed;
  /// 风扇1反馈转速（单位：RPM，T项目预留不上报）
  uint32_t fan1_feedback_speed;
  /// 风扇2控制转速比例（单位：%，T项目预留不上报）
  uint32_t fan2_target_speed;
  /// 风扇2反馈转速（单位：RPM，T项目预留不上报）
  uint32_t fan2_feedback_speed;
} aimdk_msgs__msg__Adu;

// Struct for a sequence of aimdk_msgs__msg__Adu.
typedef struct aimdk_msgs__msg__Adu__Sequence
{
  aimdk_msgs__msg__Adu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__Adu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__ADU__STRUCT_H_
