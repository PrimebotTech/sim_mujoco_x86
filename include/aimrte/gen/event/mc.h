// mc
// Created by code generate tools
// do not edit this manually!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>

#include <aimrte/gen/module_info/detail.h>
#include "./event_base.h"
#include "./event_type.h"

namespace aima::event::mc
{

enum class EventCode : std::uint64_t {
  Undefined         = 0x00,
  McArmLink         = 0x6303000000000064,  // 手臂链路通信状况
  McLegLink         = 0x6303000000000065,  // 腿部链路通信状况
  McWaistLink       = 0x6303000000000066,  // 腰部链路通信状况
  TorsoImuLink      = 0x6303000000000067,  // 胯部IMU链路通信状况
  ChestImuLink      = 0x6303000000000068,  // 胸腔IMU链路通信状况
  VRCtrlProcessTime = 0x63030000000003E8,  // VR摇操作算法过程时间
  RLCtrlProcessTime = 0x63030000000007D0   // RL算法过程时间
};

/********************************** 事件 McArmLink **********************************/
struct McArmLink : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> link_avg;
    std::optional<double> link_max;
    std::optional<double> mw_avg;
    std::optional<double> mw_max;
    std::optional<double> cmd_period_avg;
    std::optional<double> cmd_period_min;
    std::optional<double> cmd_period_max;
    std::optional<double> state_period_avg;
    std::optional<double> state_period_min;
    std::optional<double> state_period_max;
    std::optional<int> drop_cnt;
    std::optional<double> drop_rate;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;   // 模块ID
  static constexpr uint32_t event_id                    = 100;  // 事件ID
  static constexpr EventCode code                       = EventCode::McArmLink;
  static constexpr const char* name                     = "McArmLink";
  static constexpr const char* description              = "手臂链路通信状况";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit McArmLink(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.link_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_avg", attribute.link_avg.value()});
    }
    if (attribute.link_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_max", attribute.link_max.value()});
    }
    if (attribute.mw_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_avg", attribute.mw_avg.value()});
    }
    if (attribute.mw_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_max", attribute.mw_max.value()});
    }
    if (attribute.cmd_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_avg", attribute.cmd_period_avg.value()});
    }
    if (attribute.cmd_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_min", attribute.cmd_period_min.value()});
    }
    if (attribute.cmd_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_max", attribute.cmd_period_max.value()});
    }
    if (attribute.state_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_avg", attribute.state_period_avg.value()});
    }
    if (attribute.state_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_min", attribute.state_period_min.value()});
    }
    if (attribute.state_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_max", attribute.state_period_max.value()});
    }
    if (attribute.drop_cnt) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_cnt", attribute.drop_cnt.value()});
    }
    if (attribute.drop_rate) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_rate", attribute.drop_rate.value()});
    }
    return any;
  }
};

/********************************** 事件 McLegLink **********************************/
struct McLegLink : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> link_avg;
    std::optional<double> link_max;
    std::optional<double> mw_avg;
    std::optional<double> mw_max;
    std::optional<double> cmd_period_avg;
    std::optional<double> cmd_period_min;
    std::optional<double> cmd_period_max;
    std::optional<double> state_period_avg;
    std::optional<double> state_period_min;
    std::optional<double> state_period_max;
    std::optional<int> drop_cnt;
    std::optional<double> drop_rate;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;   // 模块ID
  static constexpr uint32_t event_id                    = 101;  // 事件ID
  static constexpr EventCode code                       = EventCode::McLegLink;
  static constexpr const char* name                     = "McLegLink";
  static constexpr const char* description              = "腿部链路通信状况";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit McLegLink(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.link_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_avg", attribute.link_avg.value()});
    }
    if (attribute.link_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_max", attribute.link_max.value()});
    }
    if (attribute.mw_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_avg", attribute.mw_avg.value()});
    }
    if (attribute.mw_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_max", attribute.mw_max.value()});
    }
    if (attribute.cmd_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_avg", attribute.cmd_period_avg.value()});
    }
    if (attribute.cmd_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_min", attribute.cmd_period_min.value()});
    }
    if (attribute.cmd_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_max", attribute.cmd_period_max.value()});
    }
    if (attribute.state_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_avg", attribute.state_period_avg.value()});
    }
    if (attribute.state_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_min", attribute.state_period_min.value()});
    }
    if (attribute.state_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_max", attribute.state_period_max.value()});
    }
    if (attribute.drop_cnt) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_cnt", attribute.drop_cnt.value()});
    }
    if (attribute.drop_rate) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_rate", attribute.drop_rate.value()});
    }
    return any;
  }
};

/********************************** 事件 McWaistLink **********************************/
struct McWaistLink : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> link_avg;
    std::optional<double> link_max;
    std::optional<double> mw_avg;
    std::optional<double> mw_max;
    std::optional<double> cmd_period_avg;
    std::optional<double> cmd_period_min;
    std::optional<double> cmd_period_max;
    std::optional<double> state_period_avg;
    std::optional<double> state_period_min;
    std::optional<double> state_period_max;
    std::optional<int> drop_cnt;
    std::optional<double> drop_rate;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;   // 模块ID
  static constexpr uint32_t event_id                    = 102;  // 事件ID
  static constexpr EventCode code                       = EventCode::McWaistLink;
  static constexpr const char* name                     = "McWaistLink";
  static constexpr const char* description              = "腰部链路通信状况";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit McWaistLink(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.link_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_avg", attribute.link_avg.value()});
    }
    if (attribute.link_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"link_max", attribute.link_max.value()});
    }
    if (attribute.mw_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_avg", attribute.mw_avg.value()});
    }
    if (attribute.mw_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_max", attribute.mw_max.value()});
    }
    if (attribute.cmd_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_avg", attribute.cmd_period_avg.value()});
    }
    if (attribute.cmd_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_min", attribute.cmd_period_min.value()});
    }
    if (attribute.cmd_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_max", attribute.cmd_period_max.value()});
    }
    if (attribute.state_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_avg", attribute.state_period_avg.value()});
    }
    if (attribute.state_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_min", attribute.state_period_min.value()});
    }
    if (attribute.state_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_max", attribute.state_period_max.value()});
    }
    if (attribute.drop_cnt) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_cnt", attribute.drop_cnt.value()});
    }
    if (attribute.drop_rate) {
      any.push_back(aima::event::EventBase::AnyAttribute{"drop_rate", attribute.drop_rate.value()});
    }
    return any;
  }
};

/********************************** 事件 TorsoImuLink **********************************/
struct TorsoImuLink : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> mw_avg;
    std::optional<double> mw_max;
    std::optional<double> state_period_avg;
    std::optional<double> state_period_min;
    std::optional<double> state_period_max;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;   // 模块ID
  static constexpr uint32_t event_id                    = 103;  // 事件ID
  static constexpr EventCode code                       = EventCode::TorsoImuLink;
  static constexpr const char* name                     = "TorsoImuLink";
  static constexpr const char* description              = "胯部IMU链路通信状况";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit TorsoImuLink(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.mw_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_avg", attribute.mw_avg.value()});
    }
    if (attribute.mw_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_max", attribute.mw_max.value()});
    }
    if (attribute.state_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_avg", attribute.state_period_avg.value()});
    }
    if (attribute.state_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_min", attribute.state_period_min.value()});
    }
    if (attribute.state_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_max", attribute.state_period_max.value()});
    }
    return any;
  }
};

/********************************** 事件 ChestImuLink **********************************/
struct ChestImuLink : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> mw_avg;
    std::optional<double> mw_max;
    std::optional<double> state_period_avg;
    std::optional<double> state_period_min;
    std::optional<double> state_period_max;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;   // 模块ID
  static constexpr uint32_t event_id                    = 104;  // 事件ID
  static constexpr EventCode code                       = EventCode::ChestImuLink;
  static constexpr const char* name                     = "ChestImuLink";
  static constexpr const char* description              = "胸腔IMU链路通信状况";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ChestImuLink(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.mw_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_avg", attribute.mw_avg.value()});
    }
    if (attribute.mw_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"mw_max", attribute.mw_max.value()});
    }
    if (attribute.state_period_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_avg", attribute.state_period_avg.value()});
    }
    if (attribute.state_period_min) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_min", attribute.state_period_min.value()});
    }
    if (attribute.state_period_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_max", attribute.state_period_max.value()});
    }
    return any;
  }
};

/********************************** 事件 VRCtrlProcessTime **********************************/
struct VRCtrlProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> exe_time_max;
    std::optional<double> exe_time_avg;
    std::optional<int> exe_timeout_times;
    std::optional<double> period_time_max;
    std::optional<double> period_time_avg;
    std::optional<int> period_timeout_times;
    std::optional<double> solver_time_max;
    std::optional<double> solver_time_avg;
    std::optional<int> solver_timeout_times;
    std::optional<int> joint_error_state;
    std::optional<int> joint_error_times;
    std::optional<int> teleop_error_state;
    std::optional<int> teleop_error_times;
    std::optional<int> running_state;
    std::optional<int> count;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;   // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;   // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;    // 模块ID
  static constexpr uint32_t event_id                    = 1000;  // 事件ID
  static constexpr EventCode code                       = EventCode::VRCtrlProcessTime;
  static constexpr const char* name                     = "VRCtrlProcessTime";
  static constexpr const char* description              = "VR摇操作算法过程时间";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit VRCtrlProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.exe_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"exe_time_max", attribute.exe_time_max.value()});
    }
    if (attribute.exe_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"exe_time_avg", attribute.exe_time_avg.value()});
    }
    if (attribute.exe_timeout_times) {
      any.push_back(aima::event::EventBase::AnyAttribute{"exe_timeout_times", attribute.exe_timeout_times.value()});
    }
    if (attribute.period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"period_time_max", attribute.period_time_max.value()});
    }
    if (attribute.period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"period_time_avg", attribute.period_time_avg.value()});
    }
    if (attribute.period_timeout_times) {
      any.push_back(aima::event::EventBase::AnyAttribute{"period_timeout_times", attribute.period_timeout_times.value()});
    }
    if (attribute.solver_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"solver_time_max", attribute.solver_time_max.value()});
    }
    if (attribute.solver_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"solver_time_avg", attribute.solver_time_avg.value()});
    }
    if (attribute.solver_timeout_times) {
      any.push_back(aima::event::EventBase::AnyAttribute{"solver_timeout_times", attribute.solver_timeout_times.value()});
    }
    if (attribute.joint_error_state) {
      any.push_back(aima::event::EventBase::AnyAttribute{"joint_error_state", attribute.joint_error_state.value()});
    }
    if (attribute.joint_error_times) {
      any.push_back(aima::event::EventBase::AnyAttribute{"joint_error_times", attribute.joint_error_times.value()});
    }
    if (attribute.teleop_error_state) {
      any.push_back(aima::event::EventBase::AnyAttribute{"teleop_error_state", attribute.teleop_error_state.value()});
    }
    if (attribute.teleop_error_times) {
      any.push_back(aima::event::EventBase::AnyAttribute{"teleop_error_times", attribute.teleop_error_times.value()});
    }
    if (attribute.running_state) {
      any.push_back(aima::event::EventBase::AnyAttribute{"running_state", attribute.running_state.value()});
    }
    if (attribute.count) {
      any.push_back(aima::event::EventBase::AnyAttribute{"count", attribute.count.value()});
    }
    return any;
  }
};

/********************************** 事件 RLCtrlProcessTime **********************************/
struct RLCtrlProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> exe_time_max;
    std::optional<double> exe_time_avg;
    std::optional<double> predict_time_max;
    std::optional<double> predict_time_avg;
    std::optional<double> period_time_max;
    std::optional<double> period_time_avg;
    std::optional<int> index;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;   // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;   // 上报频率 HZ
  static constexpr uint8_t module_id                    = 99;    // 模块ID
  static constexpr uint32_t event_id                    = 2000;  // 事件ID
  static constexpr EventCode code                       = EventCode::RLCtrlProcessTime;
  static constexpr const char* name                     = "RLCtrlProcessTime";
  static constexpr const char* description              = "RL算法过程时间";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit RLCtrlProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
  {
    attribute = attr;
  }

  aima::event::EventBase::Common GetCommon() const override
  {
    return {
      .detect_frequency = detect_frequency,
      .report_frequency = report_frequency,
      .module_id        = module_id,
      .event_id         = event_id,
      .code             = (uint64_t)code,
      .name             = name,
      .description      = description,
      .type             = type,
      .status           = status,
      .timestamp        = timestamp};
  }

  std::vector<aima::event::EventBase::AnyAttribute> GetAnyAttribute() const override
  {
    std::vector<aima::event::EventBase::AnyAttribute> any = attribute.any;
    if (attribute.exe_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"exe_time_max", attribute.exe_time_max.value()});
    }
    if (attribute.exe_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"exe_time_avg", attribute.exe_time_avg.value()});
    }
    if (attribute.predict_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"predict_time_max", attribute.predict_time_max.value()});
    }
    if (attribute.predict_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"predict_time_avg", attribute.predict_time_avg.value()});
    }
    if (attribute.period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"period_time_max", attribute.period_time_max.value()});
    }
    if (attribute.period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"period_time_avg", attribute.period_time_avg.value()});
    }
    if (attribute.index) {
      any.push_back(aima::event::EventBase::AnyAttribute{"index", attribute.index.value()});
    }
    return any;
  }
};

}  // namespace aima::event::mc