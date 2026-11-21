// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/JointMitParams.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/joint_mit_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aimdk_msgs__msg__JointMitParams__init(aimdk_msgs__msg__JointMitParams * msg)
{
  if (!msg) {
    return false;
  }
  // pos_max
  // pos_min
  // vel_max
  // vel_min
  // tor_max
  // tor_min
  // kp_max
  // kp_min
  // kd_max
  // kd_min
  return true;
}

void
aimdk_msgs__msg__JointMitParams__fini(aimdk_msgs__msg__JointMitParams * msg)
{
  if (!msg) {
    return;
  }
  // pos_max
  // pos_min
  // vel_max
  // vel_min
  // tor_max
  // tor_min
  // kp_max
  // kp_min
  // kd_max
  // kd_min
}

bool
aimdk_msgs__msg__JointMitParams__are_equal(const aimdk_msgs__msg__JointMitParams * lhs, const aimdk_msgs__msg__JointMitParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_max
  if (lhs->pos_max != rhs->pos_max) {
    return false;
  }
  // pos_min
  if (lhs->pos_min != rhs->pos_min) {
    return false;
  }
  // vel_max
  if (lhs->vel_max != rhs->vel_max) {
    return false;
  }
  // vel_min
  if (lhs->vel_min != rhs->vel_min) {
    return false;
  }
  // tor_max
  if (lhs->tor_max != rhs->tor_max) {
    return false;
  }
  // tor_min
  if (lhs->tor_min != rhs->tor_min) {
    return false;
  }
  // kp_max
  if (lhs->kp_max != rhs->kp_max) {
    return false;
  }
  // kp_min
  if (lhs->kp_min != rhs->kp_min) {
    return false;
  }
  // kd_max
  if (lhs->kd_max != rhs->kd_max) {
    return false;
  }
  // kd_min
  if (lhs->kd_min != rhs->kd_min) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__JointMitParams__copy(
  const aimdk_msgs__msg__JointMitParams * input,
  aimdk_msgs__msg__JointMitParams * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_max
  output->pos_max = input->pos_max;
  // pos_min
  output->pos_min = input->pos_min;
  // vel_max
  output->vel_max = input->vel_max;
  // vel_min
  output->vel_min = input->vel_min;
  // tor_max
  output->tor_max = input->tor_max;
  // tor_min
  output->tor_min = input->tor_min;
  // kp_max
  output->kp_max = input->kp_max;
  // kp_min
  output->kp_min = input->kp_min;
  // kd_max
  output->kd_max = input->kd_max;
  // kd_min
  output->kd_min = input->kd_min;
  return true;
}

aimdk_msgs__msg__JointMitParams *
aimdk_msgs__msg__JointMitParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointMitParams * msg = (aimdk_msgs__msg__JointMitParams *)allocator.allocate(sizeof(aimdk_msgs__msg__JointMitParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__JointMitParams));
  bool success = aimdk_msgs__msg__JointMitParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__JointMitParams__destroy(aimdk_msgs__msg__JointMitParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__JointMitParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__JointMitParams__Sequence__init(aimdk_msgs__msg__JointMitParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointMitParams * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__JointMitParams *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__JointMitParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__JointMitParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__JointMitParams__fini(&data[i - 1]);
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
aimdk_msgs__msg__JointMitParams__Sequence__fini(aimdk_msgs__msg__JointMitParams__Sequence * array)
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
      aimdk_msgs__msg__JointMitParams__fini(&array->data[i]);
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

aimdk_msgs__msg__JointMitParams__Sequence *
aimdk_msgs__msg__JointMitParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__JointMitParams__Sequence * array = (aimdk_msgs__msg__JointMitParams__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__JointMitParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__JointMitParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__JointMitParams__Sequence__destroy(aimdk_msgs__msg__JointMitParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__JointMitParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__JointMitParams__Sequence__are_equal(const aimdk_msgs__msg__JointMitParams__Sequence * lhs, const aimdk_msgs__msg__JointMitParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__JointMitParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__JointMitParams__Sequence__copy(
  const aimdk_msgs__msg__JointMitParams__Sequence * input,
  aimdk_msgs__msg__JointMitParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__JointMitParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__JointMitParams * data =
      (aimdk_msgs__msg__JointMitParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__JointMitParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__JointMitParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__JointMitParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
