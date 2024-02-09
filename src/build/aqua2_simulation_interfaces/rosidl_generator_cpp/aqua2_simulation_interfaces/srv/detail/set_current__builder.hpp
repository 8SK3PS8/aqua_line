// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_simulation_interfaces:srv/SetCurrent.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__BUILDER_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__BUILDER_HPP_

#include "aqua2_simulation_interfaces/srv/detail/set_current__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrent_Request_z
{
public:
  explicit Init_SetCurrent_Request_z(::aqua2_simulation_interfaces::srv::SetCurrent_Request & msg)
  : msg_(msg)
  {}
  ::aqua2_simulation_interfaces::srv::SetCurrent_Request z(::aqua2_simulation_interfaces::srv::SetCurrent_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetCurrent_Request msg_;
};

class Init_SetCurrent_Request_y
{
public:
  explicit Init_SetCurrent_Request_y(::aqua2_simulation_interfaces::srv::SetCurrent_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrent_Request_z y(::aqua2_simulation_interfaces::srv::SetCurrent_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetCurrent_Request_z(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetCurrent_Request msg_;
};

class Init_SetCurrent_Request_x
{
public:
  explicit Init_SetCurrent_Request_x(::aqua2_simulation_interfaces::srv::SetCurrent_Request & msg)
  : msg_(msg)
  {}
  Init_SetCurrent_Request_y x(::aqua2_simulation_interfaces::srv::SetCurrent_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCurrent_Request_y(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetCurrent_Request msg_;
};

class Init_SetCurrent_Request_id
{
public:
  Init_SetCurrent_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCurrent_Request_x id(::aqua2_simulation_interfaces::srv::SetCurrent_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetCurrent_Request_x(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetCurrent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetCurrent_Request>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetCurrent_Request_id();
}

}  // namespace aqua2_simulation_interfaces


namespace aqua2_simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCurrent_Response_msg
{
public:
  Init_SetCurrent_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_simulation_interfaces::srv::SetCurrent_Response msg(::aqua2_simulation_interfaces::srv::SetCurrent_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_simulation_interfaces::srv::SetCurrent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_simulation_interfaces::srv::SetCurrent_Response>()
{
  return aqua2_simulation_interfaces::srv::builder::Init_SetCurrent_Response_msg();
}

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__SET_CURRENT__BUILDER_HPP_
