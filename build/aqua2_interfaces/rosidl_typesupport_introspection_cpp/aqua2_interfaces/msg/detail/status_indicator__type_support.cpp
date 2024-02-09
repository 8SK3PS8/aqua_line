// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/StatusIndicator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aqua2_interfaces/msg/detail/status_indicator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aqua2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StatusIndicator_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aqua2_interfaces::msg::StatusIndicator(_init);
}

void StatusIndicator_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aqua2_interfaces::msg::StatusIndicator *>(message_memory);
  typed_message->~StatusIndicator();
}

size_t size_function__StatusIndicator__text_color(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__StatusIndicator__text_color(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__StatusIndicator__text_color(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__StatusIndicator__bg_color(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__StatusIndicator__bg_color(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__StatusIndicator__bg_color(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StatusIndicator_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::StatusIndicator, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::StatusIndicator, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::StatusIndicator, text_color),  // bytes offset in struct
    nullptr,  // default value
    size_function__StatusIndicator__text_color,  // size() function pointer
    get_const_function__StatusIndicator__text_color,  // get_const(index) function pointer
    get_function__StatusIndicator__text_color,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bg_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::StatusIndicator, bg_color),  // bytes offset in struct
    nullptr,  // default value
    size_function__StatusIndicator__bg_color,  // size() function pointer
    get_const_function__StatusIndicator__bg_color,  // get_const(index) function pointer
    get_function__StatusIndicator__bg_color,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StatusIndicator_message_members = {
  "aqua2_interfaces::msg",  // message namespace
  "StatusIndicator",  // message name
  4,  // number of fields
  sizeof(aqua2_interfaces::msg::StatusIndicator),
  StatusIndicator_message_member_array,  // message members
  StatusIndicator_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusIndicator_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StatusIndicator_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StatusIndicator_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aqua2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aqua2_interfaces::msg::StatusIndicator>()
{
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::StatusIndicator_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aqua2_interfaces, msg, StatusIndicator)() {
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::StatusIndicator_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
