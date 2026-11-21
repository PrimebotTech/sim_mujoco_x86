// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetPowerDown.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * command: 控制命令
  * 未知
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__UNKNOWN = 0
};

/// Constant 'POWERDOWN'.
/**
  * 按键关机确认关机
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__POWERDOWN = 1
};

/// Constant 'CANCEL_POWERDOWN'.
/**
  * 按键关机取消关机
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__CANCEL_POWERDOWN = 2
};

/// Constant 'SOFTWARE_POWERDOWN'.
/**
  * 主动关机
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__SOFTWARE_POWERDOWN = 3
};

/// Constant 'BATTERY_REBOOT'.
/**
  * 电池立即下电再重新上电
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__BATTERY_REBOOT = 4
};

/// Constant 'SHUTDOWN_REBOOT'.
/**
  * 关机并重启
 */
enum
{
  aimdk_msgs__srv__SetPowerDown_Request__SHUTDOWN_REBOOT = 5
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'input_source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPowerDown in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetPowerDown_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 位置
  uint8_t command;
  /// 调用请求的模块名
  rosidl_runtime_c__String input_source;
  /// 电池下电后重新上电的时间，单位：s
  uint8_t power_reboot_interval;
} aimdk_msgs__srv__SetPowerDown_Request;

// Struct for a sequence of aimdk_msgs__srv__SetPowerDown_Request.
typedef struct aimdk_msgs__srv__SetPowerDown_Request__Sequence
{
  aimdk_msgs__srv__SetPowerDown_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetPowerDown_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetPowerDown in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetPowerDown_Response
{
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__SetPowerDown_Response;

// Struct for a sequence of aimdk_msgs__srv__SetPowerDown_Response.
typedef struct aimdk_msgs__srv__SetPowerDown_Response__Sequence
{
  aimdk_msgs__srv__SetPowerDown_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetPowerDown_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN__STRUCT_H_
