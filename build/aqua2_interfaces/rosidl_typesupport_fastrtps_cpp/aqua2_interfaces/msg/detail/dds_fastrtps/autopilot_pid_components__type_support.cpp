// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.hpp"

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
  const aqua2_interfaces::msg::AutopilotPIDComponents & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: roll_kp_component
  cdr << ros_message.roll_kp_component;
  // Member: roll_ki_component
  cdr << ros_message.roll_ki_component;
  // Member: roll_kd_component
  cdr << ros_message.roll_kd_component;
  // Member: pitch_kp_component
  cdr << ros_message.pitch_kp_component;
  // Member: pitch_ki_component
  cdr << ros_message.pitch_ki_component;
  // Member: pitch_kd_component
  cdr << ros_message.pitch_kd_component;
  // Member: yaw_kp_component
  cdr << ros_message.yaw_kp_component;
  // Member: yaw_ki_component
  cdr << ros_message.yaw_ki_component;
  // Member: yaw_kd_component
  cdr << ros_message.yaw_kd_component;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aqua2_interfaces::msg::AutopilotPIDComponents & ros_message)
{
  // Member: roll_kp_component
  cdr >> ros_message.roll_kp_component;

  // Member: roll_ki_component
  cdr >> ros_message.roll_ki_component;

  // Member: roll_kd_component
  cdr >> ros_message.roll_kd_component;

  // Member: pitch_kp_component
  cdr >> ros_message.pitch_kp_component;

  // Member: pitch_ki_component
  cdr >> ros_message.pitch_ki_component;

  // Member: pitch_kd_component
  cdr >> ros_message.pitch_kd_component;

  // Member: yaw_kp_component
  cdr >> ros_message.yaw_kp_component;

  // Member: yaw_ki_component
  cdr >> ros_message.yaw_ki_component;

  // Member: yaw_kd_component
  cdr >> ros_message.yaw_kd_component;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
get_serialized_size(
  const aqua2_interfaces::msg::AutopilotPIDComponents & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: roll_kp_component
  {
    size_t item_size = sizeof(ros_message.roll_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_ki_component
  {
    size_t item_size = sizeof(ros_message.roll_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_kd_component
  {
    size_t item_size = sizeof(ros_message.roll_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_kp_component
  {
    size_t item_size = sizeof(ros_message.pitch_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_ki_component
  {
    size_t item_size = sizeof(ros_message.pitch_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_kd_component
  {
    size_t item_size = sizeof(ros_message.pitch_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_kp_component
  {
    size_t item_size = sizeof(ros_message.yaw_kp_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_ki_component
  {
    size_t item_size = sizeof(ros_message.yaw_ki_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_kd_component
  {
    size_t item_size = sizeof(ros_message.yaw_kd_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
max_serialized_size_AutopilotPIDComponents(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: roll_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_kp_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_ki_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_kd_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AutopilotPIDComponents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::AutopilotPIDComponents *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AutopilotPIDComponents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aqua2_interfaces::msg::AutopilotPIDComponents *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AutopilotPIDComponents__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::AutopilotPIDComponents *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AutopilotPIDComponents__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AutopilotPIDComponents(full_bounded, 0);
}

static message_type_support_callbacks_t _AutopilotPIDComponents__callbacks = {
  "aqua2_interfaces::msg",
  "AutopilotPIDComponents",
  _AutopilotPIDComponents__cdr_serialize,
  _AutopilotPIDComponents__cdr_deserialize,
  _AutopilotPIDComponents__get_serialized_size,
  _AutopilotPIDComponents__max_serialized_size
};

static rosidl_message_type_support_t _AutopilotPIDComponents__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AutopilotPIDComponents__callbacks,
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
get_message_type_support_handle<aqua2_interfaces::msg::AutopilotPIDComponents>()
{
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_AutopilotPIDComponents__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aqua2_interfaces, msg, AutopilotPIDComponents)() {
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_AutopilotPIDComponents__handle;
}

#ifdef __cplusplus
}
#endif
