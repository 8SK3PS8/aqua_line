// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
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
#include "aqua2_interfaces/msg/detail/autopilot_targets__struct.h"
#include "aqua2_interfaces/msg/detail/autopilot_targets__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aqua2_interfaces__msg__autopilot_targets__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("aqua2_interfaces.msg._autopilot_targets.AutopilotTargets", full_classname_dest, 56) == 0);
  }
  aqua2_interfaces__msg__AutopilotTargets * ros_message = _ros_message;
  {  // depth_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_target_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_target_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_target_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_target_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_target_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_target_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_target_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_target_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_target_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aqua2_interfaces__msg__autopilot_targets__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutopilotTargets */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aqua2_interfaces.msg._autopilot_targets");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutopilotTargets");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aqua2_interfaces__msg__AutopilotTargets * ros_message = (aqua2_interfaces__msg__AutopilotTargets *)raw_ros_message;
  {  // depth_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_target_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_target_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_target_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_target_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_target_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_target_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_target_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_target_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_target_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
