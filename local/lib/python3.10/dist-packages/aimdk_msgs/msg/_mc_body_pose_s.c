// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/McBodyPose.idl
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
#include "aimdk_msgs/msg/detail/mc_body_pose__struct.h"
#include "aimdk_msgs/msg/detail/mc_body_pose__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool aimdk_msgs__msg__message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__message_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mc_body_pose__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("aimdk_msgs.msg._mc_body_pose.McBodyPose", full_classname_dest, 39) == 0);
  }
  aimdk_msgs__msg__McBodyPose * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__message_header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // source
    PyObject * field = PyObject_GetAttrString(_pymsg, "source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // stand_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stand_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bend_forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "bend_forward");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bend_forward = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bend_sideways
    PyObject * field = PyObject_GetAttrString(_pymsg, "bend_sideways");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bend_sideways = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // twist_waist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist_waist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->twist_waist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // raise_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "raise_head");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->raise_head = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_head");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_head = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mc_body_pose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of McBodyPose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mc_body_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "McBodyPose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__McBodyPose * ros_message = (aimdk_msgs__msg__McBodyPose *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = aimdk_msgs__msg__message_header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->source.data,
      strlen(ros_message->source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stand_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bend_forward
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bend_forward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bend_forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bend_sideways
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bend_sideways);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bend_sideways", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twist_waist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->twist_waist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist_waist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raise_head
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->raise_head);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raise_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_head
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_head);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
