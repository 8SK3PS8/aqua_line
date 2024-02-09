// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__functions.h"
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


using _AutopilotPIDComponents__ros_msg_type = aqua2_interfaces__msg__AutopilotPIDComponents;

static bool _AutopilotPIDComponents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AutopilotPIDComponents__ros_msg_type * ros_message = static_cast<const _AutopilotPIDComponents__ros_msg_type *>(untyped_ros_message);
  // Field name: roll_kp_component
  {
    cdr << ros_message->roll_kp_component;
  }

  // Field name: roll_ki_component
  {
    cdr << ros_message->roll_ki_component;
  }

  // Field name: roll_kd_component
  {
    cdr << ros_message->roll_kd_component;
  }

  // Field name: pitch_kp_component
  {
    cdr << ros_message->pitch_kp_component;
  }

  // Field name: pitch_ki_component
  {
    cdr << ros_message->pitch_ki_component;
  }

  // Field name: pitch_kd_component
  {
    cdr << ros_message->pitch_kd_component;
  }

  // Field name: yaw_kp_component
  {
    cdr << ros_message->yaw_kp_component;
  }

  // Field name: yaw_ki_component
  {
    cdr << ros_message->yaw_ki_component;
  }

  // Field name: yaw_kd_component
  {
    cdr << ros_message->yaw_kd_component;
  }

  return true;
}

static bool _AutopilotPIDComponents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AutopilotPIDComponents__ros_msg_type * ros_message = static_cast<_AutopilotPIDComponents__ros_msg_type *>(untyped_ros_message);
  // Field name: roll_kp_component
  {
    cdr >> ros_message->roll_kp_component;
  }

  // Field name: roll_ki_component
  {
    cdr >> ros_message->roll_ki_component;
  }

  // Field name: roll_kd_component
  {
    cdr >> ros_message->roll_kd_component;
  }

  // Field name: pitch_kp_component
  {
    cdr >> ros_message->pitch_kp_component;
  }

  // Field name: pitch_ki_component
  {
    cdr >> ros_message->pitch_ki_component;
  }

  // Field name: pitch_kd_component
  {
    cdr >> ros_message->pitch_kd_component;
  }

  // Field name: yaw_kp_component
  {
    cdr >> ros_message->yaw_kp_component;
  }

  // Field name: yaw_ki_component
  {
    cdr >> ros_message->yaw_ki_component;
  }

  // Field name: yaw_kd_component
  {
    cdr >> ros_message->yaw_kd_component;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__msg__AutopilotPIDComponents(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AutopilotPIDComponents__ros_msg_type * ros_message = static_cast<const _AutopilotPIDComponents__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roll_kp_component
  {
    size_t item_size = sizeof(ros_message->roll_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_ki_component
  {
    size_t item_size = sizeof(ros_message->roll_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_kd_component
  {
    size_t item_size = sizeof(ros_message->roll_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_kp_component
  {
    size_t item_size = sizeof(ros_message->pitch_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_ki_component
  {
    size_t item_size = sizeof(ros_message->pitch_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_kd_component
  {
    size_t item_size = sizeof(ros_message->pitch_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_kp_component
  {
    size_t item_size = sizeof(ros_message->yaw_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_ki_component
  {
    size_t item_size = sizeof(ros_message->yaw_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_kd_component
  {
    size_t item_size = sizeof(ros_message->yaw_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AutopilotPIDComponents__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__msg__AutopilotPIDComponents(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__msg__AutopilotPIDComponents(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: roll_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AutopilotPIDComponents__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__msg__AutopilotPIDComponents(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AutopilotPIDComponents = {
  "aqua2_interfaces::msg",
  "AutopilotPIDComponents",
  _AutopilotPIDComponents__cdr_serialize,
  _AutopilotPIDComponents__cdr_deserialize,
  _AutopilotPIDComponents__get_serialized_size,
  _AutopilotPIDComponents__max_serialized_size
};

static rosidl_message_type_support_t _AutopilotPIDComponents__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AutopilotPIDComponents,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, AutopilotPIDComponents)() {
  return &_AutopilotPIDComponents__type_support;
}

#if defined(__cplusplus)
}
#endif
