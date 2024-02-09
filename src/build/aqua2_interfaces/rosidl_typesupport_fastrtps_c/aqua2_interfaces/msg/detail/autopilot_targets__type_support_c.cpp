// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_targets__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/autopilot_targets__struct.h"
#include "aqua2_interfaces/msg/detail/autopilot_targets__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AutopilotTargets__ros_msg_type = aqua2_interfaces__msg__AutopilotTargets;

static bool _AutopilotTargets__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AutopilotTargets__ros_msg_type * ros_message = static_cast<const _AutopilotTargets__ros_msg_type *>(untyped_ros_message);
  // Field name: depth_target
  {
    cdr << ros_message->depth_target;
  }

  // Field name: roll_target_angle
  {
    cdr << ros_message->roll_target_angle;
  }

  // Field name: pitch_target_angle
  {
    cdr << ros_message->pitch_target_angle;
  }

  // Field name: yaw_target_angle
  {
    cdr << ros_message->yaw_target_angle;
  }

  return true;
}

static bool _AutopilotTargets__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AutopilotTargets__ros_msg_type * ros_message = static_cast<_AutopilotTargets__ros_msg_type *>(untyped_ros_message);
  // Field name: depth_target
  {
    cdr >> ros_message->depth_target;
  }

  // Field name: roll_target_angle
  {
    cdr >> ros_message->roll_target_angle;
  }

  // Field name: pitch_target_angle
  {
    cdr >> ros_message->pitch_target_angle;
  }

  // Field name: yaw_target_angle
  {
    cdr >> ros_message->yaw_target_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__msg__AutopilotTargets(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AutopilotTargets__ros_msg_type * ros_message = static_cast<const _AutopilotTargets__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name depth_target
  {
    size_t item_size = sizeof(ros_message->depth_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_target_angle
  {
    size_t item_size = sizeof(ros_message->roll_target_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_target_angle
  {
    size_t item_size = sizeof(ros_message->pitch_target_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_target_angle
  {
    size_t item_size = sizeof(ros_message->yaw_target_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AutopilotTargets__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__msg__AutopilotTargets(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__msg__AutopilotTargets(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: depth_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_target_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_target_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_target_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AutopilotTargets__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__msg__AutopilotTargets(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AutopilotTargets = {
  "aqua2_interfaces::msg",
  "AutopilotTargets",
  _AutopilotTargets__cdr_serialize,
  _AutopilotTargets__cdr_deserialize,
  _AutopilotTargets__get_serialized_size,
  _AutopilotTargets__max_serialized_size
};

static rosidl_message_type_support_t _AutopilotTargets__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AutopilotTargets,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, AutopilotTargets)() {
  return &_AutopilotTargets__type_support;
}

#if defined(__cplusplus)
}
#endif
