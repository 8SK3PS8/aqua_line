// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__aqua2_interfaces__msg__PeriodicLegCommand __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__PeriodicLegCommand __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PeriodicLegCommand_
{
  using Type = PeriodicLegCommand_<ContainerAllocator>;

  explicit PeriodicLegCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->amplitudes.begin(), this->amplitudes.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->frequencies.begin(), this->frequencies.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->phase_offsets.begin(), this->phase_offsets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_offsets.begin(), this->leg_offsets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_velocities.begin(), this->leg_velocities.end(), 0.0f);
    }
  }

  explicit PeriodicLegCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    amplitudes(_alloc),
    frequencies(_alloc),
    phase_offsets(_alloc),
    leg_offsets(_alloc),
    leg_velocities(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->amplitudes.begin(), this->amplitudes.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->frequencies.begin(), this->frequencies.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->phase_offsets.begin(), this->phase_offsets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_offsets.begin(), this->leg_offsets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_velocities.begin(), this->leg_velocities.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _amplitudes_type =
    std::array<float, 6>;
  _amplitudes_type amplitudes;
  using _frequencies_type =
    std::array<float, 6>;
  _frequencies_type frequencies;
  using _phase_offsets_type =
    std::array<float, 6>;
  _phase_offsets_type phase_offsets;
  using _leg_offsets_type =
    std::array<float, 6>;
  _leg_offsets_type leg_offsets;
  using _leg_velocities_type =
    std::array<float, 6>;
  _leg_velocities_type leg_velocities;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__amplitudes(
    const std::array<float, 6> & _arg)
  {
    this->amplitudes = _arg;
    return *this;
  }
  Type & set__frequencies(
    const std::array<float, 6> & _arg)
  {
    this->frequencies = _arg;
    return *this;
  }
  Type & set__phase_offsets(
    const std::array<float, 6> & _arg)
  {
    this->phase_offsets = _arg;
    return *this;
  }
  Type & set__leg_offsets(
    const std::array<float, 6> & _arg)
  {
    this->leg_offsets = _arg;
    return *this;
  }
  Type & set__leg_velocities(
    const std::array<float, 6> & _arg)
  {
    this->leg_velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__PeriodicLegCommand
    std::shared_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__PeriodicLegCommand
    std::shared_ptr<aqua2_interfaces::msg::PeriodicLegCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PeriodicLegCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->amplitudes != other.amplitudes) {
      return false;
    }
    if (this->frequencies != other.frequencies) {
      return false;
    }
    if (this->phase_offsets != other.phase_offsets) {
      return false;
    }
    if (this->leg_offsets != other.leg_offsets) {
      return false;
    }
    if (this->leg_velocities != other.leg_velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const PeriodicLegCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PeriodicLegCommand_

// alias to use template instance with default allocator
using PeriodicLegCommand =
  aqua2_interfaces::msg::PeriodicLegCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__PERIODIC_LEG_COMMAND__STRUCT_HPP_
