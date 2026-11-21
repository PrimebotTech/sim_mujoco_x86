// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:srv/SetMcMotionSeq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/srv/detail/set_mc_motion_seq__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/srv/detail/set_mc_motion_seq__functions.h"
#include "aimdk_msgs/srv/detail/set_mc_motion_seq__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/request_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `motion_seq`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__SetMcMotionSeq_Request__init(message_memory);
}

void aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_fini_function(void * message_memory)
{
  aimdk_msgs__srv__SetMcMotionSeq_Request__fini(message_memory);
}

size_t aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__size_function__SetMcMotionSeq_Request__motion_seq(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_const_function__SetMcMotionSeq_Request__motion_seq(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_function__SetMcMotionSeq_Request__motion_seq(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__fetch_function__SetMcMotionSeq_Request__motion_seq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_const_function__SetMcMotionSeq_Request__motion_seq(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__assign_function__SetMcMotionSeq_Request__motion_seq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_function__SetMcMotionSeq_Request__motion_seq(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__resize_function__SetMcMotionSeq_Request__motion_seq(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__SetMcMotionSeq_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__SetMcMotionSeq_Request, motion_seq),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__size_function__SetMcMotionSeq_Request__motion_seq,  // size() function pointer
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_const_function__SetMcMotionSeq_Request__motion_seq,  // get_const(index) function pointer
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__get_function__SetMcMotionSeq_Request__motion_seq,  // get(index) function pointer
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__fetch_function__SetMcMotionSeq_Request__motion_seq,  // fetch(index, &value) function pointer
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__assign_function__SetMcMotionSeq_Request__motion_seq,  // assign(index, value) function pointer
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__resize_function__SetMcMotionSeq_Request__motion_seq  // resize(index) function pointer
  },
  {
    "interrupt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__SetMcMotionSeq_Request, interrupt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "SetMcMotionSeq_Request",  // message name
  3,  // number of fields
  sizeof(aimdk_msgs__srv__SetMcMotionSeq_Request),
  aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_member_array,  // message members
  aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Request)() {
  aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, RequestHeader)();
  if (!aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__SetMcMotionSeq_Request__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aimdk_msgs/srv/detail/set_mc_motion_seq__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aimdk_msgs/srv/detail/set_mc_motion_seq__functions.h"
// already included above
// #include "aimdk_msgs/srv/detail/set_mc_motion_seq__struct.h"


// Include directives for member types
// Member `response`
#include "aimdk_msgs/msg/common_task_response.h"
// Member `response`
#include "aimdk_msgs/msg/detail/common_task_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__SetMcMotionSeq_Response__init(message_memory);
}

void aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_fini_function(void * message_memory)
{
  aimdk_msgs__srv__SetMcMotionSeq_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__SetMcMotionSeq_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "SetMcMotionSeq_Response",  // message name
  1,  // number of fields
  sizeof(aimdk_msgs__srv__SetMcMotionSeq_Response),
  aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_member_array,  // message members
  aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Response)() {
  aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, CommonTaskResponse)();
  if (!aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__SetMcMotionSeq_Response__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aimdk_msgs/srv/detail/set_mc_motion_seq__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_members = {
  "aimdk_msgs__srv",  // service namespace
  "SetMcMotionSeq",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_Request_message_type_support_handle,
  NULL  // response message
  // aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_Response_message_type_support_handle
};

static rosidl_service_type_support_t aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_type_support_handle = {
  0,
  &aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq)() {
  if (!aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, SetMcMotionSeq_Response)()->data;
  }

  return &aimdk_msgs__srv__detail__set_mc_motion_seq__rosidl_typesupport_introspection_c__SetMcMotionSeq_service_type_support_handle;
}
