// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/JointInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/joint_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `hardware_version`
// Member `software_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `mit_params`
#include "aimdk_msgs/msg/detail/joint_mit_params__functions.h"
// Member `protect_config`
#include "aimdk_msgs/msg/detail/joint_protect_config__functions.h"

bool
aimdk_msgs__msg__JointInfo__init(aimdk_msgs__msg__JointInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    aimdk_msgs__msg__JointInfo__fini(msg);
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__init(&msg->hardware_version)) {
    aimdk_msgs__msg__JointInfo__fini(msg);
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    aimdk_msgs__msg__JointInfo__fini(msg);
    return false;
  }
  // mode
  // mit_params
  if (!aimdk_msgs__msg__JointMitParams__init(&msg->mit_params)) {
    aimdk_msgs__msg__JointInfo__fini(msg);
    return false;
  }
  // protect_config
  if (!aimdk_msgs__msg__JointProtectConfig__init(&msg->protect_config)) {
    aimdk_msgs__msg__JointInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__JointInfo__fini(aimdk_msgs__msg__JointInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // hardware_version
  rosidl_runtime_c__String__fini(&msg->hardware_version);
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // mode
  // mit_params
  aimdk_msgs__msg__JointMitParams__fini(&msg->mit_params);
  // protect_config
  aimdk_msgs__msg__JointProtectConfig__fini(&msg->protect_config);
}

bool
aimdk_msgs__msg__JointInfo__are_equal(const aimdk_msgs__msg__JointInfo * lhs, const aimdk_msgs__msg__JointInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_version), &(rhs->hardware_version)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software_version), &(rhs->software_version)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // mit_params
  if (!aimdk_msgs__msg__JointMitParams__are_equal(
      &(lhs->mit_params), &(rhs->mit_params)))
  {
    return false;
  }
  // protect_config
  if (!aimdk_msgs__msg__JointProtectConfig__are_equal(
      &(lhs->protect_config), &(rhs->protect_config)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__JointInfo__copy(
  const aimdk_msgs__msg__JointInfo * input,
  aimdk_msgs__msg__JointInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // hardware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_version), &(output->hardware_version)))
  {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->software_version), &(output->software_version)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // mit_params
  if (!aimdk_msgs__msg__JointMitParams__copy(
      &(input->mit_params), &(output->mit_params)))
  {
    return false;
  }
  // protect_config
  if (!aimdk_msgs__msg__JointProtectConfig__copy(
      &(input->protect_config), &(output->protect_config)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__JointInfo *
aimdk_msgs__msg__JointInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointInfo * msg = (aimdk_msgs__msg__JointInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__JointInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__JointInfo));
  bool success = aimdk_msgs__msg__JointInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__JointInfo__destroy(aimdk_msgs__msg__JointInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__JointInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__JointInfo__Sequence__init(aimdk_msgs__msg__JointInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__JointInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__JointInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__JointInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__JointInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aimdk_msgs__msg__JointInfo__Sequence__fini(aimdk_msgs__msg__JointInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aimdk_msgs__msg__JointInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aimdk_msgs__msg__JointInfo__Sequence *
aimdk_msgs__msg__JointInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointInfo__Sequence * array = (aimdk_msgs__msg__JointInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__JointInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__JointInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__JointInfo__Sequence__destroy(aimdk_msgs__msg__JointInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__JointInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__JointInfo__Sequence__are_equal(const aimdk_msgs__msg__JointInfo__Sequence * lhs, const aimdk_msgs__msg__JointInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__JointInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__JointInfo__Sequence__copy(
  const aimdk_msgs__msg__JointInfo__Sequence * input,
  aimdk_msgs__msg__JointInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__JointInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__JointInfo * data =
      (aimdk_msgs__msg__JointInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__JointInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__JointInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__JointInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
