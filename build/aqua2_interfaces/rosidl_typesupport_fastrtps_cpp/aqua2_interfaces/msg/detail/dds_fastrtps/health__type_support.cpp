// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice
#include "aqua2_interfaces/msg/detail/health__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aqua2_interfaces/msg/detail/health__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace aqua2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_serialize(
  const aqua2_interfaces::msg::Health & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: voltage
  cdr << ros_message.voltage;
  // Member: current
  cdr << ros_message.current;
  // Member: avgvoltage
  cdr << ros_message.avgvoltage;
  // Member: avgcurrent
  cdr << ros_message.avgcurrent;
  // Member: avgpower
  cdr << ros_message.avgpower;
  // Member: battery_dod
  cdr << ros_message.battery_dod;
  // Member: mdbtemp
  cdr << ros_message.mdbtemp;
  // Member: leg_temps
  {
    cdr << ros_message.leg_temps;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aqua2_interfaces::msg::Health & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: voltage
  cdr >> ros_message.voltage;

  // Member: current
  cdr >> ros_message.current;

  // Member: avgvoltage
  cdr >> ros_message.avgvoltage;

  // Member: avgcurrent
  cdr >> ros_message.avgcurrent;

  // Member: avgpower
  cdr >> ros_message.avgpower;

  // Member: battery_dod
  cdr >> ros_message.battery_dod;

  // Member: mdbtemp
  cdr >> ros_message.mdbtemp;

  // Member: leg_temps
  {
    cdr >> ros_message.leg_temps;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
get_serialized_size(
  const aqua2_interfaces::msg::Health & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avgvoltage
  {
    size_t item_size = sizeof(ros_message.avgvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avgcurrent
  {
    size_t item_size = sizeof(ros_message.avgcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avgpower
  {
    size_t item_size = sizeof(ros_message.avgpower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_dod
  {
    size_t item_size = sizeof(ros_message.battery_dod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mdbtemp
  {
    size_t item_size = sizeof(ros_message.mdbtemp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leg_temps
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.leg_temps[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aqua2_interfaces
max_serialized_size_Health(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avgvoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avgcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avgpower
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: battery_dod
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mdbtemp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leg_temps
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Health__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::Health *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Health__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aqua2_interfaces::msg::Health *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Health__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aqua2_interfaces::msg::Health *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Health__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Health(full_bounded, 0);
}

static message_type_support_callbacks_t _Health__callbacks = {
  "aqua2_interfaces::msg",
  "Health",
  _Health__cdr_serialize,
  _Health__cdr_deserialize,
  _Health__get_serialized_size,
  _Health__max_serialized_size
};

static rosidl_message_type_support_t _Health__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Health__callbacks,
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
get_message_type_support_handle<aqua2_interfaces::msg::Health>()
{
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_Health__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aqua2_interfaces, msg, Health)() {
  return &aqua2_interfaces::msg::typesupport_fastrtps_cpp::_Health__handle;
}

#ifdef __cplusplus
}
#endif
