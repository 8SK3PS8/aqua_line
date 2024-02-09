// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/SetNamedFloat.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/set_named_float__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetNamedFloat_Request_value
{
public:
  explicit Init_SetNamedFloat_Request_value(::aqua2_interfaces::srv::SetNamedFloat_Request & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::srv::SetNamedFloat_Request value(::aqua2_interfaces::srv::SetNamedFloat_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetNamedFloat_Request msg_;
};

class Init_SetNamedFloat_Request_name
{
public:
  Init_SetNamedFloat_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNamedFloat_Request_value name(::aqua2_interfaces::srv::SetNamedFloat_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetNamedFloat_Request_value(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetNamedFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetNamedFloat_Request>()
{
  return aqua2_interfaces::srv::builder::Init_SetNamedFloat_Request_name();
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetNamedFloat_Response>()
{
  return ::aqua2_interfaces::srv::SetNamedFloat_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_NAMED_FLOAT__BUILDER_HPP_
