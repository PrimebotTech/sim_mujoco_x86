// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:srv/GetMcMotions.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/srv/detail/get_mc_motions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/request_header__functions.h"
// Member `form_state`
#include "aimdk_msgs/msg/detail/mc_form_state__functions.h"

bool
aimdk_msgs__srv__GetMcMotions_Request__init(aimdk_msgs__srv__GetMcMotions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__RequestHeader__init(&msg->header)) {
    aimdk_msgs__srv__GetMcMotions_Request__fini(msg);
    return false;
  }
  // form_state
  if (!aimdk_msgs__msg__McFormState__init(&msg->form_state)) {
    aimdk_msgs__srv__GetMcMotions_Request__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__srv__GetMcMotions_Request__fini(aimdk_msgs__srv__GetMcMotions_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__RequestHeader__fini(&msg->header);
  // form_state
  aimdk_msgs__msg__McFormState__fini(&msg->form_state);
}

bool
aimdk_msgs__srv__GetMcMotions_Request__are_equal(const aimdk_msgs__srv__GetMcMotions_Request * lhs, const aimdk_msgs__srv__GetMcMotions_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // form_state
  if (!aimdk_msgs__msg__McFormState__are_equal(
      &(lhs->form_state), &(rhs->form_state)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__srv__GetMcMotions_Request__copy(
  const aimdk_msgs__srv__GetMcMotions_Request * input,
  aimdk_msgs__srv__GetMcMotions_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // form_state
  if (!aimdk_msgs__msg__McFormState__copy(
      &(input->form_state), &(output->form_state)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__srv__GetMcMotions_Request *
aimdk_msgs__srv__GetMcMotions_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Request * msg = (aimdk_msgs__srv__GetMcMotions_Request *)allocator.allocate(sizeof(aimdk_msgs__srv__GetMcMotions_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__srv__GetMcMotions_Request));
  bool success = aimdk_msgs__srv__GetMcMotions_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__srv__GetMcMotions_Request__destroy(aimdk_msgs__srv__GetMcMotions_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__srv__GetMcMotions_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__srv__GetMcMotions_Request__Sequence__init(aimdk_msgs__srv__GetMcMotions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Request * data = NULL;

  if (size) {
    data = (aimdk_msgs__srv__GetMcMotions_Request *)allocator.zero_allocate(size, sizeof(aimdk_msgs__srv__GetMcMotions_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__srv__GetMcMotions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__srv__GetMcMotions_Request__fini(&data[i - 1]);
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
aimdk_msgs__srv__GetMcMotions_Request__Sequence__fini(aimdk_msgs__srv__GetMcMotions_Request__Sequence * array)
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
      aimdk_msgs__srv__GetMcMotions_Request__fini(&array->data[i]);
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

aimdk_msgs__srv__GetMcMotions_Request__Sequence *
aimdk_msgs__srv__GetMcMotions_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Request__Sequence * array = (aimdk_msgs__srv__GetMcMotions_Request__Sequence *)allocator.allocate(sizeof(aimdk_msgs__srv__GetMcMotions_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__srv__GetMcMotions_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__srv__GetMcMotions_Request__Sequence__destroy(aimdk_msgs__srv__GetMcMotions_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__srv__GetMcMotions_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__srv__GetMcMotions_Request__Sequence__are_equal(const aimdk_msgs__srv__GetMcMotions_Request__Sequence * lhs, const aimdk_msgs__srv__GetMcMotions_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__srv__GetMcMotions_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__srv__GetMcMotions_Request__Sequence__copy(
  const aimdk_msgs__srv__GetMcMotions_Request__Sequence * input,
  aimdk_msgs__srv__GetMcMotions_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__srv__GetMcMotions_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__srv__GetMcMotions_Request * data =
      (aimdk_msgs__srv__GetMcMotions_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__srv__GetMcMotions_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__srv__GetMcMotions_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__srv__GetMcMotions_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "aimdk_msgs/msg/detail/common_task_response__functions.h"
// Member `motion`
#include "aimdk_msgs/msg/detail/mc_motion__functions.h"

bool
aimdk_msgs__srv__GetMcMotions_Response__init(aimdk_msgs__srv__GetMcMotions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonTaskResponse__init(&msg->response)) {
    aimdk_msgs__srv__GetMcMotions_Response__fini(msg);
    return false;
  }
  // motion
  if (!aimdk_msgs__msg__McMotion__Sequence__init(&msg->motion, 0)) {
    aimdk_msgs__srv__GetMcMotions_Response__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__srv__GetMcMotions_Response__fini(aimdk_msgs__srv__GetMcMotions_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  aimdk_msgs__msg__CommonTaskResponse__fini(&msg->response);
  // motion
  aimdk_msgs__msg__McMotion__Sequence__fini(&msg->motion);
}

bool
aimdk_msgs__srv__GetMcMotions_Response__are_equal(const aimdk_msgs__srv__GetMcMotions_Response * lhs, const aimdk_msgs__srv__GetMcMotions_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonTaskResponse__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  // motion
  if (!aimdk_msgs__msg__McMotion__Sequence__are_equal(
      &(lhs->motion), &(rhs->motion)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__srv__GetMcMotions_Response__copy(
  const aimdk_msgs__srv__GetMcMotions_Response * input,
  aimdk_msgs__srv__GetMcMotions_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonTaskResponse__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  // motion
  if (!aimdk_msgs__msg__McMotion__Sequence__copy(
      &(input->motion), &(output->motion)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__srv__GetMcMotions_Response *
aimdk_msgs__srv__GetMcMotions_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Response * msg = (aimdk_msgs__srv__GetMcMotions_Response *)allocator.allocate(sizeof(aimdk_msgs__srv__GetMcMotions_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__srv__GetMcMotions_Response));
  bool success = aimdk_msgs__srv__GetMcMotions_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__srv__GetMcMotions_Response__destroy(aimdk_msgs__srv__GetMcMotions_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__srv__GetMcMotions_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__srv__GetMcMotions_Response__Sequence__init(aimdk_msgs__srv__GetMcMotions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Response * data = NULL;

  if (size) {
    data = (aimdk_msgs__srv__GetMcMotions_Response *)allocator.zero_allocate(size, sizeof(aimdk_msgs__srv__GetMcMotions_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__srv__GetMcMotions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__srv__GetMcMotions_Response__fini(&data[i - 1]);
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
aimdk_msgs__srv__GetMcMotions_Response__Sequence__fini(aimdk_msgs__srv__GetMcMotions_Response__Sequence * array)
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
      aimdk_msgs__srv__GetMcMotions_Response__fini(&array->data[i]);
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

aimdk_msgs__srv__GetMcMotions_Response__Sequence *
aimdk_msgs__srv__GetMcMotions_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__GetMcMotions_Response__Sequence * array = (aimdk_msgs__srv__GetMcMotions_Response__Sequence *)allocator.allocate(sizeof(aimdk_msgs__srv__GetMcMotions_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__srv__GetMcMotions_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__srv__GetMcMotions_Response__Sequence__destroy(aimdk_msgs__srv__GetMcMotions_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__srv__GetMcMotions_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__srv__GetMcMotions_Response__Sequence__are_equal(const aimdk_msgs__srv__GetMcMotions_Response__Sequence * lhs, const aimdk_msgs__srv__GetMcMotions_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__srv__GetMcMotions_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__srv__GetMcMotions_Response__Sequence__copy(
  const aimdk_msgs__srv__GetMcMotions_Response__Sequence * input,
  aimdk_msgs__srv__GetMcMotions_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__srv__GetMcMotions_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__srv__GetMcMotions_Response * data =
      (aimdk_msgs__srv__GetMcMotions_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__srv__GetMcMotions_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__srv__GetMcMotions_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__srv__GetMcMotions_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
