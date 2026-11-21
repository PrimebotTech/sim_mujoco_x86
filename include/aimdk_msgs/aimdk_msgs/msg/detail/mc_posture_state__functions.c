// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McPostureState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_posture_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aimdk_msgs__msg__McPostureState__init(aimdk_msgs__msg__McPostureState * msg)
{
  if (!msg) {
    return false;
  }
  // current_posture
  return true;
}

void
aimdk_msgs__msg__McPostureState__fini(aimdk_msgs__msg__McPostureState * msg)
{
  if (!msg) {
    return;
  }
  // current_posture
}

bool
aimdk_msgs__msg__McPostureState__are_equal(const aimdk_msgs__msg__McPostureState * lhs, const aimdk_msgs__msg__McPostureState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_posture
  if (lhs->current_posture != rhs->current_posture) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McPostureState__copy(
  const aimdk_msgs__msg__McPostureState * input,
  aimdk_msgs__msg__McPostureState * output)
{
  if (!input || !output) {
    return false;
  }
  // current_posture
  output->current_posture = input->current_posture;
  return true;
}

aimdk_msgs__msg__McPostureState *
aimdk_msgs__msg__McPostureState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McPostureState * msg = (aimdk_msgs__msg__McPostureState *)allocator.allocate(sizeof(aimdk_msgs__msg__McPostureState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McPostureState));
  bool success = aimdk_msgs__msg__McPostureState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McPostureState__destroy(aimdk_msgs__msg__McPostureState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McPostureState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McPostureState__Sequence__init(aimdk_msgs__msg__McPostureState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McPostureState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McPostureState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McPostureState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McPostureState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McPostureState__fini(&data[i - 1]);
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
aimdk_msgs__msg__McPostureState__Sequence__fini(aimdk_msgs__msg__McPostureState__Sequence * array)
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
      aimdk_msgs__msg__McPostureState__fini(&array->data[i]);
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

aimdk_msgs__msg__McPostureState__Sequence *
aimdk_msgs__msg__McPostureState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McPostureState__Sequence * array = (aimdk_msgs__msg__McPostureState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McPostureState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McPostureState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McPostureState__Sequence__destroy(aimdk_msgs__msg__McPostureState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McPostureState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McPostureState__Sequence__are_equal(const aimdk_msgs__msg__McPostureState__Sequence * lhs, const aimdk_msgs__msg__McPostureState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McPostureState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McPostureState__Sequence__copy(
  const aimdk_msgs__msg__McPostureState__Sequence * input,
  aimdk_msgs__msg__McPostureState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McPostureState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McPostureState * data =
      (aimdk_msgs__msg__McPostureState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McPostureState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McPostureState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McPostureState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
