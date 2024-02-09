// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_simulation_interfaces:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_

#include "aqua2_simulation_interfaces/srv/detail/get_float__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetFloat_Request>()
{
  return "aqua2_simulation_interfaces::srv::GetFloat_Request";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetFloat_Request>()
{
  return "aqua2_simulation_interfaces/srv/GetFloat_Request";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::GetFloat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetFloat_Response>()
{
  return "aqua2_simulation_interfaces::srv::GetFloat_Response";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetFloat_Response>()
{
  return "aqua2_simulation_interfaces/srv/GetFloat_Response";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_simulation_interfaces::srv::GetFloat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_simulation_interfaces::srv::GetFloat>()
{
  return "aqua2_simulation_interfaces::srv::GetFloat";
}

template<>
inline const char * name<aqua2_simulation_interfaces::srv::GetFloat>()
{
  return "aqua2_simulation_interfaces/srv/GetFloat";
}

template<>
struct has_fixed_size<aqua2_simulation_interfaces::srv::GetFloat>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_simulation_interfaces::srv::GetFloat_Request>::value &&
    has_fixed_size<aqua2_simulation_interfaces::srv::GetFloat_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_simulation_interfaces::srv::GetFloat>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_simulation_interfaces::srv::GetFloat_Request>::value &&
    has_bounded_size<aqua2_simulation_interfaces::srv::GetFloat_Response>::value
  >
{
};

template<>
struct is_service<aqua2_simulation_interfaces::srv::GetFloat>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_simulation_interfaces::srv::GetFloat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_simulation_interfaces::srv::GetFloat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__GET_FLOAT__TRAITS_HPP_
