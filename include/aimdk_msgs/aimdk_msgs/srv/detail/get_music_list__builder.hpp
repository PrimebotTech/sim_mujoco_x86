// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMusicList.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_music_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMusicList_Request_request
{
public:
  Init_GetMusicList_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMusicList_Request request(::aimdk_msgs::srv::GetMusicList_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMusicList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMusicList_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMusicList_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMusicList_Response_response
{
public:
  explicit Init_GetMusicList_Response_response(::aimdk_msgs::srv::GetMusicList_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMusicList_Response response(::aimdk_msgs::srv::GetMusicList_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMusicList_Response msg_;
};

class Init_GetMusicList_Response_current_index
{
public:
  explicit Init_GetMusicList_Response_current_index(::aimdk_msgs::srv::GetMusicList_Response & msg)
  : msg_(msg)
  {}
  Init_GetMusicList_Response_response current_index(::aimdk_msgs::srv::GetMusicList_Response::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return Init_GetMusicList_Response_response(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMusicList_Response msg_;
};

class Init_GetMusicList_Response_music_list
{
public:
  Init_GetMusicList_Response_music_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMusicList_Response_current_index music_list(::aimdk_msgs::srv::GetMusicList_Response::_music_list_type arg)
  {
    msg_.music_list = std::move(arg);
    return Init_GetMusicList_Response_current_index(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMusicList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMusicList_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMusicList_Response_music_list();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MUSIC_LIST__BUILDER_HPP_
