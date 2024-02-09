// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aqua2_interfaces/msg/detail/autopilot_targets__struct.hpp"
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

void AutopilotTargets_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aqua2_interfaces::msg::AutopilotTargets(_init);
}

void AutopilotTargets_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aqua2_interfaces::msg::AutopilotTargets *>(message_memory);
  typed_message->~AutopilotTargets();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AutopilotTargets_message_member_array[4] = {
  {
    "depth_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::AutopilotTargets, depth_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "roll_target_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::AutopilotTargets, roll_target_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch_target_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::AutopilotTargets, pitch_target_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw_target_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces::msg::AutopilotTargets, yaw_target_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AutopilotTargets_message_members = {
  "aqua2_interfaces::msg",  // message namespace
  "AutopilotTargets",  // message name
  4,  // number of fields
  sizeof(aqua2_interfaces::msg::AutopilotTargets),
  AutopilotTargets_message_member_array,  // message members
  AutopilotTargets_init_function,  // function to initialize message memory (memory has to be allocated)
  AutopilotTargets_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AutopilotTargets_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AutopilotTargets_message_members,
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
get_message_type_support_handle<aqua2_interfaces::msg::AutopilotTargets>()
{
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::AutopilotTargets_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aqua2_interfaces, msg, AutopilotTargets)() {
  return &::aqua2_interfaces::msg::rosidl_typesupport_introspection_cpp::AutopilotTargets_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
