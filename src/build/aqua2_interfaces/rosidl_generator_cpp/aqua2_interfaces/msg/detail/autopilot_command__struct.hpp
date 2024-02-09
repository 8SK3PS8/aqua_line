// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/AutopilotCommand.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__AutopilotCommand __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__AutopilotCommand __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutopilotCommand_
{
  using Type = AutopilotCommand_<ContainerAllocator>;

  explicit AutopilotCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge = 0.0f;
      this->heave = 0.0f;
      this->target_roll = 0.0f;
      this->target_pitch = 0.0f;
      this->target_yaw = 0.0f;
      this->target_depth = 0.0f;
    }
  }

  explicit AutopilotCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge = 0.0f;
      this->heave = 0.0f;
      this->target_roll = 0.0f;
      this->target_pitch = 0.0f;
      this->target_yaw = 0.0f;
      this->target_depth = 0.0f;
    }
  }

  // field types and members
  using _surge_type =
    float;
  _surge_type surge;
  using _heave_type =
    float;
  _heave_type heave;
  using _target_roll_type =
    float;
  _target_roll_type target_roll;
  using _target_pitch_type =
    float;
  _target_pitch_type target_pitch;
  using _target_yaw_type =
    float;
  _target_yaw_type target_yaw;
  using _target_depth_type =
    float;
  _target_depth_type target_depth;

  // setters for named parameter idiom
  Type & set__surge(
    const float & _arg)
  {
    this->surge = _arg;
    return *this;
  }
  Type & set__heave(
    const float & _arg)
  {
    this->heave = _arg;
    return *this;
  }
  Type & set__target_roll(
    const float & _arg)
  {
    this->target_roll = _arg;
    return *this;
  }
  Type & set__target_pitch(
    const float & _arg)
  {
    this->target_pitch = _arg;
    return *this;
  }
  Type & set__target_yaw(
    const float & _arg)
  {
    this->target_yaw = _arg;
    return *this;
  }
  Type & set__target_depth(
    const float & _arg)
  {
    this->target_depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotCommand
    std::shared_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotCommand
    std::shared_ptr<aqua2_interfaces::msg::AutopilotCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutopilotCommand_ & other) const
  {
    if (this->surge != other.surge) {
      return false;
    }
    if (this->heave != other.heave) {
      return false;
    }
    if (this->target_roll != other.target_roll) {
      return false;
    }
    if (this->target_pitch != other.target_pitch) {
      return false;
    }
    if (this->target_yaw != other.target_yaw) {
      return false;
    }
    if (this->target_depth != other.target_depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutopilotCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutopilotCommand_

// alias to use template instance with default allocator
using AutopilotCommand =
  aqua2_interfaces::msg::AutopilotCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_COMMAND__STRUCT_HPP_
