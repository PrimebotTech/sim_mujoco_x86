// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PmuStateArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_STATE_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pmu_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PmuStateArray_pmu
{
public:
  explicit Init_PmuStateArray_pmu(::aimdk_msgs::msg::PmuStateArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PmuStateArray pmu(::aimdk_msgs::msg::PmuStateArray::_pmu_type arg)
  {
    msg_.pmu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuStateArray msg_;
};

class Init_PmuStateArray_header
{
public:
  Init_PmuStateArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PmuStateArray_pmu header(::aimdk_msgs::msg::PmuStateArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PmuStateArray_pmu(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PmuStateArray>()
{
  return aimdk_msgs::msg::builder::Init_PmuStateArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_STATE_ARRAY__BUILDER_HPP_
