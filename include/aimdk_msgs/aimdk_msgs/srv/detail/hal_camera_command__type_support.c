// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:srv/HALCameraCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/srv/detail/hal_camera_command__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/srv/detail/hal_camera_command__functions.h"
#include "aimdk_msgs/srv/detail/hal_camera_command__struct.h"


// Include directives for member types
// Member `request`
#include "aimdk_msgs/msg/common_request.h"
// Member `request`
#include "aimdk_msgs/msg/detail/common_request__rosidl_typesupport_introspection_c.h"
// Member `command`
// Member `param_keys`
// Member `param_values`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__HALCameraCommand_Request__init(message_memory);
}

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_fini_function(void * message_memory)
{
  aimdk_msgs__srv__HALCameraCommand_Request__fini(message_memory);
}

size_t aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Request__param_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Request__param_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Request__param_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Request__param_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Request__param_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Request__param_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Request__param_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Request__param_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_member_array[4] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Request, param_keys),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Request__param_keys,  // size() function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_keys,  // get_const(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_keys,  // get(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Request__param_keys,  // fetch(index, &value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Request__param_keys,  // assign(index, value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Request__param_keys  // resize(index) function pointer
  },
  {
    "param_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Request, param_values),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Request__param_values,  // size() function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Request__param_values,  // get_const(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Request__param_values,  // get(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Request__param_values,  // fetch(index, &value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Request__param_values,  // assign(index, value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Request__param_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "HALCameraCommand_Request",  // message name
  4,  // number of fields
  sizeof(aimdk_msgs__srv__HALCameraCommand_Request),
  aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_member_array,  // message members
  aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Request)() {
  aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, CommonRequest)();
  if (!aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__HALCameraCommand_Request__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aimdk_msgs/srv/detail/hal_camera_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aimdk_msgs/srv/detail/hal_camera_command__functions.h"
// already included above
// #include "aimdk_msgs/srv/detail/hal_camera_command__struct.h"


// Include directives for member types
// Member `response`
#include "aimdk_msgs/msg/common_response.h"
// Member `response`
#include "aimdk_msgs/msg/detail/common_response__rosidl_typesupport_introspection_c.h"
// Member `result_keys`
// Member `result_values`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__HALCameraCommand_Response__init(message_memory);
}

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_fini_function(void * message_memory)
{
  aimdk_msgs__srv__HALCameraCommand_Response__fini(message_memory);
}

size_t aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Response__result_keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Response__result_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Response__result_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Response__result_keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Response__result_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Response__result_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Response__result_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Response__result_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_member_array[3] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Response, result_keys),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Response__result_keys,  // size() function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_keys,  // get_const(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_keys,  // get(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Response__result_keys,  // fetch(index, &value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Response__result_keys,  // assign(index, value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Response__result_keys  // resize(index) function pointer
  },
  {
    "result_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__HALCameraCommand_Response, result_values),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__size_function__HALCameraCommand_Response__result_values,  // size() function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_const_function__HALCameraCommand_Response__result_values,  // get_const(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__get_function__HALCameraCommand_Response__result_values,  // get(index) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__fetch_function__HALCameraCommand_Response__result_values,  // fetch(index, &value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__assign_function__HALCameraCommand_Response__result_values,  // assign(index, value) function pointer
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__resize_function__HALCameraCommand_Response__result_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "HALCameraCommand_Response",  // message name
  3,  // number of fields
  sizeof(aimdk_msgs__srv__HALCameraCommand_Response),
  aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_member_array,  // message members
  aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Response)() {
  aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, CommonResponse)();
  if (!aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__HALCameraCommand_Response__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aimdk_msgs/srv/detail/hal_camera_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_members = {
  "aimdk_msgs__srv",  // service namespace
  "HALCameraCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_Request_message_type_support_handle,
  NULL  // response message
  // aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_type_support_handle = {
  0,
  &aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand)() {
  if (!aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, HALCameraCommand_Response)()->data;
  }

  return &aimdk_msgs__srv__detail__hal_camera_command__rosidl_typesupport_introspection_c__HALCameraCommand_service_type_support_handle;
}
