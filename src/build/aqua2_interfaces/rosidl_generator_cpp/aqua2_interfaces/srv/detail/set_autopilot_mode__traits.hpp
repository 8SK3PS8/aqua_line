// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:srv/SetAutopilotMode.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__TRAITS_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__TRAITS_HPP_

#include "aqua2_interfaces/srv/detail/set_autopilot_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetAutopilotMode_Request>()
{
  return "aqua2_interfaces::srv::SetAutopilotMode_Request";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetAutopilotMode_Request>()
{
  return "aqua2_interfaces/srv/SetAutopilotMode_Request";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetAutopilotMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetAutopilotMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::SetAutopilotMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetAutopilotMode_Response>()
{
  return "aqua2_interfaces::srv::SetAutopilotMode_Response";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetAutopilotMode_Response>()
{
  return "aqua2_interfaces/srv/SetAutopilotMode_Response";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetAutopilotMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetAutopilotMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::SetAutopilotMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetAutopilotMode>()
{
  return "aqua2_interfaces::srv::SetAutopilotMode";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetAutopilotMode>()
{
  return "aqua2_interfaces/srv/SetAutopilotMode";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetAutopilotMode>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_interfaces::srv::SetAutopilotMode_Request>::value &&
    has_fixed_size<aqua2_interfaces::srv::SetAutopilotMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetAutopilotMode>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_interfaces::srv::SetAutopilotMode_Request>::value &&
    has_bounded_size<aqua2_interfaces::srv::SetAutopilotMode_Response>::value
  >
{
};

template<>
struct is_service<aqua2_interfaces::srv::SetAutopilotMode>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_interfaces::srv::SetAutopilotMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_interfaces::srv::SetAutopilotMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_AUTOPILOT_MODE__TRAITS_HPP_
