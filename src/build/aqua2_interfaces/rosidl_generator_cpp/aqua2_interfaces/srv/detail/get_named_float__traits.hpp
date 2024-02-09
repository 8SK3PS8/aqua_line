// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:srv/GetNamedFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_FLOAT__TRAITS_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_FLOAT__TRAITS_HPP_

#include "aqua2_interfaces/srv/detail/get_named_float__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedFloat_Request>()
{
  return "aqua2_interfaces::srv::GetNamedFloat_Request";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedFloat_Request>()
{
  return "aqua2_interfaces/srv/GetNamedFloat_Request";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedFloat_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedFloat_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_interfaces::srv::GetNamedFloat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedFloat_Response>()
{
  return "aqua2_interfaces::srv::GetNamedFloat_Response";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedFloat_Response>()
{
  return "aqua2_interfaces/srv/GetNamedFloat_Response";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedFloat_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::GetNamedFloat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedFloat>()
{
  return "aqua2_interfaces::srv::GetNamedFloat";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedFloat>()
{
  return "aqua2_interfaces/srv/GetNamedFloat";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedFloat>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_interfaces::srv::GetNamedFloat_Request>::value &&
    has_fixed_size<aqua2_interfaces::srv::GetNamedFloat_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedFloat>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_interfaces::srv::GetNamedFloat_Request>::value &&
    has_bounded_size<aqua2_interfaces::srv::GetNamedFloat_Response>::value
  >
{
};

template<>
struct is_service<aqua2_interfaces::srv::GetNamedFloat>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_interfaces::srv::GetNamedFloat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_interfaces::srv::GetNamedFloat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_FLOAT__TRAITS_HPP_
