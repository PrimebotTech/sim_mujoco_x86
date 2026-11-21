// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/TouchState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TOUCH_EVENT_NONE'.
/**
  * 触摸事件类型常量定义
  * 无触摸事件
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_NONE = 0
};

/// Constant 'TOUCH_EVENT_SINGLE_CLICK'.
/**
  * 单击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_SINGLE_CLICK = 1
};

/// Constant 'TOUCH_EVENT_DOUBLE_CLICK'.
/**
  * 双击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_DOUBLE_CLICK = 2
};

/// Constant 'TOUCH_EVENT_TRIPLE_CLICK'.
/**
  * 三击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_TRIPLE_CLICK = 3
};

/// Constant 'TOUCH_EVENT_QUADRUPLE_CLICK'.
/**
  * 四击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_QUADRUPLE_CLICK = 4
};

/// Constant 'TOUCH_EVENT_QUINTUPLE_CLICK'.
/**
  * 五击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_QUINTUPLE_CLICK = 5
};

/// Constant 'TOUCH_EVENT_SEXTUPLE_CLICK'.
/**
  * 六击
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_SEXTUPLE_CLICK = 6
};

/// Constant 'TOUCH_EVENT_MULTI_CLICK'.
/**
  * 多次点击（超过六次）
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_MULTI_CLICK = 7
};

/// Constant 'TOUCH_EVENT_SLIDE_LEFT'.
/**
  * 向左滑动
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_SLIDE_LEFT = 8
};

/// Constant 'TOUCH_EVENT_SLIDE_RIGHT'.
/**
  * 向右滑动
 */
enum
{
  aimdk_msgs__msg__TouchState__TOUCH_EVENT_SLIDE_RIGHT = 9
};

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"

/// Struct defined in msg/TouchState in the package aimdk_msgs.
/**
  * --------------------------------------------------------------------------------------------------------------
  * 机器人触摸传感器状态
  * --------------------------------------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__TouchState
{
  /// 触摸传感器状态消息
  aimdk_msgs__msg__MessageHeader header;
  /// 触摸事件类型
  /// T：id为1表示背部传感器，id为2表示胸部传感器
  /// Q：id为1表示头部传感器
  uint8_t sensor_id;
  /// 触摸事件类型
  uint8_t event_type;
} aimdk_msgs__msg__TouchState;

// Struct for a sequence of aimdk_msgs__msg__TouchState.
typedef struct aimdk_msgs__msg__TouchState__Sequence
{
  aimdk_msgs__msg__TouchState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__TouchState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__TOUCH_STATE__STRUCT_H_
