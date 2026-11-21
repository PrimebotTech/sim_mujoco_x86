// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/FluxRecordCommand.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FluxRecordCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__FluxRecordCommand_Request
{
  /// request
  /// "record.start" or "record.stop"
  rosidl_runtime_c__String command;
  /// seconds, 0 = use config default
  int32_t duration;
} aimdk_msgs__srv__FluxRecordCommand_Request;

// Struct for a sequence of aimdk_msgs__srv__FluxRecordCommand_Request.
typedef struct aimdk_msgs__srv__FluxRecordCommand_Request__Sequence
{
  aimdk_msgs__srv__FluxRecordCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__FluxRecordCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FluxRecordCommand in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__FluxRecordCommand_Response
{
  /// 0=success, non-zero=fail
  int32_t status;
  /// error reason code (0 when success)
  int32_t reason;
  /// human-readable status/error message
  rosidl_runtime_c__String message;
} aimdk_msgs__srv__FluxRecordCommand_Response;

// Struct for a sequence of aimdk_msgs__srv__FluxRecordCommand_Response.
typedef struct aimdk_msgs__srv__FluxRecordCommand_Response__Sequence
{
  aimdk_msgs__srv__FluxRecordCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__FluxRecordCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__FLUX_RECORD_COMMAND__STRUCT_H_
