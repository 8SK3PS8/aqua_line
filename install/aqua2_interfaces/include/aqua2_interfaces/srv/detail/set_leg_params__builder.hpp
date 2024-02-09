// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/SetLegParams.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/set_leg_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLegParams_Request_period
{
public:
  explicit Init_SetLegParams_Request_period(::aqua2_interfaces::srv::SetLegParams_Request & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::srv::SetLegParams_Request period(::aqua2_interfaces::srv::SetLegParams_Request::_period_type arg)
  {
    msg_.period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetLegParams_Request msg_;
};

class Init_SetLegParams_Request_amplitude
{
public:
  Init_SetLegParams_Request_amplitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLegParams_Request_period amplitude(::aqua2_interfaces::srv::SetLegParams_Request::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_SetLegParams_Request_period(msg_);
  }

private:
  ::aqua2_interfaces::srv::SetLegParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::SetLegParams_Request>()
{
  return aqua2_interfaces::srv::builder::Init_SetLegParams_Request_amplitude();
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
auto build<::aqua2_interfaces::srv::SetLegParams_Response>()
{
  return ::aqua2_interfaces::srv::SetLegParams_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__SET_LEG_PARAMS__BUILDER_HPP_
