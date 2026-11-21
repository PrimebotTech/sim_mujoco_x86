// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/MusicInfo.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/music_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_MusicInfo_source
{
public:
  explicit Init_MusicInfo_source(::aimdk_msgs::msg::MusicInfo & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::MusicInfo source(::aimdk_msgs::msg::MusicInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicInfo msg_;
};

class Init_MusicInfo_duration_ms
{
public:
  explicit Init_MusicInfo_duration_ms(::aimdk_msgs::msg::MusicInfo & msg)
  : msg_(msg)
  {}
  Init_MusicInfo_source duration_ms(::aimdk_msgs::msg::MusicInfo::_duration_ms_type arg)
  {
    msg_.duration_ms = std::move(arg);
    return Init_MusicInfo_source(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicInfo msg_;
};

class Init_MusicInfo_artist
{
public:
  explicit Init_MusicInfo_artist(::aimdk_msgs::msg::MusicInfo & msg)
  : msg_(msg)
  {}
  Init_MusicInfo_duration_ms artist(::aimdk_msgs::msg::MusicInfo::_artist_type arg)
  {
    msg_.artist = std::move(arg);
    return Init_MusicInfo_duration_ms(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicInfo msg_;
};

class Init_MusicInfo_name
{
public:
  explicit Init_MusicInfo_name(::aimdk_msgs::msg::MusicInfo & msg)
  : msg_(msg)
  {}
  Init_MusicInfo_artist name(::aimdk_msgs::msg::MusicInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MusicInfo_artist(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicInfo msg_;
};

class Init_MusicInfo_id
{
public:
  Init_MusicInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MusicInfo_name id(::aimdk_msgs::msg::MusicInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MusicInfo_name(msg_);
  }

private:
  ::aimdk_msgs::msg::MusicInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::MusicInfo>()
{
  return aimdk_msgs::msg::builder::Init_MusicInfo_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MUSIC_INFO__BUILDER_HPP_
