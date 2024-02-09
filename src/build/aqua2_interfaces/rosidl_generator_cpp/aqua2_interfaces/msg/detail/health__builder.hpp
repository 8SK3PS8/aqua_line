// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__HEALTH__BUILDER_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__HEALTH__BUILDER_HPP_

#include "aqua2_interfaces/msg/detail/health__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Health_leg_temps
{
public:
  explicit Init_Health_leg_temps(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  ::aqua2_interfaces::msg::Health leg_temps(::aqua2_interfaces::msg::Health::_leg_temps_type arg)
  {
    msg_.leg_temps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_mdbtemp
{
public:
  explicit Init_Health_mdbtemp(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_leg_temps mdbtemp(::aqua2_interfaces::msg::Health::_mdbtemp_type arg)
  {
    msg_.mdbtemp = std::move(arg);
    return Init_Health_leg_temps(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_battery_dod
{
public:
  explicit Init_Health_battery_dod(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_mdbtemp battery_dod(::aqua2_interfaces::msg::Health::_battery_dod_type arg)
  {
    msg_.battery_dod = std::move(arg);
    return Init_Health_mdbtemp(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_avgpower
{
public:
  explicit Init_Health_avgpower(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_battery_dod avgpower(::aqua2_interfaces::msg::Health::_avgpower_type arg)
  {
    msg_.avgpower = std::move(arg);
    return Init_Health_battery_dod(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_avgcurrent
{
public:
  explicit Init_Health_avgcurrent(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_avgpower avgcurrent(::aqua2_interfaces::msg::Health::_avgcurrent_type arg)
  {
    msg_.avgcurrent = std::move(arg);
    return Init_Health_avgpower(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_avgvoltage
{
public:
  explicit Init_Health_avgvoltage(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_avgcurrent avgvoltage(::aqua2_interfaces::msg::Health::_avgvoltage_type arg)
  {
    msg_.avgvoltage = std::move(arg);
    return Init_Health_avgcurrent(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_current
{
public:
  explicit Init_Health_current(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_avgvoltage current(::aqua2_interfaces::msg::Health::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Health_avgvoltage(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_voltage
{
public:
  explicit Init_Health_voltage(::aqua2_interfaces::msg::Health & msg)
  : msg_(msg)
  {}
  Init_Health_current voltage(::aqua2_interfaces::msg::Health::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_Health_current(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

class Init_Health_header
{
public:
  Init_Health_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Health_voltage header(::aqua2_interfaces::msg::Health::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Health_voltage(msg_);
  }

private:
  ::aqua2_interfaces::msg::Health msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::msg::Health>()
{
  return aqua2_interfaces::msg::builder::Init_Health_header();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__HEALTH__BUILDER_HPP_
