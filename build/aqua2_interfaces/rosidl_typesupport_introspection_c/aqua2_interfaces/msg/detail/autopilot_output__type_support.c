// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/AutopilotOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/autopilot_output__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/autopilot_output__functions.h"
#include "aqua2_interfaces/msg/detail/autopilot_output__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__AutopilotOutput__init(message_memory);
}

void AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__AutopilotOutput__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_member_array[5] = {
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotOutput, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heave",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotOutput, heave),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotOutput, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotOutput, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotOutput, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "AutopilotOutput",  // message name
  5,  // number of fields
  sizeof(aqua2_interfaces__msg__AutopilotOutput),
  AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_member_array,  // message members
  AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_type_support_handle = {
  0,
  &AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, AutopilotOutput)() {
  if (!AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_type_support_handle.typesupport_identifier) {
    AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AutopilotOutput__rosidl_typesupport_introspection_c__AutopilotOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
