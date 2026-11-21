// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:srv/SetHalCameraStream.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/srv/detail/set_hal_camera_stream__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "aimdk_msgs/msg/detail/common_request__functions.h"
// Member `trace_id`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__srv__SetHalCameraStream_Request__init(aimdk_msgs__srv__SetHalCameraStream_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!aimdk_msgs__msg__CommonRequest__init(&msg->request)) {
    aimdk_msgs__srv__SetHalCameraStream_Request__fini(msg);
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__init(&msg->trace_id)) {
    aimdk_msgs__srv__SetHalCameraStream_Request__fini(msg);
    return false;
  }
  // req_type
  // power_ctrl_mask
  // stream_ctrl_mask
  return true;
}

void
aimdk_msgs__srv__SetHalCameraStream_Request__fini(aimdk_msgs__srv__SetHalCameraStream_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  aimdk_msgs__msg__CommonRequest__fini(&msg->request);
  // trace_id
  rosidl_runtime_c__String__fini(&msg->trace_id);
  // req_type
  // power_ctrl_mask
  // stream_ctrl_mask
}

bool
aimdk_msgs__srv__SetHalCameraStream_Request__are_equal(const aimdk_msgs__srv__SetHalCameraStream_Request * lhs, const aimdk_msgs__srv__SetHalCameraStream_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!aimdk_msgs__msg__CommonRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trace_id), &(rhs->trace_id)))
  {
    return false;
  }
  // req_type
  if (lhs->req_type != rhs->req_type) {
    return false;
  }
  // power_ctrl_mask
  if (lhs->power_ctrl_mask != rhs->power_ctrl_mask) {
    return false;
  }
  // stream_ctrl_mask
  if (lhs->stream_ctrl_mask != rhs->stream_ctrl_mask) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__srv__SetHalCameraStream_Request__copy(
  const aimdk_msgs__srv__SetHalCameraStream_Request * input,
  aimdk_msgs__srv__SetHalCameraStream_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!aimdk_msgs__msg__CommonRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__copy(
      &(input->trace_id), &(output->trace_id)))
  {
    return false;
  }
  // req_type
  output->req_type = input->req_type;
  // power_ctrl_mask
  output->power_ctrl_mask = input->power_ctrl_mask;
  // stream_ctrl_mask
  output->stream_ctrl_mask = input->stream_ctrl_mask;
  return true;
}

aimdk_msgs__srv__SetHalCameraStream_Request *
aimdk_msgs__srv__SetHalCameraStream_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Request * msg = (aimdk_msgs__srv__SetHalCameraStream_Request *)allocator.allocate(sizeof(aimdk_msgs__srv__SetHalCameraStream_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__srv__SetHalCameraStream_Request));
  bool success = aimdk_msgs__srv__SetHalCameraStream_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__srv__SetHalCameraStream_Request__destroy(aimdk_msgs__srv__SetHalCameraStream_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__srv__SetHalCameraStream_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__init(aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Request * data = NULL;

  if (size) {
    data = (aimdk_msgs__srv__SetHalCameraStream_Request *)allocator.zero_allocate(size, sizeof(aimdk_msgs__srv__SetHalCameraStream_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__srv__SetHalCameraStream_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__srv__SetHalCameraStream_Request__fini(&data[i - 1]);
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
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__fini(aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * array)
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
      aimdk_msgs__srv__SetHalCameraStream_Request__fini(&array->data[i]);
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

aimdk_msgs__srv__SetHalCameraStream_Request__Sequence *
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * array = (aimdk_msgs__srv__SetHalCameraStream_Request__Sequence *)allocator.allocate(sizeof(aimdk_msgs__srv__SetHalCameraStream_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__destroy(aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__are_equal(const aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * lhs, const aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__srv__SetHalCameraStream_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__copy(
  const aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * input,
  aimdk_msgs__srv__SetHalCameraStream_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__srv__SetHalCameraStream_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__srv__SetHalCameraStream_Request * data =
      (aimdk_msgs__srv__SetHalCameraStream_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__srv__SetHalCameraStream_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__srv__SetHalCameraStream_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__srv__SetHalCameraStream_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "aimdk_msgs/msg/detail/common_response__functions.h"
// Member `trace_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__srv__SetHalCameraStream_Response__init(aimdk_msgs__srv__SetHalCameraStream_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonResponse__init(&msg->response)) {
    aimdk_msgs__srv__SetHalCameraStream_Response__fini(msg);
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__init(&msg->trace_id)) {
    aimdk_msgs__srv__SetHalCameraStream_Response__fini(msg);
    return false;
  }
  // req_result
  // target_state_mask
  // switch_state
  return true;
}

void
aimdk_msgs__srv__SetHalCameraStream_Response__fini(aimdk_msgs__srv__SetHalCameraStream_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  aimdk_msgs__msg__CommonResponse__fini(&msg->response);
  // trace_id
  rosidl_runtime_c__String__fini(&msg->trace_id);
  // req_result
  // target_state_mask
  // switch_state
}

bool
aimdk_msgs__srv__SetHalCameraStream_Response__are_equal(const aimdk_msgs__srv__SetHalCameraStream_Response * lhs, const aimdk_msgs__srv__SetHalCameraStream_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonResponse__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trace_id), &(rhs->trace_id)))
  {
    return false;
  }
  // req_result
  if (lhs->req_result != rhs->req_result) {
    return false;
  }
  // target_state_mask
  if (lhs->target_state_mask != rhs->target_state_mask) {
    return false;
  }
  // switch_state
  if (lhs->switch_state != rhs->switch_state) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__srv__SetHalCameraStream_Response__copy(
  const aimdk_msgs__srv__SetHalCameraStream_Response * input,
  aimdk_msgs__srv__SetHalCameraStream_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!aimdk_msgs__msg__CommonResponse__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  // trace_id
  if (!rosidl_runtime_c__String__copy(
      &(input->trace_id), &(output->trace_id)))
  {
    return false;
  }
  // req_result
  output->req_result = input->req_result;
  // target_state_mask
  output->target_state_mask = input->target_state_mask;
  // switch_state
  output->switch_state = input->switch_state;
  return true;
}

aimdk_msgs__srv__SetHalCameraStream_Response *
aimdk_msgs__srv__SetHalCameraStream_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Response * msg = (aimdk_msgs__srv__SetHalCameraStream_Response *)allocator.allocate(sizeof(aimdk_msgs__srv__SetHalCameraStream_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__srv__SetHalCameraStream_Response));
  bool success = aimdk_msgs__srv__SetHalCameraStream_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__srv__SetHalCameraStream_Response__destroy(aimdk_msgs__srv__SetHalCameraStream_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__srv__SetHalCameraStream_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__init(aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Response * data = NULL;

  if (size) {
    data = (aimdk_msgs__srv__SetHalCameraStream_Response *)allocator.zero_allocate(size, sizeof(aimdk_msgs__srv__SetHalCameraStream_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__srv__SetHalCameraStream_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__srv__SetHalCameraStream_Response__fini(&data[i - 1]);
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
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__fini(aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * array)
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
      aimdk_msgs__srv__SetHalCameraStream_Response__fini(&array->data[i]);
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

aimdk_msgs__srv__SetHalCameraStream_Response__Sequence *
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * array = (aimdk_msgs__srv__SetHalCameraStream_Response__Sequence *)allocator.allocate(sizeof(aimdk_msgs__srv__SetHalCameraStream_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__destroy(aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__are_equal(const aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * lhs, const aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__srv__SetHalCameraStream_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__copy(
  const aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * input,
  aimdk_msgs__srv__SetHalCameraStream_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__srv__SetHalCameraStream_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__srv__SetHalCameraStream_Response * data =
      (aimdk_msgs__srv__SetHalCameraStream_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__srv__SetHalCameraStream_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__srv__SetHalCameraStream_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__srv__SetHalCameraStream_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
