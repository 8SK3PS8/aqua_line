// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:srv/SetAutopilotMode.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/srv/detail/set_autopilot_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/srv/detail/set_autopilot_mode__struct.h"
#include "aqua2_interfaces/srv/detail/set_autopilot_mode__functions.h"
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


using _SetAutopilotMode_Request__ros_msg_type = aqua2_interfaces__srv__SetAutopilotMode_Request;

static bool _SetAutopilotMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetAutopilotMode_Request__ros_msg_type * ros_message = static_cast<const _SetAutopilotMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  return true;
}

static bool _SetAutopilotMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetAutopilotMode_Request__ros_msg_type * ros_message = static_cast<_SetAutopilotMode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetAutopilotMode_Request__ros_msg_type * ros_message = static_cast<const _SetAutopilotMode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetAutopilotMode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetAutopilotMode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetAutopilotMode_Request = {
  "aqua2_interfaces::srv",
  "SetAutopilotMode_Request",
  _SetAutopilotMode_Request__cdr_serialize,
  _SetAutopilotMode_Request__cdr_deserialize,
  _SetAutopilotMode_Request__get_serialized_size,
  _SetAutopilotMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetAutopilotMode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetAutopilotMode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, SetAutopilotMode_Request)() {
  return &_SetAutopilotMode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "aqua2_interfaces/srv/detail/set_autopilot_mode__struct.h"
// already included above
// #include "aqua2_interfaces/srv/detail/set_autopilot_mode__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _SetAutopilotMode_Response__ros_msg_type = aqua2_interfaces__srv__SetAutopilotMode_Response;

static bool _SetAutopilotMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetAutopilotMode_Response__ros_msg_type * ros_message = static_cast<const _SetAutopilotMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    cdr << (ros_message->response ? true : false);
  }

  return true;
}

static bool _SetAutopilotMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetAutopilotMode_Response__ros_msg_type * ros_message = static_cast<_SetAutopilotMode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->response = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetAutopilotMode_Response__ros_msg_type * ros_message = static_cast<const _SetAutopilotMode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  {
    size_t item_size = sizeof(ros_message->response);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetAutopilotMode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetAutopilotMode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__SetAutopilotMode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetAutopilotMode_Response = {
  "aqua2_interfaces::srv",
  "SetAutopilotMode_Response",
  _SetAutopilotMode_Response__cdr_serialize,
  _SetAutopilotMode_Response__cdr_deserialize,
  _SetAutopilotMode_Response__get_serialized_size,
  _SetAutopilotMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetAutopilotMode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetAutopilotMode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, SetAutopilotMode_Response)() {
  return &_SetAutopilotMode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/srv/set_autopilot_mode.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetAutopilotMode__callbacks = {
  "aqua2_interfaces::srv",
  "SetAutopilotMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, SetAutopilotMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, SetAutopilotMode_Response)(),
};

static rosidl_service_type_support_t SetAutopilotMode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetAutopilotMode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, SetAutopilotMode)() {
  return &SetAutopilotMode__handle;
}

#if defined(__cplusplus)
}
#endif
