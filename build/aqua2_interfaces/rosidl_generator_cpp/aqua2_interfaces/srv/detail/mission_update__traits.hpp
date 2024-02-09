// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aqua2_interfaces:srv/MissionUpdate.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__TRAITS_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__TRAITS_HPP_

#include "aqua2_interfaces/srv/detail/mission_update__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::MissionUpdate_Request>()
{
  return "aqua2_interfaces::srv::MissionUpdate_Request";
}

template<>
inline const char * name<aqua2_interfaces::srv::MissionUpdate_Request>()
{
  return "aqua2_interfaces/srv/MissionUpdate_Request";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::MissionUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::MissionUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aqua2_interfaces::srv::MissionUpdate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::MissionUpdate_Response>()
{
  return "aqua2_interfaces::srv::MissionUpdate_Response";
}

template<>
inline const char * name<aqua2_interfaces::srv::MissionUpdate_Response>()
{
  return "aqua2_interfaces/srv/MissionUpdate_Response";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::MissionUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aqua2_interfaces::srv::MissionUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aqua2_interfaces::srv::MissionUpdate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aqua2_interfaces::srv::MissionUpdate>()
{
  return "aqua2_interfaces::srv::MissionUpdate";
}

template<>
inline const char * name<aqua2_interfaces::srv::MissionUpdate>()
{
  return "aqua2_interfaces/srv/MissionUpdate";
}

template<>
struct has_fixed_size<aqua2_interfaces::srv::MissionUpdate>
  : std::integral_constant<
    bool,
    has_fixed_size<aqua2_interfaces::srv::MissionUpdate_Request>::value &&
    has_fixed_size<aqua2_interfaces::srv::MissionUpdate_Response>::value
  >
{
};

template<>
struct has_bounded_size<aqua2_interfaces::srv::MissionUpdate>
  : std::integral_constant<
    bool,
    has_bounded_size<aqua2_interfaces::srv::MissionUpdate_Request>::value &&
    has_bounded_size<aqua2_interfaces::srv::MissionUpdate_Response>::value
  >
{
};

template<>
struct is_service<aqua2_interfaces::srv::MissionUpdate>
  : std::true_type
{
};

template<>
struct is_service_request<aqua2_interfaces::srv::MissionUpdate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aqua2_interfaces::srv::MissionUpdate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__TRAITS_HPP_
