// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/RobodevelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/robodevel_state__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/robodevel_state__functions.h"
#include "aqua2_interfaces/msg/detail/robodevel_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__RobodevelState__init(message_memory);
}

void RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__RobodevelState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_member_array[4] = {
  {
    "calibrated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__RobodevelState, calibrated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__RobodevelState, reverse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__RobodevelState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ap_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__RobodevelState, ap_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "RobodevelState",  // message name
  4,  // number of fields
  sizeof(aqua2_interfaces__msg__RobodevelState),
  RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_member_array,  // message members
  RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_init_function,  // function to initialize message memory (memory has to be allocated)
  RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_type_support_handle = {
  0,
  &RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, RobodevelState)() {
  if (!RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_type_support_handle.typesupport_identifier) {
    RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobodevelState__rosidl_typesupport_introspection_c__RobodevelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
