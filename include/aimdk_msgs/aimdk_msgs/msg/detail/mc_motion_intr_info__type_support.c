// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/McMotionIntrInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__functions.h"
#include "aimdk_msgs/msg/detail/mc_motion_intr_info__struct.h"


// Include directives for member types
// Member `intr_type`
#include "aimdk_msgs/msg/mc_motion_intr_type.h"
// Member `intr_type`
#include "aimdk_msgs/msg/detail/mc_motion_intr_type__rosidl_typesupport_introspection_c.h"
// Member `breakpoint_steps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__McMotionIntrInfo__init(message_memory);
}

void aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_fini_function(void * message_memory)
{
  aimdk_msgs__msg__McMotionIntrInfo__fini(message_memory);
}

size_t aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__size_function__McMotionIntrInfo__breakpoint_steps(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_const_function__McMotionIntrInfo__breakpoint_steps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_function__McMotionIntrInfo__breakpoint_steps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__fetch_function__McMotionIntrInfo__breakpoint_steps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_const_function__McMotionIntrInfo__breakpoint_steps(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__assign_function__McMotionIntrInfo__breakpoint_steps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_function__McMotionIntrInfo__breakpoint_steps(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__resize_function__McMotionIntrInfo__breakpoint_steps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_member_array[2] = {
  {
    "intr_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionIntrInfo, intr_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "breakpoint_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McMotionIntrInfo, breakpoint_steps),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__size_function__McMotionIntrInfo__breakpoint_steps,  // size() function pointer
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_const_function__McMotionIntrInfo__breakpoint_steps,  // get_const(index) function pointer
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__get_function__McMotionIntrInfo__breakpoint_steps,  // get(index) function pointer
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__fetch_function__McMotionIntrInfo__breakpoint_steps,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__assign_function__McMotionIntrInfo__breakpoint_steps,  // assign(index, value) function pointer
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__resize_function__McMotionIntrInfo__breakpoint_steps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "McMotionIntrInfo",  // message name
  2,  // number of fields
  sizeof(aimdk_msgs__msg__McMotionIntrInfo),
  aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_member_array,  // message members
  aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionIntrInfo)() {
  aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionIntrType)();
  if (!aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__McMotionIntrInfo__rosidl_typesupport_introspection_c__McMotionIntrInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
