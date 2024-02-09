// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/msg/detail/tag_feedback__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/msg/detail/tag_feedback__functions.h"
#include "aqua2_interfaces/msg/detail/tag_feedback__struct.h"


// Include directives for member types
// Member `tag_corners_px`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__msg__TagFeedback__init(message_memory);
}

void TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_fini_function(void * message_memory)
{
  aqua2_interfaces__msg__TagFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_member_array[5] = {
  {
    "im_width_px",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__TagFeedback, im_width_px),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "im_height_px",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__TagFeedback, im_height_px),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__TagFeedback, num_tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag_corners_px",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__TagFeedback, tag_corners_px),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__msg__TagFeedback, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_members = {
  "aqua2_interfaces__msg",  // message namespace
  "TagFeedback",  // message name
  5,  // number of fields
  sizeof(aqua2_interfaces__msg__TagFeedback),
  TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_member_array,  // message members
  TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_type_support_handle = {
  0,
  &TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, TagFeedback)() {
  if (!TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_type_support_handle.typesupport_identifier) {
    TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TagFeedback__rosidl_typesupport_introspection_c__TagFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
