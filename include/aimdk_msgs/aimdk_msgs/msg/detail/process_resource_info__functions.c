// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/ProcessResourceInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/process_resource_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `process_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `threads`
#include "aimdk_msgs/msg/detail/thread_resource_info__functions.h"

bool
aimdk_msgs__msg__ProcessResourceInfo__init(aimdk_msgs__msg__ProcessResourceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // process_id
  // process_name
  if (!rosidl_runtime_c__String__init(&msg->process_name)) {
    aimdk_msgs__msg__ProcessResourceInfo__fini(msg);
    return false;
  }
  // process_mem_usage
  // process_mem_usage_ratio
  // process_cpu_usage_ratio
  // thread_count
  // threads
  if (!aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(&msg->threads, 0)) {
    aimdk_msgs__msg__ProcessResourceInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__ProcessResourceInfo__fini(aimdk_msgs__msg__ProcessResourceInfo * msg)
{
  if (!msg) {
    return;
  }
  // process_id
  // process_name
  rosidl_runtime_c__String__fini(&msg->process_name);
  // process_mem_usage
  // process_mem_usage_ratio
  // process_cpu_usage_ratio
  // thread_count
  // threads
  aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(&msg->threads);
}

bool
aimdk_msgs__msg__ProcessResourceInfo__are_equal(const aimdk_msgs__msg__ProcessResourceInfo * lhs, const aimdk_msgs__msg__ProcessResourceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // process_id
  if (lhs->process_id != rhs->process_id) {
    return false;
  }
  // process_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->process_name), &(rhs->process_name)))
  {
    return false;
  }
  // process_mem_usage
  if (lhs->process_mem_usage != rhs->process_mem_usage) {
    return false;
  }
  // process_mem_usage_ratio
  if (lhs->process_mem_usage_ratio != rhs->process_mem_usage_ratio) {
    return false;
  }
  // process_cpu_usage_ratio
  if (lhs->process_cpu_usage_ratio != rhs->process_cpu_usage_ratio) {
    return false;
  }
  // thread_count
  if (lhs->thread_count != rhs->thread_count) {
    return false;
  }
  // threads
  if (!aimdk_msgs__msg__ThreadResourceInfo__Sequence__are_equal(
      &(lhs->threads), &(rhs->threads)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__ProcessResourceInfo__copy(
  const aimdk_msgs__msg__ProcessResourceInfo * input,
  aimdk_msgs__msg__ProcessResourceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // process_id
  output->process_id = input->process_id;
  // process_name
  if (!rosidl_runtime_c__String__copy(
      &(input->process_name), &(output->process_name)))
  {
    return false;
  }
  // process_mem_usage
  output->process_mem_usage = input->process_mem_usage;
  // process_mem_usage_ratio
  output->process_mem_usage_ratio = input->process_mem_usage_ratio;
  // process_cpu_usage_ratio
  output->process_cpu_usage_ratio = input->process_cpu_usage_ratio;
  // thread_count
  output->thread_count = input->thread_count;
  // threads
  if (!aimdk_msgs__msg__ThreadResourceInfo__Sequence__copy(
      &(input->threads), &(output->threads)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__ProcessResourceInfo *
aimdk_msgs__msg__ProcessResourceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ProcessResourceInfo * msg = (aimdk_msgs__msg__ProcessResourceInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__ProcessResourceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__ProcessResourceInfo));
  bool success = aimdk_msgs__msg__ProcessResourceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__ProcessResourceInfo__destroy(aimdk_msgs__msg__ProcessResourceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__ProcessResourceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__ProcessResourceInfo__Sequence__init(aimdk_msgs__msg__ProcessResourceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ProcessResourceInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__ProcessResourceInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__ProcessResourceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__ProcessResourceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__ProcessResourceInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__ProcessResourceInfo__Sequence__fini(aimdk_msgs__msg__ProcessResourceInfo__Sequence * array)
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
      aimdk_msgs__msg__ProcessResourceInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__ProcessResourceInfo__Sequence *
aimdk_msgs__msg__ProcessResourceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ProcessResourceInfo__Sequence * array = (aimdk_msgs__msg__ProcessResourceInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__ProcessResourceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__ProcessResourceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__ProcessResourceInfo__Sequence__destroy(aimdk_msgs__msg__ProcessResourceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__ProcessResourceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__ProcessResourceInfo__Sequence__are_equal(const aimdk_msgs__msg__ProcessResourceInfo__Sequence * lhs, const aimdk_msgs__msg__ProcessResourceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__ProcessResourceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__ProcessResourceInfo__Sequence__copy(
  const aimdk_msgs__msg__ProcessResourceInfo__Sequence * input,
  aimdk_msgs__msg__ProcessResourceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__ProcessResourceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__ProcessResourceInfo * data =
      (aimdk_msgs__msg__ProcessResourceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__ProcessResourceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__ProcessResourceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__ProcessResourceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
