// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/SetInt.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_INT__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_INT__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/set_int__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetInt_Request_value
{
public:
  Init_SetInt_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::SetInt_Request value(::aqua2_interfaces::srv::SetInt_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetInt_Request>()
{
  return aqua2_interfaces::srv::builder::Init_SetInt_Request_value();
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetInt_Response_msg
{
public:
  Init_SetInt_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::SetInt_Response msg(::aqua2_interfaces::srv::SetInt_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetInt_Response>()
{
  return aqua2_interfaces::srv::builder::Init_SetInt_Response_msg();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_INT__BUILDER_HPP_
