// hal
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

namespace aima::event::hal
{

enum class EventCode : std::uint64_t {
  Undefined                  = 0x00,
  TestCounter1               = 0x5902000000000003,  // 嵌入式事件1
  HalEcatPDOProcessTime      = 0x5903000000000001,  // ECAT PDO过程时间
  HeadTopicCmdProcessTime    = 0x5903000000000002,  // Ecat 命令过程时间（头部）
  ArmTopicCmdProcessTime     = 0x5903000000000003,  // Ecat 命令过程时间（上肢部）
  HandTopicCmdProcessTime    = 0x5903000000000004,  // Ecat 命令过程时间（手部）
  WaistTopicCmdProcessTime   = 0x5903000000000005,  // Ecat 命令过程时间（腰部）
  LegTopicCmdProcessTime     = 0x5903000000000006,  // Ecat 命令过程时间（腿部）
  HeadTopicStateProcessTime  = 0x5903000000000007,  // Ecat 状态过程时间（头部）
  ArmTopicStateProcessTime   = 0x5903000000000008,  // Ecat 状态过程时间（上肢部）
  HandTopicStateProcessTime  = 0x5903000000000009,  // Ecat 状态过程时间（手部）
  WaistTopicStateProcessTime = 0x590300000000000A,  // Ecat 状态过程时间（腰部）
  LegTopicStateProcessTime   = 0x590300000000000B,  // Ecat 状态过程时间（腿部）
  ImuChestEvent              = 0x590300000000000C,  // Imu过程数据记录(胸腔)
  ImuTorsoEvent              = 0x590300000000000D,  // Imu过程数据记录(髋部)
  ImuHeadEvent               = 0x590300000000000E   // Imu过程数据过程时间(头部)
};

/********************************** 事件 TestCounter1 **********************************/
struct TestCounter1 : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> CounterV1;
    std::optional<double> CounterV2;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 0.1;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 3;    // 事件ID
  static constexpr EventCode code                       = EventCode::TestCounter1;
  static constexpr const char* name                     = "TestCounter1";
  static constexpr const char* description              = "嵌入式事件1";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Counter;

  // 构造函数可传入属性
  explicit TestCounter1(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.CounterV1) {
      any.push_back(aima::event::EventBase::AnyAttribute{"CounterV1", attribute.CounterV1.value()});
    }
    if (attribute.CounterV2) {
      any.push_back(aima::event::EventBase::AnyAttribute{"CounterV2", attribute.CounterV2.value()});
    }
    return any;
  }
};

/********************************** 事件 HalEcatPDOProcessTime **********************************/
struct HalEcatPDOProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> ecat_cmd_trans_time_cur;
    std::optional<double> ecat_cmd_trans_time_max;
    std::optional<double> ecat_cmd_trans_time_avg;
    std::optional<double> ecat_pdo_trans_time_cur;
    std::optional<double> ecat_pdo_trans_time_max;
    std::optional<double> ecat_pdo_trans_time_avg;
    std::optional<double> ecat_pdo_period_time_cur;
    std::optional<double> ecat_pdo_period_time_max;
    std::optional<double> ecat_pdo_period_time_avg;
    std::optional<int> index;
    std::optional<int> send_seq;
    std::optional<int> recv_seq;
    std::optional<double> seq_loss_rate;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 1;    // 事件ID
  static constexpr EventCode code                       = EventCode::HalEcatPDOProcessTime;
  static constexpr const char* name                     = "HalEcatPDOProcessTime";
  static constexpr const char* description              = "ECAT PDO过程时间";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit HalEcatPDOProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.ecat_cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_cmd_trans_time_cur", attribute.ecat_cmd_trans_time_cur.value()});
    }
    if (attribute.ecat_cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_cmd_trans_time_max", attribute.ecat_cmd_trans_time_max.value()});
    }
    if (attribute.ecat_cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_cmd_trans_time_avg", attribute.ecat_cmd_trans_time_avg.value()});
    }
    if (attribute.ecat_pdo_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_trans_time_cur", attribute.ecat_pdo_trans_time_cur.value()});
    }
    if (attribute.ecat_pdo_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_trans_time_max", attribute.ecat_pdo_trans_time_max.value()});
    }
    if (attribute.ecat_pdo_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_trans_time_avg", attribute.ecat_pdo_trans_time_avg.value()});
    }
    if (attribute.ecat_pdo_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_period_time_cur", attribute.ecat_pdo_period_time_cur.value()});
    }
    if (attribute.ecat_pdo_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_period_time_max", attribute.ecat_pdo_period_time_max.value()});
    }
    if (attribute.ecat_pdo_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"ecat_pdo_period_time_avg", attribute.ecat_pdo_period_time_avg.value()});
    }
    if (attribute.index) {
      any.push_back(aima::event::EventBase::AnyAttribute{"index", attribute.index.value()});
    }
    if (attribute.send_seq) {
      any.push_back(aima::event::EventBase::AnyAttribute{"send_seq", attribute.send_seq.value()});
    }
    if (attribute.recv_seq) {
      any.push_back(aima::event::EventBase::AnyAttribute{"recv_seq", attribute.recv_seq.value()});
    }
    if (attribute.seq_loss_rate) {
      any.push_back(aima::event::EventBase::AnyAttribute{"seq_loss_rate", attribute.seq_loss_rate.value()});
    }
    return any;
  }
};

/********************************** 事件 HeadTopicCmdProcessTime **********************************/
struct HeadTopicCmdProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> cmd_period_time_cur;
    std::optional<double> cmd_period_time_max;
    std::optional<double> cmd_period_time_avg;
    std::optional<double> cmd_trans_time_cur;
    std::optional<double> cmd_trans_time_max;
    std::optional<double> cmd_trans_time_avg;
    std::optional<double> cmd_exec_time_cur;
    std::optional<double> cmd_exec_time_max;
    std::optional<double> cmd_exec_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 2;    // 事件ID
  static constexpr EventCode code                       = EventCode::HeadTopicCmdProcessTime;
  static constexpr const char* name                     = "HeadTopicCmdProcessTime";
  static constexpr const char* description              = "Ecat 命令过程时间（头部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit HeadTopicCmdProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.cmd_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_cur", attribute.cmd_period_time_cur.value()});
    }
    if (attribute.cmd_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_max", attribute.cmd_period_time_max.value()});
    }
    if (attribute.cmd_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_avg", attribute.cmd_period_time_avg.value()});
    }
    if (attribute.cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_cur", attribute.cmd_trans_time_cur.value()});
    }
    if (attribute.cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_max", attribute.cmd_trans_time_max.value()});
    }
    if (attribute.cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_avg", attribute.cmd_trans_time_avg.value()});
    }
    if (attribute.cmd_exec_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_cur", attribute.cmd_exec_time_cur.value()});
    }
    if (attribute.cmd_exec_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_max", attribute.cmd_exec_time_max.value()});
    }
    if (attribute.cmd_exec_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_avg", attribute.cmd_exec_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 ArmTopicCmdProcessTime **********************************/
struct ArmTopicCmdProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> cmd_period_time_cur;
    std::optional<double> cmd_period_time_max;
    std::optional<double> cmd_period_time_avg;
    std::optional<double> cmd_trans_time_cur;
    std::optional<double> cmd_trans_time_max;
    std::optional<double> cmd_trans_time_avg;
    std::optional<double> cmd_exec_time_cur;
    std::optional<double> cmd_exec_time_max;
    std::optional<double> cmd_exec_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 3;    // 事件ID
  static constexpr EventCode code                       = EventCode::ArmTopicCmdProcessTime;
  static constexpr const char* name                     = "ArmTopicCmdProcessTime";
  static constexpr const char* description              = "Ecat 命令过程时间（上肢部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ArmTopicCmdProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.cmd_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_cur", attribute.cmd_period_time_cur.value()});
    }
    if (attribute.cmd_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_max", attribute.cmd_period_time_max.value()});
    }
    if (attribute.cmd_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_avg", attribute.cmd_period_time_avg.value()});
    }
    if (attribute.cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_cur", attribute.cmd_trans_time_cur.value()});
    }
    if (attribute.cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_max", attribute.cmd_trans_time_max.value()});
    }
    if (attribute.cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_avg", attribute.cmd_trans_time_avg.value()});
    }
    if (attribute.cmd_exec_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_cur", attribute.cmd_exec_time_cur.value()});
    }
    if (attribute.cmd_exec_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_max", attribute.cmd_exec_time_max.value()});
    }
    if (attribute.cmd_exec_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_avg", attribute.cmd_exec_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 HandTopicCmdProcessTime **********************************/
struct HandTopicCmdProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> cmd_period_time_cur;
    std::optional<double> cmd_period_time_max;
    std::optional<double> cmd_period_time_avg;
    std::optional<double> cmd_trans_time_cur;
    std::optional<double> cmd_trans_time_max;
    std::optional<double> cmd_trans_time_avg;
    std::optional<double> cmd_exec_time_cur;
    std::optional<double> cmd_exec_time_max;
    std::optional<double> cmd_exec_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 4;    // 事件ID
  static constexpr EventCode code                       = EventCode::HandTopicCmdProcessTime;
  static constexpr const char* name                     = "HandTopicCmdProcessTime";
  static constexpr const char* description              = "Ecat 命令过程时间（手部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit HandTopicCmdProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.cmd_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_cur", attribute.cmd_period_time_cur.value()});
    }
    if (attribute.cmd_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_max", attribute.cmd_period_time_max.value()});
    }
    if (attribute.cmd_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_avg", attribute.cmd_period_time_avg.value()});
    }
    if (attribute.cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_cur", attribute.cmd_trans_time_cur.value()});
    }
    if (attribute.cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_max", attribute.cmd_trans_time_max.value()});
    }
    if (attribute.cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_avg", attribute.cmd_trans_time_avg.value()});
    }
    if (attribute.cmd_exec_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_cur", attribute.cmd_exec_time_cur.value()});
    }
    if (attribute.cmd_exec_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_max", attribute.cmd_exec_time_max.value()});
    }
    if (attribute.cmd_exec_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_avg", attribute.cmd_exec_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 WaistTopicCmdProcessTime **********************************/
struct WaistTopicCmdProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> cmd_period_time_cur;
    std::optional<double> cmd_period_time_max;
    std::optional<double> cmd_period_time_avg;
    std::optional<double> cmd_trans_time_cur;
    std::optional<double> cmd_trans_time_max;
    std::optional<double> cmd_trans_time_avg;
    std::optional<double> cmd_exec_time_cur;
    std::optional<double> cmd_exec_time_max;
    std::optional<double> cmd_exec_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 5;    // 事件ID
  static constexpr EventCode code                       = EventCode::WaistTopicCmdProcessTime;
  static constexpr const char* name                     = "WaistTopicCmdProcessTime";
  static constexpr const char* description              = "Ecat 命令过程时间（腰部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit WaistTopicCmdProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.cmd_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_cur", attribute.cmd_period_time_cur.value()});
    }
    if (attribute.cmd_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_max", attribute.cmd_period_time_max.value()});
    }
    if (attribute.cmd_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_avg", attribute.cmd_period_time_avg.value()});
    }
    if (attribute.cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_cur", attribute.cmd_trans_time_cur.value()});
    }
    if (attribute.cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_max", attribute.cmd_trans_time_max.value()});
    }
    if (attribute.cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_avg", attribute.cmd_trans_time_avg.value()});
    }
    if (attribute.cmd_exec_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_cur", attribute.cmd_exec_time_cur.value()});
    }
    if (attribute.cmd_exec_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_max", attribute.cmd_exec_time_max.value()});
    }
    if (attribute.cmd_exec_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_avg", attribute.cmd_exec_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 LegTopicCmdProcessTime **********************************/
struct LegTopicCmdProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> cmd_period_time_cur;
    std::optional<double> cmd_period_time_max;
    std::optional<double> cmd_period_time_avg;
    std::optional<double> cmd_trans_time_cur;
    std::optional<double> cmd_trans_time_max;
    std::optional<double> cmd_trans_time_avg;
    std::optional<double> cmd_exec_time_cur;
    std::optional<double> cmd_exec_time_max;
    std::optional<double> cmd_exec_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 6;    // 事件ID
  static constexpr EventCode code                       = EventCode::LegTopicCmdProcessTime;
  static constexpr const char* name                     = "LegTopicCmdProcessTime";
  static constexpr const char* description              = "Ecat 命令过程时间（腿部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit LegTopicCmdProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.cmd_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_cur", attribute.cmd_period_time_cur.value()});
    }
    if (attribute.cmd_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_max", attribute.cmd_period_time_max.value()});
    }
    if (attribute.cmd_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_period_time_avg", attribute.cmd_period_time_avg.value()});
    }
    if (attribute.cmd_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_cur", attribute.cmd_trans_time_cur.value()});
    }
    if (attribute.cmd_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_max", attribute.cmd_trans_time_max.value()});
    }
    if (attribute.cmd_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_trans_time_avg", attribute.cmd_trans_time_avg.value()});
    }
    if (attribute.cmd_exec_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_cur", attribute.cmd_exec_time_cur.value()});
    }
    if (attribute.cmd_exec_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_max", attribute.cmd_exec_time_max.value()});
    }
    if (attribute.cmd_exec_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"cmd_exec_time_avg", attribute.cmd_exec_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 HeadTopicStateProcessTime **********************************/
struct HeadTopicStateProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> state_period_time_cur;
    std::optional<double> state_period_time_max;
    std::optional<double> state_period_time_avg;
    std::optional<double> state_trans_time_cur;
    std::optional<double> state_trans_time_max;
    std::optional<double> state_trans_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 7;    // 事件ID
  static constexpr EventCode code                       = EventCode::HeadTopicStateProcessTime;
  static constexpr const char* name                     = "HeadTopicStateProcessTime";
  static constexpr const char* description              = "Ecat 状态过程时间（头部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit HeadTopicStateProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.state_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_cur", attribute.state_period_time_cur.value()});
    }
    if (attribute.state_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_max", attribute.state_period_time_max.value()});
    }
    if (attribute.state_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_avg", attribute.state_period_time_avg.value()});
    }
    if (attribute.state_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_cur", attribute.state_trans_time_cur.value()});
    }
    if (attribute.state_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_max", attribute.state_trans_time_max.value()});
    }
    if (attribute.state_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_avg", attribute.state_trans_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 ArmTopicStateProcessTime **********************************/
struct ArmTopicStateProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> state_period_time_cur;
    std::optional<double> state_period_time_max;
    std::optional<double> state_period_time_avg;
    std::optional<double> state_trans_time_cur;
    std::optional<double> state_trans_time_max;
    std::optional<double> state_trans_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 8;    // 事件ID
  static constexpr EventCode code                       = EventCode::ArmTopicStateProcessTime;
  static constexpr const char* name                     = "ArmTopicStateProcessTime";
  static constexpr const char* description              = "Ecat 状态过程时间（上肢部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ArmTopicStateProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.state_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_cur", attribute.state_period_time_cur.value()});
    }
    if (attribute.state_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_max", attribute.state_period_time_max.value()});
    }
    if (attribute.state_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_avg", attribute.state_period_time_avg.value()});
    }
    if (attribute.state_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_cur", attribute.state_trans_time_cur.value()});
    }
    if (attribute.state_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_max", attribute.state_trans_time_max.value()});
    }
    if (attribute.state_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_avg", attribute.state_trans_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 HandTopicStateProcessTime **********************************/
struct HandTopicStateProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> state_period_time_cur;
    std::optional<double> state_period_time_max;
    std::optional<double> state_period_time_avg;
    std::optional<double> state_trans_time_cur;
    std::optional<double> state_trans_time_max;
    std::optional<double> state_trans_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 9;    // 事件ID
  static constexpr EventCode code                       = EventCode::HandTopicStateProcessTime;
  static constexpr const char* name                     = "HandTopicStateProcessTime";
  static constexpr const char* description              = "Ecat 状态过程时间（手部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit HandTopicStateProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.state_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_cur", attribute.state_period_time_cur.value()});
    }
    if (attribute.state_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_max", attribute.state_period_time_max.value()});
    }
    if (attribute.state_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_avg", attribute.state_period_time_avg.value()});
    }
    if (attribute.state_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_cur", attribute.state_trans_time_cur.value()});
    }
    if (attribute.state_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_max", attribute.state_trans_time_max.value()});
    }
    if (attribute.state_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_avg", attribute.state_trans_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 WaistTopicStateProcessTime **********************************/
struct WaistTopicStateProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> state_period_time_cur;
    std::optional<double> state_period_time_max;
    std::optional<double> state_period_time_avg;
    std::optional<double> state_trans_time_cur;
    std::optional<double> state_trans_time_max;
    std::optional<double> state_trans_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 10;   // 事件ID
  static constexpr EventCode code                       = EventCode::WaistTopicStateProcessTime;
  static constexpr const char* name                     = "WaistTopicStateProcessTime";
  static constexpr const char* description              = "Ecat 状态过程时间（腰部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit WaistTopicStateProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.state_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_cur", attribute.state_period_time_cur.value()});
    }
    if (attribute.state_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_max", attribute.state_period_time_max.value()});
    }
    if (attribute.state_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_avg", attribute.state_period_time_avg.value()});
    }
    if (attribute.state_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_cur", attribute.state_trans_time_cur.value()});
    }
    if (attribute.state_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_max", attribute.state_trans_time_max.value()});
    }
    if (attribute.state_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_avg", attribute.state_trans_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 LegTopicStateProcessTime **********************************/
struct LegTopicStateProcessTime : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> state_period_time_cur;
    std::optional<double> state_period_time_max;
    std::optional<double> state_period_time_avg;
    std::optional<double> state_trans_time_cur;
    std::optional<double> state_trans_time_max;
    std::optional<double> state_trans_time_avg;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 11;   // 事件ID
  static constexpr EventCode code                       = EventCode::LegTopicStateProcessTime;
  static constexpr const char* name                     = "LegTopicStateProcessTime";
  static constexpr const char* description              = "Ecat 状态过程时间（腿部）";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit LegTopicStateProcessTime(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.state_period_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_cur", attribute.state_period_time_cur.value()});
    }
    if (attribute.state_period_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_max", attribute.state_period_time_max.value()});
    }
    if (attribute.state_period_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_period_time_avg", attribute.state_period_time_avg.value()});
    }
    if (attribute.state_trans_time_cur) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_cur", attribute.state_trans_time_cur.value()});
    }
    if (attribute.state_trans_time_max) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_max", attribute.state_trans_time_max.value()});
    }
    if (attribute.state_trans_time_avg) {
      any.push_back(aima::event::EventBase::AnyAttribute{"state_trans_time_avg", attribute.state_trans_time_avg.value()});
    }
    return any;
  }
};

/********************************** 事件 ImuChestEvent **********************************/
struct ImuChestEvent : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> average_frame_interval_persecond;
    std::optional<double> max_frame_interval_persecond;
    std::optional<double> max_frame_interval_history;
    std::optional<int> except_frame_interval_cnts_history;
    std::optional<int> except_frame_interval_cnts_persecond;
    std::optional<int> bad_frame_cnts_persecond;
    std::optional<int> bad_frame_cnts_history;
    std::optional<double> FRAME_INTERVAL_THRESHOD;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 12;   // 事件ID
  static constexpr EventCode code                       = EventCode::ImuChestEvent;
  static constexpr const char* name                     = "ImuChestEvent";
  static constexpr const char* description              = "Imu过程数据记录(胸腔)";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ImuChestEvent(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.average_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"average_frame_interval_persecond", attribute.average_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_persecond", attribute.max_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_history", attribute.max_frame_interval_history.value()});
    }
    if (attribute.except_frame_interval_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_history", attribute.except_frame_interval_cnts_history.value()});
    }
    if (attribute.except_frame_interval_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_persecond", attribute.except_frame_interval_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_persecond", attribute.bad_frame_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_history", attribute.bad_frame_cnts_history.value()});
    }
    if (attribute.FRAME_INTERVAL_THRESHOD) {
      any.push_back(aima::event::EventBase::AnyAttribute{"FRAME_INTERVAL_THRESHOD", attribute.FRAME_INTERVAL_THRESHOD.value()});
    }
    return any;
  }
};

/********************************** 事件 ImuTorsoEvent **********************************/
struct ImuTorsoEvent : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> average_frame_interval_persecond;
    std::optional<double> max_frame_interval_persecond;
    std::optional<double> max_frame_interval_history;
    std::optional<int> except_frame_interval_cnts_history;
    std::optional<int> except_frame_interval_cnts_persecond;
    std::optional<int> bad_frame_cnts_persecond;
    std::optional<int> bad_frame_cnts_history;
    std::optional<double> FRAME_INTERVAL_THRESHOD;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 13;   // 事件ID
  static constexpr EventCode code                       = EventCode::ImuTorsoEvent;
  static constexpr const char* name                     = "ImuTorsoEvent";
  static constexpr const char* description              = "Imu过程数据记录(髋部)";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ImuTorsoEvent(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.average_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"average_frame_interval_persecond", attribute.average_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_persecond", attribute.max_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_history", attribute.max_frame_interval_history.value()});
    }
    if (attribute.except_frame_interval_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_history", attribute.except_frame_interval_cnts_history.value()});
    }
    if (attribute.except_frame_interval_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_persecond", attribute.except_frame_interval_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_persecond", attribute.bad_frame_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_history", attribute.bad_frame_cnts_history.value()});
    }
    if (attribute.FRAME_INTERVAL_THRESHOD) {
      any.push_back(aima::event::EventBase::AnyAttribute{"FRAME_INTERVAL_THRESHOD", attribute.FRAME_INTERVAL_THRESHOD.value()});
    }
    return any;
  }
};

/********************************** 事件 ImuHeadEvent **********************************/
struct ImuHeadEvent : public aima::event::EventBase {
  // 属性
  struct Attribute {
    std::optional<double> average_frame_interval_persecond;
    std::optional<double> max_frame_interval_persecond;
    std::optional<double> max_frame_interval_history;
    std::optional<int> except_frame_interval_cnts_history;
    std::optional<int> except_frame_interval_cnts_persecond;
    std::optional<int> bad_frame_cnts_persecond;
    std::optional<int> bad_frame_cnts_history;
    std::optional<double> FRAME_INTERVAL_THRESHOD;
    std::vector<aima::event::EventBase::AnyAttribute> any;
  };

  Attribute attribute;
  static constexpr double detect_frequency              = 1.0;  // 检测频率 HZ
  static constexpr double report_frequency              = 1.0;  // 上报频率 HZ
  static constexpr uint8_t module_id                    = 89;   // 模块ID
  static constexpr uint32_t event_id                    = 14;   // 事件ID
  static constexpr EventCode code                       = EventCode::ImuHeadEvent;
  static constexpr const char* name                     = "ImuHeadEvent";
  static constexpr const char* description              = "Imu过程数据过程时间(头部)";
  static constexpr aima::event::details::EventType type = aima::event::details::EventType::Gauge;

  // 构造函数可传入属性
  explicit ImuHeadEvent(Attribute attr = {}, Status s = Status::Default) : aima::event::EventBase(s)
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
    if (attribute.average_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"average_frame_interval_persecond", attribute.average_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_persecond", attribute.max_frame_interval_persecond.value()});
    }
    if (attribute.max_frame_interval_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"max_frame_interval_history", attribute.max_frame_interval_history.value()});
    }
    if (attribute.except_frame_interval_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_history", attribute.except_frame_interval_cnts_history.value()});
    }
    if (attribute.except_frame_interval_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"except_frame_interval_cnts_persecond", attribute.except_frame_interval_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_persecond) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_persecond", attribute.bad_frame_cnts_persecond.value()});
    }
    if (attribute.bad_frame_cnts_history) {
      any.push_back(aima::event::EventBase::AnyAttribute{"bad_frame_cnts_history", attribute.bad_frame_cnts_history.value()});
    }
    if (attribute.FRAME_INTERVAL_THRESHOD) {
      any.push_back(aima::event::EventBase::AnyAttribute{"FRAME_INTERVAL_THRESHOD", attribute.FRAME_INTERVAL_THRESHOD.value()});
    }
    return any;
  }
};

}  // namespace aima::event::hal