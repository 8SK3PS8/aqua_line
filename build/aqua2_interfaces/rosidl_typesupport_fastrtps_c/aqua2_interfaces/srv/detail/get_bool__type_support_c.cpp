// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:srv/GetBool.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/srv/detail/get_bool__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/srv/detail/get_bool__struct.h"
#include "aqua2_interfaces/srv/detail/get_bool__functions.h"
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


using _GetBool_Request__ros_msg_type = aqua2_interfaces__srv__GetBool_Request;

static bool _GetBool_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBool_Request__ros_msg_type * ros_message = static_cast<const _GetBool_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetBool_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBool_Request__ros_msg_type * ros_message = static_cast<_GetBool_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__GetBool_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBool_Request__ros_msg_type * ros_message = static_cast<const _GetBool_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBool_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__GetBool_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__GetBool_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetBool_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__GetBool_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBool_Request = {
  "aqua2_interfaces::srv",
  "GetBool_Request",
  _GetBool_Request__cdr_serialize,
  _GetBool_Request__cdr_deserialize,
  _GetBool_Request__get_serialized_size,
  _GetBool_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBool_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBool_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetBool_Request)() {
  return &_GetBool_Request__type_support;
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
// #include "aqua2_interfaces/srv/detail/get_bool__struct.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_bool__functions.h"
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


using _GetBool_Response__ros_msg_type = aqua2_interfaces__srv__GetBool_Response;

static bool _GetBool_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBool_Response__ros_msg_type * ros_message = static_cast<const _GetBool_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    cdr << (ros_message->value ? true : false);
  }

  return true;
}

static bool _GetBool_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBool_Response__ros_msg_type * ros_message = static_cast<_GetBool_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->value = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__GetBool_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBool_Response__ros_msg_type * ros_message = static_cast<const _GetBool_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBool_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__GetBool_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__GetBool_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetBool_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__GetBool_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBool_Response = {
  "aqua2_interfaces::srv",
  "GetBool_Response",
  _GetBool_Response__cdr_serialize,
  _GetBool_Response__cdr_deserialize,
  _GetBool_Response__get_serialized_size,
  _GetBool_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBool_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBool_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetBool_Response)() {
  return &_GetBool_Response__type_support;
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
#include "aqua2_interfaces/srv/get_bool.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBool__callbacks = {
  "aqua2_interfaces::srv",
  "GetBool",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetBool_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetBool_Response)(),
};

static rosidl_service_type_support_t GetBool__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBool__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetBool)() {
  return &GetBool__handle;
}

#if defined(__cplusplus)
}
#endif
