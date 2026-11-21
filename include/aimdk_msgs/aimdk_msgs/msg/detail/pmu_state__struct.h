// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/PmuState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pmu_protocol_version'
// Member 'pmu_hardware_version'
// Member 'pmu_software_version'
// Member 'bms_manufacturer'
// Member 'bms_serial_number'
// Member 'bms_protocol_version'
// Member 'bms_hardware_version'
// Member 'bms_software_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PmuState in the package aimdk_msgs.
/**
  * -------------- pmu -------------- #
  * 版本信息
 */
typedef struct aimdk_msgs__msg__PmuState
{
  /// 协议版本
  rosidl_runtime_c__String pmu_protocol_version;
  /// 硬件版本
  rosidl_runtime_c__String pmu_hardware_version;
  /// 软件版本
  rosidl_runtime_c__String pmu_software_version;
  /// 电源状态，1-长按关机触发，2-短按+长按关机触发  3-长按关机确认  4-短按+长按关机确认
  uint16_t power_status;
  /// 错误码
  uint32_t pmu_bool_status;
  /// TODO布尔状态位定义说明：
  /// bit 0: rk3588PowerGood          RK3588 电源状态
  /// bit 1: rk3588Monitor1           RK3588 监控状态1
  /// bit 2: rk3588Monitor2           RK3588 监控状态2
  /// bit 3: orinPowerGood            ORIN 电源状态
  /// bit 4: orinMonitor1             ORIN 监控状态1
  /// bit 5: orinMonitor2             ORIN 监控状态2
  /// bit 6: bus48vOverCurrent        48V 总线过流
  /// bit 7: bus48vOverTemperature    48V 总线过温
  /// bit 8: rk3588PlugDetect         RK3588 插入检测
  /// bit 9: orinNXPlugDetect         ORIN NX 插入检测
  /// bits 10~31: reserved            保留位
  /// 电压信息
  /// LDO 3v3电压(单位: V)
  float vcc_3v3_voltage;
  /// LDO 1v8电压(单位: V)
  float vcc_1v8_voltage;
  /// LDO 1v2电压(单位: V)
  float vcc_1v2_voltage;
  /// NFC 5v电压(单位: V)
  float nfc_5v_voltage;
  /// Soc RK3576 5V电压(单位: V)
  float soc_5v_voltage;
  /// 系统 5V电压(单位: V)
  float sys_5v_voltage;
  /// 系统 12V电压(单位: V)
  float sys_12v_voltage;
  /// Orin 12v电压(单位: V)
  float orin_12v_voltage;
  /// 二开 12V电压(单位: V)
  float ext_12v_voltage;
  /// 二开 24V电压(单位: V)
  float ext_24v_voltage;
  /// 上肢 48V电压(单位: V)
  float arm_48v_voltage;
  /// 下肢 48V电压(单位: V)
  float leg_48v_voltage;
  /// 电流信息
  /// Soc RK3576 5V电流(单位: A)
  float soc_5v_current;
  /// 系统 5V电流(单位: A)
  float sys_5v_current;
  /// 系统 12V电流(单位: A)
  float sys_12v_current;
  /// Orin 12v电流(单位: A)
  float orin_12v_current;
  /// 二开 12V电流(单位: A)
  float ext_12v_current;
  /// 二开 24V电流(单位: A)
  float ext_24v_current;
  /// 上肢 48V电流(单位: A)
  float arm_48v_current;
  /// 下肢 48V电流(单位: A)
  float leg_48v_current;
  /// -------------- bms -------------- #
  /// 版本信息
  /// 厂家信息
  rosidl_runtime_c__String bms_manufacturer;
  /// 序列号
  rosidl_runtime_c__String bms_serial_number;
  /// 协议版本
  rosidl_runtime_c__String bms_protocol_version;
  /// 硬件版本
  rosidl_runtime_c__String bms_hardware_version;
  /// 软件版本
  rosidl_runtime_c__String bms_software_version;
  /// 状态信息
  /// 状态位和状态码
  uint32_t bms_status;
  /// 状态位和状态码说明
  /// bit 0: chargeFlag                           充电标志
  /// bit 1: chargeOverCurrentFlag                充电过流标志
  /// bit 2: dischargeFlag                        放电标志
  /// bit 3: dischargeOverCurrentFlag             放电过流标志
  /// bit 4: shortCircuitFlag                     电池短路标志
  /// bit 5: cellOverVoltageFlag                  电芯电压过压标志
  /// bit 6: cellUnderVoltageFlag                 电芯电压欠压标志
  /// bit 7: batteryOverVoltageFlag               电池总电压过压标志
  /// bit 8 batteryUnderVoltageFlag               电池总电压欠压标志
  /// bit 9: cellOpenCircuitFlag                  电芯检测到开路标志
  /// bit 10: ntcOpenCircuitFlag                  温度传感器检测到开路标志
  /// bit 11: cellDischargeOverTemperatureFlag    电芯温度超过放电温度上限标志
  /// bit 12: cellChargeOverTemperatureFlag       电芯温度超过充电温度上限标志
  /// bit 13: cellDischargeUnderTemperatureFlag   电芯温度低于放电温度下限标志
  /// bit 14: cellChargeUnderTemperatureFlag      电芯温度低于充电温度下限标志
  /// bit 15: reserved_1                          保留位
  /// bit 16: cellMaxVoltageDiffOverHighFlag      电芯最大电压差超过上限标志
  /// bit 17: mosfetChargeDisableFlag             MOSFET禁止充电标志
  /// bit 18: mosfetDischargeDisableFlag          MOSFET禁止放电标志
  /// bit 19: mosfetOverTemperatureFlag           MOSFET温度超过工作温度上限标志
  /// bit 20: balanceLineResistanceOverHighFlag   电池包均衡线电阻超过上限标志
  /// bit 21~31: reserved_11                      保留位
  /// 电池包均衡线电阻（单位：mΩ）
  uint16_t bms_balance_line_resistance;
  /// 电池包电压（单位：V）
  uint32_t bms_voltage;
  /// 电池包电流（单位：A，充电为正，放电为负）
  int32_t bms_current;
  /// 电池包输出功率（单位：W）
  int32_t bms_power;
  /// 电池包当前温度（单位：℃）
  uint32_t bms_temperature;
  /// 当前电池剩余容量（单位：mAh）
  uint32_t bms_remaining_capacity;
  /// 当前电池剩余容量百分比（单位：％）
  uint8_t bms_remaining_capacity_percentage;
  /// 当前电池包完整循环次数（单位：次）
  uint16_t bms_cycle_count;
  /// 总充放电容量累计（单位：Ah）
  uint32_t bms_cycle_total_capacity;
} aimdk_msgs__msg__PmuState;

// Struct for a sequence of aimdk_msgs__msg__PmuState.
typedef struct aimdk_msgs__msg__PmuState__Sequence
{
  aimdk_msgs__msg__PmuState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__PmuState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_STATE__STRUCT_H_
