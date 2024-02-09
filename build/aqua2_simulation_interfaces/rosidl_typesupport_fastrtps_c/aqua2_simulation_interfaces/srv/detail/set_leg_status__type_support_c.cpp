// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_simulation_interfaces:srv/SetLegStatus.idl
// generated code does not contain a copyright notice
#include "aqua2_simulation_interfaces/srv/detail/set_leg_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_simulation_interfaces/srv/detail/set_leg_status__struct.h"
#include "aqua2_simulation_interfaces/srv/detail/set_leg_status__functions.h"
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


using _SetLegStatus_Request__ros_msg_type = aqua2_simulation_interfaces__srv__SetLegStatus_Request;

static bool _SetLegStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLegStatus_Request__ros_msg_type * ros_message = static_cast<const _SetLegStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr << ros_message->index;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _SetLegStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLegStatus_Request__ros_msg_type * ros_message = static_cast<_SetLegStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr >> ros_message->index;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_simulation_interfaces
size_t get_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLegStatus_Request__ros_msg_type * ros_message = static_cast<const _SetLegStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLegStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_simulation_interfaces
size_t max_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLegStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLegStatus_Request = {
  "aqua2_simulation_interfaces::srv",
  "SetLegStatus_Request",
  _SetLegStatus_Request__cdr_serialize,
  _SetLegStatus_Request__cdr_deserialize,
  _SetLegStatus_Request__get_serialized_size,
  _SetLegStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLegStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLegStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_simulation_interfaces, srv, SetLegStatus_Request)() {
  return &_SetLegStatus_Request__type_support;
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
// #include "aqua2_simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_leg_status__struct.h"
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_leg_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // msg
#include "rosidl_runtime_c/string_functions.h"  // msg

// forward declare type support functions


using _SetLegStatus_Response__ros_msg_type = aqua2_simulation_interfaces__srv__SetLegStatus_Response;

static bool _SetLegStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLegStatus_Response__ros_msg_type * ros_message = static_cast<const _SetLegStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg
  {
    const rosidl_runtime_c__String * str = &ros_message->msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetLegStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLegStatus_Response__ros_msg_type * ros_message = static_cast<_SetLegStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msg.data) {
      rosidl_runtime_c__String__init(&ros_message->msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msg'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_simulation_interfaces
size_t get_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLegStatus_Response__ros_msg_type * ros_message = static_cast<const _SetLegStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetLegStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_simulation_interfaces
size_t max_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLegStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_simulation_interfaces__srv__SetLegStatus_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLegStatus_Response = {
  "aqua2_simulation_interfaces::srv",
  "SetLegStatus_Response",
  _SetLegStatus_Response__cdr_serialize,
  _SetLegStatus_Response__cdr_deserialize,
  _SetLegStatus_Response__get_serialized_size,
  _SetLegStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLegStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLegStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_simulation_interfaces, srv, SetLegStatus_Response)() {
  return &_SetLegStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "aqua2_simulation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_simulation_interfaces/srv/set_leg_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLegStatus__callbacks = {
  "aqua2_simulation_interfaces::srv",
  "SetLegStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_simulation_interfaces, srv, SetLegStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_simulation_interfaces, srv, SetLegStatus_Response)(),
};

static rosidl_service_type_support_t SetLegStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLegStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_simulation_interfaces, srv, SetLegStatus)() {
  return &SetLegStatus__handle;
}

#if defined(__cplusplus)
}
#endif
