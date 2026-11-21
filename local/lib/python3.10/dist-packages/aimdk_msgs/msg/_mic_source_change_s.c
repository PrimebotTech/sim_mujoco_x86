// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/MicSourceChange.idl
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
#include "aimdk_msgs/msg/detail/mic_source_change__struct.h"
#include "aimdk_msgs/msg/detail/mic_source_change__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mic_source_change__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("aimdk_msgs.msg._mic_source_change.MicSourceChange", full_classname_dest, 49) == 0);
  }
  aimdk_msgs__msg__MicSourceChange * ros_message = _ros_message;
  {  // mic_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "mic_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mic_source = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pid
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vid
    PyObject * field = PyObject_GetAttrString(_pymsg, "vid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mic_source_change__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MicSourceChange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mic_source_change");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MicSourceChange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__MicSourceChange * ros_message = (aimdk_msgs__msg__MicSourceChange *)raw_ros_message;
  {  // mic_source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mic_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mic_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
