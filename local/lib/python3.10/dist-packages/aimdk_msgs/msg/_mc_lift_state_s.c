// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/McLiftState.idl
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
#include "aimdk_msgs/msg/detail/mc_lift_state__struct.h"
#include "aimdk_msgs/msg/detail/mc_lift_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mc_lift_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("aimdk_msgs.msg._mc_lift_state.McLiftState", full_classname_dest, 41) == 0);
  }
  aimdk_msgs__msg__McLiftState * ros_message = _ros_message;
  {  // is_lifted
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_lifted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_lifted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->probability = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->threshold = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mc_lift_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of McLiftState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mc_lift_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "McLiftState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__McLiftState * ros_message = (aimdk_msgs__msg__McLiftState *)raw_ros_message;
  {  // is_lifted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_lifted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_lifted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
