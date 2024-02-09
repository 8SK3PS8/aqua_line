// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Command_heave
{
public:
  explicit Init_Command_heave(::aqua2_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::Command heave(::aqua2_interfaces::msg::Command::_heave_type arg)
  {
    msg_.heave = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::Command msg_;
};

class Init_Command_roll
{
public:
  explicit Init_Command_roll(::aqua2_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_heave roll(::aqua2_interfaces::msg::Command::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Command_heave(msg_);
  }

private:
  ::aqua2_interfaces::msg::Command msg_;
};

class Init_Command_pitch
{
public:
  explicit Init_Command_pitch(::aqua2_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_roll pitch(::aqua2_interfaces::msg::Command::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Command_roll(msg_);
  }

private:
  ::aqua2_interfaces::msg::Command msg_;
};

class Init_Command_yaw
{
public:
  explicit Init_Command_yaw(::aqua2_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_pitch yaw(::aqua2_interfaces::msg::Command::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Command_pitch(msg_);
  }

private:
  ::aqua2_interfaces::msg::Command msg_;
};

class Init_Command_speed
{
public:
  Init_Command_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_yaw speed(::aqua2_interfaces::msg::Command::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Command_yaw(msg_);
  }

private:
  ::aqua2_interfaces::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::Command>()
{
  return aqua2_interfaces::msg::builder::Init_Command_speed();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_
