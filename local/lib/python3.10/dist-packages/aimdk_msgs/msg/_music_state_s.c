// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/MusicState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/detail/music_state__struct.h"
#include "aimdk_msgs/msg/detail/music_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__music_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("aimdk_msgs.msg._music_state.MusicState", full_classname_dest, 38) == 0);
  }
  aimdk_msgs__msg__MusicState * ros_message = _ros_message;
  {  // control_command_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_command_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_command_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // playback_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "playback_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->playback_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // song_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "song_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->song_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // artist
    PyObject * field = PyObject_GetAttrString(_pymsg, "artist");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'artist'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->artist), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->artist.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // total_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_duration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vip_song
    PyObject * field = PyObject_GetAttrString(_pymsg, "vip_song");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vip_song = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trail
    PyObject * field = PyObject_GetAttrString(_pymsg, "trail");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trail = (Py_True == field);
    Py_DECREF(field);
  }
  {  // playable_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "playable_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->playable_code = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // qualities
    PyObject * field = PyObject_GetAttrString(_pymsg, "qualities");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'qualities'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->qualities), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->qualities.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // quality_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // search_command_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_command_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->search_command_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // song_list_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "song_list_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->song_list_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // song_list_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "song_list_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->song_list_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // playback_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "playback_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->playback_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // search_resp_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_resp_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->search_resp_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // search_resp_tts_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_resp_tts_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->search_resp_tts_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // search_resp_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_resp_code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->search_resp_code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // url_resp_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "url_resp_warning");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->url_resp_warning, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__music_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MusicState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._music_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MusicState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__MusicState * ros_message = (aimdk_msgs__msg__MusicState *)raw_ros_message;
  {  // control_command_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->control_command_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_command_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // playback_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->playback_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "playback_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // song_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->song_name.data,
      strlen(ros_message->song_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "song_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // artist
    PyObject * field = NULL;
    size_t size = ros_message->artist.size;
    rosidl_runtime_c__String * src = ros_message->artist.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "artist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vip_song
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vip_song ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vip_song", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trail
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trail ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // playable_code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->playable_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "playable_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qualities
    PyObject * field = NULL;
    size_t size = ros_message->qualities.size;
    rosidl_runtime_c__String * src = ros_message->qualities.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "qualities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->quality_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // search_command_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->search_command_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_command_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // song_list_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->song_list_name.data,
      strlen(ros_message->song_list_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "song_list_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // song_list_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->song_list_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "song_list_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // playback_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->playback_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "playback_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // search_resp_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->search_resp_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_resp_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // search_resp_tts_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->search_resp_tts_text.data,
      strlen(ros_message->search_resp_tts_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_resp_tts_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // search_resp_code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->search_resp_code.data,
      strlen(ros_message->search_resp_code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_resp_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // url_resp_warning
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->url_resp_warning.data,
      strlen(ros_message->url_resp_warning.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "url_resp_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
