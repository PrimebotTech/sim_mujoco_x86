// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/McMotionStatus.idl
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
#include "aimdk_msgs/msg/detail/mc_motion_status__struct.h"
#include "aimdk_msgs/msg/detail/mc_motion_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool aimdk_msgs__msg__mc_player_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_player_state__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_control_area__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_control_area__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_motion_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_motion_type__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_motion_intr_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_motion_intr_info__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_mimic_gravity_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_mimic_gravity_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mc_motion_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("aimdk_msgs.msg._mc_motion_status.McMotionStatus", full_classname_dest, 47) == 0);
  }
  aimdk_msgs__msg__McMotionStatus * ros_message = _ros_message;
  {  // player_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "player_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_player_state__convert_from_py(field, &ros_message->player_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // control_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_area");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_control_area__convert_from_py(field, &ros_message->control_area)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_motion_type__convert_from_py(field, &ros_message->type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // intr_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "intr_info");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_motion_intr_info__convert_from_py(field, &ros_message->intr_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // current_steps
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_steps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_steps = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gravity_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "gravity_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_mimic_gravity_state__convert_from_py(field, &ros_message->gravity_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mc_motion_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of McMotionStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mc_motion_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "McMotionStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__McMotionStatus * ros_message = (aimdk_msgs__msg__McMotionStatus *)raw_ros_message;
  {  // player_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_player_state__convert_to_py(&ros_message->player_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "player_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_area
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_control_area__convert_to_py(&ros_message->control_area);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motion.data,
      strlen(ros_message->motion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_motion_type__convert_to_py(&ros_message->type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intr_info
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_motion_intr_info__convert_to_py(&ros_message->intr_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "intr_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_steps
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_steps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_steps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gravity_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_mimic_gravity_state__convert_to_py(&ros_message->gravity_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gravity_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
