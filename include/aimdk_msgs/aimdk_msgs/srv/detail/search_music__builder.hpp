// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/SearchMusic.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/search_music__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SearchMusic_Request_library_mode
{
public:
  explicit Init_SearchMusic_Request_library_mode(::aimdk_msgs::srv::SearchMusic_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SearchMusic_Request library_mode(::aimdk_msgs::srv::SearchMusic_Request::_library_mode_type arg)
  {
    msg_.library_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Request msg_;
};

class Init_SearchMusic_Request_size
{
public:
  explicit Init_SearchMusic_Request_size(::aimdk_msgs::srv::SearchMusic_Request & msg)
  : msg_(msg)
  {}
  Init_SearchMusic_Request_library_mode size(::aimdk_msgs::srv::SearchMusic_Request::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_SearchMusic_Request_library_mode(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Request msg_;
};

class Init_SearchMusic_Request_sp
{
public:
  explicit Init_SearchMusic_Request_sp(::aimdk_msgs::srv::SearchMusic_Request & msg)
  : msg_(msg)
  {}
  Init_SearchMusic_Request_size sp(::aimdk_msgs::srv::SearchMusic_Request::_sp_type arg)
  {
    msg_.sp = std::move(arg);
    return Init_SearchMusic_Request_size(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Request msg_;
};

class Init_SearchMusic_Request_query
{
public:
  explicit Init_SearchMusic_Request_query(::aimdk_msgs::srv::SearchMusic_Request & msg)
  : msg_(msg)
  {}
  Init_SearchMusic_Request_sp query(::aimdk_msgs::srv::SearchMusic_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return Init_SearchMusic_Request_sp(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Request msg_;
};

class Init_SearchMusic_Request_request
{
public:
  Init_SearchMusic_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchMusic_Request_query request(::aimdk_msgs::srv::SearchMusic_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SearchMusic_Request_query(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SearchMusic_Request>()
{
  return aimdk_msgs::srv::builder::Init_SearchMusic_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_SearchMusic_Response_search_command_id
{
public:
  explicit Init_SearchMusic_Response_search_command_id(::aimdk_msgs::srv::SearchMusic_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::SearchMusic_Response search_command_id(::aimdk_msgs::srv::SearchMusic_Response::_search_command_id_type arg)
  {
    msg_.search_command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Response msg_;
};

class Init_SearchMusic_Response_response
{
public:
  Init_SearchMusic_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchMusic_Response_search_command_id response(::aimdk_msgs::srv::SearchMusic_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SearchMusic_Response_search_command_id(msg_);
  }

private:
  ::aimdk_msgs::srv::SearchMusic_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::SearchMusic_Response>()
{
  return aimdk_msgs::srv::builder::Init_SearchMusic_Response_response();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__SEARCH_MUSIC__BUILDER_HPP_
