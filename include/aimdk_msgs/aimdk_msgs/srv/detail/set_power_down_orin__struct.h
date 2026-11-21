// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/SetPowerDownOrin.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN_ORIN__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN_ORIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_UNKNOWN'.
/**
  * command: 控制命令
  * 未知指令
 */
enum
{
  aimdk_msgs__srv__SetPowerDownOrin_Request__CMD_UNKNOWN = 0
};

/// Constant 'CMD_POWER_DOWN'.
/**
  * 正常下电
 */
enum
{
  aimdk_msgs__srv__SetPowerDownOrin_Request__CMD_POWER_DOWN = 1
};

/// Constant 'CMD_REBOOT'.
/**
  * 重启
 */
enum
{
  aimdk_msgs__srv__SetPowerDownOrin_Request__CMD_REBOOT = 2
};

/// Constant 'CMD_EMERGENCY_POWER_DOWN'.
/**
  * 紧急下电/急停断电
 */
enum
{
  aimdk_msgs__srv__SetPowerDownOrin_Request__CMD_EMERGENCY_POWER_DOWN = 3
};

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'input_source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPowerDownOrin in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetPowerDownOrin_Request
{
  aimdk_msgs__msg__CommonRequest request;
  /// 位置
  uint8_t command;
  /// 调用请求的模块名
  rosidl_runtime_c__String input_source;
} aimdk_msgs__srv__SetPowerDownOrin_Request;

// Struct for a sequence of aimdk_msgs__srv__SetPowerDownOrin_Request.
typedef struct aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence
{
  aimdk_msgs__srv__SetPowerDownOrin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "aimdk_msgs/msg/detail/common_response__struct.h"

/// Struct defined in srv/SetPowerDownOrin in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__SetPowerDownOrin_Response
{
  aimdk_msgs__msg__CommonResponse response;
} aimdk_msgs__srv__SetPowerDownOrin_Response;

// Struct for a sequence of aimdk_msgs__srv__SetPowerDownOrin_Response.
typedef struct aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence
{
  aimdk_msgs__srv__SetPowerDownOrin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__SET_POWER_DOWN_ORIN__STRUCT_H_
