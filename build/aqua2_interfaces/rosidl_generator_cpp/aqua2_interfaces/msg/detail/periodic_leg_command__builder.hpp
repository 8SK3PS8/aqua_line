// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/periodic_leg_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_PeriodicLegCommand_leg_velocities
{
public:
  explicit Init_PeriodicLegCommand_leg_velocities(::aqua2_interfaces::msg::PeriodicLegCommand & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::PeriodicLegCommand leg_velocities(::aqua2_interfaces::msg::PeriodicLegCommand::_leg_velocities_type arg)
  {
    msg_.leg_velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

class Init_PeriodicLegCommand_leg_offsets
{
public:
  explicit Init_PeriodicLegCommand_leg_offsets(::aqua2_interfaces::msg::PeriodicLegCommand & msg)
  : msg_(msg)
  {}
  Init_PeriodicLegCommand_leg_velocities leg_offsets(::aqua2_interfaces::msg::PeriodicLegCommand::_leg_offsets_type arg)
  {
    msg_.leg_offsets = std::move(arg);
    return Init_PeriodicLegCommand_leg_velocities(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

class Init_PeriodicLegCommand_phase_offsets
{
public:
  explicit Init_PeriodicLegCommand_phase_offsets(::aqua2_interfaces::msg::PeriodicLegCommand & msg)
  : msg_(msg)
  {}
  Init_PeriodicLegCommand_leg_offsets phase_offsets(::aqua2_interfaces::msg::PeriodicLegCommand::_phase_offsets_type arg)
  {
    msg_.phase_offsets = std::move(arg);
    return Init_PeriodicLegCommand_leg_offsets(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

class Init_PeriodicLegCommand_frequencies
{
public:
  explicit Init_PeriodicLegCommand_frequencies(::aqua2_interfaces::msg::PeriodicLegCommand & msg)
  : msg_(msg)
  {}
  Init_PeriodicLegCommand_phase_offsets frequencies(::aqua2_interfaces::msg::PeriodicLegCommand::_frequencies_type arg)
  {
    msg_.frequencies = std::move(arg);
    return Init_PeriodicLegCommand_phase_offsets(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

class Init_PeriodicLegCommand_amplitudes
{
public:
  explicit Init_PeriodicLegCommand_amplitudes(::aqua2_interfaces::msg::PeriodicLegCommand & msg)
  : msg_(msg)
  {}
  Init_PeriodicLegCommand_frequencies amplitudes(::aqua2_interfaces::msg::PeriodicLegCommand::_amplitudes_type arg)
  {
    msg_.amplitudes = std::move(arg);
    return Init_PeriodicLegCommand_frequencies(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

class Init_PeriodicLegCommand_header
{
public:
  Init_PeriodicLegCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeriodicLegCommand_amplitudes header(::aqua2_interfaces::msg::PeriodicLegCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PeriodicLegCommand_amplitudes(msg_);
  }

private:
  ::aqua2_interfaces::msg::PeriodicLegCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::PeriodicLegCommand>()
{
  return aqua2_interfaces::msg::builder::Init_PeriodicLegCommand_header();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__BUILDER_HPP_
