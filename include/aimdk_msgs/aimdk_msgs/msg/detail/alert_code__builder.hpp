// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/alert_code__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertCode_nlg_scene_id
{
public:
  explicit Init_AlertCode_nlg_scene_id(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::AlertCode nlg_scene_id(::aimdk_msgs::msg::AlertCode::_nlg_scene_id_type arg)
  {
    msg_.nlg_scene_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_disabled_capabilities
{
public:
  explicit Init_AlertCode_disabled_capabilities(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_nlg_scene_id disabled_capabilities(::aimdk_msgs::msg::AlertCode::_disabled_capabilities_type arg)
  {
    msg_.disabled_capabilities = std::move(arg);
    return Init_AlertCode_nlg_scene_id(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_audio_strategy
{
public:
  explicit Init_AlertCode_audio_strategy(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_disabled_capabilities audio_strategy(::aimdk_msgs::msg::AlertCode::_audio_strategy_type arg)
  {
    msg_.audio_strategy = std::move(arg);
    return Init_AlertCode_disabled_capabilities(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_diag_name
{
public:
  explicit Init_AlertCode_diag_name(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_audio_strategy diag_name(::aimdk_msgs::msg::AlertCode::_diag_name_type arg)
  {
    msg_.diag_name = std::move(arg);
    return Init_AlertCode_audio_strategy(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_capability_limit
{
public:
  explicit Init_AlertCode_capability_limit(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_diag_name capability_limit(::aimdk_msgs::msg::AlertCode::_capability_limit_type arg)
  {
    msg_.capability_limit = std::move(arg);
    return Init_AlertCode_diag_name(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_breakdown_msg
{
public:
  explicit Init_AlertCode_breakdown_msg(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_capability_limit breakdown_msg(::aimdk_msgs::msg::AlertCode::_breakdown_msg_type arg)
  {
    msg_.breakdown_msg = std::move(arg);
    return Init_AlertCode_capability_limit(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_app_show_id
{
public:
  explicit Init_AlertCode_app_show_id(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_breakdown_msg app_show_id(::aimdk_msgs::msg::AlertCode::_app_show_id_type arg)
  {
    msg_.app_show_id = std::move(arg);
    return Init_AlertCode_breakdown_msg(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_post_process
{
public:
  explicit Init_AlertCode_post_process(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_app_show_id post_process(::aimdk_msgs::msg::AlertCode::_post_process_type arg)
  {
    msg_.post_process = std::move(arg);
    return Init_AlertCode_app_show_id(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_emotion_id
{
public:
  explicit Init_AlertCode_emotion_id(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_post_process emotion_id(::aimdk_msgs::msg::AlertCode::_emotion_id_type arg)
  {
    msg_.emotion_id = std::move(arg);
    return Init_AlertCode_post_process(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_light_msg
{
public:
  explicit Init_AlertCode_light_msg(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_emotion_id light_msg(::aimdk_msgs::msg::AlertCode::_light_msg_type arg)
  {
    msg_.light_msg = std::move(arg);
    return Init_AlertCode_emotion_id(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_is_audio_cycle
{
public:
  explicit Init_AlertCode_is_audio_cycle(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_light_msg is_audio_cycle(::aimdk_msgs::msg::AlertCode::_is_audio_cycle_type arg)
  {
    msg_.is_audio_cycle = std::move(arg);
    return Init_AlertCode_light_msg(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_text
{
public:
  explicit Init_AlertCode_text(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_is_audio_cycle text(::aimdk_msgs::msg::AlertCode::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_AlertCode_is_audio_cycle(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_level
{
public:
  explicit Init_AlertCode_level(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_text level(::aimdk_msgs::msg::AlertCode::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_AlertCode_text(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_alert_event_type
{
public:
  explicit Init_AlertCode_alert_event_type(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_level alert_event_type(::aimdk_msgs::msg::AlertCode::_alert_event_type_type arg)
  {
    msg_.alert_event_type = std::move(arg);
    return Init_AlertCode_level(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_code
{
public:
  explicit Init_AlertCode_code(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_alert_event_type code(::aimdk_msgs::msg::AlertCode::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_AlertCode_alert_event_type(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_appeared_timestamp
{
public:
  explicit Init_AlertCode_appeared_timestamp(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_code appeared_timestamp(::aimdk_msgs::msg::AlertCode::_appeared_timestamp_type arg)
  {
    msg_.appeared_timestamp = std::move(arg);
    return Init_AlertCode_code(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_timestamp
{
public:
  explicit Init_AlertCode_timestamp(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_appeared_timestamp timestamp(::aimdk_msgs::msg::AlertCode::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AlertCode_appeared_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_uuid
{
public:
  Init_AlertCode_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertCode_timestamp uuid(::aimdk_msgs::msg::AlertCode::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_AlertCode_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::AlertCode>()
{
  return aimdk_msgs::msg::builder::Init_AlertCode_uuid();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_
