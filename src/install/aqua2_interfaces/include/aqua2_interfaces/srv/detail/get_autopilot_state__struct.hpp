// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_interfaces:srv/GetAutopilotState.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__STRUCT_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Request __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Request __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAutopilotState_Request_
{
  using Type = GetAutopilotState_Request_<ContainerAllocator>;

  explicit GetAutopilotState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetAutopilotState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Request
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Request
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAutopilotState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAutopilotState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAutopilotState_Request_

// alias to use template instance with default allocator
using GetAutopilotState_Request =
  aqua2_interfaces::srv::GetAutopilotState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_interfaces


#ifndef _WIN32
# define DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Response __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Response __declspec(deprecated)
#endif

namespace aqua2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAutopilotState_Response_
{
  using Type = GetAutopilotState_Response_<ContainerAllocator>;

  explicit GetAutopilotState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autopilot_mode = 0l;
      this->target_depth = 0.0f;
      this->target_roll = 0.0f;
      this->target_pitch = 0.0f;
      this->target_yaw = 0.0f;
    }
  }

  explicit GetAutopilotState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autopilot_mode = 0l;
      this->target_depth = 0.0f;
      this->target_roll = 0.0f;
      this->target_pitch = 0.0f;
      this->target_yaw = 0.0f;
    }
  }

  // field types and members
  using _autopilot_mode_type =
    int32_t;
  _autopilot_mode_type autopilot_mode;
  using _target_depth_type =
    float;
  _target_depth_type target_depth;
  using _target_roll_type =
    float;
  _target_roll_type target_roll;
  using _target_pitch_type =
    float;
  _target_pitch_type target_pitch;
  using _target_yaw_type =
    float;
  _target_yaw_type target_yaw;

  // setters for named parameter idiom
  Type & set__autopilot_mode(
    const int32_t & _arg)
  {
    this->autopilot_mode = _arg;
    return *this;
  }
  Type & set__target_depth(
    const float & _arg)
  {
    this->target_depth = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Response
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_interfaces__srv__GetAutopilotState_Response
    std::shared_ptr<aqua2_interfaces::srv::GetAutopilotState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAutopilotState_Response_ & other) const
  {
    if (this->autopilot_mode != other.autopilot_mode) {
      return false;
    }
    if (this->target_depth != other.target_depth) {
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
    return true;
  }
  bool operator!=(const GetAutopilotState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAutopilotState_Response_

// alias to use template instance with default allocator
using GetAutopilotState_Response =
  aqua2_interfaces::srv::GetAutopilotState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_interfaces

namespace aqua2_interfaces
{

namespace srv
{

struct GetAutopilotState
{
  using Request = aqua2_interfaces::srv::GetAutopilotState_Request;
  using Response = aqua2_interfaces::srv::GetAutopilotState_Response;
};

}  // namespace srv

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__GET_AUTOPILOT_STATE__STRUCT_HPP_
