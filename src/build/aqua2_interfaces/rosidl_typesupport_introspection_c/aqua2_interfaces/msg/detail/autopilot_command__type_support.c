// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/AutopilotCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/autopilot_command__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/autopilot_command__functions.h"
#include "aqua2_interfaces/msg/detail/autopilot_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__AutopilotCommand__init(message_memory);
}

void AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__AutopilotCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_member_array[6] = {
  {
    "surge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotCommand, surge),  // bytes offset in struct
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
    offsetof(aqua2_interfaces__msg__AutopilotCommand, heave),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotCommand, target_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotCommand, target_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotCommand, target_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__AutopilotCommand, target_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "AutopilotCommand",  // message name
  6,  // number of fields
  sizeof(aqua2_interfaces__msg__AutopilotCommand),
  AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_member_array,  // message members
  AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_type_support_handle = {
  0,
  &AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, AutopilotCommand)() {
  if (!AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_type_support_handle.typesupport_identifier) {
    AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AutopilotCommand__rosidl_typesupport_introspection_c__AutopilotCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
