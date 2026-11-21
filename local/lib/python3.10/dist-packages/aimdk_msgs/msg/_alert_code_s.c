// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/AlertCode.idl
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
#include "aimdk_msgs/msg/detail/alert_code__struct.h"
#include "aimdk_msgs/msg/detail/alert_code__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__alert_code__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("aimdk_msgs.msg._alert_code.AlertCode", full_classname_dest, 36) == 0);
  }
  aimdk_msgs__msg__AlertCode * ros_message = _ros_message;
  {  // uuid
    PyObject * field = PyObject_GetAttrString(_pymsg, "uuid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uuid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // appeared_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "appeared_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->appeared_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // code
    PyObject * field = PyObject_GetAttrString(_pymsg, "code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // alert_event_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert_event_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alert_event_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // level
    PyObject * field = PyObject_GetAttrString(_pymsg, "level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // text
    PyObject * field = PyObject_GetAttrString(_pymsg, "text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_audio_cycle
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_audio_cycle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_audio_cycle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->light_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // emotion_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "emotion_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emotion_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // post_process
    PyObject * field = PyObject_GetAttrString(_pymsg, "post_process");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->post_process = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // app_show_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "app_show_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->app_show_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // breakdown_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "breakdown_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->breakdown_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // capability_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "capability_limit");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->capability_limit, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // diag_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->diag_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // audio_strategy
    PyObject * field = PyObject_GetAttrString(_pymsg, "audio_strategy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->audio_strategy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disabled_capabilities
    PyObject * field = PyObject_GetAttrString(_pymsg, "disabled_capabilities");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'disabled_capabilities'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->disabled_capabilities), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->disabled_capabilities.data;
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
  {  // nlg_scene_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "nlg_scene_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->nlg_scene_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__alert_code__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AlertCode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._alert_code");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AlertCode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__AlertCode * ros_message = (aimdk_msgs__msg__AlertCode *)raw_ros_message;
  {  // uuid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->uuid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uuid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // appeared_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->appeared_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "appeared_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->code.data,
      strlen(ros_message->code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alert_event_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alert_event_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert_event_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->text.data,
      strlen(ros_message->text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_audio_cycle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_audio_cycle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_audio_cycle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->light_msg.data,
      strlen(ros_message->light_msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emotion_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emotion_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emotion_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // post_process
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->post_process);
    {
      int rc = PyObject_SetAttrString(_pymessage, "post_process", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // app_show_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->app_show_id.data,
      strlen(ros_message->app_show_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "app_show_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // breakdown_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->breakdown_msg.data,
      strlen(ros_message->breakdown_msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "breakdown_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capability_limit
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->capability_limit.data,
      strlen(ros_message->capability_limit.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "capability_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->diag_name.data,
      strlen(ros_message->diag_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // audio_strategy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->audio_strategy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "audio_strategy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disabled_capabilities
    PyObject * field = NULL;
    size_t size = ros_message->disabled_capabilities.size;
    rosidl_runtime_c__String * src = ros_message->disabled_capabilities.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "disabled_capabilities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nlg_scene_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->nlg_scene_id.data,
      strlen(ros_message->nlg_scene_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nlg_scene_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
