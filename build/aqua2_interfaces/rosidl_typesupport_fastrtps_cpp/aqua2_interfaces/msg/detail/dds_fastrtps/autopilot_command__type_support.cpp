// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/AutopilotCommand.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aqua2_interfaces/msg/detail/autopilot_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace aqua2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_serialize(
  const aqua2_interfaces::msg::AutopilotCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: surge
  cdr << ros_message.surge;
  // Member: heave
  cdr << ros_message.heave;
  // Member: target_roll
  cdr << ros_message.target_roll;
  // Member: target_pitch
  cdr << ros_message.target_pitch;
  // Member: target_yaw
  cdr << ros_message.target_yaw;
  // Member: target_depth
  cdr << ros_message.target_depth;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aqua2_interfaces::msg::AutopilotCommand & ros_message)
{
  // Member: surge
  cdr >> ros_message.surge;

  // Member: heave
  cdr >> ros_message.heave;

  // Member: target_roll
  cdr >> ros_message.target_roll;

  // Member: target_pitch
  cdr >> ros_message.target_pitch;

  // Member: target_yaw
  cdr >> ros_message.target_yaw;

  // Member: target_depth
  cdr >> ros_message.target_depth;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
get_serialized_size(
  const aqua2_interfaces::msg::AutopilotCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: surge
  {
    size_t item_size = sizeof(ros_message.surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heave
  {
    size_t item_size = sizeof(ros_message.heave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_roll
  {
    size_t item_size = sizeof(ros_message.target_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_pitch
  {
    size_t item_size = sizeof(ros_message.target_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_yaw
  {
    size_t item_size = sizeof(ros_message.target_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_depth
  {
    size_t item_size = sizeof(ros_message.target_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
max_serialized_size_AutopilotCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: surge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heave
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AutopilotCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::AutopilotCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AutopilotCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aqua2_interfaces::msg::AutopilotCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AutopilotCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::AutopilotCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AutopilotCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AutopilotCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _AutopilotCommand__callbacks = {
  "aqua2_interfaces::msg",
  "AutopilotCommand",
  _AutopilotCommand__cdr_serialize,
  _AutopilotCommand__cdr_deserialize,
  _AutopilotCommand__get_serialized_size,
  _AutopilotCommand__max_serialized_size
};

static rosidl_message_type_support_t _AutopilotCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AutopilotCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aqua2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<aqua2_interfaces::msg::AutopilotCommand>()
{
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_AutopilotCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aqua2_interfaces, msg, AutopilotCommand)() {
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_AutopilotCommand__handle;
}

#ifdef __cplusplus
}
#endif
