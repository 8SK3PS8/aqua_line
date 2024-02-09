// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:msg/RobodevelState.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/robodevel_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/robodevel_state__struct.h"
#include "aqua2_interfaces/msg/detail/robodevel_state__functions.h"
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


using _RobodevelState__ros_msg_type = aqua2_interfaces__msg__RobodevelState;

static bool _RobodevelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobodevelState__ros_msg_type * ros_message = static_cast<const _RobodevelState__ros_msg_type *>(untyped_ros_message);
  // Field name: calibrated
  {
    cdr << (ros_message->calibrated ? true : false);
  }

  // Field name: reverse
  {
    cdr << (ros_message->reverse ? true : false);
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: ap_mode
  {
    cdr << ros_message->ap_mode;
  }

  return true;
}

static bool _RobodevelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobodevelState__ros_msg_type * ros_message = static_cast<_RobodevelState__ros_msg_type *>(untyped_ros_message);
  // Field name: calibrated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibrated = tmp ? true : false;
  }

  // Field name: reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reverse = tmp ? true : false;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: ap_mode
  {
    cdr >> ros_message->ap_mode;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__msg__RobodevelState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobodevelState__ros_msg_type * ros_message = static_cast<const _RobodevelState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name calibrated
  {
    size_t item_size = sizeof(ros_message->calibrated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reverse
  {
    size_t item_size = sizeof(ros_message->reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ap_mode
  {
    size_t item_size = sizeof(ros_message->ap_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobodevelState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__msg__RobodevelState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__msg__RobodevelState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: calibrated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reverse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ap_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobodevelState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__msg__RobodevelState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobodevelState = {
  "aqua2_interfaces::msg",
  "RobodevelState",
  _RobodevelState__cdr_serialize,
  _RobodevelState__cdr_deserialize,
  _RobodevelState__get_serialized_size,
  _RobodevelState__max_serialized_size
};

static rosidl_message_type_support_t _RobodevelState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobodevelState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, RobodevelState)() {
  return &_RobodevelState__type_support;
}

#if defined(__cplusplus)
}
#endif
