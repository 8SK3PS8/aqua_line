// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/LegState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__LegState __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__LegState __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegState_
{
  using Type = LegState_<ContainerAllocator>;

  explicit LegState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_positions.begin(), this->leg_positions.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_targets.begin(), this->leg_targets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_speeds.begin(), this->leg_speeds.end(), 0.0f);
    }
  }

  explicit LegState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leg_positions(_alloc),
    leg_targets(_alloc),
    leg_speeds(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_positions.begin(), this->leg_positions.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_targets.begin(), this->leg_targets.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->leg_speeds.begin(), this->leg_speeds.end(), 0.0f);
    }
  }

  // field types and members
  using _leg_positions_type =
    std::array<float, 6>;
  _leg_positions_type leg_positions;
  using _leg_targets_type =
    std::array<float, 6>;
  _leg_targets_type leg_targets;
  using _leg_speeds_type =
    std::array<float, 6>;
  _leg_speeds_type leg_speeds;

  // setters for named parameter idiom
  Type & set__leg_positions(
    const std::array<float, 6> & _arg)
  {
    this->leg_positions = _arg;
    return *this;
  }
  Type & set__leg_targets(
    const std::array<float, 6> & _arg)
  {
    this->leg_targets = _arg;
    return *this;
  }
  Type & set__leg_speeds(
    const std::array<float, 6> & _arg)
  {
    this->leg_speeds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::LegState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::LegState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::LegState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::LegState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__LegState
    std::shared_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__LegState
    std::shared_ptr<aqua2_interfaces::msg::LegState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegState_ & other) const
  {
    if (this->leg_positions != other.leg_positions) {
      return false;
    }
    if (this->leg_targets != other.leg_targets) {
      return false;
    }
    if (this->leg_speeds != other.leg_speeds) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegState_

// alias to use template instance with default allocator
using LegState =
  aqua2_interfaces::msg::LegState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__LEG_STATE__STRUCT_HPP_
