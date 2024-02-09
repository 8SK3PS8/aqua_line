// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/leg_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegState_leg_speeds
{
public:
  explicit Init_LegState_leg_speeds(::aqua2_interfaces::msg::LegState & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::LegState leg_speeds(::aqua2_interfaces::msg::LegState::_leg_speeds_type arg)
  {
    msg_.leg_speeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::LegState msg_;
};

class Init_LegState_leg_targets
{
public:
  explicit Init_LegState_leg_targets(::aqua2_interfaces::msg::LegState & msg)
  : msg_(msg)
  {}
  Init_LegState_leg_speeds leg_targets(::aqua2_interfaces::msg::LegState::_leg_targets_type arg)
  {
    msg_.leg_targets = std::move(arg);
    return Init_LegState_leg_speeds(msg_);
  }

private:
  ::aqua2_interfaces::msg::LegState msg_;
};

class Init_LegState_leg_positions
{
public:
  Init_LegState_leg_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegState_leg_targets leg_positions(::aqua2_interfaces::msg::LegState::_leg_positions_type arg)
  {
    msg_.leg_positions = std::move(arg);
    return Init_LegState_leg_targets(msg_);
  }

private:
  ::aqua2_interfaces::msg::LegState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::LegState>()
{
  return aqua2_interfaces::msg::builder::Init_LegState_leg_positions();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__BUILDER_HPP_
