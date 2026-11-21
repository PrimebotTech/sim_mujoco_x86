// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/DiagnosticInfo.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/diagnostic_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "aimdk_msgs/msg/detail/diagnostic_type__functions.h"
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__DiagnosticInfo__init(aimdk_msgs__msg__DiagnosticInfo * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  if (!aimdk_msgs__msg__DiagnosticType__init(&msg->type)) {
    aimdk_msgs__msg__DiagnosticInfo__fini(msg);
    return false;
  }
  // module_id
  // code
  // diag_code
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    aimdk_msgs__msg__DiagnosticInfo__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__DiagnosticInfo__fini(aimdk_msgs__msg__DiagnosticInfo * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  aimdk_msgs__msg__DiagnosticType__fini(&msg->type);
  // module_id
  // code
  // diag_code
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
aimdk_msgs__msg__DiagnosticInfo__are_equal(const aimdk_msgs__msg__DiagnosticInfo * lhs, const aimdk_msgs__msg__DiagnosticInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (!aimdk_msgs__msg__DiagnosticType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // module_id
  if (lhs->module_id != rhs->module_id) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // diag_code
  if (lhs->diag_code != rhs->diag_code) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__DiagnosticInfo__copy(
  const aimdk_msgs__msg__DiagnosticInfo * input,
  aimdk_msgs__msg__DiagnosticInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  if (!aimdk_msgs__msg__DiagnosticType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // module_id
  output->module_id = input->module_id;
  // code
  output->code = input->code;
  // diag_code
  output->diag_code = input->diag_code;
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__DiagnosticInfo *
aimdk_msgs__msg__DiagnosticInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__DiagnosticInfo * msg = (aimdk_msgs__msg__DiagnosticInfo *)allocator.allocate(sizeof(aimdk_msgs__msg__DiagnosticInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__DiagnosticInfo));
  bool success = aimdk_msgs__msg__DiagnosticInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__DiagnosticInfo__destroy(aimdk_msgs__msg__DiagnosticInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__DiagnosticInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__DiagnosticInfo__Sequence__init(aimdk_msgs__msg__DiagnosticInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__DiagnosticInfo * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__DiagnosticInfo *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__DiagnosticInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__DiagnosticInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__DiagnosticInfo__fini(&data[i - 1]);
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
aimdk_msgs__msg__DiagnosticInfo__Sequence__fini(aimdk_msgs__msg__DiagnosticInfo__Sequence * array)
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
      aimdk_msgs__msg__DiagnosticInfo__fini(&array->data[i]);
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

aimdk_msgs__msg__DiagnosticInfo__Sequence *
aimdk_msgs__msg__DiagnosticInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__DiagnosticInfo__Sequence * array = (aimdk_msgs__msg__DiagnosticInfo__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__DiagnosticInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__DiagnosticInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__DiagnosticInfo__Sequence__destroy(aimdk_msgs__msg__DiagnosticInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__DiagnosticInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__DiagnosticInfo__Sequence__are_equal(const aimdk_msgs__msg__DiagnosticInfo__Sequence * lhs, const aimdk_msgs__msg__DiagnosticInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__DiagnosticInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__DiagnosticInfo__Sequence__copy(
  const aimdk_msgs__msg__DiagnosticInfo__Sequence * input,
  aimdk_msgs__msg__DiagnosticInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__DiagnosticInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__DiagnosticInfo * data =
      (aimdk_msgs__msg__DiagnosticInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__DiagnosticInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__DiagnosticInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__DiagnosticInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
