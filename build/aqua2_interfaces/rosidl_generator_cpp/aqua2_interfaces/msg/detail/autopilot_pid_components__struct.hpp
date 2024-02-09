// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__AutopilotPIDComponents __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__AutopilotPIDComponents __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutopilotPIDComponents_
{
  using Type = AutopilotPIDComponents_<ContainerAllocator>;

  explicit AutopilotPIDComponents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_kp_component = 0.0f;
      this->roll_ki_component = 0.0f;
      this->roll_kd_component = 0.0f;
      this->pitch_kp_component = 0.0f;
      this->pitch_ki_component = 0.0f;
      this->pitch_kd_component = 0.0f;
      this->yaw_kp_component = 0.0f;
      this->yaw_ki_component = 0.0f;
      this->yaw_kd_component = 0.0f;
    }
  }

  explicit AutopilotPIDComponents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_kp_component = 0.0f;
      this->roll_ki_component = 0.0f;
      this->roll_kd_component = 0.0f;
      this->pitch_kp_component = 0.0f;
      this->pitch_ki_component = 0.0f;
      this->pitch_kd_component = 0.0f;
      this->yaw_kp_component = 0.0f;
      this->yaw_ki_component = 0.0f;
      this->yaw_kd_component = 0.0f;
    }
  }

  // field types and members
  using _roll_kp_component_type =
    float;
  _roll_kp_component_type roll_kp_component;
  using _roll_ki_component_type =
    float;
  _roll_ki_component_type roll_ki_component;
  using _roll_kd_component_type =
    float;
  _roll_kd_component_type roll_kd_component;
  using _pitch_kp_component_type =
    float;
  _pitch_kp_component_type pitch_kp_component;
  using _pitch_ki_component_type =
    float;
  _pitch_ki_component_type pitch_ki_component;
  using _pitch_kd_component_type =
    float;
  _pitch_kd_component_type pitch_kd_component;
  using _yaw_kp_component_type =
    float;
  _yaw_kp_component_type yaw_kp_component;
  using _yaw_ki_component_type =
    float;
  _yaw_ki_component_type yaw_ki_component;
  using _yaw_kd_component_type =
    float;
  _yaw_kd_component_type yaw_kd_component;

  // setters for named parameter idiom
  Type & set__roll_kp_component(
    const float & _arg)
  {
    this->roll_kp_component = _arg;
    return *this;
  }
  Type & set__roll_ki_component(
    const float & _arg)
  {
    this->roll_ki_component = _arg;
    return *this;
  }
  Type & set__roll_kd_component(
    const float & _arg)
  {
    this->roll_kd_component = _arg;
    return *this;
  }
  Type & set__pitch_kp_component(
    const float & _arg)
  {
    this->pitch_kp_component = _arg;
    return *this;
  }
  Type & set__pitch_ki_component(
    const float & _arg)
  {
    this->pitch_ki_component = _arg;
    return *this;
  }
  Type & set__pitch_kd_component(
    const float & _arg)
  {
    this->pitch_kd_component = _arg;
    return *this;
  }
  Type & set__yaw_kp_component(
    const float & _arg)
  {
    this->yaw_kp_component = _arg;
    return *this;
  }
  Type & set__yaw_ki_component(
    const float & _arg)
  {
    this->yaw_ki_component = _arg;
    return *this;
  }
  Type & set__yaw_kd_component(
    const float & _arg)
  {
    this->yaw_kd_component = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotPIDComponents
    std::shared_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__AutopilotPIDComponents
    std::shared_ptr<aqua2_interfaces::msg::AutopilotPIDComponents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutopilotPIDComponents_ & other) const
  {
    if (this->roll_kp_component != other.roll_kp_component) {
      return false;
    }
    if (this->roll_ki_component != other.roll_ki_component) {
      return false;
    }
    if (this->roll_kd_component != other.roll_kd_component) {
      return false;
    }
    if (this->pitch_kp_component != other.pitch_kp_component) {
      return false;
    }
    if (this->pitch_ki_component != other.pitch_ki_component) {
      return false;
    }
    if (this->pitch_kd_component != other.pitch_kd_component) {
      return false;
    }
    if (this->yaw_kp_component != other.yaw_kp_component) {
      return false;
    }
    if (this->yaw_ki_component != other.yaw_ki_component) {
      return false;
    }
    if (this->yaw_kd_component != other.yaw_kd_component) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutopilotPIDComponents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutopilotPIDComponents_

// alias to use template instance with default allocator
using AutopilotPIDComponents =
  aqua2_interfaces::msg::AutopilotPIDComponents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__AUTOPILOT_PID_COMPONENTS__STRUCT_HPP_
