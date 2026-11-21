// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/LidarRawData.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__STRUCT_H_

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
// Member 'msop_data'
// Member 'difop_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LidarRawData in the package aimdk_msgs.
/**
  * --------------------------------------------------------------------------------------------------------------
  * 机器人激光雷达原始数据 (Raw packets from LiDAR sensor)
  * --------------------------------------------------------------------------------------------------------------
  * 头部信息：时间戳、坐标系、序列号等
 */
typedef struct aimdk_msgs__msg__LidarRawData
{
  aimdk_msgs__msg__MessageHeader header;
  /// MSOP (Measurement Data Packets):
  ///   - 含点云量测数据原始字节
  ///   - 通常为设备按固定包长度输出的连续数据
  ///   - 不做解析，保持原始二进制序列
  rosidl_runtime_c__uint8__Sequence msop_data;
  /// DIFOP (Device Information Packets):
  ///   - 设备状态、校准、雷达内部配置等信息
  ///   - 一般频率低于 MSOP
  ///   - 解析可用于标定/雷达健康监测
  rosidl_runtime_c__uint8__Sequence difop_data;
} aimdk_msgs__msg__LidarRawData;

// Struct for a sequence of aimdk_msgs__msg__LidarRawData.
typedef struct aimdk_msgs__msg__LidarRawData__Sequence
{
  aimdk_msgs__msg__LidarRawData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__LidarRawData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__LIDAR_RAW_DATA__STRUCT_H_
