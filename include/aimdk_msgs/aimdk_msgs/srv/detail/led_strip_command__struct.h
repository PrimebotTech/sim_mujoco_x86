// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/LedStripCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LED_ALL_OFF'.
/**
  * led_strip_mode: 灯带模式枚举
  * 全部熄灭
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_ALL_OFF = 0
};

/// Constant 'LED_GREEN_FLOW'.
/**
  * 绿色流水
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_GREEN_FLOW = 1
};

/// Constant 'LED_RAINBOW'.
/**
  * 彩虹
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_RAINBOW = 2
};

/// Constant 'LED_DANCING'.
/**
  * 律动
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DANCING = 3
};

/// Constant 'LED_TWINKLE'.
/**
  * 星光闪烁
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_TWINKLE = 4
};

/// Constant 'LED_TAIL_INCREASE'.
/**
  * 尾部渐亮
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_TAIL_INCREASE = 5
};

/// Constant 'LED_TAIL_DECREASE'.
/**
  * 尾部渐暗
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_TAIL_DECREASE = 6
};

/// Constant 'LED_FOUR_TO_TWO_LEGS'.
/**
  * 白色流水-蓝色流水交替
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_FOUR_TO_TWO_LEGS = 7
};

/// Constant 'LED_TWO_TO_FOUR_LEGS'.
/**
  * 蓝色流水-白色流水交替
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_TWO_TO_FOUR_LEGS = 8
};

/// Constant 'LED_START_UP'.
/**
  * 白色常亮r=g=b=128
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_START_UP = 9
};

/// Constant 'LED_DISPLAY_CHARGING'.
/**
  * 白色流水
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_CHARGING = 10
};

/// Constant 'LED_DISPLAY_FAULT'.
/**
  * 红色快闪
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_FAULT = 11
};

/// Constant 'LED_DISPLAY_25_LOW_BATTERY'.
/**
  * 黄色长亮
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_25_LOW_BATTERY = 12
};

/// Constant 'LED_DISPLAY_15_LOW_BATTERY'.
/**
  * 橙红闪烁
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_15_LOW_BATTERY = 13
};

/// Constant 'LED_DISPLAY_POWER_OFF'.
/**
  * 白色从亮到暗渐变
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_POWER_OFF = 14
};

/// Constant 'LED_DISPLAY_POWER_ON'.
/**
  * 白色从暗到亮渐变
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_POWER_ON = 15
};

/// Constant 'LED_WHITE_FLOW'.
/**
  * 白色填充
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_WHITE_FLOW = 16
};

/// Constant 'LED_WHITE_ON'.
/**
  * 白色常亮r=g=b=150
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_WHITE_ON = 17
};

/// Constant 'LED_DISPLAY_25_LOW_TRANSFORM'.
/**
  * 黄色流水
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_25_LOW_TRANSFORM = 18
};

/// Constant 'LED_DISPLAY_15_LOW_TRANSFORM'.
/**
  * 橙红流水
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_DISPLAY_15_LOW_TRANSFORM = 19
};

/// Constant 'LED_WHITE_BREATH'.
/**
  * 白色呼吸
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_WHITE_BREATH = 20
};

/// Constant 'LED_CUSTOM_BREATH'.
/**
  * 呼吸灯效自定义模式
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_CUSTOM_BREATH = 254
};

/// Constant 'LED_CUSTOM_BLINK'.
/**
  * 闪烁灯效自定义模式
 */
enum
{
  aimdk_msgs__srv__LedStripCommand_Request__LED_CUSTOM_BLINK = 255
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"

/// Struct defined in srv/LedStripCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__LedStripCommand_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 灯带模式
  uint8_t led_strip_mode;
  /// 红色分量，自定义模式下生效
  uint8_t r;
  /// 绿色分量，自定义模式下生效
  uint8_t g;
  /// 蓝色分量，自定义模式下生效
  uint8_t b;
  /// 周期，自定义模式下生效，单位ms。
  /// 呼吸灯效自定义模式下，0表示常亮，非0值表示呼吸灯效从最亮到熄灭的时间。
  /// 闪烁灯效自定义模式下，0表示常亮，非0值表示点亮或者熄灭的保持时间。
  uint16_t period;
} aimdk_msgs__srv__LedStripCommand_Request;

// Struct for a sequence of aimdk_msgs__srv__LedStripCommand_Request.
typedef struct aimdk_msgs__srv__LedStripCommand_Request__Sequence
{
  aimdk_msgs__srv__LedStripCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__LedStripCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/LedStripCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__LedStripCommand_Response
{
  /// 响应头
  aimdk_msgs__msg__CommonResponse header;
} aimdk_msgs__srv__LedStripCommand_Response;

// Struct for a sequence of aimdk_msgs__srv__LedStripCommand_Response.
typedef struct aimdk_msgs__srv__LedStripCommand_Response__Sequence
{
  aimdk_msgs__srv__LedStripCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__LedStripCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__LED_STRIP_COMMAND__STRUCT_H_
