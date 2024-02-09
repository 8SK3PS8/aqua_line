// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/GetNamedInt.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_INT__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_INT__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/get_named_int__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedInt_Request_name
{
public:
  Init_GetNamedInt_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::GetNamedInt_Request name(::aqua2_interfaces::srv::GetNamedInt_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetNamedInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::GetNamedInt_Request>()
{
  return aqua2_interfaces::srv::builder::Init_GetNamedInt_Request_name();
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetNamedInt_Response_value
{
public:
  Init_GetNamedInt_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::GetNamedInt_Response value(::aqua2_interfaces::srv::GetNamedInt_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::GetNamedInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::GetNamedInt_Response>()
{
  return aqua2_interfaces::srv::builder::Init_GetNamedInt_Response_value();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_NAMED_INT__BUILDER_HPP_
