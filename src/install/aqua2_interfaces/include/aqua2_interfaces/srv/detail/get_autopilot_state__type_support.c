// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aqua2_interfaces:srv/GetAutopilotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aqua2_interfaces/srv/detail/get_autopilot_state__rosidl_typesupport_introspection_c.h"
#include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aqua2_interfaces/srv/detail/get_autopilot_state__functions.h"
#include "aqua2_interfaces/srv/detail/get_autopilot_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__srv__GetAutopilotState_Request__init(message_memory);
}

void GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_fini_function(void * message_memory)
{
  aqua2_interfaces__srv__GetAutopilotState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_members = {
  "aqua2_interfaces__srv",  // message namespace
  "GetAutopilotState_Request",  // message name
  1,  // number of fields
  sizeof(aqua2_interfaces__srv__GetAutopilotState_Request),
  GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_member_array,  // message members
  GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_type_support_handle = {
  0,
  &GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Request)() {
  if (!GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_type_support_handle.typesupport_identifier) {
    GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAutopilotState_Request__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aqua2_interfaces/srv/detail/get_autopilot_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_autopilot_state__functions.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_autopilot_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aqua2_interfaces__srv__GetAutopilotState_Response__init(message_memory);
}

void GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_fini_function(void * message_memory)
{
  aqua2_interfaces__srv__GetAutopilotState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_member_array[5] = {
  {
    "autopilot_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Response, autopilot_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Response, target_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Response, target_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Response, target_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aqua2_interfaces__srv__GetAutopilotState_Response, target_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_members = {
  "aqua2_interfaces__srv",  // message namespace
  "GetAutopilotState_Response",  // message name
  5,  // number of fields
  sizeof(aqua2_interfaces__srv__GetAutopilotState_Response),
  GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_member_array,  // message members
  GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_type_support_handle = {
  0,
  &GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Response)() {
  if (!GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_type_support_handle.typesupport_identifier) {
    GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAutopilotState_Response__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aqua2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aqua2_interfaces/srv/detail/get_autopilot_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_members = {
  "aqua2_interfaces__srv",  // service namespace
  "GetAutopilotState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_Request_message_type_support_handle,
  NULL  // response message
  // aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_Response_message_type_support_handle
};

static rosidl_service_type_support_t aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_type_support_handle = {
  0,
  &aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aqua2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState)() {
  if (!aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_type_support_handle.typesupport_identifier) {
    aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aqua2_interfaces, srv, GetAutopilotState_Response)()->data;
  }

  return &aqua2_interfaces__srv__detail__get_autopilot_state__rosidl_typesupport_introspection_c__GetAutopilotState_service_type_support_handle;
}
