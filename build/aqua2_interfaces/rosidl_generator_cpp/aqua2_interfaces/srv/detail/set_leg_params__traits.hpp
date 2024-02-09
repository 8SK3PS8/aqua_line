// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:srv/SetLegParams.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__TRAITS_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__TRAITS_HPP_

#include "aqua2_interfaces/srv/detail/set_leg_params__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetLegParams_Request>()
{
  return "aqua2_interfaces::srv::SetLegParams_Request";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetLegParams_Request>()
{
  return "aqua2_interfaces/srv/SetLegParams_Request";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetLegParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetLegParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::SetLegParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetLegParams_Response>()
{
  return "aqua2_interfaces::srv::SetLegParams_Response";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetLegParams_Response>()
{
  return "aqua2_interfaces/srv/SetLegParams_Response";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetLegParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetLegParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::SetLegParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::SetLegParams>()
{
  return "aqua2_interfaces::srv::SetLegParams";
}

template<>
inline const char * name<aqua2_interfaces::srv::SetLegParams>()
{
  return "aqua2_interfaces/srv/SetLegParams";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::SetLegParams>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_interfaces::srv::SetLegParams_Request>::value &&
    has_fixed_size<aqua2_interfaces::srv::SetLegParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_interfaces::srv::SetLegParams>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_interfaces::srv::SetLegParams_Request>::value &&
    has_bounded_size<aqua2_interfaces::srv::SetLegParams_Response>::value
  >
{
};

template<>
struct is_service<aqua2_interfaces::srv::SetLegParams>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_interfaces::srv::SetLegParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_interfaces::srv::SetLegParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__TRAITS_HPP_
