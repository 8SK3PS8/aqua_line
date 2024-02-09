// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/Health.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__Health __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__Health __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Health_
{
  using Type = Health_<ContainerAllocator>;

  explicit Health_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->avgvoltage = 0.0f;
      this->avgcurrent = 0.0f;
      this->avgpower = 0.0f;
      this->battery_dod = 0.0f;
      this->mdbtemp = 0.0f;
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_temps.begin(), this->leg_temps.end(), 0.0f);
    }
  }

  explicit Health_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    leg_temps(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->avgvoltage = 0.0f;
      this->avgcurrent = 0.0f;
      this->avgpower = 0.0f;
      this->battery_dod = 0.0f;
      this->mdbtemp = 0.0f;
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_temps.begin(), this->leg_temps.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _avgvoltage_type =
    float;
  _avgvoltage_type avgvoltage;
  using _avgcurrent_type =
    float;
  _avgcurrent_type avgcurrent;
  using _avgpower_type =
    float;
  _avgpower_type avgpower;
  using _battery_dod_type =
    float;
  _battery_dod_type battery_dod;
  using _mdbtemp_type =
    float;
  _mdbtemp_type mdbtemp;
  using _leg_temps_type =
    std::array<float, 6>;
  _leg_temps_type leg_temps;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__avgvoltage(
    const float & _arg)
  {
    this->avgvoltage = _arg;
    return *this;
  }
  Type & set__avgcurrent(
    const float & _arg)
  {
    this->avgcurrent = _arg;
    return *this;
  }
  Type & set__avgpower(
    const float & _arg)
  {
    this->avgpower = _arg;
    return *this;
  }
  Type & set__battery_dod(
    const float & _arg)
  {
    this->battery_dod = _arg;
    return *this;
  }
  Type & set__mdbtemp(
    const float & _arg)
  {
    this->mdbtemp = _arg;
    return *this;
  }
  Type & set__leg_temps(
    const std::array<float, 6> & _arg)
  {
    this->leg_temps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::Health_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::Health_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::Health_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::Health_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__Health
    std::shared_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__Health
    std::shared_ptr<aqua2_interfaces::msg::Health_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Health_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->avgvoltage != other.avgvoltage) {
      return false;
    }
    if (this->avgcurrent != other.avgcurrent) {
      return false;
    }
    if (this->avgpower != other.avgpower) {
      return false;
    }
    if (this->battery_dod != other.battery_dod) {
      return false;
    }
    if (this->mdbtemp != other.mdbtemp) {
      return false;
    }
    if (this->leg_temps != other.leg_temps) {
      return false;
    }
    return true;
  }
  bool operator!=(const Health_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Health_

// alias to use template instance with default allocator
using Health =
  aqua2_interfaces::msg::Health_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__HEALTH__STRUCT_HPP_
