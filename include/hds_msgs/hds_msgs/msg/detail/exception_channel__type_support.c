// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hds_msgs:msg/ExceptionChannel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hds_msgs/msg/detail/exception_channel__rosidl_typesupport_introspection_c.h"
#include "hds_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hds_msgs/msg/detail/exception_channel__functions.h"
#include "hds_msgs/msg/detail/exception_channel__struct.h"


// Include directives for member types
// Member `exception_list`
#include "hds_msgs/msg/exception.h"
// Member `exception_list`
#include "hds_msgs/msg/detail/exception__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hds_msgs__msg__ExceptionChannel__init(message_memory);
}

void hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_fini_function(void * message_memory)
{
  hds_msgs__msg__ExceptionChannel__fini(message_memory);
}

size_t hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__size_function__ExceptionChannel__exception_list(
  const void * untyped_member)
{
  const hds_msgs__msg__Exception__Sequence * member =
    (const hds_msgs__msg__Exception__Sequence *)(untyped_member);
  return member->size;
}

const void * hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_const_function__ExceptionChannel__exception_list(
  const void * untyped_member, size_t index)
{
  const hds_msgs__msg__Exception__Sequence * member =
    (const hds_msgs__msg__Exception__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_function__ExceptionChannel__exception_list(
  void * untyped_member, size_t index)
{
  hds_msgs__msg__Exception__Sequence * member =
    (hds_msgs__msg__Exception__Sequence *)(untyped_member);
  return &member->data[index];
}

void hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__fetch_function__ExceptionChannel__exception_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hds_msgs__msg__Exception * item =
    ((const hds_msgs__msg__Exception *)
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_const_function__ExceptionChannel__exception_list(untyped_member, index));
  hds_msgs__msg__Exception * value =
    (hds_msgs__msg__Exception *)(untyped_value);
  *value = *item;
}

void hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__assign_function__ExceptionChannel__exception_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hds_msgs__msg__Exception * item =
    ((hds_msgs__msg__Exception *)
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_function__ExceptionChannel__exception_list(untyped_member, index));
  const hds_msgs__msg__Exception * value =
    (const hds_msgs__msg__Exception *)(untyped_value);
  *item = *value;
}

bool hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__resize_function__ExceptionChannel__exception_list(
  void * untyped_member, size_t size)
{
  hds_msgs__msg__Exception__Sequence * member =
    (hds_msgs__msg__Exception__Sequence *)(untyped_member);
  hds_msgs__msg__Exception__Sequence__fini(member);
  return hds_msgs__msg__Exception__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hds_msgs__msg__ExceptionChannel, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exception_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hds_msgs__msg__ExceptionChannel, exception_list),  // bytes offset in struct
    NULL,  // default value
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__size_function__ExceptionChannel__exception_list,  // size() function pointer
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_const_function__ExceptionChannel__exception_list,  // get_const(index) function pointer
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__get_function__ExceptionChannel__exception_list,  // get(index) function pointer
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__fetch_function__ExceptionChannel__exception_list,  // fetch(index, &value) function pointer
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__assign_function__ExceptionChannel__exception_list,  // assign(index, value) function pointer
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__resize_function__ExceptionChannel__exception_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_members = {
  "hds_msgs__msg",  // message namespace
  "ExceptionChannel",  // message name
  2,  // number of fields
  sizeof(hds_msgs__msg__ExceptionChannel),
  hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_member_array,  // message members
  hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_init_function,  // function to initialize message memory (memory has to be allocated)
  hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_type_support_handle = {
  0,
  &hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hds_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hds_msgs, msg, ExceptionChannel)() {
  hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hds_msgs, msg, Exception)();
  if (!hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_type_support_handle.typesupport_identifier) {
    hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hds_msgs__msg__ExceptionChannel__rosidl_typesupport_introspection_c__ExceptionChannel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
