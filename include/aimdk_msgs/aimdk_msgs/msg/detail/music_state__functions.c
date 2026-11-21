// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/music_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `song_name`
// Member `artist`
// Member `qualities`
// Member `song_list_name`
// Member `search_resp_tts_text`
// Member `search_resp_code`
// Member `url_resp_warning`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__MusicState__init(aimdk_msgs__msg__MusicState * msg)
{
  if (!msg) {
    return false;
  }
  // control_command_id
  // playback_state
  // song_name
  if (!rosidl_runtime_c__String__init(&msg->song_name)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__init(&msg->artist, 0)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // total_duration
  // current_time
  // vip_song
  // trail
  // playable_code
  // qualities
  if (!rosidl_runtime_c__String__Sequence__init(&msg->qualities, 0)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // quality_index
  // search_command_id
  // song_list_name
  if (!rosidl_runtime_c__String__init(&msg->song_list_name)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // song_list_size
  // playback_index
  // sp
  // search_resp_status
  // search_resp_tts_text
  if (!rosidl_runtime_c__String__init(&msg->search_resp_tts_text)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // search_resp_code
  if (!rosidl_runtime_c__String__init(&msg->search_resp_code)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  // url_resp_warning
  if (!rosidl_runtime_c__String__init(&msg->url_resp_warning)) {
    aimdk_msgs__msg__MusicState__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__MusicState__fini(aimdk_msgs__msg__MusicState * msg)
{
  if (!msg) {
    return;
  }
  // control_command_id
  // playback_state
  // song_name
  rosidl_runtime_c__String__fini(&msg->song_name);
  // artist
  rosidl_runtime_c__String__Sequence__fini(&msg->artist);
  // total_duration
  // current_time
  // vip_song
  // trail
  // playable_code
  // qualities
  rosidl_runtime_c__String__Sequence__fini(&msg->qualities);
  // quality_index
  // search_command_id
  // song_list_name
  rosidl_runtime_c__String__fini(&msg->song_list_name);
  // song_list_size
  // playback_index
  // sp
  // search_resp_status
  // search_resp_tts_text
  rosidl_runtime_c__String__fini(&msg->search_resp_tts_text);
  // search_resp_code
  rosidl_runtime_c__String__fini(&msg->search_resp_code);
  // url_resp_warning
  rosidl_runtime_c__String__fini(&msg->url_resp_warning);
}

bool
aimdk_msgs__msg__MusicState__are_equal(const aimdk_msgs__msg__MusicState * lhs, const aimdk_msgs__msg__MusicState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_command_id
  if (lhs->control_command_id != rhs->control_command_id) {
    return false;
  }
  // playback_state
  if (lhs->playback_state != rhs->playback_state) {
    return false;
  }
  // song_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->song_name), &(rhs->song_name)))
  {
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->artist), &(rhs->artist)))
  {
    return false;
  }
  // total_duration
  if (lhs->total_duration != rhs->total_duration) {
    return false;
  }
  // current_time
  if (lhs->current_time != rhs->current_time) {
    return false;
  }
  // vip_song
  if (lhs->vip_song != rhs->vip_song) {
    return false;
  }
  // trail
  if (lhs->trail != rhs->trail) {
    return false;
  }
  // playable_code
  if (lhs->playable_code != rhs->playable_code) {
    return false;
  }
  // qualities
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->qualities), &(rhs->qualities)))
  {
    return false;
  }
  // quality_index
  if (lhs->quality_index != rhs->quality_index) {
    return false;
  }
  // search_command_id
  if (lhs->search_command_id != rhs->search_command_id) {
    return false;
  }
  // song_list_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->song_list_name), &(rhs->song_list_name)))
  {
    return false;
  }
  // song_list_size
  if (lhs->song_list_size != rhs->song_list_size) {
    return false;
  }
  // playback_index
  if (lhs->playback_index != rhs->playback_index) {
    return false;
  }
  // sp
  if (lhs->sp != rhs->sp) {
    return false;
  }
  // search_resp_status
  if (lhs->search_resp_status != rhs->search_resp_status) {
    return false;
  }
  // search_resp_tts_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->search_resp_tts_text), &(rhs->search_resp_tts_text)))
  {
    return false;
  }
  // search_resp_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->search_resp_code), &(rhs->search_resp_code)))
  {
    return false;
  }
  // url_resp_warning
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->url_resp_warning), &(rhs->url_resp_warning)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__MusicState__copy(
  const aimdk_msgs__msg__MusicState * input,
  aimdk_msgs__msg__MusicState * output)
{
  if (!input || !output) {
    return false;
  }
  // control_command_id
  output->control_command_id = input->control_command_id;
  // playback_state
  output->playback_state = input->playback_state;
  // song_name
  if (!rosidl_runtime_c__String__copy(
      &(input->song_name), &(output->song_name)))
  {
    return false;
  }
  // artist
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->artist), &(output->artist)))
  {
    return false;
  }
  // total_duration
  output->total_duration = input->total_duration;
  // current_time
  output->current_time = input->current_time;
  // vip_song
  output->vip_song = input->vip_song;
  // trail
  output->trail = input->trail;
  // playable_code
  output->playable_code = input->playable_code;
  // qualities
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->qualities), &(output->qualities)))
  {
    return false;
  }
  // quality_index
  output->quality_index = input->quality_index;
  // search_command_id
  output->search_command_id = input->search_command_id;
  // song_list_name
  if (!rosidl_runtime_c__String__copy(
      &(input->song_list_name), &(output->song_list_name)))
  {
    return false;
  }
  // song_list_size
  output->song_list_size = input->song_list_size;
  // playback_index
  output->playback_index = input->playback_index;
  // sp
  output->sp = input->sp;
  // search_resp_status
  output->search_resp_status = input->search_resp_status;
  // search_resp_tts_text
  if (!rosidl_runtime_c__String__copy(
      &(input->search_resp_tts_text), &(output->search_resp_tts_text)))
  {
    return false;
  }
  // search_resp_code
  if (!rosidl_runtime_c__String__copy(
      &(input->search_resp_code), &(output->search_resp_code)))
  {
    return false;
  }
  // url_resp_warning
  if (!rosidl_runtime_c__String__copy(
      &(input->url_resp_warning), &(output->url_resp_warning)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__MusicState *
aimdk_msgs__msg__MusicState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicState * msg = (aimdk_msgs__msg__MusicState *)allocator.allocate(sizeof(aimdk_msgs__msg__MusicState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__MusicState));
  bool success = aimdk_msgs__msg__MusicState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__MusicState__destroy(aimdk_msgs__msg__MusicState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__MusicState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__MusicState__Sequence__init(aimdk_msgs__msg__MusicState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__MusicState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__MusicState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__MusicState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__MusicState__fini(&data[i - 1]);
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
aimdk_msgs__msg__MusicState__Sequence__fini(aimdk_msgs__msg__MusicState__Sequence * array)
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
      aimdk_msgs__msg__MusicState__fini(&array->data[i]);
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

aimdk_msgs__msg__MusicState__Sequence *
aimdk_msgs__msg__MusicState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__MusicState__Sequence * array = (aimdk_msgs__msg__MusicState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__MusicState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__MusicState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__MusicState__Sequence__destroy(aimdk_msgs__msg__MusicState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__MusicState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__MusicState__Sequence__are_equal(const aimdk_msgs__msg__MusicState__Sequence * lhs, const aimdk_msgs__msg__MusicState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__MusicState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__MusicState__Sequence__copy(
  const aimdk_msgs__msg__MusicState__Sequence * input,
  aimdk_msgs__msg__MusicState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__MusicState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__MusicState * data =
      (aimdk_msgs__msg__MusicState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__MusicState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__MusicState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__MusicState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
