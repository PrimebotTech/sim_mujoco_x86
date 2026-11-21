// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/EventProbeType.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_TYPE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNDEFINED'.
/**
  * 未定义
 */
enum
{
  aimdk_msgs__msg__EventProbeType__UNDEFINED = 0l
};

/// Constant 'EVENT'.
/**
  * 一般的事件记录，比如系统发生的某个特定动作或状态变化。可能需要说明它是用来记录事件发生的次数或者事件本身的信息
 */
enum
{
  aimdk_msgs__msg__EventProbeType__EVENT = 1l
};

/// Constant 'COUNTER'.
/**
  * 通常用来表示累积的数值，比如计数器，每次事件发生就增加。可能需要强调它的递增特性，适用于统计总数，比如请求次数、错误次数等。
 */
enum
{
  aimdk_msgs__msg__EventProbeType__COUNTER = 2l
};

/// Constant 'GAUGE'.
/**
  * 通常用来表示一个值，可能需要说明它的单位，比如温度、压力等。
 */
enum
{
  aimdk_msgs__msg__EventProbeType__GAUGE = 3l
};

/// Constant 'BOOLEAN'.
/**
  * 布尔类型，表示两种状态，比如真或假，开启或关闭。需要明确它用于二元状态的情况。
 */
enum
{
  aimdk_msgs__msg__EventProbeType__BOOLEAN = 4l
};

/// Struct defined in msg/EventProbeType in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__EventProbeType
{
  int32_t value;
} aimdk_msgs__msg__EventProbeType;

// Struct for a sequence of aimdk_msgs__msg__EventProbeType.
typedef struct aimdk_msgs__msg__EventProbeType__Sequence
{
  aimdk_msgs__msg__EventProbeType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__EventProbeType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__EVENT_PROBE_TYPE__STRUCT_H_
