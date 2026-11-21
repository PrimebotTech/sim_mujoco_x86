// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/AudioDeviceInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/audio_device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `device_addr`
// Member `device_type`
// Member `device_name`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__AudioDeviceInfo__init(aimdk_msgs__msg__AudioDeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // device_addr
  if (!rosidl_runtime_c__String__init(&msg->device_addr)) {
    aimdk_msgs__msg__AudioDeviceInfo__fini(msg);
    return false;
  }
  // device_type
  if (!rosidl_runtime_c__String__init(&msg->device_type)) {
    aimdk_msgs__msg__AudioDeviceInfo__fini(msg);
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    aimdk_msgs__msg__AudioDeviceInfo__fini(msg);
    return false;
  }
  // is_sel
  return true;
}

void
aimdk_msgs__msg__AudioDeviceInfo__fini(aimdk_msgs__msg__AudioDeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // device_addr
  rosidl_runtime_c__String__fini(&msg->device_addr);
  // device_type
  rosidl_runtime_c__String__fini(&msg->device_type);
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // is_sel
}

bool
aimdk_msgs__msg__AudioDeviceInfo__are_equal(const aimdk_msgs__msg__AudioDeviceInfo * lhs, const aimdk_msgs__msg__AudioDeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // device_addr
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_addr), &(rhs->device_addr)))
  {
    return false;
  }
  // device_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_type), &(rhs->device_type)))
  {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_name), &(rhs->device_name)))
  {
    return false;
  }
  // is_sel
  if (lhs->is_sel != rhs->is_sel) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__AudioDeviceInfo__copy(
  const aimdk_msgs__msg__AudioDeviceInfo * input,
  aimdk_msgs__msg__AudioDeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // device_addr
  if (!rosidl_runtime_c__String__copy(
      &(input->device_addr), &(output->device_addr)))
  {
    return false;
  }
  // device_type
  if (!rosidl_runtime_c__String__copy(
      &(input->device_type), &(output->device_type)))
  {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__copy(
      &(input->device_name), &(output->device_name)))
  {
    return false;
  }
  // is_sel
  output->is_sel = input->is_sel;
  return true;
}

aimdk_msgs__msg__AudioDeviceInfo *
aimdk_msgs__msg__AudioDeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AudioDeviceInfo * msg = (aimdk_msgs__msg__AudioDeviceInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__AudioDeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__AudioDeviceInfo));
  bool success = aimdk_msgs__msg__AudioDeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__AudioDeviceInfo__destroy(aimdk_msgs__msg__AudioDeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__AudioDeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__AudioDeviceInfo__Sequence__init(aimdk_msgs__msg__AudioDeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AudioDeviceInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__AudioDeviceInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__AudioDeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__AudioDeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__AudioDeviceInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__AudioDeviceInfo__Sequence__fini(aimdk_msgs__msg__AudioDeviceInfo__Sequence * array)
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
      aimdk_msgs__msg__AudioDeviceInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__AudioDeviceInfo__Sequence *
aimdk_msgs__msg__AudioDeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AudioDeviceInfo__Sequence * array = (aimdk_msgs__msg__AudioDeviceInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__AudioDeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__AudioDeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__AudioDeviceInfo__Sequence__destroy(aimdk_msgs__msg__AudioDeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__AudioDeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__AudioDeviceInfo__Sequence__are_equal(const aimdk_msgs__msg__AudioDeviceInfo__Sequence * lhs, const aimdk_msgs__msg__AudioDeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__AudioDeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__AudioDeviceInfo__Sequence__copy(
  const aimdk_msgs__msg__AudioDeviceInfo__Sequence * input,
  aimdk_msgs__msg__AudioDeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__AudioDeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__AudioDeviceInfo * data =
      (aimdk_msgs__msg__AudioDeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__AudioDeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__AudioDeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__AudioDeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
