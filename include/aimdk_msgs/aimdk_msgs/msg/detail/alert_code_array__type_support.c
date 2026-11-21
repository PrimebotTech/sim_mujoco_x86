// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/AlertCodeArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/alert_code_array__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/alert_code_array__functions.h"
#include "aimdk_msgs/msg/detail/alert_code_array__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `list`
#include "aimdk_msgs/msg/alert_code.h"
// Member `list`
#include "aimdk_msgs/msg/detail/alert_code__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__AlertCodeArray__init(message_memory);
}

void aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_fini_function(void * message_memory)
{
  aimdk_msgs__msg__AlertCodeArray__fini(message_memory);
}

size_t aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__size_function__AlertCodeArray__list(
  const void * untyped_member)
{
  const aimdk_msgs__msg__AlertCode__Sequence * member =
    (const aimdk_msgs__msg__AlertCode__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_const_function__AlertCodeArray__list(
  const void * untyped_member, size_t index)
{
  const aimdk_msgs__msg__AlertCode__Sequence * member =
    (const aimdk_msgs__msg__AlertCode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_function__AlertCodeArray__list(
  void * untyped_member, size_t index)
{
  aimdk_msgs__msg__AlertCode__Sequence * member =
    (aimdk_msgs__msg__AlertCode__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__fetch_function__AlertCodeArray__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aimdk_msgs__msg__AlertCode * item =
    ((const aimdk_msgs__msg__AlertCode *)
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_const_function__AlertCodeArray__list(untyped_member, index));
  aimdk_msgs__msg__AlertCode * value =
    (aimdk_msgs__msg__AlertCode *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__assign_function__AlertCodeArray__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aimdk_msgs__msg__AlertCode * item =
    ((aimdk_msgs__msg__AlertCode *)
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_function__AlertCodeArray__list(untyped_member, index));
  const aimdk_msgs__msg__AlertCode * value =
    (const aimdk_msgs__msg__AlertCode *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__resize_function__AlertCodeArray__list(
  void * untyped_member, size_t size)
{
  aimdk_msgs__msg__AlertCode__Sequence * member =
    (aimdk_msgs__msg__AlertCode__Sequence *)(untyped_member);
  aimdk_msgs__msg__AlertCode__Sequence__fini(member);
  return aimdk_msgs__msg__AlertCode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__AlertCodeArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__AlertCodeArray, list),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__size_function__AlertCodeArray__list,  // size() function pointer
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_const_function__AlertCodeArray__list,  // get_const(index) function pointer
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__get_function__AlertCodeArray__list,  // get(index) function pointer
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__fetch_function__AlertCodeArray__list,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__assign_function__AlertCodeArray__list,  // assign(index, value) function pointer
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__resize_function__AlertCodeArray__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "AlertCodeArray",  // message name
  2,  // number of fields
  sizeof(aimdk_msgs__msg__AlertCodeArray),
  aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_member_array,  // message members
  aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, AlertCodeArray)() {
  aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, AlertCode)();
  if (!aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__AlertCodeArray__rosidl_typesupport_introspection_c__AlertCodeArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
