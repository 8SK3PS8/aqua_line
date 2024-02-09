// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aqua2_interfaces/msg/detail/leg_state__struct.hpp"
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

void LegState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aqua2_interfaces::msg::LegState(_init);
}

void LegState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aqua2_interfaces::msg::LegState *>(message_memory);
  typed_message->~LegState();
}

size_t size_function__LegState__leg_positions(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__LegState__leg_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__LegState__leg_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__LegState__leg_targets(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__LegState__leg_targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__LegState__leg_targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__LegState__leg_speeds(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__LegState__leg_speeds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__LegState__leg_speeds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegState_message_member_array[3] = {
  {
    "leg_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::LegState, leg_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegState__leg_positions,  // size() function pointer
    get_const_function__LegState__leg_positions,  // get_const(index) function pointer
    get_function__LegState__leg_positions,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leg_targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::LegState, leg_targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegState__leg_targets,  // size() function pointer
    get_const_function__LegState__leg_targets,  // get_const(index) function pointer
    get_function__LegState__leg_targets,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leg_speeds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::LegState, leg_speeds),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegState__leg_speeds,  // size() function pointer
    get_const_function__LegState__leg_speeds,  // get_const(index) function pointer
    get_function__LegState__leg_speeds,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegState_message_members = {
  "aqua2_interfaces::msg",  // message namespace
  "LegState",  // message name
  3,  // number of fields
  sizeof(aqua2_interfaces::msg::LegState),
  LegState_message_member_array,  // message members
  LegState_init_function,  // function to initialize message memory (memory has to be allocated)
  LegState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegState_message_members,
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
get_message_type_support_handle<aqua2_interfaces::msg::LegState>()
{
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::LegState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aqua2_interfaces, msg, LegState)() {
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::LegState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
