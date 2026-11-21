// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McLiftState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_lift_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aimdk_msgs__msg__McLiftState__init(aimdk_msgs__msg__McLiftState * msg)
{
  if (!msg) {
    return false;
  }
  // is_lifted
  // probability
  // threshold
  return true;
}

void
aimdk_msgs__msg__McLiftState__fini(aimdk_msgs__msg__McLiftState * msg)
{
  if (!msg) {
    return;
  }
  // is_lifted
  // probability
  // threshold
}

bool
aimdk_msgs__msg__McLiftState__are_equal(const aimdk_msgs__msg__McLiftState * lhs, const aimdk_msgs__msg__McLiftState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_lifted
  if (lhs->is_lifted != rhs->is_lifted) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // threshold
  if (lhs->threshold != rhs->threshold) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McLiftState__copy(
  const aimdk_msgs__msg__McLiftState * input,
  aimdk_msgs__msg__McLiftState * output)
{
  if (!input || !output) {
    return false;
  }
  // is_lifted
  output->is_lifted = input->is_lifted;
  // probability
  output->probability = input->probability;
  // threshold
  output->threshold = input->threshold;
  return true;
}

aimdk_msgs__msg__McLiftState *
aimdk_msgs__msg__McLiftState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLiftState * msg = (aimdk_msgs__msg__McLiftState *)allocator.allocate(sizeof(aimdk_msgs__msg__McLiftState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McLiftState));
  bool success = aimdk_msgs__msg__McLiftState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McLiftState__destroy(aimdk_msgs__msg__McLiftState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McLiftState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McLiftState__Sequence__init(aimdk_msgs__msg__McLiftState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLiftState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McLiftState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McLiftState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McLiftState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McLiftState__fini(&data[i - 1]);
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
aimdk_msgs__msg__McLiftState__Sequence__fini(aimdk_msgs__msg__McLiftState__Sequence * array)
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
      aimdk_msgs__msg__McLiftState__fini(&array->data[i]);
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

aimdk_msgs__msg__McLiftState__Sequence *
aimdk_msgs__msg__McLiftState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLiftState__Sequence * array = (aimdk_msgs__msg__McLiftState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McLiftState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McLiftState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McLiftState__Sequence__destroy(aimdk_msgs__msg__McLiftState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McLiftState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McLiftState__Sequence__are_equal(const aimdk_msgs__msg__McLiftState__Sequence * lhs, const aimdk_msgs__msg__McLiftState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McLiftState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McLiftState__Sequence__copy(
  const aimdk_msgs__msg__McLiftState__Sequence * input,
  aimdk_msgs__msg__McLiftState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McLiftState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McLiftState * data =
      (aimdk_msgs__msg__McLiftState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McLiftState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McLiftState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McLiftState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
