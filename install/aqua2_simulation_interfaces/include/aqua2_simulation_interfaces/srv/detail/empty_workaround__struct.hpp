// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aqua2_simulation_interfaces:srv/EmptyWorkaround.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__STRUCT_HPP_
#define AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Request __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Request __declspec(deprecated)
#endif

namespace aqua2_simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmptyWorkaround_Request_
{
  using Type = EmptyWorkaround_Request_<ContainerAllocator>;

  explicit EmptyWorkaround_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EmptyWorkaround_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Request
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Request
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmptyWorkaround_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmptyWorkaround_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmptyWorkaround_Request_

// alias to use template instance with default allocator
using EmptyWorkaround_Request =
  aqua2_simulation_interfaces::srv::EmptyWorkaround_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_simulation_interfaces


#ifndef _WIN32
# define DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Response __attribute__((deprecated))
#else
# define DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Response __declspec(deprecated)
#endif

namespace aqua2_simulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmptyWorkaround_Response_
{
  using Type = EmptyWorkaround_Response_<ContainerAllocator>;

  explicit EmptyWorkaround_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  explicit EmptyWorkaround_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  // field types and members
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Response
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aqua2_simulation_interfaces__srv__EmptyWorkaround_Response
    std::shared_ptr<aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmptyWorkaround_Response_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmptyWorkaround_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmptyWorkaround_Response_

// alias to use template instance with default allocator
using EmptyWorkaround_Response =
  aqua2_simulation_interfaces::srv::EmptyWorkaround_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aqua2_simulation_interfaces

namespace aqua2_simulation_interfaces
{

namespace srv
{

struct EmptyWorkaround
{
  using Request = aqua2_simulation_interfaces::srv::EmptyWorkaround_Request;
  using Response = aqua2_simulation_interfaces::srv::EmptyWorkaround_Response;
};

}  // namespace srv

}  // namespace aqua2_simulation_interfaces

#endif  // AQUA2_SIMULATION_INTERFACES__SRV__DETAIL__EMPTY_WORKAROUND__STRUCT_HPP_
