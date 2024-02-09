// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
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
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aqua2_interfaces__msg__autopilot_pid_components__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("aqua2_interfaces.msg._autopilot_pid_components.AutopilotPIDComponents", full_classname_dest, 69) == 0);
  }
  aqua2_interfaces__msg__AutopilotPIDComponents * ros_message = _ros_message;
  {  // roll_kp_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_kp_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_kp_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_ki_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_ki_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_ki_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_kd_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_kd_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_kd_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_kp_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_kp_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_kp_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_ki_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_ki_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_ki_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_kd_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_kd_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_kd_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_kp_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_kp_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_kp_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_ki_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_ki_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_ki_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_kd_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_kd_component");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_kd_component = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aqua2_interfaces__msg__autopilot_pid_components__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutopilotPIDComponents */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aqua2_interfaces.msg._autopilot_pid_components");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutopilotPIDComponents");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aqua2_interfaces__msg__AutopilotPIDComponents * ros_message = (aqua2_interfaces__msg__AutopilotPIDComponents *)raw_ros_message;
  {  // roll_kp_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_kp_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_kp_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_ki_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_ki_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_ki_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_kd_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_kd_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_kd_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_kp_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_kp_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_kp_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_ki_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_ki_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_ki_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_kd_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_kd_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_kd_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_kp_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_kp_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_kp_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_ki_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_ki_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_ki_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_kd_component
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_kd_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_kd_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
