// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/periodic_leg_command__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/periodic_leg_command__functions.h"
#include "aqua2_interfaces/msg/detail/periodic_leg_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__PeriodicLegCommand__init(message_memory);
}

void PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__PeriodicLegCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "amplitudes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, amplitudes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequencies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, frequencies),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase_offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, phase_offsets),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leg_offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, leg_offsets),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leg_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__PeriodicLegCommand, leg_velocities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "PeriodicLegCommand",  // message name
  6,  // number of fields
  sizeof(aqua2_interfaces__msg__PeriodicLegCommand),
  PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_member_array,  // message members
  PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_type_support_handle = {
  0,
  &PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, PeriodicLegCommand)() {
  PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_type_support_handle.typesupport_identifier) {
    PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PeriodicLegCommand__rosidl_typesupport_introspection_c__PeriodicLegCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
