// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/AutopilotTargets.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__AutopilotTargets __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__AutopilotTargets __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutopilotTargets_
{
  using Type = AutopilotTargets_<ContainerAllocator>;

  explicit AutopilotTargets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth_target = 0.0f;
      this->roll_target_angle = 0.0f;
      this->pitch_target_angle = 0.0f;
      this->yaw_target_angle = 0.0f;
    }
  }

  explicit AutopilotTargets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth_target = 0.0f;
      this->roll_target_angle = 0.0f;
      this->pitch_target_angle = 0.0f;
      this->yaw_target_angle = 0.0f;
    }
  }

  // field types and members
  using _depth_target_type =
    float;
  _depth_target_type depth_target;
  using _roll_target_angle_type =
    float;
  _roll_target_angle_type roll_target_angle;
  using _pitch_target_angle_type =
    float;
  _pitch_target_angle_type pitch_target_angle;
  using _yaw_target_angle_type =
    float;
  _yaw_target_angle_type yaw_target_angle;

  // setters for named parameter idiom
  Type & set__depth_target(
    const float & _arg)
  {
    this->depth_target = _arg;
    return *this;
  }
  Type & set__roll_target_angle(
    const float & _arg)
  {
    this->roll_target_angle = _arg;
    return *this;
  }
  Type & set__pitch_target_angle(
    const float & _arg)
  {
    this->pitch_target_angle = _arg;
    return *this;
  }
  Type & set__yaw_target_angle(
    const float & _arg)
  {
    this->yaw_target_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotTargets
    std::shared_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotTargets
    std::shared_ptr<aqua2_interfaces::msg::AutopilotTargets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutopilotTargets_ & other) const
  {
    if (this->depth_target != other.depth_target) {
      return false;
    }
    if (this->roll_target_angle != other.roll_target_angle) {
      return false;
    }
    if (this->pitch_target_angle != other.pitch_target_angle) {
      return false;
    }
    if (this->yaw_target_angle != other.yaw_target_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutopilotTargets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutopilotTargets_

// alias to use template instance with default allocator
using AutopilotTargets =
  aqua2_interfaces::msg::AutopilotTargets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_TARGETS__STRUCT_HPP_
