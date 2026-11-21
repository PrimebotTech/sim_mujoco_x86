// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/alert_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `code`
// Member `text`
// Member `light_msg`
// Member `app_show_id`
// Member `breakdown_msg`
// Member `capability_limit`
// Member `diag_name`
// Member `disabled_capabilities`
// Member `nlg_scene_id`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__AlertCode__init(aimdk_msgs__msg__AlertCode * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  // timestamp
  // appeared_timestamp
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // alert_event_type
  // level
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // is_audio_cycle
  // light_msg
  if (!rosidl_runtime_c__String__init(&msg->light_msg)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // emotion_id
  // post_process
  // app_show_id
  if (!rosidl_runtime_c__String__init(&msg->app_show_id)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // breakdown_msg
  if (!rosidl_runtime_c__String__init(&msg->breakdown_msg)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // capability_limit
  if (!rosidl_runtime_c__String__init(&msg->capability_limit)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // diag_name
  if (!rosidl_runtime_c__String__init(&msg->diag_name)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // audio_strategy
  // disabled_capabilities
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disabled_capabilities, 0)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  // nlg_scene_id
  if (!rosidl_runtime_c__String__init(&msg->nlg_scene_id)) {
    aimdk_msgs__msg__AlertCode__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__AlertCode__fini(aimdk_msgs__msg__AlertCode * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  // timestamp
  // appeared_timestamp
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // alert_event_type
  // level
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // is_audio_cycle
  // light_msg
  rosidl_runtime_c__String__fini(&msg->light_msg);
  // emotion_id
  // post_process
  // app_show_id
  rosidl_runtime_c__String__fini(&msg->app_show_id);
  // breakdown_msg
  rosidl_runtime_c__String__fini(&msg->breakdown_msg);
  // capability_limit
  rosidl_runtime_c__String__fini(&msg->capability_limit);
  // diag_name
  rosidl_runtime_c__String__fini(&msg->diag_name);
  // audio_strategy
  // disabled_capabilities
  rosidl_runtime_c__String__Sequence__fini(&msg->disabled_capabilities);
  // nlg_scene_id
  rosidl_runtime_c__String__fini(&msg->nlg_scene_id);
}

bool
aimdk_msgs__msg__AlertCode__are_equal(const aimdk_msgs__msg__AlertCode * lhs, const aimdk_msgs__msg__AlertCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (lhs->uuid != rhs->uuid) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // appeared_timestamp
  if (lhs->appeared_timestamp != rhs->appeared_timestamp) {
    return false;
  }
  // code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->code), &(rhs->code)))
  {
    return false;
  }
  // alert_event_type
  if (lhs->alert_event_type != rhs->alert_event_type) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // is_audio_cycle
  if (lhs->is_audio_cycle != rhs->is_audio_cycle) {
    return false;
  }
  // light_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->light_msg), &(rhs->light_msg)))
  {
    return false;
  }
  // emotion_id
  if (lhs->emotion_id != rhs->emotion_id) {
    return false;
  }
  // post_process
  if (lhs->post_process != rhs->post_process) {
    return false;
  }
  // app_show_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->app_show_id), &(rhs->app_show_id)))
  {
    return false;
  }
  // breakdown_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->breakdown_msg), &(rhs->breakdown_msg)))
  {
    return false;
  }
  // capability_limit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->capability_limit), &(rhs->capability_limit)))
  {
    return false;
  }
  // diag_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->diag_name), &(rhs->diag_name)))
  {
    return false;
  }
  // audio_strategy
  if (lhs->audio_strategy != rhs->audio_strategy) {
    return false;
  }
  // disabled_capabilities
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disabled_capabilities), &(rhs->disabled_capabilities)))
  {
    return false;
  }
  // nlg_scene_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nlg_scene_id), &(rhs->nlg_scene_id)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__AlertCode__copy(
  const aimdk_msgs__msg__AlertCode * input,
  aimdk_msgs__msg__AlertCode * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  output->uuid = input->uuid;
  // timestamp
  output->timestamp = input->timestamp;
  // appeared_timestamp
  output->appeared_timestamp = input->appeared_timestamp;
  // code
  if (!rosidl_runtime_c__String__copy(
      &(input->code), &(output->code)))
  {
    return false;
  }
  // alert_event_type
  output->alert_event_type = input->alert_event_type;
  // level
  output->level = input->level;
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // is_audio_cycle
  output->is_audio_cycle = input->is_audio_cycle;
  // light_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->light_msg), &(output->light_msg)))
  {
    return false;
  }
  // emotion_id
  output->emotion_id = input->emotion_id;
  // post_process
  output->post_process = input->post_process;
  // app_show_id
  if (!rosidl_runtime_c__String__copy(
      &(input->app_show_id), &(output->app_show_id)))
  {
    return false;
  }
  // breakdown_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->breakdown_msg), &(output->breakdown_msg)))
  {
    return false;
  }
  // capability_limit
  if (!rosidl_runtime_c__String__copy(
      &(input->capability_limit), &(output->capability_limit)))
  {
    return false;
  }
  // diag_name
  if (!rosidl_runtime_c__String__copy(
      &(input->diag_name), &(output->diag_name)))
  {
    return false;
  }
  // audio_strategy
  output->audio_strategy = input->audio_strategy;
  // disabled_capabilities
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disabled_capabilities), &(output->disabled_capabilities)))
  {
    return false;
  }
  // nlg_scene_id
  if (!rosidl_runtime_c__String__copy(
      &(input->nlg_scene_id), &(output->nlg_scene_id)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__AlertCode *
aimdk_msgs__msg__AlertCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AlertCode * msg = (aimdk_msgs__msg__AlertCode *)allocator.allocate(sizeof(aimdk_msgs__msg__AlertCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__AlertCode));
  bool success = aimdk_msgs__msg__AlertCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__AlertCode__destroy(aimdk_msgs__msg__AlertCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__AlertCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__AlertCode__Sequence__init(aimdk_msgs__msg__AlertCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AlertCode * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__AlertCode *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__AlertCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__AlertCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__AlertCode__fini(&data[i - 1]);
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
aimdk_msgs__msg__AlertCode__Sequence__fini(aimdk_msgs__msg__AlertCode__Sequence * array)
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
      aimdk_msgs__msg__AlertCode__fini(&array->data[i]);
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

aimdk_msgs__msg__AlertCode__Sequence *
aimdk_msgs__msg__AlertCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__AlertCode__Sequence * array = (aimdk_msgs__msg__AlertCode__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__AlertCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__AlertCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__AlertCode__Sequence__destroy(aimdk_msgs__msg__AlertCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__AlertCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__AlertCode__Sequence__are_equal(const aimdk_msgs__msg__AlertCode__Sequence * lhs, const aimdk_msgs__msg__AlertCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__AlertCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__AlertCode__Sequence__copy(
  const aimdk_msgs__msg__AlertCode__Sequence * input,
  aimdk_msgs__msg__AlertCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__AlertCode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__AlertCode * data =
      (aimdk_msgs__msg__AlertCode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__AlertCode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__AlertCode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__AlertCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
