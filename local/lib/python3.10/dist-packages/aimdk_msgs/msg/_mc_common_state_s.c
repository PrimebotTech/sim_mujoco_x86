// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/McCommonState.idl
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
#include "aimdk_msgs/msg/detail/mc_common_state__struct.h"
#include "aimdk_msgs/msg/detail/mc_common_state__functions.h"

bool aimdk_msgs__msg__message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__message_header__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_input_source__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_input_source__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_action_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_action_info__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_runtime_model__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_runtime_model__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_motion_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_motion_status__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_fsm_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_fsm_state__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_form_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_form_state__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_posture__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_posture__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_lift_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_lift_state__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_task_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_task_info__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_hand_held_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_hand_held_state__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_posture_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_posture_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mc_common_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("aimdk_msgs.msg._mc_common_state.McCommonState", full_classname_dest, 45) == 0);
  }
  aimdk_msgs__msg__McCommonState * ros_message = _ros_message;
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
  {  // input_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_source");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_input_source__convert_from_py(field, &ros_message->input_source)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // action_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_info");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_action_info__convert_from_py(field, &ros_message->action_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // runtime_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "runtime_model");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_runtime_model__convert_from_py(field, &ros_message->runtime_model)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motion_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_status");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_motion_status__convert_from_py(field, &ros_message->motion_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fsm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "fsm_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_fsm_state__convert_from_py(field, &ros_message->fsm_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // form_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "form_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_form_state__convert_from_py(field, &ros_message->form_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // posture
    PyObject * field = PyObject_GetAttrString(_pymsg, "posture");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_posture__convert_from_py(field, &ros_message->posture)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_moving = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_fallen
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_fallen");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_fallen = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lift_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_lift_state__convert_from_py(field, &ros_message->lift_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // task_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_info");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_task_info__convert_from_py(field, &ros_message->task_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // held_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "held_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_hand_held_state__convert_from_py(field, &ros_message->held_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // posture_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "posture_state");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_posture_state__convert_from_py(field, &ros_message->posture_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mc_common_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of McCommonState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mc_common_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "McCommonState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__McCommonState * ros_message = (aimdk_msgs__msg__McCommonState *)raw_ros_message;
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
  {  // input_source
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_input_source__convert_to_py(&ros_message->input_source);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action_info
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_action_info__convert_to_py(&ros_message->action_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // runtime_model
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_runtime_model__convert_to_py(&ros_message->runtime_model);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "runtime_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_status
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_motion_status__convert_to_py(&ros_message->motion_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fsm_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_fsm_state__convert_to_py(&ros_message->fsm_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fsm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // form_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_form_state__convert_to_py(&ros_message->form_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "form_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posture
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_posture__convert_to_py(&ros_message->posture);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "posture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_fallen
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_fallen ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_fallen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_lift_state__convert_to_py(&ros_message->lift_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_info
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_task_info__convert_to_py(&ros_message->task_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // held_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_hand_held_state__convert_to_py(&ros_message->held_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "held_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posture_state
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_posture_state__convert_to_py(&ros_message->posture_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "posture_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
