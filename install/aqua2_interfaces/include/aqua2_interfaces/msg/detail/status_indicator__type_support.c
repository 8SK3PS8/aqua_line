// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/status_indicator__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/status_indicator__functions.h"
#include "aqua2_interfaces/msg/detail/status_indicator__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__StatusIndicator__init(message_memory);
}

void StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__StatusIndicator__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__StatusIndicator, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__StatusIndicator, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__StatusIndicator, text_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bg_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__StatusIndicator, bg_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "StatusIndicator",  // message name
  4,  // number of fields
  sizeof(aqua2_interfaces__msg__StatusIndicator),
  StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_member_array,  // message members
  StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_type_support_handle = {
  0,
  &StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, StatusIndicator)() {
  StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_type_support_handle.typesupport_identifier) {
    StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StatusIndicator__rosidl_typesupport_introspection_c__StatusIndicator_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
