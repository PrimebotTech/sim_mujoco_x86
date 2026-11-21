// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/McRLDebug.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/mc_rl_debug__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/mc_rl_debug__functions.h"
#include "aimdk_msgs/msg/detail/mc_rl_debug__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `obs_vec`
// Member `action_vec`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__McRLDebug__init(message_memory);
}

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_fini_function(void * message_memory)
{
  aimdk_msgs__msg__McRLDebug__fini(message_memory);
}

size_t aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__size_function__McRLDebug__obs_vec(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__obs_vec(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__obs_vec(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__fetch_function__McRLDebug__obs_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__obs_vec(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__assign_function__McRLDebug__obs_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__obs_vec(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__resize_function__McRLDebug__obs_vec(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__size_function__McRLDebug__action_vec(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__action_vec(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__action_vec(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__fetch_function__McRLDebug__action_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__action_vec(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__assign_function__McRLDebug__action_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__action_vec(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__resize_function__McRLDebug__action_vec(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McRLDebug, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obs_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McRLDebug, obs_vec),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__size_function__McRLDebug__obs_vec,  // size() function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__obs_vec,  // get_const(index) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__obs_vec,  // get(index) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__fetch_function__McRLDebug__obs_vec,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__assign_function__McRLDebug__obs_vec,  // assign(index, value) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__resize_function__McRLDebug__obs_vec  // resize(index) function pointer
  },
  {
    "action_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McRLDebug, action_vec),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__size_function__McRLDebug__action_vec,  // size() function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_const_function__McRLDebug__action_vec,  // get_const(index) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__get_function__McRLDebug__action_vec,  // get(index) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__fetch_function__McRLDebug__action_vec,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__assign_function__McRLDebug__action_vec,  // assign(index, value) function pointer
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__resize_function__McRLDebug__action_vec  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "McRLDebug",  // message name
  3,  // number of fields
  sizeof(aimdk_msgs__msg__McRLDebug),
  aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_member_array,  // message members
  aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McRLDebug)() {
  aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  if (!aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__McRLDebug__rosidl_typesupport_introspection_c__McRLDebug_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
