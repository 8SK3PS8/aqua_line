// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/srv/detail/set_bool__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/srv/detail/set_bool__functions.h"
#include "aqua2_interfaces/srv/detail/set_bool__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__srv__SetBool_Request__init(message_memory);
}

void SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_fini_function(void * message_memory)
{
  aqua2_interfaces__srv__SetBool_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__SetBool_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_members = {
  "aqua2_interfaces__srv",  // message namespace
  "SetBool_Request",  // message name
  1,  // number of fields
  sizeof(aqua2_interfaces__srv__SetBool_Request),
  SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_member_array,  // message members
  SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_type_support_handle = {
  0,
  &SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Request)() {
  if (!SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_type_support_handle.typesupport_identifier) {
    SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetBool_Request__rosidl_typesupport_introspection_c__SetBool_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aqua2_interfaces/srv/detail/set_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aqua2_interfaces/srv/detail/set_bool__functions.h"
// already included above
// #include "aqua2_interfaces/srv/detail/set_bool__struct.h"


// Include directives for member types
// Member `msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__srv__SetBool_Response__init(message_memory);
}

void SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_fini_function(void * message_memory)
{
  aqua2_interfaces__srv__SetBool_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_member_array[1] = {
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__SetBool_Response, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_members = {
  "aqua2_interfaces__srv",  // message namespace
  "SetBool_Response",  // message name
  1,  // number of fields
  sizeof(aqua2_interfaces__srv__SetBool_Response),
  SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_member_array,  // message members
  SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_type_support_handle = {
  0,
  &SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Response)() {
  if (!SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_type_support_handle.typesupport_identifier) {
    SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetBool_Response__rosidl_typesupport_introspection_c__SetBool_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aqua2_interfaces/srv/detail/set_bool__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_members = {
  "aqua2_interfaces__srv",  // service namespace
  "SetBool",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_Request_message_type_support_handle,
  NULL  // response message
  // aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_Response_message_type_support_handle
};

static rosidl_service_type_support_t aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_type_support_handle = {
  0,
  &aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool)() {
  if (!aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_type_support_handle.typesupport_identifier) {
    aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, SetBool_Response)()->data;
  }

  return &aqua2_interfaces__srv__detail__set_bool__rosidl_typesupport_introspection_c__SetBool_service_type_support_handle;
}
