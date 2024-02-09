// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__functions.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__AutopilotPIDComponents__init(message_memory);
}

void AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__AutopilotPIDComponents__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_member_array[9] = {
  {
    "roll_kp_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, roll_kp_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_ki_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, roll_ki_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_kd_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, roll_kd_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_kp_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, pitch_kp_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_ki_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, pitch_ki_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_kd_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, pitch_kd_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_kp_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, yaw_kp_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_ki_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, yaw_ki_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_kd_component",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotPIDComponents, yaw_kd_component),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "AutopilotPIDComponents",  // message name
  9,  // number of fields
  sizeof(aqua2_interfaces__msg__AutopilotPIDComponents),
  AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_member_array,  // message members
  AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_init_function,  // function to initialize message memory (memory has to be allocated)
  AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_type_support_handle = {
  0,
  &AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, AutopilotPIDComponents)() {
  if (!AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_type_support_handle.typesupport_identifier) {
    AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AutopilotPIDComponents__rosidl_typesupport_introspection_c__AutopilotPIDComponents_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
