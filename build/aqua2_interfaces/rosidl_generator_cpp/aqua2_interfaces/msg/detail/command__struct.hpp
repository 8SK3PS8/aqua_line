// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define AQUA2_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__msg__Command __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heave = 0.0f;
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
      this->heave = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;
  using _heave_type =
    float;
  _heave_type heave;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__heave(
    const float & _arg)
  {
    this->heave = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__msg__Command
    std::shared_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__msg__Command
    std::shared_ptr<aqua2_interfaces::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->heave != other.heave) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  aqua2_interfaces::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_
