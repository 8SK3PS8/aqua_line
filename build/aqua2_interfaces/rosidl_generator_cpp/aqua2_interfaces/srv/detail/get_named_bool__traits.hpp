// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:srv/GetNamedBool.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__TRAITS_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__TRAITS_HPP_

#include "aqua2_interfaces/srv/detail/get_named_bool__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedBool_Request>()
{
  return "aqua2_interfaces::srv::GetNamedBool_Request";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedBool_Request>()
{
  return "aqua2_interfaces/srv/GetNamedBool_Request";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedBool_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedBool_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_interfaces::srv::GetNamedBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedBool_Response>()
{
  return "aqua2_interfaces::srv::GetNamedBool_Response";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedBool_Response>()
{
  return "aqua2_interfaces/srv/GetNamedBool_Response";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::GetNamedBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::GetNamedBool>()
{
  return "aqua2_interfaces::srv::GetNamedBool";
}

template<>
inline const char * name<aqua2_interfaces::srv::GetNamedBool>()
{
  return "aqua2_interfaces/srv/GetNamedBool";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::GetNamedBool>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_interfaces::srv::GetNamedBool_Request>::value &&
    has_fixed_size<aqua2_interfaces::srv::GetNamedBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_interfaces::srv::GetNamedBool>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_interfaces::srv::GetNamedBool_Request>::value &&
    has_bounded_size<aqua2_interfaces::srv::GetNamedBool_Response>::value
  >
{
};

template<>
struct is_service<aqua2_interfaces::srv::GetNamedBool>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_interfaces::srv::GetNamedBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_interfaces::srv::GetNamedBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_BOOL__TRAITS_HPP_
