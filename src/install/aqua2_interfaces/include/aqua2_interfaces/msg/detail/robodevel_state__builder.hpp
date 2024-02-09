// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/RobodevelState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/robodevel_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobodevelState_ap_mode
{
public:
  explicit Init_RobodevelState_ap_mode(::aqua2_interfaces::msg::RobodevelState & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::RobodevelState ap_mode(::aqua2_interfaces::msg::RobodevelState::_ap_mode_type arg)
  {
    msg_.ap_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::RobodevelState msg_;
};

class Init_RobodevelState_mode
{
public:
  explicit Init_RobodevelState_mode(::aqua2_interfaces::msg::RobodevelState & msg)
  : msg_(msg)
  {}
  Init_RobodevelState_ap_mode mode(::aqua2_interfaces::msg::RobodevelState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobodevelState_ap_mode(msg_);
  }

private:
  ::aqua2_interfaces::msg::RobodevelState msg_;
};

class Init_RobodevelState_reverse
{
public:
  explicit Init_RobodevelState_reverse(::aqua2_interfaces::msg::RobodevelState & msg)
  : msg_(msg)
  {}
  Init_RobodevelState_mode reverse(::aqua2_interfaces::msg::RobodevelState::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_RobodevelState_mode(msg_);
  }

private:
  ::aqua2_interfaces::msg::RobodevelState msg_;
};

class Init_RobodevelState_calibrated
{
public:
  Init_RobodevelState_calibrated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobodevelState_reverse calibrated(::aqua2_interfaces::msg::RobodevelState::_calibrated_type arg)
  {
    msg_.calibrated = std::move(arg);
    return Init_RobodevelState_reverse(msg_);
  }

private:
  ::aqua2_interfaces::msg::RobodevelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::RobodevelState>()
{
  return aqua2_interfaces::msg::builder::Init_RobodevelState_calibrated();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__ROBODEVEL_STATE__BUILDER_HPP_
