// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aqua2_interfaces/msg/detail/periodic_leg_command__struct.hpp"
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

void PeriodicLegCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aqua2_interfaces::msg::PeriodicLegCommand(_init);
}

void PeriodicLegCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aqua2_interfaces::msg::PeriodicLegCommand *>(message_memory);
  typed_message->~PeriodicLegCommand();
}

size_t size_function__PeriodicLegCommand__amplitudes(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PeriodicLegCommand__amplitudes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PeriodicLegCommand__amplitudes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__PeriodicLegCommand__frequencies(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PeriodicLegCommand__frequencies(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PeriodicLegCommand__frequencies(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__PeriodicLegCommand__phase_offsets(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PeriodicLegCommand__phase_offsets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PeriodicLegCommand__phase_offsets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__PeriodicLegCommand__leg_offsets(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PeriodicLegCommand__leg_offsets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PeriodicLegCommand__leg_offsets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__PeriodicLegCommand__leg_velocities(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__PeriodicLegCommand__leg_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__PeriodicLegCommand__leg_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PeriodicLegCommand_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "amplitudes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, amplitudes),  // bytes offset in struct
    nullptr,  // default value
    size_function__PeriodicLegCommand__amplitudes,  // size() function pointer
    get_const_function__PeriodicLegCommand__amplitudes,  // get_const(index) function pointer
    get_function__PeriodicLegCommand__amplitudes,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frequencies",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, frequencies),  // bytes offset in struct
    nullptr,  // default value
    size_function__PeriodicLegCommand__frequencies,  // size() function pointer
    get_const_function__PeriodicLegCommand__frequencies,  // get_const(index) function pointer
    get_function__PeriodicLegCommand__frequencies,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "phase_offsets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, phase_offsets),  // bytes offset in struct
    nullptr,  // default value
    size_function__PeriodicLegCommand__phase_offsets,  // size() function pointer
    get_const_function__PeriodicLegCommand__phase_offsets,  // get_const(index) function pointer
    get_function__PeriodicLegCommand__phase_offsets,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leg_offsets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, leg_offsets),  // bytes offset in struct
    nullptr,  // default value
    size_function__PeriodicLegCommand__leg_offsets,  // size() function pointer
    get_const_function__PeriodicLegCommand__leg_offsets,  // get_const(index) function pointer
    get_function__PeriodicLegCommand__leg_offsets,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leg_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::PeriodicLegCommand, leg_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__PeriodicLegCommand__leg_velocities,  // size() function pointer
    get_const_function__PeriodicLegCommand__leg_velocities,  // get_const(index) function pointer
    get_function__PeriodicLegCommand__leg_velocities,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PeriodicLegCommand_message_members = {
  "aqua2_interfaces::msg",  // message namespace
  "PeriodicLegCommand",  // message name
  6,  // number of fields
  sizeof(aqua2_interfaces::msg::PeriodicLegCommand),
  PeriodicLegCommand_message_member_array,  // message members
  PeriodicLegCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PeriodicLegCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PeriodicLegCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PeriodicLegCommand_message_members,
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
get_message_type_support_handle<aqua2_interfaces::msg::PeriodicLegCommand>()
{
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::PeriodicLegCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aqua2_interfaces, msg, PeriodicLegCommand)() {
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::PeriodicLegCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
