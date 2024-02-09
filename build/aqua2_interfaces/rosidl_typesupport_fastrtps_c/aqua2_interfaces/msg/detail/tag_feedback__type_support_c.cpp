// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aqua2_interfaces:msg/TagFeedback.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/tag_feedback__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/tag_feedback__struct.h"
#include "aqua2_interfaces/msg/detail/tag_feedback__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // tag_corners_px
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // tag_corners_px
#include "rosidl_runtime_c/string.h"  // msg
#include "rosidl_runtime_c/string_functions.h"  // msg

// forward declare type support functions


using _TagFeedback__ros_msg_type = aqua2_interfaces__msg__TagFeedback;

static bool _TagFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TagFeedback__ros_msg_type * ros_message = static_cast<const _TagFeedback__ros_msg_type *>(untyped_ros_message);
  // Field name: im_width_px
  {
    cdr << ros_message->im_width_px;
  }

  // Field name: im_height_px
  {
    cdr << ros_message->im_height_px;
  }

  // Field name: num_tags
  {
    cdr << ros_message->num_tags;
  }

  // Field name: tag_corners_px
  {
    size_t size = ros_message->tag_corners_px.size;
    auto array_ptr = ros_message->tag_corners_px.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

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

static bool _TagFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TagFeedback__ros_msg_type * ros_message = static_cast<_TagFeedback__ros_msg_type *>(untyped_ros_message);
  // Field name: im_width_px
  {
    cdr >> ros_message->im_width_px;
  }

  // Field name: im_height_px
  {
    cdr >> ros_message->im_height_px;
  }

  // Field name: num_tags
  {
    cdr >> ros_message->num_tags;
  }

  // Field name: tag_corners_px
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tag_corners_px.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->tag_corners_px);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->tag_corners_px, size)) {
      return "failed to create array for field 'tag_corners_px'";
    }
    auto array_ptr = ros_message->tag_corners_px.data;
    cdr.deserializeArray(array_ptr, size);
  }

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t get_serialized_size_aqua2_interfaces__msg__TagFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TagFeedback__ros_msg_type * ros_message = static_cast<const _TagFeedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name im_width_px
  {
    size_t item_size = sizeof(ros_message->im_width_px);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name im_height_px
  {
    size_t item_size = sizeof(ros_message->im_height_px);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_tags
  {
    size_t item_size = sizeof(ros_message->num_tags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tag_corners_px
  {
    size_t array_size = ros_message->tag_corners_px.size;
    auto array_ptr = ros_message->tag_corners_px.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TagFeedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aqua2_interfaces__msg__TagFeedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aqua2_interfaces
size_t max_serialized_size_aqua2_interfaces__msg__TagFeedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: im_width_px
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: im_height_px
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_tags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tag_corners_px
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
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

static size_t _TagFeedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aqua2_interfaces__msg__TagFeedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TagFeedback = {
  "aqua2_interfaces::msg",
  "TagFeedback",
  _TagFeedback__cdr_serialize,
  _TagFeedback__cdr_deserialize,
  _TagFeedback__get_serialized_size,
  _TagFeedback__max_serialized_size
};

static rosidl_message_type_support_t _TagFeedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TagFeedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, TagFeedback)() {
  return &_TagFeedback__type_support;
}

#if defined(__cplusplus)
}
#endif
