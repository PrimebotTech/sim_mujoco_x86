// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McRuntimeModel.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_runtime_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_hand_status`
// Member `right_hand_status`
#include "aimdk_msgs/msg/detail/mc_hand_status__functions.h"

bool
aimdk_msgs__msg__McRuntimeModel__init(aimdk_msgs__msg__McRuntimeModel * msg)
{
  if (!msg) {
    return false;
  }
  // waist_status
  // left_hand_status
  if (!aimdk_msgs__msg__McHandStatus__init(&msg->left_hand_status)) {
    aimdk_msgs__msg__McRuntimeModel__fini(msg);
    return false;
  }
  // right_hand_status
  if (!aimdk_msgs__msg__McHandStatus__init(&msg->right_hand_status)) {
    aimdk_msgs__msg__McRuntimeModel__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__McRuntimeModel__fini(aimdk_msgs__msg__McRuntimeModel * msg)
{
  if (!msg) {
    return;
  }
  // waist_status
  // left_hand_status
  aimdk_msgs__msg__McHandStatus__fini(&msg->left_hand_status);
  // right_hand_status
  aimdk_msgs__msg__McHandStatus__fini(&msg->right_hand_status);
}

bool
aimdk_msgs__msg__McRuntimeModel__are_equal(const aimdk_msgs__msg__McRuntimeModel * lhs, const aimdk_msgs__msg__McRuntimeModel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waist_status
  if (lhs->waist_status != rhs->waist_status) {
    return false;
  }
  // left_hand_status
  if (!aimdk_msgs__msg__McHandStatus__are_equal(
      &(lhs->left_hand_status), &(rhs->left_hand_status)))
  {
    return false;
  }
  // right_hand_status
  if (!aimdk_msgs__msg__McHandStatus__are_equal(
      &(lhs->right_hand_status), &(rhs->right_hand_status)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McRuntimeModel__copy(
  const aimdk_msgs__msg__McRuntimeModel * input,
  aimdk_msgs__msg__McRuntimeModel * output)
{
  if (!input || !output) {
    return false;
  }
  // waist_status
  output->waist_status = input->waist_status;
  // left_hand_status
  if (!aimdk_msgs__msg__McHandStatus__copy(
      &(input->left_hand_status), &(output->left_hand_status)))
  {
    return false;
  }
  // right_hand_status
  if (!aimdk_msgs__msg__McHandStatus__copy(
      &(input->right_hand_status), &(output->right_hand_status)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__McRuntimeModel *
aimdk_msgs__msg__McRuntimeModel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McRuntimeModel * msg = (aimdk_msgs__msg__McRuntimeModel *)allocator.allocate(sizeof(aimdk_msgs__msg__McRuntimeModel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McRuntimeModel));
  bool success = aimdk_msgs__msg__McRuntimeModel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McRuntimeModel__destroy(aimdk_msgs__msg__McRuntimeModel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McRuntimeModel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McRuntimeModel__Sequence__init(aimdk_msgs__msg__McRuntimeModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McRuntimeModel * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McRuntimeModel *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McRuntimeModel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McRuntimeModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McRuntimeModel__fini(&data[i - 1]);
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
aimdk_msgs__msg__McRuntimeModel__Sequence__fini(aimdk_msgs__msg__McRuntimeModel__Sequence * array)
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
      aimdk_msgs__msg__McRuntimeModel__fini(&array->data[i]);
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

aimdk_msgs__msg__McRuntimeModel__Sequence *
aimdk_msgs__msg__McRuntimeModel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McRuntimeModel__Sequence * array = (aimdk_msgs__msg__McRuntimeModel__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McRuntimeModel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McRuntimeModel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McRuntimeModel__Sequence__destroy(aimdk_msgs__msg__McRuntimeModel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McRuntimeModel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McRuntimeModel__Sequence__are_equal(const aimdk_msgs__msg__McRuntimeModel__Sequence * lhs, const aimdk_msgs__msg__McRuntimeModel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McRuntimeModel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McRuntimeModel__Sequence__copy(
  const aimdk_msgs__msg__McRuntimeModel__Sequence * input,
  aimdk_msgs__msg__McRuntimeModel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McRuntimeModel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McRuntimeModel * data =
      (aimdk_msgs__msg__McRuntimeModel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McRuntimeModel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McRuntimeModel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McRuntimeModel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
