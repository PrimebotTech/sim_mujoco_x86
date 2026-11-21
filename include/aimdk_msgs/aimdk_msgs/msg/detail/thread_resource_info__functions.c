// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/ThreadResourceInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/thread_resource_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `thread_name`
// Member `cpu_sched_policy`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_cpus`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
aimdk_msgs__msg__ThreadResourceInfo__init(aimdk_msgs__msg__ThreadResourceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // thread_id
  // thread_name
  if (!rosidl_runtime_c__String__init(&msg->thread_name)) {
    aimdk_msgs__msg__ThreadResourceInfo__fini(msg);
    return false;
  }
  // cpu_usage_ratio
  // cpu_sched_policy
  if (!rosidl_runtime_c__String__init(&msg->cpu_sched_policy)) {
    aimdk_msgs__msg__ThreadResourceInfo__fini(msg);
    return false;
  }
  // cpu_sched_priority
  // bounding_cpus
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->bounding_cpus, 0)) {
    aimdk_msgs__msg__ThreadResourceInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__ThreadResourceInfo__fini(aimdk_msgs__msg__ThreadResourceInfo * msg)
{
  if (!msg) {
    return;
  }
  // thread_id
  // thread_name
  rosidl_runtime_c__String__fini(&msg->thread_name);
  // cpu_usage_ratio
  // cpu_sched_policy
  rosidl_runtime_c__String__fini(&msg->cpu_sched_policy);
  // cpu_sched_priority
  // bounding_cpus
  rosidl_runtime_c__int32__Sequence__fini(&msg->bounding_cpus);
}

bool
aimdk_msgs__msg__ThreadResourceInfo__are_equal(const aimdk_msgs__msg__ThreadResourceInfo * lhs, const aimdk_msgs__msg__ThreadResourceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // thread_id
  if (lhs->thread_id != rhs->thread_id) {
    return false;
  }
  // thread_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->thread_name), &(rhs->thread_name)))
  {
    return false;
  }
  // cpu_usage_ratio
  if (lhs->cpu_usage_ratio != rhs->cpu_usage_ratio) {
    return false;
  }
  // cpu_sched_policy
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cpu_sched_policy), &(rhs->cpu_sched_policy)))
  {
    return false;
  }
  // cpu_sched_priority
  if (lhs->cpu_sched_priority != rhs->cpu_sched_priority) {
    return false;
  }
  // bounding_cpus
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->bounding_cpus), &(rhs->bounding_cpus)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__ThreadResourceInfo__copy(
  const aimdk_msgs__msg__ThreadResourceInfo * input,
  aimdk_msgs__msg__ThreadResourceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // thread_id
  output->thread_id = input->thread_id;
  // thread_name
  if (!rosidl_runtime_c__String__copy(
      &(input->thread_name), &(output->thread_name)))
  {
    return false;
  }
  // cpu_usage_ratio
  output->cpu_usage_ratio = input->cpu_usage_ratio;
  // cpu_sched_policy
  if (!rosidl_runtime_c__String__copy(
      &(input->cpu_sched_policy), &(output->cpu_sched_policy)))
  {
    return false;
  }
  // cpu_sched_priority
  output->cpu_sched_priority = input->cpu_sched_priority;
  // bounding_cpus
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->bounding_cpus), &(output->bounding_cpus)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__ThreadResourceInfo *
aimdk_msgs__msg__ThreadResourceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ThreadResourceInfo * msg = (aimdk_msgs__msg__ThreadResourceInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__ThreadResourceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__ThreadResourceInfo));
  bool success = aimdk_msgs__msg__ThreadResourceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__ThreadResourceInfo__destroy(aimdk_msgs__msg__ThreadResourceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__ThreadResourceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(aimdk_msgs__msg__ThreadResourceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ThreadResourceInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__ThreadResourceInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__ThreadResourceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__ThreadResourceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__ThreadResourceInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(aimdk_msgs__msg__ThreadResourceInfo__Sequence * array)
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
      aimdk_msgs__msg__ThreadResourceInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__ThreadResourceInfo__Sequence *
aimdk_msgs__msg__ThreadResourceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__ThreadResourceInfo__Sequence * array = (aimdk_msgs__msg__ThreadResourceInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__ThreadResourceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__ThreadResourceInfo__Sequence__destroy(aimdk_msgs__msg__ThreadResourceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__ThreadResourceInfo__Sequence__are_equal(const aimdk_msgs__msg__ThreadResourceInfo__Sequence * lhs, const aimdk_msgs__msg__ThreadResourceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__ThreadResourceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__ThreadResourceInfo__Sequence__copy(
  const aimdk_msgs__msg__ThreadResourceInfo__Sequence * input,
  aimdk_msgs__msg__ThreadResourceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__ThreadResourceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__ThreadResourceInfo * data =
      (aimdk_msgs__msg__ThreadResourceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__ThreadResourceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__ThreadResourceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__ThreadResourceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
