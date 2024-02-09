// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aqua2_interfaces:srv/MissionUpdate.idl
// generated code does not contain a copyright notice

#ifndef AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__BUILDER_HPP_
#define AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__BUILDER_HPP_

#include "aqua2_interfaces/srv/detail/mission_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionUpdate_Request_mission_filename
{
public:
  Init_MissionUpdate_Request_mission_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::MissionUpdate_Request mission_filename(::aqua2_interfaces::srv::MissionUpdate_Request::_mission_filename_type arg)
  {
    msg_.mission_filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::MissionUpdate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::MissionUpdate_Request>()
{
  return aqua2_interfaces::srv::builder::Init_MissionUpdate_Request_mission_filename();
}

}  // namespace aqua2_interfaces


namespace aqua2_interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionUpdate_Response_response
{
public:
  Init_MissionUpdate_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aqua2_interfaces::srv::MissionUpdate_Response response(::aqua2_interfaces::srv::MissionUpdate_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aqua2_interfaces::srv::MissionUpdate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aqua2_interfaces::srv::MissionUpdate_Response>()
{
  return aqua2_interfaces::srv::builder::Init_MissionUpdate_Response_response();
}

}  // namespace aqua2_interfaces

#endif  // AQUA2_INTERFACES__SRV__DETAIL__MISSION_UPDATE__BUILDER_HPP_
