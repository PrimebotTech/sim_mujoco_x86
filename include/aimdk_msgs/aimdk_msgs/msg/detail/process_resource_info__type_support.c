// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/process_resource_info__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/process_resource_info__functions.h"
#include "aimdk_msgs/msg/detail/process_resource_info__struct.h"


// Include directives for member types
// Member `process_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `threads`
#include "aimdk_msgs/msg/thread_resource_info.h"
// Member `threads`
#include "aimdk_msgs/msg/detail/thread_resource_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__ProcessResourceInfo__init(message_memory);
}

void aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_fini_function(void * message_memory)
{
  aimdk_msgs__msg__ProcessResourceInfo__fini(message_memory);
}

size_t aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__size_function__ProcessResourceInfo__threads(
  const void * untyped_member)
{
  const aimdk_msgs__msg__ThreadResourceInfo__Sequence * member =
    (const aimdk_msgs__msg__ThreadResourceInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ProcessResourceInfo__threads(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__ThreadResourceInfo__Sequence * member =
    (const aimdk_msgs__msg__ThreadResourceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_function__ProcessResourceInfo__threads(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__ThreadResourceInfo__Sequence * member =
    (aimdk_msgs__msg__ThreadResourceInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ProcessResourceInfo__threads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__ThreadResourceInfo * item =
    ((const aimdk_msgs__msg__ThreadResourceInfo *)
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ProcessResourceInfo__threads(untyped_member, index));
  aimdk_msgs__msg__ThreadResourceInfo * value =
    (aimdk_msgs__msg__ThreadResourceInfo *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__assign_function__ProcessResourceInfo__threads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__ThreadResourceInfo * item =
    ((aimdk_msgs__msg__ThreadResourceInfo *)
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_function__ProcessResourceInfo__threads(untyped_member, index));
  const aimdk_msgs__msg__ThreadResourceInfo * value =
    (const aimdk_msgs__msg__ThreadResourceInfo *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__resize_function__ProcessResourceInfo__threads(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__ThreadResourceInfo__Sequence * member =
    (aimdk_msgs__msg__ThreadResourceInfo__Sequence *)(untyped_member);
  aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(member);
  return aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_member_array[7] = {
  {
    "process_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, process_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, process_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_mem_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, process_mem_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_mem_usage_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, process_mem_usage_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_cpu_usage_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, process_cpu_usage_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thread_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, thread_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__ProcessResourceInfo, threads),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__size_function__ProcessResourceInfo__threads,  // size() function pointer
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_const_function__ProcessResourceInfo__threads,  // get_const(index) function pointer
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__get_function__ProcessResourceInfo__threads,  // get(index) function pointer
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__fetch_function__ProcessResourceInfo__threads,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__assign_function__ProcessResourceInfo__threads,  // assign(index, value) function pointer
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__resize_function__ProcessResourceInfo__threads  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "ProcessResourceInfo",  // message name
  7,  // number of fields
  sizeof(aimdk_msgs__msg__ProcessResourceInfo),
  aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_member_array,  // message members
  aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ProcessResourceInfo)() {
  aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ThreadResourceInfo)();
  if (!aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__ProcessResourceInfo__rosidl_typesupport_introspection_c__ProcessResourceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
