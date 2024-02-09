// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/leg_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/leg_state__struct.h"
#include "aqua2_interfaces/msg/detail/leg_state__functions.h"
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


using _LegState__ros_msg_type = aqua2_interfaces__msg__LegState;

static bool _LegState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LegState__ros_msg_type * ros_message = static_cast<const _LegState__ros_msg_type *>(untyped_ros_message);
  // Field name: leg_positions
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_positions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: leg_targets
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_targets;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: leg_speeds
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_speeds;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LegState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LegState__ros_msg_type * ros_message = static_cast<_LegState__ros_msg_type *>(untyped_ros_message);
  // Field name: leg_positions
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_positions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: leg_targets
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_targets;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: leg_speeds
  {
    size_t size = 6;
    auto array_ptr = ros_message->leg_speeds;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__msg__LegState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LegState__ros_msg_type * ros_message = static_cast<const _LegState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name leg_positions
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->leg_positions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leg_targets
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->leg_targets;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leg_speeds
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->leg_speeds;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LegState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__msg__LegState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__msg__LegState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: leg_positions
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leg_targets
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leg_speeds
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LegState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__msg__LegState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LegState = {
  "aqua2_interfaces::msg",
  "LegState",
  _LegState__cdr_serialize,
  _LegState__cdr_deserialize,
  _LegState__get_serialized_size,
  _LegState__max_serialized_size
};

static rosidl_message_type_support_t _LegState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LegState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, LegState)() {
  return &_LegState__type_support;
}

#if defined(__cplusplus)
}
#endif
