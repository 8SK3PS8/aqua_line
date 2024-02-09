// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aqua2_interfaces:srv/GetString.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "aqua2_interfaces/srv/detail/get_string__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aqua2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetString_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetString_Request_type_support_ids_t;

static const _GetString_Request_type_support_ids_t _GetString_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetString_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetString_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetString_Request_type_support_symbol_names_t _GetString_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetString_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetString_Request)),
  }
};

typedef struct _GetString_Request_type_support_data_t
{
  void * data[2];
} _GetString_Request_type_support_data_t;

static _GetString_Request_type_support_data_t _GetString_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetString_Request_message_typesupport_map = {
  2,
  "aqua2_interfaces",
  &_GetString_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetString_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetString_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetString_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetString_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aqua2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aqua2_interfaces, srv, GetString_Request)() {
  return &::aqua2_interfaces::srv::rosidl_typesupport_c::GetString_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_string__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aqua2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetString_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetString_Response_type_support_ids_t;

static const _GetString_Response_type_support_ids_t _GetString_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetString_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetString_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetString_Response_type_support_symbol_names_t _GetString_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetString_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetString_Response)),
  }
};

typedef struct _GetString_Response_type_support_data_t
{
  void * data[2];
} _GetString_Response_type_support_data_t;

static _GetString_Response_type_support_data_t _GetString_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetString_Response_message_typesupport_map = {
  2,
  "aqua2_interfaces",
  &_GetString_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetString_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetString_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetString_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetString_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aqua2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aqua2_interfaces, srv, GetString_Response)() {
  return &::aqua2_interfaces::srv::rosidl_typesupport_c::GetString_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aqua2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetString_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetString_type_support_ids_t;

static const _GetString_type_support_ids_t _GetString_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetString_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetString_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetString_type_support_symbol_names_t _GetString_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aqua2_interfaces, srv, GetString)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetString)),
  }
};

typedef struct _GetString_type_support_data_t
{
  void * data[2];
} _GetString_type_support_data_t;

static _GetString_type_support_data_t _GetString_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetString_service_typesupport_map = {
  2,
  "aqua2_interfaces",
  &_GetString_service_typesupport_ids.typesupport_identifier[0],
  &_GetString_service_typesupport_symbol_names.symbol_name[0],
  &_GetString_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetString_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetString_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aqua2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_aqua2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, aqua2_interfaces, srv, GetString)() {
  return &::aqua2_interfaces::srv::rosidl_typesupport_c::GetString_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
