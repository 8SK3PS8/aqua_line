// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/AutopilotOutput.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/autopilot_output__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_AutopilotOutput_yaw
{
public:
  explicit Init_AutopilotOutput_yaw(::aqua2_interfaces::msg::AutopilotOutput & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::AutopilotOutput yaw(::aqua2_interfaces::msg::AutopilotOutput::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotOutput msg_;
};

class Init_AutopilotOutput_pitch
{
public:
  explicit Init_AutopilotOutput_pitch(::aqua2_interfaces::msg::AutopilotOutput & msg)
  : msg_(msg)
  {}
  Init_AutopilotOutput_yaw pitch(::aqua2_interfaces::msg::AutopilotOutput::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AutopilotOutput_yaw(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotOutput msg_;
};

class Init_AutopilotOutput_roll
{
public:
  explicit Init_AutopilotOutput_roll(::aqua2_interfaces::msg::AutopilotOutput & msg)
  : msg_(msg)
  {}
  Init_AutopilotOutput_pitch roll(::aqua2_interfaces::msg::AutopilotOutput::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AutopilotOutput_pitch(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotOutput msg_;
};

class Init_AutopilotOutput_heave
{
public:
  explicit Init_AutopilotOutput_heave(::aqua2_interfaces::msg::AutopilotOutput & msg)
  : msg_(msg)
  {}
  Init_AutopilotOutput_roll heave(::aqua2_interfaces::msg::AutopilotOutput::_heave_type arg)
  {
    msg_.heave = std::move(arg);
    return Init_AutopilotOutput_roll(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotOutput msg_;
};

class Init_AutopilotOutput_speed
{
public:
  Init_AutopilotOutput_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutopilotOutput_heave speed(::aqua2_interfaces::msg::AutopilotOutput::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_AutopilotOutput_heave(msg_);
  }

private:
  ::aqua2_interfaces::msg::AutopilotOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::AutopilotOutput>()
{
  return aqua2_interfaces::msg::builder::Init_AutopilotOutput_speed();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_OUTPUT__BUILDER_HPP_
