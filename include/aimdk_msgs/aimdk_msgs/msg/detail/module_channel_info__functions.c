// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/ModuleChannelInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/module_channel_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `backends`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__ModuleChannelInfo__init(aimdk_msgs__msg__ModuleChannelInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    aimdk_msgs__msg__ModuleChannelInfo__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    aimdk_msgs__msg__ModuleChannelInfo__fini(msg);
    return false;
  }
  // frequency
  // min_time_diff
  // max_time_diff
  // std_dev
  // window_size
  // timeout_threshold
  // is_active
  // backends
  if (!rosidl_runtime_c__String__Sequence__init(&msg->backends, 0)) {
    aimdk_msgs__msg__ModuleChannelInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__ModuleChannelInfo__fini(aimdk_msgs__msg__ModuleChannelInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // frequency
  // min_time_diff
  // max_time_diff
  // std_dev
  // window_size
  // timeout_threshold
  // is_active
  // backends
  rosidl_runtime_c__String__Sequence__fini(&msg->backends);
}

bool
aimdk_msgs__msg__ModuleChannelInfo__are_equal(const aimdk_msgs__msg__ModuleChannelInfo * lhs, const aimdk_msgs__msg__ModuleChannelInfo * rhs)
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
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // min_time_diff
  if (lhs->min_time_diff != rhs->min_time_diff) {
    return false;
  }
  // max_time_diff
  if (lhs->max_time_diff != rhs->max_time_diff) {
    return false;
  }
  // std_dev
  if (lhs->std_dev != rhs->std_dev) {
    return false;
  }
  // window_size
  if (lhs->window_size != rhs->window_size) {
    return false;
  }
  // timeout_threshold
  if (lhs->timeout_threshold != rhs->timeout_threshold) {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // backends
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->backends), &(rhs->backends)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__ModuleChannelInfo__copy(
  const aimdk_msgs__msg__ModuleChannelInfo * input,
  aimdk_msgs__msg__ModuleChannelInfo * output)
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
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // min_time_diff
  output->min_time_diff = input->min_time_diff;
  // max_time_diff
  output->max_time_diff = input->max_time_diff;
  // std_dev
  output->std_dev = input->std_dev;
  // window_size
  output->window_size = input->window_size;
  // timeout_threshold
  output->timeout_threshold = input->timeout_threshold;
  // is_active
  output->is_active = input->is_active;
  // backends
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->backends), &(output->backends)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__ModuleChannelInfo *
aimdk_msgs__msg__ModuleChannelInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleChannelInfo * msg = (aimdk_msgs__msg__ModuleChannelInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__ModuleChannelInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__ModuleChannelInfo));
  bool success = aimdk_msgs__msg__ModuleChannelInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__ModuleChannelInfo__destroy(aimdk_msgs__msg__ModuleChannelInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__ModuleChannelInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(aimdk_msgs__msg__ModuleChannelInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleChannelInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__ModuleChannelInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__ModuleChannelInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__ModuleChannelInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__ModuleChannelInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(aimdk_msgs__msg__ModuleChannelInfo__Sequence * array)
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
      aimdk_msgs__msg__ModuleChannelInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__ModuleChannelInfo__Sequence *
aimdk_msgs__msg__ModuleChannelInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * array = (aimdk_msgs__msg__ModuleChannelInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__ModuleChannelInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__ModuleChannelInfo__Sequence__destroy(aimdk_msgs__msg__ModuleChannelInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__ModuleChannelInfo__Sequence__are_equal(const aimdk_msgs__msg__ModuleChannelInfo__Sequence * lhs, const aimdk_msgs__msg__ModuleChannelInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__ModuleChannelInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__ModuleChannelInfo__Sequence__copy(
  const aimdk_msgs__msg__ModuleChannelInfo__Sequence * input,
  aimdk_msgs__msg__ModuleChannelInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__ModuleChannelInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__ModuleChannelInfo * data =
      (aimdk_msgs__msg__ModuleChannelInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__ModuleChannelInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__ModuleChannelInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__ModuleChannelInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
