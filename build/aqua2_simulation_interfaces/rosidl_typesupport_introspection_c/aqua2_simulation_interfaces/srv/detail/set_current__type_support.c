// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_simulation_interfaces:srv/SetCurrent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_simulation_interfaces/srv/detail/set_current__rosidl_typesupport_introspection_c.h"
#include "aqua2_simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_simulation_interfaces/srv/detail/set_current__functions.h"
#include "aqua2_simulation_interfaces/srv/detail/set_current__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_simulation_interfaces__srv__SetCurrent_Request__init(message_memory);
}

void SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_fini_function(void * message_memory)
{
  aqua2_simulation_interfaces__srv__SetCurrent_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_simulation_interfaces__srv__SetCurrent_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_simulation_interfaces__srv__SetCurrent_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_simulation_interfaces__srv__SetCurrent_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_simulation_interfaces__srv__SetCurrent_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_members = {
  "aqua2_simulation_interfaces__srv",  // message namespace
  "SetCurrent_Request",  // message name
  4,  // number of fields
  sizeof(aqua2_simulation_interfaces__srv__SetCurrent_Request),
  SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_member_array,  // message members
  SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_type_support_handle = {
  0,
  &SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Request)() {
  if (!SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_type_support_handle.typesupport_identifier) {
    SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetCurrent_Request__rosidl_typesupport_introspection_c__SetCurrent_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_current__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aqua2_simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_current__functions.h"
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_current__struct.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_simulation_interfaces__srv__SetCurrent_Response__init(message_memory);
}

void SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_fini_function(void * message_memory)
{
  aqua2_simulation_interfaces__srv__SetCurrent_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_member_array[1] = {
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_simulation_interfaces__srv__SetCurrent_Response, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_members = {
  "aqua2_simulation_interfaces__srv",  // message namespace
  "SetCurrent_Response",  // message name
  1,  // number of fields
  sizeof(aqua2_simulation_interfaces__srv__SetCurrent_Response),
  SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_member_array,  // message members
  SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_type_support_handle = {
  0,
  &SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_simulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Response)() {
  if (!SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_type_support_handle.typesupport_identifier) {
    SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetCurrent_Response__rosidl_typesupport_introspection_c__SetCurrent_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aqua2_simulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aqua2_simulation_interfaces/srv/detail/set_current__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_members = {
  "aqua2_simulation_interfaces__srv",  // service namespace
  "SetCurrent",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_Request_message_type_support_handle,
  NULL  // response message
  // aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_Response_message_type_support_handle
};

static rosidl_service_type_support_t aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_type_support_handle = {
  0,
  &aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_simulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent)() {
  if (!aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_type_support_handle.typesupport_identifier) {
    aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_simulation_interfaces, srv, SetCurrent_Response)()->data;
  }

  return &aqua2_simulation_interfaces__srv__detail__set_current__rosidl_typesupport_introspection_c__SetCurrent_service_type_support_handle;
}
