// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:srv/GetNamedFloat.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/srv/detail/get_named_float__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/srv/detail/get_named_float__struct.h"
#include "aqua2_interfaces/srv/detail/get_named_float__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _GetNamedFloat_Request__ros_msg_type = aqua2_interfaces__srv__GetNamedFloat_Request;

static bool _GetNamedFloat_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNamedFloat_Request__ros_msg_type * ros_message = static_cast<const _GetNamedFloat_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

static bool _GetNamedFloat_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNamedFloat_Request__ros_msg_type * ros_message = static_cast<_GetNamedFloat_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNamedFloat_Request__ros_msg_type * ros_message = static_cast<const _GetNamedFloat_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetNamedFloat_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
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

static size_t _GetNamedFloat_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNamedFloat_Request = {
  "aqua2_interfaces::srv",
  "GetNamedFloat_Request",
  _GetNamedFloat_Request__cdr_serialize,
  _GetNamedFloat_Request__cdr_deserialize,
  _GetNamedFloat_Request__get_serialized_size,
  _GetNamedFloat_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetNamedFloat_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNamedFloat_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetNamedFloat_Request)() {
  return &_GetNamedFloat_Request__type_support;
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
// #include "aqua2_interfaces/srv/detail/get_named_float__struct.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_named_float__functions.h"
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


using _GetNamedFloat_Response__ros_msg_type = aqua2_interfaces__srv__GetNamedFloat_Response;

static bool _GetNamedFloat_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNamedFloat_Response__ros_msg_type * ros_message = static_cast<const _GetNamedFloat_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _GetNamedFloat_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNamedFloat_Response__ros_msg_type * ros_message = static_cast<_GetNamedFloat_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNamedFloat_Response__ros_msg_type * ros_message = static_cast<const _GetNamedFloat_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetNamedFloat_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Response(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetNamedFloat_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__srv__GetNamedFloat_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNamedFloat_Response = {
  "aqua2_interfaces::srv",
  "GetNamedFloat_Response",
  _GetNamedFloat_Response__cdr_serialize,
  _GetNamedFloat_Response__cdr_deserialize,
  _GetNamedFloat_Response__get_serialized_size,
  _GetNamedFloat_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetNamedFloat_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNamedFloat_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetNamedFloat_Response)() {
  return &_GetNamedFloat_Response__type_support;
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
#include "aqua2_interfaces/srv/get_named_float.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetNamedFloat__callbacks = {
  "aqua2_interfaces::srv",
  "GetNamedFloat",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetNamedFloat_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetNamedFloat_Response)(),
};

static rosidl_service_type_support_t GetNamedFloat__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetNamedFloat__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetNamedFloat)() {
  return &GetNamedFloat__handle;
}

#if defined(__cplusplus)
}
#endif
