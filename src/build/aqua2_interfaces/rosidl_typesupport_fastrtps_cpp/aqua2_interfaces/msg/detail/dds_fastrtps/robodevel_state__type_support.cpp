// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/RobodevelState.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/robodevel_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aqua2_interfaces/msg/detail/robodevel_state__struct.hpp"

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
  const aqua2_interfaces::msg::RobodevelState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: calibrated
  cdr << (ros_message.calibrated ? true : false);
  // Member: reverse
  cdr << (ros_message.reverse ? true : false);
  // Member: mode
  cdr << ros_message.mode;
  // Member: ap_mode
  cdr << ros_message.ap_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aqua2_interfaces::msg::RobodevelState & ros_message)
{
  // Member: calibrated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibrated = tmp ? true : false;
  }

  // Member: reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse = tmp ? true : false;
  }

  // Member: mode
  cdr >> ros_message.mode;

  // Member: ap_mode
  cdr >> ros_message.ap_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
get_serialized_size(
  const aqua2_interfaces::msg::RobodevelState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: calibrated
  {
    size_t item_size = sizeof(ros_message.calibrated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reverse
  {
    size_t item_size = sizeof(ros_message.reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ap_mode
  {
    size_t item_size = sizeof(ros_message.ap_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
max_serialized_size_RobodevelState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: calibrated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reverse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ap_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobodevelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::RobodevelState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobodevelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aqua2_interfaces::msg::RobodevelState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobodevelState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::RobodevelState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobodevelState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobodevelState(full_bounded, 0);
}

static message_type_support_callbacks_t _RobodevelState__callbacks = {
  "aqua2_interfaces::msg",
  "RobodevelState",
  _RobodevelState__cdr_serialize,
  _RobodevelState__cdr_deserialize,
  _RobodevelState__get_serialized_size,
  _RobodevelState__max_serialized_size
};

static rosidl_message_type_support_t _RobodevelState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobodevelState__callbacks,
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
get_message_type_support_handle<aqua2_interfaces::msg::RobodevelState>()
{
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_RobodevelState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aqua2_interfaces, msg, RobodevelState)() {
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_RobodevelState__handle;
}

#ifdef __cplusplus
}
#endif
