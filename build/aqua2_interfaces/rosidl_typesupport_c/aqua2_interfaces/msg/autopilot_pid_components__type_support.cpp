// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "aqua2_interfaces/msg/detail/autopilot_pid_components__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aqua2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _AutopilotPIDComponents_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutopilotPIDComponents_type_support_ids_t;

static const _AutopilotPIDComponents_type_support_ids_t _AutopilotPIDComponents_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutopilotPIDComponents_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutopilotPIDComponents_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutopilotPIDComponents_type_support_symbol_names_t _AutopilotPIDComponents_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, msg, AutopilotPIDComponents)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, msg, AutopilotPIDComponents)),
  }
};

typedef struct _AutopilotPIDComponents_type_support_data_t
{
  void * data[2];
} _AutopilotPIDComponents_type_support_data_t;

static _AutopilotPIDComponents_type_support_data_t _AutopilotPIDComponents_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutopilotPIDComponents_message_typesupport_map = {
  2,
  "aqua2_interfaces",
  &_AutopilotPIDComponents_message_typesupport_ids.typesupport_identifier[0],
  &_AutopilotPIDComponents_message_typesupport_symbol_names.symbol_name[0],
  &_AutopilotPIDComponents_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutopilotPIDComponents_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutopilotPIDComponents_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace aqua2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aqua2_interfaces, msg, AutopilotPIDComponents)() {
  return &::aqua2_interfaces::msg::rosidl_typesupport_c::AutopilotPIDComponents_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
