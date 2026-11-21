#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to aimdk_msgs__msg__McRuntimeModel
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 运行模型信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McRuntimeModel {
    /// 腰部状态
    pub waist_status: bool,

    /// 左手手部状态
    pub left_hand_status: super::msg::McHandStatus,

    /// 右手手部状态
    pub right_hand_status: super::msg::McHandStatus,

}



impl Default for McRuntimeModel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McRuntimeModel::default())
  }
}

impl rosidl_runtime_rs::Message for McRuntimeModel {
  type RmwMsg = super::msg::rmw::McRuntimeModel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waist_status: msg.waist_status,
        left_hand_status: super::msg::McHandStatus::into_rmw_message(std::borrow::Cow::Owned(msg.left_hand_status)).into_owned(),
        right_hand_status: super::msg::McHandStatus::into_rmw_message(std::borrow::Cow::Owned(msg.right_hand_status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      waist_status: msg.waist_status,
        left_hand_status: super::msg::McHandStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_hand_status)).into_owned(),
        right_hand_status: super::msg::McHandStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_hand_status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      waist_status: msg.waist_status,
      left_hand_status: super::msg::McHandStatus::from_rmw_message(msg.left_hand_status),
      right_hand_status: super::msg::McHandStatus::from_rmw_message(msg.right_hand_status),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McPresetMotion
/// 预设动作

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McPresetMotion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McPresetMotion {
    /// 恢复默认姿态
    pub const DEFAULT_POS: i32 = 0;

    /// 右手挥手
    pub const RIGHT_ARM_WAVE: i32 = 1001;

    /// 右手握手
    pub const RIGHT_ARM_HANDSHAKE: i32 = 1002;

    /// 左手握手1.5m上对象
    pub const RIGHT_ARM_HANDSHAKE_FOR_1D5METER: i32 = 1003;

    /// 左手挥手
    pub const LEFT_ARM_WAVE: i32 = 1011;

    /// 左手握手
    pub const LEFT_ARM_HANDSHAKE: i32 = 1012;

    /// 左手握手1.5m上对象
    pub const LEFT_ARM_HANDSHAKE_FOR_1D5METER: i32 = 1013;

    /// 双手比心
    pub const BOTH_HANDS_MAKE_HEART: i32 = 2001;

    /// 双手摆动，表达喜悦
    pub const BOTH_HANDS_ACTION_HAPPY: i32 = 2002;

    /// 双手动作，说话动作
    pub const BOTH_HANDS_ACTION_TALKING: i32 = 2003;

    /// 说话动作1
    pub const T1_TALK1: i32 = 2004;

    /// 说话动作2
    pub const T1_TALK2: i32 = 2005;

    /// 说话动作3
    pub const T1_TALK3: i32 = 2006;

    /// 说话动作4
    pub const T1_TALK4: i32 = 2007;

    /// 说话动作5
    pub const T1_TALK5: i32 = 2008;

    /// 说话动作6
    pub const T1_TALK6: i32 = 2009;

    /// 拍照动作1
    pub const PHOTO_POSE_1: i32 = 2011;

    /// 拍照动作2
    pub const PHOTO_POSE_2: i32 = 2012;

    /// 拍照动作3
    pub const PHOTO_POSE_3: i32 = 2013;

    /// 拍照动作4
    pub const PHOTO_POSE_4: i32 = 2014;

    /// 三连拍姿势
    pub const PHOTO_THREE_SHOT: i32 = 2020;

    /// -----------------------------------------------------------------------------------
    /// Q 预置的上肢动作
    /// -----------------------------------------------------------------------------------
    /// 招手
    pub const Q_BECKON: i32 = 3001;

    /// 握手
    pub const Q_SHAKE_HANDS: i32 = 3002;

    /// 碰拳
    pub const Q_BUMP_FISTS: i32 = 3003;

    /// 挥手
    pub const Q_WAVE_HAND: i32 = 3004;

    /// 情绪动作 - 开心
    pub const Q_SHOW_HAPPINESS: i32 = 3005;

    /// 双手比心
    pub const Q_MAKE_HEART: i32 = 3007;

    /// 加油
    pub const Q_CHEER_ON: i32 = 3008;

    /// 伸懒腰
    pub const Q_STRETCH: i32 = 3010;

    /// 讲话动作A
    pub const Q_SPEAK_A: i32 = 3012;

    /// 讲话动作B
    pub const Q_SPEAK_B: i32 = 3013;

    /// 讲话动作C
    pub const Q_SPEAK_C: i32 = 3014;

    /// 拥抱
    pub const Q_HUG: i32 = 3018;

    /// 拒绝
    pub const Q_REFUSE: i32 = 3021;

    /// 跳舞动作A
    pub const Q_DANCE_A: i32 = 3046;

    /// 跳舞动作B
    pub const Q_DANCE_B: i32 = 3047;

    /// 跳舞动作C
    pub const Q_DANCE_C: i32 = 3048;

}


impl Default for McPresetMotion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McPresetMotion::default())
  }
}

impl rosidl_runtime_rs::Message for McPresetMotion {
  type RmwMsg = super::msg::rmw::McPresetMotion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McPlayerState
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 上肢动作运行状态
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McPlayerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl McPlayerState {
    /// 无上肢动作
    pub const IDLE: u32 = 0;

    /// IDLE 过渡至下一动作
    pub const PRE_PLAYING: u32 = 1;

    /// 上肢动作正在播放
    pub const PLAYING: u32 = 2;

    /// 打断当前动作过渡至下一动作
    pub const INTERRUPTING: u32 = 3;

    /// 播放错误状态
    pub const ERROR: u32 = 4;

}


impl Default for McPlayerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McPlayerState::default())
  }
}

impl rosidl_runtime_rs::Message for McPlayerState {
  type RmwMsg = super::msg::rmw::McPlayerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMotionType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McMotionType {
    /// NONE
    pub const NONE: i32 = 0;

    /// 动画，上肢动作
    pub const ANIMATION: i32 = 1;

    /// 模仿
    pub const MIMIC: i32 = 2;

    /// 基座
    pub const FOUNDATION: i32 = 3;

    /// 运动跟踪
    pub const MIMIC_OPENSOURCE: i32 = 4;

}


impl Default for McMotionType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMotionType::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionType {
  type RmwMsg = super::msg::rmw::McMotionType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMotionIntrType
/// 定义枚举字段

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionIntrType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McMotionIntrType {
    /// 不支持打断
    pub const INTR_NO: i32 = 0;

    /// 自由打断，任意时刻
    pub const INTR_FREE: i32 = 1;

    /// 断点打断
    pub const INTR_BREAKPOINT: i32 = 2;

}


impl Default for McMotionIntrType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMotionIntrType::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionIntrType {
  type RmwMsg = super::msg::rmw::McMotionIntrType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMotionIntrInfo
/// -----------------------------------------------------------------------------------
/// 动作断点信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionIntrInfo {
    /// 打断类型
    pub intr_type: super::msg::McMotionIntrType,

    /// 断点列表
    pub breakpoint_steps: Vec<i32>,

}



impl Default for McMotionIntrInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMotionIntrInfo::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionIntrInfo {
  type RmwMsg = super::msg::rmw::McMotionIntrInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        intr_type: super::msg::McMotionIntrType::into_rmw_message(std::borrow::Cow::Owned(msg.intr_type)).into_owned(),
        breakpoint_steps: msg.breakpoint_steps.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        intr_type: super::msg::McMotionIntrType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.intr_type)).into_owned(),
        breakpoint_steps: msg.breakpoint_steps.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      intr_type: super::msg::McMotionIntrType::from_rmw_message(msg.intr_type),
      breakpoint_steps: msg.breakpoint_steps.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMotion
/// Mc 动作接口

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotion {
    /// 名称
    pub tag: std::string::String,

    /// 动作类型
    pub type_: super::msg::McMotionType,

    /// 打断信息
    pub intr_info: super::msg::McMotionIntrInfo,

}



impl Default for McMotion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMotion::default())
  }
}

impl rosidl_runtime_rs::Message for McMotion {
  type RmwMsg = super::msg::rmw::McMotion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tag: msg.tag.as_str().into(),
        type_: super::msg::McMotionType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        intr_info: super::msg::McMotionIntrInfo::into_rmw_message(std::borrow::Cow::Owned(msg.intr_info)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tag: msg.tag.as_str().into(),
        type_: super::msg::McMotionType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
        intr_info: super::msg::McMotionIntrInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.intr_info)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tag: msg.tag.to_string(),
      type_: super::msg::McMotionType::from_rmw_message(msg.type_),
      intr_info: super::msg::McMotionIntrInfo::from_rmw_message(msg.intr_info),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McLocomotionVelocity
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McLocomotionVelocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// 输入源
    pub source: std::string::String,

    /// 前进速度 (m/s)
    /// 方向: +为前进, -为后退
    pub forward_velocity: f64,

    /// 侧移速度 (m/s)
    /// 方向: +为左移, -为右移
    pub lateral_velocity: f64,

    /// 旋转速度 (角速度) (m/s)
    /// 方向: +为左旋转, -为右旋转
    pub angular_velocity: f64,

    /// 弯腰速度 (角速度) (m/s)
    pub pitch_velocity: f64,

    /// 等级
    pub level: f64,

}



impl Default for McLocomotionVelocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McLocomotionVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for McLocomotionVelocity {
  type RmwMsg = super::msg::rmw::McLocomotionVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        forward_velocity: msg.forward_velocity,
        lateral_velocity: msg.lateral_velocity,
        angular_velocity: msg.angular_velocity,
        pitch_velocity: msg.pitch_velocity,
        level: msg.level,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        source: msg.source.as_str().into(),
      forward_velocity: msg.forward_velocity,
      lateral_velocity: msg.lateral_velocity,
      angular_velocity: msg.angular_velocity,
      pitch_velocity: msg.pitch_velocity,
      level: msg.level,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      source: msg.source.to_string(),
      forward_velocity: msg.forward_velocity,
      lateral_velocity: msg.lateral_velocity,
      angular_velocity: msg.angular_velocity,
      pitch_velocity: msg.pitch_velocity,
      level: msg.level,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McLocomotionGaitType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McLocomotionGaitType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McLocomotionGaitType {
    /// 步态: 走
    pub const WALK: i32 = 0;

    /// 步态: 站
    pub const STANCE: i32 = 1;

    /// 步态: 原地踏步
    pub const STATIC_WALK: i32 = 2;

}


impl Default for McLocomotionGaitType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McLocomotionGaitType::default())
  }
}

impl rosidl_runtime_rs::Message for McLocomotionGaitType {
  type RmwMsg = super::msg::rmw::McLocomotionGaitType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McInputSource
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 输入源信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McInputSource {
    /// 输入源名称（rc/vr/app_proxy/interaction/pnc）
    pub name: std::string::String,

    /// 输入源优先级(0-100)
    pub priority: i32,

    /// 超时时间(ms), 默认 1000 ms
    pub timeout: i32,

}



impl Default for McInputSource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McInputSource::default())
  }
}

impl rosidl_runtime_rs::Message for McInputSource {
  type RmwMsg = super::msg::rmw::McInputSource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        priority: msg.priority,
        timeout: msg.timeout,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      priority: msg.priority,
      timeout: msg.timeout,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      priority: msg.priority,
      timeout: msg.timeout,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McInputAction
/// 输入源操作

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McInputAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McInputAction {
    /// 添加新的输入源
    pub const INPUTACTION_ADD: i32 = 1001;

    /// 修改输入源配置
    pub const INPUTACTION_MODIFY: i32 = 1002;

    /// 删除输入源
    pub const INPUTACTION_DELETE: i32 = 1003;

    /// 使能输入源
    pub const INPUTACTION_ENABLE: i32 = 2001;

    /// 下使能输入源
    pub const INPUTACTION_DISABLE: i32 = 2002;

}


impl Default for McInputAction {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McInputAction::default())
  }
}

impl rosidl_runtime_rs::Message for McInputAction {
  type RmwMsg = super::msg::rmw::McInputAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McHandStatus
/// 手部状态

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McHandStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McHandStatus {
    /// 灵巧手
    pub const OMNI_HAND: i32 = 1000;

    /// 夹爪
    pub const OMNI_PICKER: i32 = 2000;

}


impl Default for McHandStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McHandStatus::default())
  }
}

impl rosidl_runtime_rs::Message for McHandStatus {
  type RmwMsg = super::msg::rmw::McHandStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McCustomJointCommand
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McCustomJointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// 上肢关节目标命令数组（mc内部自动按 name 匹配对应关节数据）
    pub joints: Vec<super::msg::JointCommand>,

}



impl Default for McCustomJointCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McCustomJointCommand::default())
  }
}

impl rosidl_runtime_rs::Message for McCustomJointCommand {
  type RmwMsg = super::msg::rmw::McCustomJointCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joints: msg.joints
          .into_iter()
          .map(|elem| super::msg::JointCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joints: msg.joints
          .iter()
          .map(|elem| super::msg::JointCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      joints: msg.joints
          .into_iter()
          .map(super::msg::JointCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McControlArea

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McControlArea {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McControlArea {
    /// 没有控制区域
    pub const NONE: i32 = 0;

    /// 左手
    pub const LEFT_HAND: i32 = 1;

    /// 右手
    pub const RIGHT_HAND: i32 = 2;

    /// 头部
    pub const HEAD: i32 = 4;

    /// 腰部
    pub const WAIST: i32 = 8;

}


impl Default for McControlArea {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McControlArea::default())
  }
}

impl rosidl_runtime_rs::Message for McControlArea {
  type RmwMsg = super::msg::rmw::McControlArea;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McBodyPose
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McBodyPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// 输入源
    pub source: std::string::String,

    /// 站立高度 (站直/下蹲)， 正值站立， 负值下蹲
    /// 单位：m，距离地面的高度
    pub stand_height: f64,

    /// 身体前倾/后倾, 正值前倾， 负值后倾
    /// 单位：rad
    pub bend_forward: f64,

    /// 身体侧弯, 正值左侧弯， 负值右侧弯
    /// 单位：rad
    pub bend_sideways: f64,

    /// 腰部旋转， 正值左转， 负值右转
    /// 单位：rad
    pub twist_waist: f64,

    /// 点头/抬头，正值低头，负值抬头
    /// 单位：rad
    pub raise_head: f64,

    /// 头部旋转，正值左转，负值右转
    /// 单位：rad
    pub turn_head: f64,

}



impl Default for McBodyPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McBodyPose::default())
  }
}

impl rosidl_runtime_rs::Message for McBodyPose {
  type RmwMsg = super::msg::rmw::McBodyPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        stand_height: msg.stand_height,
        bend_forward: msg.bend_forward,
        bend_sideways: msg.bend_sideways,
        twist_waist: msg.twist_waist,
        raise_head: msg.raise_head,
        turn_head: msg.turn_head,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        source: msg.source.as_str().into(),
      stand_height: msg.stand_height,
      bend_forward: msg.bend_forward,
      bend_sideways: msg.bend_sideways,
      twist_waist: msg.twist_waist,
      raise_head: msg.raise_head,
      turn_head: msg.turn_head,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      source: msg.source.to_string(),
      stand_height: msg.stand_height,
      bend_forward: msg.bend_forward,
      bend_sideways: msg.bend_sideways,
      twist_waist: msg.twist_waist,
      raise_head: msg.raise_head,
      turn_head: msg.turn_head,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McRLDebug
/// RL debug信息msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McRLDebug {
    /// 消息头
    pub header: super::msg::MessageHeader,

    /// 观测数组
    pub obs_vec: Vec<f32>,

    /// 行为数组
    pub action_vec: Vec<f32>,

}



impl Default for McRLDebug {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McRLDebug::default())
  }
}

impl rosidl_runtime_rs::Message for McRLDebug {
  type RmwMsg = super::msg::rmw::McRLDebug;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        obs_vec: msg.obs_vec.as_slice().into(),
        action_vec: msg.action_vec.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        obs_vec: msg.obs_vec.as_slice().into(),
        action_vec: msg.action_vec.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      obs_vec: msg.obs_vec.into(),
      action_vec: msg.action_vec.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McTaskSource
/// 定义 Action 触发源

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McTaskSource {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McTaskSource {
    /// 未知/未指定
    pub const UNKNOWN: i32 = 0;

    /// APP
    pub const APP: i32 = 1;

    /// 云端
    pub const CLOUD: i32 = 2;

    /// 遥控器
    pub const RC: i32 = 3;

    /// SDK/RPC 直接调用
    pub const SDK_RPC: i32 = 4;

    /// agent
    pub const AGENT: i32 = 5;

    /// task engine 自动任务
    pub const TASK_ENGINE: i32 = 6;

    /// MC 内部自动切换（如 Moving → Stable 稳态复位）
    pub const MC_INTERNAL: i32 = 7;

    /// Insta360
    pub const INSTA360: i32 = 8;

    /// 其他
    pub const OTHER: i32 = 255;

}


impl Default for McTaskSource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McTaskSource::default())
  }
}

impl rosidl_runtime_rs::Message for McTaskSource {
  type RmwMsg = super::msg::rmw::McTaskSource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McTaskInfo
/// 任务 ID (0 表示未曾接收过任何请求)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McTaskInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: u64,

}



impl Default for McTaskInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McTaskInfo::default())
  }
}

impl rosidl_runtime_rs::Message for McTaskInfo {
  type RmwMsg = super::msg::rmw::McTaskInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      task_id: msg.task_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McSquatStatus
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 下蹲动作运行状态
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McSquatStatus {
    /// 是否处于下蹲状态
    pub enable: bool,

    /// 下蹲高度偏置
    pub offset: f64,

    /// 下蹲上下限位
    pub squat_limit: u32,

}



impl Default for McSquatStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McSquatStatus::default())
  }
}

impl rosidl_runtime_rs::Message for McSquatStatus {
  type RmwMsg = super::msg::rmw::McSquatStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
        offset: msg.offset,
        squat_limit: msg.squat_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
      offset: msg.offset,
      squat_limit: msg.squat_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
      offset: msg.offset,
      squat_limit: msg.squat_limit,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McPostureState
/// -----------------------------------------------------------------------------------
/// 机器人姿态检测结果 (security_guard 姿态检测)
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McPostureState {
    /// 当前姿态
    pub current_posture: u8,

}

impl McPostureState {
    /// 未知姿态
    pub const UNKNOWN: u8 = 0;

    /// 双足站姿
    pub const STANDING: u8 = 1;

    /// 仰卧，面朝上
    pub const LYING_FACE_UP: u8 = 2;

    /// 俯卧，面朝下
    pub const LYING_FACE_DOWN: u8 = 3;

    /// 坐姿（零力矩模式下躯干直立且腿部符合坐姿构型）
    pub const SEATED: u8 = 4;

    /// 开箱姿态
    pub const OPEN_BOX: u8 = 5;

}


impl Default for McPostureState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McPostureState::default())
  }
}

impl rosidl_runtime_rs::Message for McPostureState {
  type RmwMsg = super::msg::rmw::McPostureState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_posture: msg.current_posture,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_posture: msg.current_posture,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_posture: msg.current_posture,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McPosture
/// -----------------------------------------------------------------------------------
/// 机器人姿态信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McPosture {
    /// 横滚角
    pub roll: f64,

    /// 俯仰角
    pub pitch: f64,

    /// 航向角
    pub yaw: f64,

}



impl Default for McPosture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McPosture::default())
  }
}

impl rosidl_runtime_rs::Message for McPosture {
  type RmwMsg = super::msg::rmw::McPosture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMotionStatus
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 动作运行信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionStatus {
    /// 动作运行状态
    pub player_state: super::msg::McPlayerState,

    /// 控制区域
    pub control_area: super::msg::McControlArea,

    /// 动作名称
    pub motion: std::string::String,

    /// 动作类型
    pub type_: super::msg::McMotionType,

    /// 动作断点信息
    pub intr_info: super::msg::McMotionIntrInfo,

    /// 当前动作执行进度
    pub current_steps: i32,

    /// 全身动作重力向量状态
    pub gravity_state: super::msg::McMimicGravityState,

}



impl Default for McMotionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMotionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionStatus {
  type RmwMsg = super::msg::rmw::McMotionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        player_state: super::msg::McPlayerState::into_rmw_message(std::borrow::Cow::Owned(msg.player_state)).into_owned(),
        control_area: super::msg::McControlArea::into_rmw_message(std::borrow::Cow::Owned(msg.control_area)).into_owned(),
        motion: msg.motion.as_str().into(),
        type_: super::msg::McMotionType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        intr_info: super::msg::McMotionIntrInfo::into_rmw_message(std::borrow::Cow::Owned(msg.intr_info)).into_owned(),
        current_steps: msg.current_steps,
        gravity_state: super::msg::McMimicGravityState::into_rmw_message(std::borrow::Cow::Owned(msg.gravity_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        player_state: super::msg::McPlayerState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.player_state)).into_owned(),
        control_area: super::msg::McControlArea::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control_area)).into_owned(),
        motion: msg.motion.as_str().into(),
        type_: super::msg::McMotionType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
        intr_info: super::msg::McMotionIntrInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.intr_info)).into_owned(),
      current_steps: msg.current_steps,
        gravity_state: super::msg::McMimicGravityState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gravity_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      player_state: super::msg::McPlayerState::from_rmw_message(msg.player_state),
      control_area: super::msg::McControlArea::from_rmw_message(msg.control_area),
      motion: msg.motion.to_string(),
      type_: super::msg::McMotionType::from_rmw_message(msg.type_),
      intr_info: super::msg::McMotionIntrInfo::from_rmw_message(msg.intr_info),
      current_steps: msg.current_steps,
      gravity_state: super::msg::McMimicGravityState::from_rmw_message(msg.gravity_state),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McMimicGravityState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMimicGravityState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_gravity: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_gravity: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviation_deg: f32,

}



impl Default for McMimicGravityState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McMimicGravityState::default())
  }
}

impl rosidl_runtime_rs::Message for McMimicGravityState {
  type RmwMsg = super::msg::rmw::McMimicGravityState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enabled: msg.enabled,
        reference_gravity: msg.reference_gravity,
        current_gravity: msg.current_gravity,
        deviation_deg: msg.deviation_deg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enabled: msg.enabled,
        reference_gravity: msg.reference_gravity,
        current_gravity: msg.current_gravity,
      deviation_deg: msg.deviation_deg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enabled: msg.enabled,
      reference_gravity: msg.reference_gravity,
      current_gravity: msg.current_gravity,
      deviation_deg: msg.deviation_deg,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McLiftState
/// -----------------------------------------------------------------------------------
/// Lift detector detailed state
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McLiftState {
    /// Whether lift has been triggered and latched by the detector.
    pub is_lifted: bool,

    /// Lift probability after logit smoothing and sigmoid.
    pub probability: f32,

    /// Probability threshold used by the detector.
    pub threshold: f32,

}



impl Default for McLiftState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McLiftState::default())
  }
}

impl rosidl_runtime_rs::Message for McLiftState {
  type RmwMsg = super::msg::rmw::McLiftState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_lifted: msg.is_lifted,
        probability: msg.probability,
        threshold: msg.threshold,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_lifted: msg.is_lifted,
      probability: msg.probability,
      threshold: msg.threshold,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_lifted: msg.is_lifted,
      probability: msg.probability,
      threshold: msg.threshold,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McHandHeldState
/// Robot motion-control hand-held state.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McHandHeldState {
    /// True when at least one hand is confirmed as held.
    /// False when neither hand is held or the combined state is unknown.
    pub is_held: bool,

    /// Current combined hand-held state. The value must be one of the constants above.
    pub hand_held: u8,

}

impl McHandHeldState {
    /// The state is unknown when either hand has not produced a confirmed result.
    pub const UNKNOWN: u8 = 0;

    /// Both hands are confirmed as not held.
    pub const BOTH_NOT_HELD: u8 = 1;

    /// Only the left hand is held.
    pub const LEFT_HELD_ONLY: u8 = 2;

    /// Only the right hand is held.
    pub const RIGHT_HELD_ONLY: u8 = 3;

    /// Both hands are held.
    pub const BOTH_HELD: u8 = 4;

}


impl Default for McHandHeldState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McHandHeldState::default())
  }
}

impl rosidl_runtime_rs::Message for McHandHeldState {
  type RmwMsg = super::msg::rmw::McHandHeldState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_held: msg.is_held,
        hand_held: msg.hand_held,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_held: msg.is_held,
      hand_held: msg.hand_held,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_held: msg.is_held,
      hand_held: msg.hand_held,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McFsmState
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 有限状态机状态
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McFsmState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_state: u32,

}

impl McFsmState {
    /// 未知状态
    pub const UNKNOWN: u32 = 0;

    /// 预备状态
    pub const STARTING: u32 = 1;

    /// 原地稳定状态
    pub const STABLE: u32 = 2;

    /// 行走状态
    pub const MOVING: u32 = 3;

    /// 安全状态
    pub const SAFE: u32 = 4;

    /// 特殊状态
    pub const SPECIAL: u32 = 5;

    /// 测试状态
    pub const TEST: u32 = 6;

}


impl Default for McFsmState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McFsmState::default())
  }
}

impl rosidl_runtime_rs::Message for McFsmState {
  type RmwMsg = super::msg::rmw::McFsmState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_state: msg.current_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_state: msg.current_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_state: msg.current_state,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McFormState
/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 机器人形态
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McFormState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_form: u8,

}

impl McFormState {
    /// 未知形态
    pub const UNKNOWN: u8 = 0;

    /// 四足形态
    pub const QUADRUPEDAL: u8 = 1;

    /// 双足形态
    pub const BIPEDAL: u8 = 2;

}


impl Default for McFormState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McFormState::default())
  }
}

impl rosidl_runtime_rs::Message for McFormState {
  type RmwMsg = super::msg::rmw::McFormState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_form: msg.current_form,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_form: msg.current_form,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_form: msg.current_form,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McCommonState
/// -----------------------------------------------------------------------------------
/// 机器人运控状态
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McCommonState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// ------------ 输入源信息 ------------ #
    pub input_source: super::msg::McInputSource,

    /// ----------- Action 信息 ----------- #
    pub action_info: super::msg::McActionInfo,

    /// --------- 机器运行模型信息 ---------- #
    pub runtime_model: super::msg::McRuntimeModel,

    /// --------- 动作运行信息 ---------- #
    pub motion_status: super::msg::McMotionStatus,

    /// --------- 有限状态机状态 ---------- #
    pub fsm_state: super::msg::McFsmState,

    /// --------- 机器人形态信息 ---------- #
    pub form_state: super::msg::McFormState,

    /// --------- 机器人姿态信息 ---------- #
    pub posture: super::msg::McPosture,

    /// ----------机器人是否处于运动状态 ----------
    pub is_moving: bool,

    /// ----------机器人是否摔倒（防摔检测触发后置 true；重新解锁站立防摔检测时置 false）----------
    pub is_fallen: bool,

    /// ---------- 机器人提起检测状态 ---------- #
    pub lift_state: super::msg::McLiftState,

    /// ---------- rpc 请求 执行状态 ----------
    pub task_info: super::msg::McTaskInfo,

    /// ---------- 机器人牵手状态 ---------- #
    pub held_state: super::msg::McHandHeldState,

    /// ---------- 机器人姿态检测结果 (站立/坐姿/仰卧/俯卧/未知) ---------- #
    pub posture_state: super::msg::McPostureState,

}



impl Default for McCommonState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McCommonState::default())
  }
}

impl rosidl_runtime_rs::Message for McCommonState {
  type RmwMsg = super::msg::rmw::McCommonState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Owned(msg.input_source)).into_owned(),
        action_info: super::msg::McActionInfo::into_rmw_message(std::borrow::Cow::Owned(msg.action_info)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Owned(msg.runtime_model)).into_owned(),
        motion_status: super::msg::McMotionStatus::into_rmw_message(std::borrow::Cow::Owned(msg.motion_status)).into_owned(),
        fsm_state: super::msg::McFsmState::into_rmw_message(std::borrow::Cow::Owned(msg.fsm_state)).into_owned(),
        form_state: super::msg::McFormState::into_rmw_message(std::borrow::Cow::Owned(msg.form_state)).into_owned(),
        posture: super::msg::McPosture::into_rmw_message(std::borrow::Cow::Owned(msg.posture)).into_owned(),
        is_moving: msg.is_moving,
        is_fallen: msg.is_fallen,
        lift_state: super::msg::McLiftState::into_rmw_message(std::borrow::Cow::Owned(msg.lift_state)).into_owned(),
        task_info: super::msg::McTaskInfo::into_rmw_message(std::borrow::Cow::Owned(msg.task_info)).into_owned(),
        held_state: super::msg::McHandHeldState::into_rmw_message(std::borrow::Cow::Owned(msg.held_state)).into_owned(),
        posture_state: super::msg::McPostureState::into_rmw_message(std::borrow::Cow::Owned(msg.posture_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.input_source)).into_owned(),
        action_info: super::msg::McActionInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.action_info)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.runtime_model)).into_owned(),
        motion_status: super::msg::McMotionStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motion_status)).into_owned(),
        fsm_state: super::msg::McFsmState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fsm_state)).into_owned(),
        form_state: super::msg::McFormState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.form_state)).into_owned(),
        posture: super::msg::McPosture::into_rmw_message(std::borrow::Cow::Borrowed(&msg.posture)).into_owned(),
      is_moving: msg.is_moving,
      is_fallen: msg.is_fallen,
        lift_state: super::msg::McLiftState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lift_state)).into_owned(),
        task_info: super::msg::McTaskInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.task_info)).into_owned(),
        held_state: super::msg::McHandHeldState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.held_state)).into_owned(),
        posture_state: super::msg::McPostureState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.posture_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      input_source: super::msg::McInputSource::from_rmw_message(msg.input_source),
      action_info: super::msg::McActionInfo::from_rmw_message(msg.action_info),
      runtime_model: super::msg::McRuntimeModel::from_rmw_message(msg.runtime_model),
      motion_status: super::msg::McMotionStatus::from_rmw_message(msg.motion_status),
      fsm_state: super::msg::McFsmState::from_rmw_message(msg.fsm_state),
      form_state: super::msg::McFormState::from_rmw_message(msg.form_state),
      posture: super::msg::McPosture::from_rmw_message(msg.posture),
      is_moving: msg.is_moving,
      is_fallen: msg.is_fallen,
      lift_state: super::msg::McLiftState::from_rmw_message(msg.lift_state),
      task_info: super::msg::McTaskInfo::from_rmw_message(msg.task_info),
      held_state: super::msg::McHandHeldState::from_rmw_message(msg.held_state),
      posture_state: super::msg::McPostureState::from_rmw_message(msg.posture_state),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McFullAction
/// 定义枚举字段

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McFullAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McFullAction {
    /// 被动模式
    pub const PASSIVE_DEFAULT: i32 = 1;

    /// 四足切换两足形态
    pub const QUADRUPED_TO_BIPED: i32 = 2;

    /// 两足切换四足形态
    pub const BIPED_TO_QUADRUPED: i32 = 3;

    /// 倒地四足站起
    pub const QUADRUPED_RECOVERY: i32 = 100;

    /// 四足站立模式
    pub const QUADRUPED_STAND_DEFAULT: i32 = 101;

    /// 四足行走/奔跑模式
    pub const QUADRUPED_LOCOMOTION_DEFAULT: i32 = 102;

    /// 四足越障行走模式
    pub const QUADRUPED_LOCOMOTION_TERRAIN: i32 = 103;

    /// 倒地两足站起
    pub const BIPED_RECOVERY: i32 = 200;

    /// 两足站立模式
    pub const BIPED_STAND_DEFAULT: i32 = 201;

    /// 两足行走/奔跑模式
    pub const BIPED_LOCOMOTION_DEFAULT: i32 = 202;

    /// 两足越障行走模式
    pub const BIPED_LOCOMOTION_TERRAIN: i32 = 203;

}


impl Default for McFullAction {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McFullAction::default())
  }
}

impl rosidl_runtime_rs::Message for McFullAction {
  type RmwMsg = super::msg::rmw::McFullAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McActionStatus
/// 定义枚举字段

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McActionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McActionStatus {
    /// 未知状态
    pub const IDLE: i32 = 0;

    /// 运行中
    pub const RUNNING: i32 = 100;

    /// 切换中
    pub const TRANSITION: i32 = 200;

}


impl Default for McActionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McActionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for McActionStatus {
  type RmwMsg = super::msg::rmw::McActionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McActionInfo
/// 当前运行的Action

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McActionInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_action: super::msg::McAction,

    /// 当前action的触发源
    pub source: std::string::String,

    /// 描述
    pub action_desc: std::string::String,

    /// Action状态
    pub status: super::msg::McActionStatus,

    /// action 切换是否就绪, false 未准备就绪, true 切换就绪
    pub switch_ready: bool,

}



impl Default for McActionInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McActionInfo::default())
  }
}

impl rosidl_runtime_rs::Message for McActionInfo {
  type RmwMsg = super::msg::rmw::McActionInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_action: super::msg::McAction::into_rmw_message(std::borrow::Cow::Owned(msg.current_action)).into_owned(),
        source: msg.source.as_str().into(),
        action_desc: msg.action_desc.as_str().into(),
        status: super::msg::McActionStatus::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
        switch_ready: msg.switch_ready,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_action: super::msg::McAction::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_action)).into_owned(),
        source: msg.source.as_str().into(),
        action_desc: msg.action_desc.as_str().into(),
        status: super::msg::McActionStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
      switch_ready: msg.switch_ready,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_action: super::msg::McAction::from_rmw_message(msg.current_action),
      source: msg.source.to_string(),
      action_desc: msg.action_desc.to_string(),
      status: super::msg::McActionStatus::from_rmw_message(msg.status),
      switch_ready: msg.switch_ready,
    }
  }
}


// Corresponds to aimdk_msgs__msg__McActionCommand
/// Action

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McActionCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::msg::McAction,

    /// 描述
    pub action_desc: std::string::String,

}



impl Default for McActionCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McActionCommand::default())
  }
}

impl rosidl_runtime_rs::Message for McActionCommand {
  type RmwMsg = super::msg::rmw::McActionCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: super::msg::McAction::into_rmw_message(std::borrow::Cow::Owned(msg.action)).into_owned(),
        action_desc: msg.action_desc.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: super::msg::McAction::into_rmw_message(std::borrow::Cow::Borrowed(&msg.action)).into_owned(),
        action_desc: msg.action_desc.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action: super::msg::McAction::from_rmw_message(msg.action),
      action_desc: msg.action_desc.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__McAction
/// 定义枚举字段

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl McAction {
    /// ============================================================================
    /// 急停
    /// ============================================================================
    /// 被动模式
    pub const PASSIVE_DEFAULT: i32 = 1;

    /// 阻尼模式
    pub const DAMPING_DEFAULT: i32 = 2;

    /// 四足躺下
    pub const QUAD_LIE_DOWN: i32 = 3;

    /// ============================================================================
    /// 形态切换
    /// ============================================================================
    /// 四足切换两足形态-常规
    pub const QUADRUPED_TO_BIPED: i32 = 10;

    /// 四足切换两足形态-带旋转
    pub const QUADRUPED_TO_BIPED_ROTATE: i32 = 11;

    /// 四足切换双足形态-前空翻
    pub const QUADRUPED_TO_BIPED_FRONTFLIP: i32 = 12;

    /// 两足切换四足形态-常规
    pub const BIPED_TO_QUADRUPED: i32 = 20;

    /// 两足切换四足形态-旋转
    pub const BIPED_TO_QUADRUPED_ROTATE: i32 = 21;

    /// 两足切换四足形态-前空翻
    pub const BIPED_TO_QUADRUPED_FRONTFLIP: i32 = 22;

    /// ============================================================================
    /// 四足相关动作 (100-199)
    /// ============================================================================
    /// 倒地四足站起
    pub const QUADRUPED_RECOVERY: i32 = 100;

    /// 四足站立模式
    pub const QUADRUPED_STAND_DEFAULT: i32 = 101;

    /// 四足行走/奔跑模式
    pub const QUADRUPED_LOCOMOTION_DEFAULT: i32 = 102;

    /// 四足奔跑模式
    pub const QUADRUPED_LOCOMOTION_RUN: i32 = 112;

    /// 四足越障行走模式
    pub const QUADRUPED_LOCOMOTION_TERRAIN: i32 = 103;

    /// 四足仿生模式
    pub const QUADRUPED_LOCOMOTION_BIONIC: i32 = 104;

    /// 四足前空翻
    pub const QUADRUPED_LOCOMOTION_FRONTFLIP: i32 = 105;

    /// 四足后空翻
    pub const QUADRUPED_LOCOMOTION_BACKFLIP: i32 = 106;

    /// 四足握手
    pub const QUADRUPED_LOCOMOTION_HANDSHAKE: i32 = 107;

    /// 四足坐下
    pub const QUADRUPED_LOCOMOTION_SIT: i32 = 108;

    /// 四足跳舞
    pub const QUADRUPED_LOCOMOTION_DANCE: i32 = 109;

    /// 四足趴下
    pub const QUADRUPED_GET_DOWN_DEFAULT: i32 = 110;

    /// 四足坐下
    pub const QUADRUPED_SIT_DOWN_DEFAULT: i32 = 111;

    /// 四足骄傲
    pub const QUADRUPED_LOCOMOTION_PRIDE: i32 = 113;

    /// 四足愉快
    pub const QUADRUPED_LOCOMOTION_PLEASURE: i32 = 114;

    /// 四足准备站立
    pub const QUADRUPED_READY_STAND_DEFAULT: i32 = 115;

    /// 四足跳跃
    pub const QUADRUPED_LOCOMOTION_JUMP: i32 = 116;

    /// 四足伸展
    pub const QUADRUPED_LOCOMOTION_STRETCH: i32 = 117;

    /// 四足俯卧撑
    pub const QUADRUPED_PUSH_UP: i32 = 118;

    /// 四足模仿动作
    pub const QUADRUPED_MIMIC: i32 = 119;

    /// 四足蜷缩
    pub const QUADRUPED_CROUCH_DEFAULT: i32 = 120;

    /// 四足踏步模式
    pub const QUADRUPED_LOCOMOTION_STEP: i32 = 121;

    /// 四足前肢手臂反轴站立
    pub const QUADRUPED_STAND_REVERSE_DEFAULT: i32 = 122;

    /// 四足反向行走模式
    pub const QUADRUPED_LOCOMOTION_REVERSE_DEFAULT: i32 = 123;

    /// 四足姿态调整
    pub const QUADRUPED_BODY_ADJUST_DEFAULT: i32 = 124;

    /// 四足上下楼梯模式
    pub const QUADRUPED_LOCOMOTION_STAIRS: i32 = 125;

    /// ============================================================================
    /// 两足相关动作 (200-299)
    /// ============================================================================
    /// 倒地两足站起
    pub const BIPED_RECOVERY: i32 = 200;

    /// 两足站立模式
    pub const BIPED_STAND_DEFAULT: i32 = 201;

    /// 两足行走/奔跑模式
    pub const BIPED_LOCOMOTION_DEFAULT: i32 = 202;

    /// 两足越障行走模式
    pub const BIPED_LOCOMOTION_TERRAIN: i32 = 203;

    /// 双足原地旋转(删除)
    /// int32 BIPED_LOCOMOTION_ROTATE_LOCAL = 204
    /// 双足下腰模式(删除)
    /// int32 BIPED_LOCOMOTION_BACKBEND = 205
    /// 双足太空步
    pub const BIPED_LOCOMOTION_MOONWALK: i32 = 206;

    /// 双足奔跑模式
    pub const BIPED_LOCOMOTION_RUN: i32 = 207;

    /// 双足模仿动作
    pub const BIPED_MIMIC: i32 = 208;

    /// 双足羽生结弦(删除)
    /// int32 BIPED_YUZURU = 209
    /// 双足劈叉(删除)
    /// int32 BIPED_SPLIT = 210
    /// 双足全身控制模式
    pub const BIPED_LOCOMOTION_WBC: i32 = 300;

    /// 双足动画控制模式
    pub const BIPED_LOCOMOTION_ANIMATION: i32 = 301;

    /// 双足控制上肢录制模式
    pub const BIPED_RECORD_UPPER: i32 = 302;

    /// 双足 gimbal 轨迹移动模式
    pub const BIPED_GIMBAL: i32 = 303;

    /// 双足 npz 模仿
    pub const BIPED_NPZ_MIMIC: i32 = 304;

    /// 双足小彩旗
    pub const BIPED_LOCOMOTION_WBCDANCE: i32 = 305;

    /// 双足转圈(删除)
    /// int32 BIPED_MIMIC_ROTATE_DANCE = 400
    /// ============================================================================
    /// Q 系列Action
    /// ============================================================================
    /// 折叠收储
    pub const STORE_DEFAULT: i32 = 1001;

    /// 走跑
    pub const BIPED_WALK_RUN: i32 = 1002;

    /// 模仿动作
    pub const MIMIC: i32 = 1003;

    /// 模仿动作-灵创
    pub const MIMIC_LINKCRAFT: i32 = 1004;

    /// 全身动作控制
    pub const BIPED_WHOLE_BODY_CTRL: i32 = 1005;

    /// 模仿动作-开源
    pub const MIMIC_OPENSOURCE: i32 = 1006;

    /// 站起
    pub const STAND_UP: i32 = 1007;

    /// 躺姿
    pub const LYING_DEFAULT: i32 = 1008;

    /// 躺下-俯卧
    pub const LIE_FACE_DOWN: i32 = 1009;

    /// 躺下-仰躺
    pub const LIE_FACE_UP: i32 = 1010;

    /// 轻柔步态(室内)
    pub const BIPED_QUIET_WALK: i32 = 1011;

    /// 越障模式(室外)
    pub const BIPED_BLIND_TERRAIN: i32 = 1012;

    /// 坐下
    pub const BIPED_SIT_DOWN: i32 = 1013;

    /// 二开上肢控制
    pub const BIPED_CUSTOM_UPPER: i32 = 1014;

    /// 超能模式/跑步模式
    pub const BIPED_RUN: i32 = 1015;

    /// 入座
    pub const BIPED_TAKE_SEAT: i32 = 1016;

    /// 离座
    pub const BIPED_LEAVE_SEAT: i32 = 1017;

    /// 模仿动作_V2
    pub const MIMIC_V2: i32 = 1018;

    /// 模仿动作-开源_V2
    pub const MIMIC_OPENSOURCE_V2: i32 = 1019;

}


impl Default for McAction {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::McAction::default())
  }
}

impl rosidl_runtime_rs::Message for McAction {
  type RmwMsg = super::msg::rmw::McAction;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__ThreadResourceInfo
/// 线程ID

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThreadResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub thread_id: u64,

    /// 线程名称
    pub thread_name: std::string::String,

    /// 当前线程cpu使用率
    pub cpu_usage_ratio: f64,

    /// 当前进程调度策略
    pub cpu_sched_policy: std::string::String,

    /// 当前进程调度优先级
    pub cpu_sched_priority: i32,

    /// 当前进程绑定cpu
    pub bounding_cpus: Vec<i32>,

}



impl Default for ThreadResourceInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ThreadResourceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ThreadResourceInfo {
  type RmwMsg = super::msg::rmw::ThreadResourceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        thread_id: msg.thread_id,
        thread_name: msg.thread_name.as_str().into(),
        cpu_usage_ratio: msg.cpu_usage_ratio,
        cpu_sched_policy: msg.cpu_sched_policy.as_str().into(),
        cpu_sched_priority: msg.cpu_sched_priority,
        bounding_cpus: msg.bounding_cpus.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      thread_id: msg.thread_id,
        thread_name: msg.thread_name.as_str().into(),
      cpu_usage_ratio: msg.cpu_usage_ratio,
        cpu_sched_policy: msg.cpu_sched_policy.as_str().into(),
      cpu_sched_priority: msg.cpu_sched_priority,
        bounding_cpus: msg.bounding_cpus.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      thread_id: msg.thread_id,
      thread_name: msg.thread_name.to_string(),
      cpu_usage_ratio: msg.cpu_usage_ratio,
      cpu_sched_policy: msg.cpu_sched_policy.to_string(),
      cpu_sched_priority: msg.cpu_sched_priority,
      bounding_cpus: msg.bounding_cpus.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ProcessResourceInfo
/// 进程ID

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub process_id: u64,

    /// 进程名称
    pub process_name: std::string::String,

    /// 当前进程内存使用量(kb)
    pub process_mem_usage: u64,

    /// 当前进程内存使用率
    pub process_mem_usage_ratio: f64,

    /// 当前进程cpu使用率
    pub process_cpu_usage_ratio: f64,

    /// 当前进程线程数
    pub thread_count: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub threads: Vec<super::msg::ThreadResourceInfo>,

}



impl Default for ProcessResourceInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProcessResourceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessResourceInfo {
  type RmwMsg = super::msg::rmw::ProcessResourceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        process_id: msg.process_id,
        process_name: msg.process_name.as_str().into(),
        process_mem_usage: msg.process_mem_usage,
        process_mem_usage_ratio: msg.process_mem_usage_ratio,
        process_cpu_usage_ratio: msg.process_cpu_usage_ratio,
        thread_count: msg.thread_count,
        threads: msg.threads
          .into_iter()
          .map(|elem| super::msg::ThreadResourceInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      process_id: msg.process_id,
        process_name: msg.process_name.as_str().into(),
      process_mem_usage: msg.process_mem_usage,
      process_mem_usage_ratio: msg.process_mem_usage_ratio,
      process_cpu_usage_ratio: msg.process_cpu_usage_ratio,
      thread_count: msg.thread_count,
        threads: msg.threads
          .iter()
          .map(|elem| super::msg::ThreadResourceInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      process_id: msg.process_id,
      process_name: msg.process_name.to_string(),
      process_mem_usage: msg.process_mem_usage,
      process_mem_usage_ratio: msg.process_mem_usage_ratio,
      process_cpu_usage_ratio: msg.process_cpu_usage_ratio,
      thread_count: msg.thread_count,
      threads: msg.threads
          .into_iter()
          .map(super::msg::ThreadResourceInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ProcessInfo
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// 程序名称
    pub app_name: std::string::String,

    /// 进程资源信息
    pub resource: super::msg::ProcessResourceInfo,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modules: Vec<super::msg::ModuleResourceInfo>,

}



impl Default for ProcessInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProcessInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessInfo {
  type RmwMsg = super::msg::rmw::ProcessInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        app_name: msg.app_name.as_str().into(),
        resource: super::msg::ProcessResourceInfo::into_rmw_message(std::borrow::Cow::Owned(msg.resource)).into_owned(),
        modules: msg.modules
          .into_iter()
          .map(|elem| super::msg::ModuleResourceInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        app_name: msg.app_name.as_str().into(),
        resource: super::msg::ProcessResourceInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.resource)).into_owned(),
        modules: msg.modules
          .iter()
          .map(|elem| super::msg::ModuleResourceInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      app_name: msg.app_name.to_string(),
      resource: super::msg::ProcessResourceInfo::from_rmw_message(msg.resource),
      modules: msg.modules
          .into_iter()
          .map(super::msg::ModuleResourceInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ModuleRpcInfo
/// 话题名

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleRpcInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// 类型名
    pub req_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub res_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub backends: Vec<std::string::String>,

}



impl Default for ModuleRpcInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModuleRpcInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ModuleRpcInfo {
  type RmwMsg = super::msg::rmw::ModuleRpcInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        req_type: msg.req_type.as_str().into(),
        res_type: msg.res_type.as_str().into(),
        backends: msg.backends
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        req_type: msg.req_type.as_str().into(),
        res_type: msg.res_type.as_str().into(),
        backends: msg.backends
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      req_type: msg.req_type.to_string(),
      res_type: msg.res_type.to_string(),
      backends: msg.backends
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ModuleResourceInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub module_name: std::string::String,

    /// 模块rpc客户端信息
    pub rpc_clients: Vec<super::msg::ModuleRpcInfo>,

    /// 模块service channel信息
    pub rpc_services: Vec<super::msg::ModuleRpcInfo>,

    /// 模块pub channel信息
    pub pub_channels: Vec<super::msg::ModuleChannelInfo>,

    /// 模块sub channel信息
    pub sub_channels: Vec<super::msg::ModuleChannelInfo>,

}



impl Default for ModuleResourceInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModuleResourceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ModuleResourceInfo {
  type RmwMsg = super::msg::rmw::ModuleResourceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        module_name: msg.module_name.as_str().into(),
        rpc_clients: msg.rpc_clients
          .into_iter()
          .map(|elem| super::msg::ModuleRpcInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        rpc_services: msg.rpc_services
          .into_iter()
          .map(|elem| super::msg::ModuleRpcInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        pub_channels: msg.pub_channels
          .into_iter()
          .map(|elem| super::msg::ModuleChannelInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        sub_channels: msg.sub_channels
          .into_iter()
          .map(|elem| super::msg::ModuleChannelInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        module_name: msg.module_name.as_str().into(),
        rpc_clients: msg.rpc_clients
          .iter()
          .map(|elem| super::msg::ModuleRpcInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        rpc_services: msg.rpc_services
          .iter()
          .map(|elem| super::msg::ModuleRpcInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        pub_channels: msg.pub_channels
          .iter()
          .map(|elem| super::msg::ModuleChannelInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        sub_channels: msg.sub_channels
          .iter()
          .map(|elem| super::msg::ModuleChannelInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      module_name: msg.module_name.to_string(),
      rpc_clients: msg.rpc_clients
          .into_iter()
          .map(super::msg::ModuleRpcInfo::from_rmw_message)
          .collect(),
      rpc_services: msg.rpc_services
          .into_iter()
          .map(super::msg::ModuleRpcInfo::from_rmw_message)
          .collect(),
      pub_channels: msg.pub_channels
          .into_iter()
          .map(super::msg::ModuleChannelInfo::from_rmw_message)
          .collect(),
      sub_channels: msg.sub_channels
          .into_iter()
          .map(super::msg::ModuleChannelInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ModuleChannelInfo
/// 话题名

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleChannelInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// 类型名
    pub type_: std::string::String,

    /// 当前频率（Hz）
    pub frequency: f64,

    /// 最小时间差(ms)
    pub min_time_diff: f64,

    /// 最大时间差(ms)
    pub max_time_diff: f64,

    /// 标准差(ms)
    pub std_dev: f64,

    /// 统计滑动窗口大小(ms)
    pub window_size: i32,

    /// 超时阈值(ms)
    pub timeout_threshold: f64,

    /// 是否活跃(只要收到过一帧消息，则置为true，未收到则为false)
    pub is_active: bool,

    /// 通讯后端
    pub backends: Vec<std::string::String>,

}



impl Default for ModuleChannelInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModuleChannelInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ModuleChannelInfo {
  type RmwMsg = super::msg::rmw::ModuleChannelInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        type_: msg.type_.as_str().into(),
        frequency: msg.frequency,
        min_time_diff: msg.min_time_diff,
        max_time_diff: msg.max_time_diff,
        std_dev: msg.std_dev,
        window_size: msg.window_size,
        timeout_threshold: msg.timeout_threshold,
        is_active: msg.is_active,
        backends: msg.backends
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        type_: msg.type_.as_str().into(),
      frequency: msg.frequency,
      min_time_diff: msg.min_time_diff,
      max_time_diff: msg.max_time_diff,
      std_dev: msg.std_dev,
      window_size: msg.window_size,
      timeout_threshold: msg.timeout_threshold,
      is_active: msg.is_active,
        backends: msg.backends
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      type_: msg.type_.to_string(),
      frequency: msg.frequency,
      min_time_diff: msg.min_time_diff,
      max_time_diff: msg.max_time_diff,
      std_dev: msg.std_dev,
      window_size: msg.window_size,
      timeout_threshold: msg.timeout_threshold,
      is_active: msg.is_active,
      backends: msg.backends
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__DiagnosticType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl DiagnosticType {
    /// 正常类型 该类型异常需要周期性上报
    pub const NORMAL: i32 = 0;

    /// 触发式异常 设置异常为产生状态
    pub const TRIGGER_APPEAR: i32 = 1;

    /// 触发式异常 设置异常为消失状态
    pub const TRIGGER_DISAPPEAR: i32 = 2;

}


impl Default for DiagnosticType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticType::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticType {
  type RmwMsg = super::msg::rmw::DiagnosticType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__DiagnosticInfoArray
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub diagnostics: Vec<super::msg::DiagnosticInfo>,

}



impl Default for DiagnosticInfoArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticInfoArray::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticInfoArray {
  type RmwMsg = super::msg::rmw::DiagnosticInfoArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        diagnostics: msg.diagnostics
          .into_iter()
          .map(|elem| super::msg::DiagnosticInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        diagnostics: msg.diagnostics
          .iter()
          .map(|elem| super::msg::DiagnosticInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      diagnostics: msg.diagnostics
          .into_iter()
          .map(super::msg::DiagnosticInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__DiagnosticInfo
/// ns 时间辍

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// 异常类型
    pub type_: super::msg::DiagnosticType,

    /// 模块ID
    pub module_id: u8,

    /// 模块诊断码
    pub code: u32,

    /// 模块诊断码
    pub diag_code: u64,

    /// 模块诊断信息
    pub info: std::string::String,

}



impl Default for DiagnosticInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticInfo::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticInfo {
  type RmwMsg = super::msg::rmw::DiagnosticInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        type_: super::msg::DiagnosticType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        module_id: msg.module_id,
        code: msg.code,
        diag_code: msg.diag_code,
        info: msg.info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        type_: super::msg::DiagnosticType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
      module_id: msg.module_id,
      code: msg.code,
      diag_code: msg.diag_code,
        info: msg.info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      type_: super::msg::DiagnosticType::from_rmw_message(msg.type_),
      module_id: msg.module_id,
      code: msg.code,
      diag_code: msg.diag_code,
      info: msg.info.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AlertCodeArray
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlertCodeArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub list: Vec<super::msg::AlertCode>,

}



impl Default for AlertCodeArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AlertCodeArray::default())
  }
}

impl rosidl_runtime_rs::Message for AlertCodeArray {
  type RmwMsg = super::msg::rmw::AlertCodeArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        list: msg.list
          .into_iter()
          .map(|elem| super::msg::AlertCode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        list: msg.list
          .iter()
          .map(|elem| super::msg::AlertCode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      list: msg.list
          .into_iter()
          .map(super::msg::AlertCode::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AlertCode
/// uuid

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlertCode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: u64,

    /// ns 时间辍
    pub timestamp: u64,

    /// 告警本次生命周期首次出现时间戳，ns
    pub appeared_timestamp: u64,

    /// 诊断码，字符串形式
    pub code: std::string::String,

    /// 0 未知, 1 出现, 2 消失
    pub alert_event_type: u8,

    /// 1 h1级告警，2 h2级告警，3 h3级告警, 4 h4级告警, 5 h5级告警
    pub level: u8,

    /// 端侧后处理
    /// 语音报警
    pub text: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_audio_cycle: bool,

    /// 灯光报警，在interaction通过level做映射
    pub light_msg: std::string::String,

    /// 表情报警
    pub emotion_id: u32,

    /// 其他后处理部分，后续再添加
    pub post_process: u32,

    /// app显示id
    pub app_show_id: std::string::String,

    /// 故障信息
    pub breakdown_msg: std::string::String,

    /// 功能禁用能力，多个能力使用英文逗号分隔
    /// 支持语音召唤（人形/四足）、前方目标跟随（人形/四足）、四足左右目标跟随、避障、自主建图、自主导航、自主回充
    pub capability_limit: std::string::String,

    /// 故障诊断名称
    pub diag_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub audio_strategy: u8,

    /// 激活播报匹配的功能限制名，来自诊断表“功能限制播报”列，独立于 capability_limit
    pub disabled_capabilities: Vec<std::string::String>,

    /// 激活播报使用的 NLG 场景 ID
    pub nlg_scene_id: std::string::String,

}

impl AlertCode {
    /// 语音播报策略；字段追加在末尾，is_audio_cycle 保留用于兼容旧使用方
    pub const AUDIO_STRATEGY_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUDIO_STRATEGY_ONCE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUDIO_STRATEGY_REPEAT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const AUDIO_STRATEGY_ACTIVATION: u8 = 3;

}


impl Default for AlertCode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AlertCode::default())
  }
}

impl rosidl_runtime_rs::Message for AlertCode {
  type RmwMsg = super::msg::rmw::AlertCode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uuid: msg.uuid,
        timestamp: msg.timestamp,
        appeared_timestamp: msg.appeared_timestamp,
        code: msg.code.as_str().into(),
        alert_event_type: msg.alert_event_type,
        level: msg.level,
        text: msg.text.as_str().into(),
        is_audio_cycle: msg.is_audio_cycle,
        light_msg: msg.light_msg.as_str().into(),
        emotion_id: msg.emotion_id,
        post_process: msg.post_process,
        app_show_id: msg.app_show_id.as_str().into(),
        breakdown_msg: msg.breakdown_msg.as_str().into(),
        capability_limit: msg.capability_limit.as_str().into(),
        diag_name: msg.diag_name.as_str().into(),
        audio_strategy: msg.audio_strategy,
        disabled_capabilities: msg.disabled_capabilities
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        nlg_scene_id: msg.nlg_scene_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      uuid: msg.uuid,
      timestamp: msg.timestamp,
      appeared_timestamp: msg.appeared_timestamp,
        code: msg.code.as_str().into(),
      alert_event_type: msg.alert_event_type,
      level: msg.level,
        text: msg.text.as_str().into(),
      is_audio_cycle: msg.is_audio_cycle,
        light_msg: msg.light_msg.as_str().into(),
      emotion_id: msg.emotion_id,
      post_process: msg.post_process,
        app_show_id: msg.app_show_id.as_str().into(),
        breakdown_msg: msg.breakdown_msg.as_str().into(),
        capability_limit: msg.capability_limit.as_str().into(),
        diag_name: msg.diag_name.as_str().into(),
      audio_strategy: msg.audio_strategy,
        disabled_capabilities: msg.disabled_capabilities
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        nlg_scene_id: msg.nlg_scene_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uuid: msg.uuid,
      timestamp: msg.timestamp,
      appeared_timestamp: msg.appeared_timestamp,
      code: msg.code.to_string(),
      alert_event_type: msg.alert_event_type,
      level: msg.level,
      text: msg.text.to_string(),
      is_audio_cycle: msg.is_audio_cycle,
      light_msg: msg.light_msg.to_string(),
      emotion_id: msg.emotion_id,
      post_process: msg.post_process,
      app_show_id: msg.app_show_id.to_string(),
      breakdown_msg: msg.breakdown_msg.to_string(),
      capability_limit: msg.capability_limit.to_string(),
      diag_name: msg.diag_name.to_string(),
      audio_strategy: msg.audio_strategy,
      disabled_capabilities: msg.disabled_capabilities
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      nlg_scene_id: msg.nlg_scene_id.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__TouchState
/// --------------------------------------------------------------------------------------------------------------
/// 机器人触摸传感器状态
/// --------------------------------------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchState {
    /// 触摸传感器状态消息
    pub header: super::msg::MessageHeader,

    /// 触摸事件类型
    /// T：id为1表示背部传感器，id为2表示胸部传感器
    /// Q：id为1表示头部传感器
    pub sensor_id: u8,

    /// 触摸事件类型
    pub event_type: u8,

}

impl TouchState {
    /// 触摸事件类型常量定义
    /// 无触摸事件
    pub const TOUCH_EVENT_NONE: u8 = 0;

    /// 单击
    pub const TOUCH_EVENT_SINGLE_CLICK: u8 = 1;

    /// 双击
    pub const TOUCH_EVENT_DOUBLE_CLICK: u8 = 2;

    /// 三击
    pub const TOUCH_EVENT_TRIPLE_CLICK: u8 = 3;

    /// 四击
    pub const TOUCH_EVENT_QUADRUPLE_CLICK: u8 = 4;

    /// 五击
    pub const TOUCH_EVENT_QUINTUPLE_CLICK: u8 = 5;

    /// 六击
    pub const TOUCH_EVENT_SEXTUPLE_CLICK: u8 = 6;

    /// 多次点击（超过六次）
    pub const TOUCH_EVENT_MULTI_CLICK: u8 = 7;

    /// 向左滑动
    pub const TOUCH_EVENT_SLIDE_LEFT: u8 = 8;

    /// 向右滑动
    pub const TOUCH_EVENT_SLIDE_RIGHT: u8 = 9;

}


impl Default for TouchState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TouchState::default())
  }
}

impl rosidl_runtime_rs::Message for TouchState {
  type RmwMsg = super::msg::rmw::TouchState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_id: msg.sensor_id,
        event_type: msg.event_type,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sensor_id: msg.sensor_id,
      event_type: msg.event_type,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      sensor_id: msg.sensor_id,
      event_type: msg.event_type,
    }
  }
}


// Corresponds to aimdk_msgs__msg__SysInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SysInfo {
    /// 数据头
    pub header: super::msg::MessageHeader,

    /// ORIN 温度信息
    /// cpu温度
    pub soc1_cpu_temperature: f32,

}



impl Default for SysInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SysInfo::default())
  }
}

impl rosidl_runtime_rs::Message for SysInfo {
  type RmwMsg = super::msg::rmw::SysInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        soc1_cpu_temperature: msg.soc1_cpu_temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      soc1_cpu_temperature: msg.soc1_cpu_temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      soc1_cpu_temperature: msg.soc1_cpu_temperature,
    }
  }
}


// Corresponds to aimdk_msgs__msg__ServoStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoStatus {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 头部舵机反馈角度(当前没有反馈等于控制角度)
    pub position: f32,

}



impl Default for ServoStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ServoStatus {
  type RmwMsg = super::msg::rmw::ServoStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      position: msg.position,
    }
  }
}


// Corresponds to aimdk_msgs__msg__ServoCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoCommand {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 头部舵机控制角度，单位 rad，0-pi/2
    pub position: f32,

}



impl Default for ServoCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ServoCommand {
  type RmwMsg = super::msg::rmw::ServoCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      position: msg.position,
    }
  }
}


// Corresponds to aimdk_msgs__msg__RgbdInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RgbdInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub exposure: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,

}



impl Default for RgbdInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RgbdInfo::default())
  }
}

impl rosidl_runtime_rs::Message for RgbdInfo {
  type RmwMsg = super::msg::rmw::RgbdInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        exposure: msg.exposure,
        temperature: msg.temperature,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      exposure: msg.exposure,
      temperature: msg.temperature,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      exposure: msg.exposure,
      temperature: msg.temperature,
    }
  }
}


// Corresponds to aimdk_msgs__msg__RGBState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RGBState {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 当前显示模式
    pub display_mode: u8,

    /// 红色分量，自定义模式下生效
    pub r: u8,

    /// 绿色分量，自定义模式下生效
    pub g: u8,

    /// 蓝色分量，自定义模式下生效
    pub b: u8,

    /// 周期，自定义模式下生效。单位ms，0表示常亮，非0值表示点亮或者熄灭的保持时间
    pub period: u16,

}



impl Default for RGBState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RGBState::default())
  }
}

impl rosidl_runtime_rs::Message for RGBState {
  type RmwMsg = super::msg::rmw::RGBState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        display_mode: msg.display_mode,
        r: msg.r,
        g: msg.g,
        b: msg.b,
        period: msg.period,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      display_mode: msg.display_mode,
      r: msg.r,
      g: msg.g,
      b: msg.b,
      period: msg.period,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      display_mode: msg.display_mode,
      r: msg.r,
      g: msg.g,
      b: msg.b,
      period: msg.period,
    }
  }
}


// Corresponds to aimdk_msgs__msg__PmuStateArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PmuStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pmu: Vec<super::msg::PmuState>,

}



impl Default for PmuStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PmuStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for PmuStateArray {
  type RmwMsg = super::msg::rmw::PmuStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pmu: msg.pmu
          .into_iter()
          .map(|elem| super::msg::PmuState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pmu: msg.pmu
          .iter()
          .map(|elem| super::msg::PmuState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      pmu: msg.pmu
          .into_iter()
          .map(super::msg::PmuState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__PmuState
/// -------------- pmu -------------- #
/// 版本信息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PmuState {
    /// 协议版本
    pub pmu_protocol_version: std::string::String,

    /// 硬件版本
    pub pmu_hardware_version: std::string::String,

    /// 软件版本
    pub pmu_software_version: std::string::String,

    /// 电源状态，1-长按关机触发，2-短按+长按关机触发  3-长按关机确认  4-短按+长按关机确认
    pub power_status: u16,

    /// 错误码
    pub pmu_bool_status: u32,

    /// TODO布尔状态位定义说明：
    /// bit 0: rk3588PowerGood          RK3588 电源状态
    /// bit 1: rk3588Monitor1           RK3588 监控状态1
    /// bit 2: rk3588Monitor2           RK3588 监控状态2
    /// bit 3: orinPowerGood            ORIN 电源状态
    /// bit 4: orinMonitor1             ORIN 监控状态1
    /// bit 5: orinMonitor2             ORIN 监控状态2
    /// bit 6: bus48vOverCurrent        48V 总线过流
    /// bit 7: bus48vOverTemperature    48V 总线过温
    /// bit 8: rk3588PlugDetect         RK3588 插入检测
    /// bit 9: orinNXPlugDetect         ORIN NX 插入检测
    /// bits 10~31: reserved            保留位
    /// 电压信息
    /// LDO 3v3电压(单位: V)
    pub vcc_3v3_voltage: f32,

    /// LDO 1v8电压(单位: V)
    pub vcc_1v8_voltage: f32,

    /// LDO 1v2电压(单位: V)
    pub vcc_1v2_voltage: f32,

    /// NFC 5v电压(单位: V)
    pub nfc_5v_voltage: f32,

    /// Soc RK3576 5V电压(单位: V)
    pub soc_5v_voltage: f32,

    /// 系统 5V电压(单位: V)
    pub sys_5v_voltage: f32,

    /// 系统 12V电压(单位: V)
    pub sys_12v_voltage: f32,

    /// Orin 12v电压(单位: V)
    pub orin_12v_voltage: f32,

    /// 二开 12V电压(单位: V)
    pub ext_12v_voltage: f32,

    /// 二开 24V电压(单位: V)
    pub ext_24v_voltage: f32,

    /// 上肢 48V电压(单位: V)
    pub arm_48v_voltage: f32,

    /// 下肢 48V电压(单位: V)
    pub leg_48v_voltage: f32,

    /// 电流信息
    /// Soc RK3576 5V电流(单位: A)
    pub soc_5v_current: f32,

    /// 系统 5V电流(单位: A)
    pub sys_5v_current: f32,

    /// 系统 12V电流(单位: A)
    pub sys_12v_current: f32,

    /// Orin 12v电流(单位: A)
    pub orin_12v_current: f32,

    /// 二开 12V电流(单位: A)
    pub ext_12v_current: f32,

    /// 二开 24V电流(单位: A)
    pub ext_24v_current: f32,

    /// 上肢 48V电流(单位: A)
    pub arm_48v_current: f32,

    /// 下肢 48V电流(单位: A)
    pub leg_48v_current: f32,

    /// -------------- bms -------------- #
    /// 版本信息
    /// 厂家信息
    pub bms_manufacturer: std::string::String,

    /// 序列号
    pub bms_serial_number: std::string::String,

    /// 协议版本
    pub bms_protocol_version: std::string::String,

    /// 硬件版本
    pub bms_hardware_version: std::string::String,

    /// 软件版本
    pub bms_software_version: std::string::String,

    /// 状态信息
    /// 状态位和状态码
    pub bms_status: u32,

    /// 状态位和状态码说明
    /// bit 0: chargeFlag                           充电标志
    /// bit 1: chargeOverCurrentFlag                充电过流标志
    /// bit 2: dischargeFlag                        放电标志
    /// bit 3: dischargeOverCurrentFlag             放电过流标志
    /// bit 4: shortCircuitFlag                     电池短路标志
    /// bit 5: cellOverVoltageFlag                  电芯电压过压标志
    /// bit 6: cellUnderVoltageFlag                 电芯电压欠压标志
    /// bit 7: batteryOverVoltageFlag               电池总电压过压标志
    /// bit 8 batteryUnderVoltageFlag               电池总电压欠压标志
    /// bit 9: cellOpenCircuitFlag                  电芯检测到开路标志
    /// bit 10: ntcOpenCircuitFlag                  温度传感器检测到开路标志
    /// bit 11: cellDischargeOverTemperatureFlag    电芯温度超过放电温度上限标志
    /// bit 12: cellChargeOverTemperatureFlag       电芯温度超过充电温度上限标志
    /// bit 13: cellDischargeUnderTemperatureFlag   电芯温度低于放电温度下限标志
    /// bit 14: cellChargeUnderTemperatureFlag      电芯温度低于充电温度下限标志
    /// bit 15: reserved_1                          保留位
    /// bit 16: cellMaxVoltageDiffOverHighFlag      电芯最大电压差超过上限标志
    /// bit 17: mosfetChargeDisableFlag             MOSFET禁止充电标志
    /// bit 18: mosfetDischargeDisableFlag          MOSFET禁止放电标志
    /// bit 19: mosfetOverTemperatureFlag           MOSFET温度超过工作温度上限标志
    /// bit 20: balanceLineResistanceOverHighFlag   电池包均衡线电阻超过上限标志
    /// bit 21~31: reserved_11                      保留位
    /// 电池包均衡线电阻（单位：mΩ）
    pub bms_balance_line_resistance: u16,

    /// 电池包电压（单位：V）
    pub bms_voltage: u32,

    /// 电池包电流（单位：A，充电为正，放电为负）
    pub bms_current: i32,

    /// 电池包输出功率（单位：W）
    pub bms_power: i32,

    /// 电池包当前温度（单位：℃）
    pub bms_temperature: u32,

    /// 当前电池剩余容量（单位：mAh）
    pub bms_remaining_capacity: u32,

    /// 当前电池剩余容量百分比（单位：％）
    pub bms_remaining_capacity_percentage: u8,

    /// 当前电池包完整循环次数（单位：次）
    pub bms_cycle_count: u16,

    /// 总充放电容量累计（单位：Ah）
    pub bms_cycle_total_capacity: u32,

}



impl Default for PmuState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PmuState::default())
  }
}

impl rosidl_runtime_rs::Message for PmuState {
  type RmwMsg = super::msg::rmw::PmuState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pmu_protocol_version: msg.pmu_protocol_version.as_str().into(),
        pmu_hardware_version: msg.pmu_hardware_version.as_str().into(),
        pmu_software_version: msg.pmu_software_version.as_str().into(),
        power_status: msg.power_status,
        pmu_bool_status: msg.pmu_bool_status,
        vcc_3v3_voltage: msg.vcc_3v3_voltage,
        vcc_1v8_voltage: msg.vcc_1v8_voltage,
        vcc_1v2_voltage: msg.vcc_1v2_voltage,
        nfc_5v_voltage: msg.nfc_5v_voltage,
        soc_5v_voltage: msg.soc_5v_voltage,
        sys_5v_voltage: msg.sys_5v_voltage,
        sys_12v_voltage: msg.sys_12v_voltage,
        orin_12v_voltage: msg.orin_12v_voltage,
        ext_12v_voltage: msg.ext_12v_voltage,
        ext_24v_voltage: msg.ext_24v_voltage,
        arm_48v_voltage: msg.arm_48v_voltage,
        leg_48v_voltage: msg.leg_48v_voltage,
        soc_5v_current: msg.soc_5v_current,
        sys_5v_current: msg.sys_5v_current,
        sys_12v_current: msg.sys_12v_current,
        orin_12v_current: msg.orin_12v_current,
        ext_12v_current: msg.ext_12v_current,
        ext_24v_current: msg.ext_24v_current,
        arm_48v_current: msg.arm_48v_current,
        leg_48v_current: msg.leg_48v_current,
        bms_manufacturer: msg.bms_manufacturer.as_str().into(),
        bms_serial_number: msg.bms_serial_number.as_str().into(),
        bms_protocol_version: msg.bms_protocol_version.as_str().into(),
        bms_hardware_version: msg.bms_hardware_version.as_str().into(),
        bms_software_version: msg.bms_software_version.as_str().into(),
        bms_status: msg.bms_status,
        bms_balance_line_resistance: msg.bms_balance_line_resistance,
        bms_voltage: msg.bms_voltage,
        bms_current: msg.bms_current,
        bms_power: msg.bms_power,
        bms_temperature: msg.bms_temperature,
        bms_remaining_capacity: msg.bms_remaining_capacity,
        bms_remaining_capacity_percentage: msg.bms_remaining_capacity_percentage,
        bms_cycle_count: msg.bms_cycle_count,
        bms_cycle_total_capacity: msg.bms_cycle_total_capacity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pmu_protocol_version: msg.pmu_protocol_version.as_str().into(),
        pmu_hardware_version: msg.pmu_hardware_version.as_str().into(),
        pmu_software_version: msg.pmu_software_version.as_str().into(),
      power_status: msg.power_status,
      pmu_bool_status: msg.pmu_bool_status,
      vcc_3v3_voltage: msg.vcc_3v3_voltage,
      vcc_1v8_voltage: msg.vcc_1v8_voltage,
      vcc_1v2_voltage: msg.vcc_1v2_voltage,
      nfc_5v_voltage: msg.nfc_5v_voltage,
      soc_5v_voltage: msg.soc_5v_voltage,
      sys_5v_voltage: msg.sys_5v_voltage,
      sys_12v_voltage: msg.sys_12v_voltage,
      orin_12v_voltage: msg.orin_12v_voltage,
      ext_12v_voltage: msg.ext_12v_voltage,
      ext_24v_voltage: msg.ext_24v_voltage,
      arm_48v_voltage: msg.arm_48v_voltage,
      leg_48v_voltage: msg.leg_48v_voltage,
      soc_5v_current: msg.soc_5v_current,
      sys_5v_current: msg.sys_5v_current,
      sys_12v_current: msg.sys_12v_current,
      orin_12v_current: msg.orin_12v_current,
      ext_12v_current: msg.ext_12v_current,
      ext_24v_current: msg.ext_24v_current,
      arm_48v_current: msg.arm_48v_current,
      leg_48v_current: msg.leg_48v_current,
        bms_manufacturer: msg.bms_manufacturer.as_str().into(),
        bms_serial_number: msg.bms_serial_number.as_str().into(),
        bms_protocol_version: msg.bms_protocol_version.as_str().into(),
        bms_hardware_version: msg.bms_hardware_version.as_str().into(),
        bms_software_version: msg.bms_software_version.as_str().into(),
      bms_status: msg.bms_status,
      bms_balance_line_resistance: msg.bms_balance_line_resistance,
      bms_voltage: msg.bms_voltage,
      bms_current: msg.bms_current,
      bms_power: msg.bms_power,
      bms_temperature: msg.bms_temperature,
      bms_remaining_capacity: msg.bms_remaining_capacity,
      bms_remaining_capacity_percentage: msg.bms_remaining_capacity_percentage,
      bms_cycle_count: msg.bms_cycle_count,
      bms_cycle_total_capacity: msg.bms_cycle_total_capacity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pmu_protocol_version: msg.pmu_protocol_version.to_string(),
      pmu_hardware_version: msg.pmu_hardware_version.to_string(),
      pmu_software_version: msg.pmu_software_version.to_string(),
      power_status: msg.power_status,
      pmu_bool_status: msg.pmu_bool_status,
      vcc_3v3_voltage: msg.vcc_3v3_voltage,
      vcc_1v8_voltage: msg.vcc_1v8_voltage,
      vcc_1v2_voltage: msg.vcc_1v2_voltage,
      nfc_5v_voltage: msg.nfc_5v_voltage,
      soc_5v_voltage: msg.soc_5v_voltage,
      sys_5v_voltage: msg.sys_5v_voltage,
      sys_12v_voltage: msg.sys_12v_voltage,
      orin_12v_voltage: msg.orin_12v_voltage,
      ext_12v_voltage: msg.ext_12v_voltage,
      ext_24v_voltage: msg.ext_24v_voltage,
      arm_48v_voltage: msg.arm_48v_voltage,
      leg_48v_voltage: msg.leg_48v_voltage,
      soc_5v_current: msg.soc_5v_current,
      sys_5v_current: msg.sys_5v_current,
      sys_12v_current: msg.sys_12v_current,
      orin_12v_current: msg.orin_12v_current,
      ext_12v_current: msg.ext_12v_current,
      ext_24v_current: msg.ext_24v_current,
      arm_48v_current: msg.arm_48v_current,
      leg_48v_current: msg.leg_48v_current,
      bms_manufacturer: msg.bms_manufacturer.to_string(),
      bms_serial_number: msg.bms_serial_number.to_string(),
      bms_protocol_version: msg.bms_protocol_version.to_string(),
      bms_hardware_version: msg.bms_hardware_version.to_string(),
      bms_software_version: msg.bms_software_version.to_string(),
      bms_status: msg.bms_status,
      bms_balance_line_resistance: msg.bms_balance_line_resistance,
      bms_voltage: msg.bms_voltage,
      bms_current: msg.bms_current,
      bms_power: msg.bms_power,
      bms_temperature: msg.bms_temperature,
      bms_remaining_capacity: msg.bms_remaining_capacity,
      bms_remaining_capacity_percentage: msg.bms_remaining_capacity_percentage,
      bms_cycle_count: msg.bms_cycle_count,
      bms_cycle_total_capacity: msg.bms_cycle_total_capacity,
    }
  }
}


// Corresponds to aimdk_msgs__msg__Pmu

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pmu {
    /// 数据头
    pub header: super::msg::MessageHeader,

    /// 版本信息
    /// 协议版本
    pub protocol_version: std::string::String,

    /// 硬件版本
    pub hardware_version: std::string::String,

    /// 软件版本
    pub software_version: std::string::String,

    /// ORIN版本
    pub orin_hardware_version: std::string::String,

    /// 状态字
    pub status_word: u16,

    /// 错误码
    /// 预留
    pub status: u32,

    /// 电压信息
    /// LDO 3v3电压(单位: V)
    pub vcc_3v3_voltage: f32,

    /// LDO 1v8电压(单位: V)
    pub vcc_1v8_voltage: f32,

    /// LDO 1v2电压(单位: V)
    pub vcc_1v2_voltage: f32,

    /// NFC 5v电压(单位: V)
    pub nfc_5v_voltage: f32,

    /// 外设 5V电压(单位: V)
    pub periph_5v_voltage: f32,

    /// LCD电压(单位: V)
    pub lcd_voltage: f32,

    /// 系统第二路 12v电压(单位: V)
    pub sys2_12v_voltage: f32,

    /// Soc0 5V电压(单位: V)
    pub soc0_5v_voltage: f32,

    /// 系统 5V电压 (单位: V)
    pub sys_5v_voltage: f32,

    /// 系统 12V电压(单位: V)
    pub sys_12v_voltage: f32,

    /// Soc1 12v电压(单位: V)
    pub soc1_12v_voltage: f32,

    /// 扩展接口 12V电压(单位: V)
    pub ext_12v_voltage: f32,

    /// 扩展接口 24V电压(单位: V)
    pub ext_24v_voltage: f32,

    /// 上肢 48V电压(单位: V)
    pub arm_48v_voltage: f32,

    /// 下肢 48V电压(单位: V)
    pub leg_48v_voltage: f32,

    /// 电流信息
    /// Soc0 5V电流(单位: A)
    pub soc0_5v_current: f32,

    /// 外设 5V电流(单位: A)
    pub periph_5v_current: f32,

    /// 系统第二路 12V电流(单位: A)
    pub sys2_12v_current: f32,

    /// 系统 5V电流(单位: A)
    pub sys_5v_current: f32,

    /// 系统 12V电流(单位: A)
    pub sys_12v_current: f32,

    /// Soc1 12v电流(单位: A)
    pub soc1_12v_current: f32,

    /// 扩展接口 12V电流(单位: A)
    pub ext_12v_current: f32,

    /// 扩展接口 24V电流(单位: A)
    pub ext_24v_current: f32,

    /// 上肢 48V电流(单位: A)
    pub arm_48v_current: f32,

    /// 下肢 48V电流(单位: A)
    pub leg_48v_current: f32,

    /// 温度信息
    /// 48V→12V Orin 左侧温度(单位: ℃)
    pub temp_48to12_orin_left: f32,

    /// 48V→12V Orin 底部温度(单位: ℃)
    pub temp_48to12_orin_bottom: f32,

    /// 12V 外设 MOS 温度(单位: ℃)
    pub temp_12v_ext_mos: f32,

    /// 12V→5V 转换温度(单位: ℃)
    pub temp_12to5: f32,

    /// eMMC 温度(单位: ℃)
    pub temp_emmc: f32,

    /// SoC 温度(单位: ℃)
    pub temp_soc: f32,

}



impl Default for Pmu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pmu::default())
  }
}

impl rosidl_runtime_rs::Message for Pmu {
  type RmwMsg = super::msg::rmw::Pmu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        orin_hardware_version: msg.orin_hardware_version.as_str().into(),
        status_word: msg.status_word,
        status: msg.status,
        vcc_3v3_voltage: msg.vcc_3v3_voltage,
        vcc_1v8_voltage: msg.vcc_1v8_voltage,
        vcc_1v2_voltage: msg.vcc_1v2_voltage,
        nfc_5v_voltage: msg.nfc_5v_voltage,
        periph_5v_voltage: msg.periph_5v_voltage,
        lcd_voltage: msg.lcd_voltage,
        sys2_12v_voltage: msg.sys2_12v_voltage,
        soc0_5v_voltage: msg.soc0_5v_voltage,
        sys_5v_voltage: msg.sys_5v_voltage,
        sys_12v_voltage: msg.sys_12v_voltage,
        soc1_12v_voltage: msg.soc1_12v_voltage,
        ext_12v_voltage: msg.ext_12v_voltage,
        ext_24v_voltage: msg.ext_24v_voltage,
        arm_48v_voltage: msg.arm_48v_voltage,
        leg_48v_voltage: msg.leg_48v_voltage,
        soc0_5v_current: msg.soc0_5v_current,
        periph_5v_current: msg.periph_5v_current,
        sys2_12v_current: msg.sys2_12v_current,
        sys_5v_current: msg.sys_5v_current,
        sys_12v_current: msg.sys_12v_current,
        soc1_12v_current: msg.soc1_12v_current,
        ext_12v_current: msg.ext_12v_current,
        ext_24v_current: msg.ext_24v_current,
        arm_48v_current: msg.arm_48v_current,
        leg_48v_current: msg.leg_48v_current,
        temp_48to12_orin_left: msg.temp_48to12_orin_left,
        temp_48to12_orin_bottom: msg.temp_48to12_orin_bottom,
        temp_12v_ext_mos: msg.temp_12v_ext_mos,
        temp_12to5: msg.temp_12to5,
        temp_emmc: msg.temp_emmc,
        temp_soc: msg.temp_soc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        orin_hardware_version: msg.orin_hardware_version.as_str().into(),
      status_word: msg.status_word,
      status: msg.status,
      vcc_3v3_voltage: msg.vcc_3v3_voltage,
      vcc_1v8_voltage: msg.vcc_1v8_voltage,
      vcc_1v2_voltage: msg.vcc_1v2_voltage,
      nfc_5v_voltage: msg.nfc_5v_voltage,
      periph_5v_voltage: msg.periph_5v_voltage,
      lcd_voltage: msg.lcd_voltage,
      sys2_12v_voltage: msg.sys2_12v_voltage,
      soc0_5v_voltage: msg.soc0_5v_voltage,
      sys_5v_voltage: msg.sys_5v_voltage,
      sys_12v_voltage: msg.sys_12v_voltage,
      soc1_12v_voltage: msg.soc1_12v_voltage,
      ext_12v_voltage: msg.ext_12v_voltage,
      ext_24v_voltage: msg.ext_24v_voltage,
      arm_48v_voltage: msg.arm_48v_voltage,
      leg_48v_voltage: msg.leg_48v_voltage,
      soc0_5v_current: msg.soc0_5v_current,
      periph_5v_current: msg.periph_5v_current,
      sys2_12v_current: msg.sys2_12v_current,
      sys_5v_current: msg.sys_5v_current,
      sys_12v_current: msg.sys_12v_current,
      soc1_12v_current: msg.soc1_12v_current,
      ext_12v_current: msg.ext_12v_current,
      ext_24v_current: msg.ext_24v_current,
      arm_48v_current: msg.arm_48v_current,
      leg_48v_current: msg.leg_48v_current,
      temp_48to12_orin_left: msg.temp_48to12_orin_left,
      temp_48to12_orin_bottom: msg.temp_48to12_orin_bottom,
      temp_12v_ext_mos: msg.temp_12v_ext_mos,
      temp_12to5: msg.temp_12to5,
      temp_emmc: msg.temp_emmc,
      temp_soc: msg.temp_soc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      protocol_version: msg.protocol_version.to_string(),
      hardware_version: msg.hardware_version.to_string(),
      software_version: msg.software_version.to_string(),
      orin_hardware_version: msg.orin_hardware_version.to_string(),
      status_word: msg.status_word,
      status: msg.status,
      vcc_3v3_voltage: msg.vcc_3v3_voltage,
      vcc_1v8_voltage: msg.vcc_1v8_voltage,
      vcc_1v2_voltage: msg.vcc_1v2_voltage,
      nfc_5v_voltage: msg.nfc_5v_voltage,
      periph_5v_voltage: msg.periph_5v_voltage,
      lcd_voltage: msg.lcd_voltage,
      sys2_12v_voltage: msg.sys2_12v_voltage,
      soc0_5v_voltage: msg.soc0_5v_voltage,
      sys_5v_voltage: msg.sys_5v_voltage,
      sys_12v_voltage: msg.sys_12v_voltage,
      soc1_12v_voltage: msg.soc1_12v_voltage,
      ext_12v_voltage: msg.ext_12v_voltage,
      ext_24v_voltage: msg.ext_24v_voltage,
      arm_48v_voltage: msg.arm_48v_voltage,
      leg_48v_voltage: msg.leg_48v_voltage,
      soc0_5v_current: msg.soc0_5v_current,
      periph_5v_current: msg.periph_5v_current,
      sys2_12v_current: msg.sys2_12v_current,
      sys_5v_current: msg.sys_5v_current,
      sys_12v_current: msg.sys_12v_current,
      soc1_12v_current: msg.soc1_12v_current,
      ext_12v_current: msg.ext_12v_current,
      ext_24v_current: msg.ext_24v_current,
      arm_48v_current: msg.arm_48v_current,
      leg_48v_current: msg.leg_48v_current,
      temp_48to12_orin_left: msg.temp_48to12_orin_left,
      temp_48to12_orin_bottom: msg.temp_48to12_orin_bottom,
      temp_12v_ext_mos: msg.temp_12v_ext_mos,
      temp_12to5: msg.temp_12to5,
      temp_emmc: msg.temp_emmc,
      temp_soc: msg.temp_soc,
    }
  }
}


// Corresponds to aimdk_msgs__msg__NeckLightState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeckLightState {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for NeckLightState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NeckLightState::default())
  }
}

impl rosidl_runtime_rs::Message for NeckLightState {
  type RmwMsg = super::msg::rmw::NeckLightState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        enable: msg.enable,
        brightness: msg.brightness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      enable: msg.enable,
      brightness: msg.brightness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      enable: msg.enable,
      brightness: msg.brightness,
    }
  }
}


// Corresponds to aimdk_msgs__msg__MotorStatus
/// 电机状态消息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// 电机使能状态：true 全部电机使能成功, false 电机不供电/未使能/部分电机使能失败
    /// 暂不检测运行过程中电机掉使能
    pub motor_enable: bool,

}



impl Default for MotorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = super::msg::rmw::MotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motor_enable: msg.motor_enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      motor_enable: msg.motor_enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      motor_enable: msg.motor_enable,
    }
  }
}


// Corresponds to aimdk_msgs__msg__ModuleInfo
/// --------------------------------------------------------------------------------------------------------------
/// 模块信息 (ModuleInfo)
///
/// 字段说明:
///   header:    消息头 (时间戳、坐标系、序列号等)
///   module_id: 模块唯一标识符
///   info:      模块属性键值对列表
///
/// --------------------------------------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleInfo {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 模块唯一ID
    pub module_id: std::string::String,

    /// 模块信息键值对列表
    pub info: Vec<super::msg::KeyValue>,

}



impl Default for ModuleInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModuleInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ModuleInfo {
  type RmwMsg = super::msg::rmw::ModuleInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        module_id: msg.module_id.as_str().into(),
        info: msg.info
          .into_iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        module_id: msg.module_id.as_str().into(),
        info: msg.info
          .iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      module_id: msg.module_id.to_string(),
      info: msg.info
          .into_iter()
          .map(super::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ManipulationCommandArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManipulationCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manipulations: Vec<super::msg::ManipulationCommand>,

}



impl Default for ManipulationCommandArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManipulationCommandArray::default())
  }
}

impl rosidl_runtime_rs::Message for ManipulationCommandArray {
  type RmwMsg = super::msg::rmw::ManipulationCommandArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        manipulations: msg.manipulations
          .into_iter()
          .map(|elem| super::msg::ManipulationCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        manipulations: msg.manipulations
          .iter()
          .map(|elem| super::msg::ManipulationCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      manipulations: msg.manipulations
          .into_iter()
          .map(super::msg::ManipulationCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__ManipulationCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManipulationCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: f64,

}



impl Default for ManipulationCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ManipulationCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ManipulationCommand {
  type RmwMsg = super::msg::rmw::ManipulationCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        effort: msg.effort,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
    }
  }
}


// Corresponds to aimdk_msgs__msg__LidarRawData
/// --------------------------------------------------------------------------------------------------------------
/// 机器人激光雷达原始数据 (Raw packets from LiDAR sensor)
/// --------------------------------------------------------------------------------------------------------------
/// 头部信息：时间戳、坐标系、序列号等

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarRawData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,

    /// MSOP (Measurement Data Packets):
    ///   - 含点云量测数据原始字节
    ///   - 通常为设备按固定包长度输出的连续数据
    ///   - 不做解析，保持原始二进制序列
    pub msop_data: Vec<u8>,

    /// DIFOP (Device Information Packets):
    ///   - 设备状态、校准、雷达内部配置等信息
    ///   - 一般频率低于 MSOP
    ///   - 解析可用于标定/雷达健康监测
    pub difop_data: Vec<u8>,

}



impl Default for LidarRawData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LidarRawData::default())
  }
}

impl rosidl_runtime_rs::Message for LidarRawData {
  type RmwMsg = super::msg::rmw::LidarRawData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        msop_data: msg.msop_data.as_slice().into(),
        difop_data: msg.difop_data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        msop_data: msg.msop_data.as_slice().into(),
        difop_data: msg.difop_data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      msop_data: msg.msop_data.into(),
      difop_data: msg.difop_data.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointStateArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<super::msg::JointState>,

}



impl Default for JointStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for JointStateArray {
  type RmwMsg = super::msg::rmw::JointStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joints: msg.joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joints: msg.joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      joints: msg.joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub coil_temp: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_temp: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_vol: u8,

}



impl Default for JointState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointState::default())
  }
}

impl rosidl_runtime_rs::Message for JointState {
  type RmwMsg = super::msg::rmw::JointState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        effort: msg.effort,
        coil_temp: msg.coil_temp,
        motor_temp: msg.motor_temp,
        motor_vol: msg.motor_vol,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      coil_temp: msg.coil_temp,
      motor_temp: msg.motor_temp,
      motor_vol: msg.motor_vol,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      coil_temp: msg.coil_temp,
      motor_temp: msg.motor_temp,
      motor_vol: msg.motor_vol,
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointProtectConfig

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointProtectConfig {

    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_mos_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_mos_recover: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_current_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_current_recover: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_voltage_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l1_voltage_recover: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_mos_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_mos_recover: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_current_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_current_recover: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_voltage_protect: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub l2_voltage_recover: i16,

}



impl Default for JointProtectConfig {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointProtectConfig::default())
  }
}

impl rosidl_runtime_rs::Message for JointProtectConfig {
  type RmwMsg = super::msg::rmw::JointProtectConfig;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        l1_mos_protect: msg.l1_mos_protect,
        l1_mos_recover: msg.l1_mos_recover,
        l1_current_protect: msg.l1_current_protect,
        l1_current_recover: msg.l1_current_recover,
        l1_voltage_protect: msg.l1_voltage_protect,
        l1_voltage_recover: msg.l1_voltage_recover,
        l2_mos_protect: msg.l2_mos_protect,
        l2_mos_recover: msg.l2_mos_recover,
        l2_current_protect: msg.l2_current_protect,
        l2_current_recover: msg.l2_current_recover,
        l2_voltage_protect: msg.l2_voltage_protect,
        l2_voltage_recover: msg.l2_voltage_recover,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      l1_mos_protect: msg.l1_mos_protect,
      l1_mos_recover: msg.l1_mos_recover,
      l1_current_protect: msg.l1_current_protect,
      l1_current_recover: msg.l1_current_recover,
      l1_voltage_protect: msg.l1_voltage_protect,
      l1_voltage_recover: msg.l1_voltage_recover,
      l2_mos_protect: msg.l2_mos_protect,
      l2_mos_recover: msg.l2_mos_recover,
      l2_current_protect: msg.l2_current_protect,
      l2_current_recover: msg.l2_current_recover,
      l2_voltage_protect: msg.l2_voltage_protect,
      l2_voltage_recover: msg.l2_voltage_recover,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      l1_mos_protect: msg.l1_mos_protect,
      l1_mos_recover: msg.l1_mos_recover,
      l1_current_protect: msg.l1_current_protect,
      l1_current_recover: msg.l1_current_recover,
      l1_voltage_protect: msg.l1_voltage_protect,
      l1_voltage_recover: msg.l1_voltage_recover,
      l2_mos_protect: msg.l2_mos_protect,
      l2_mos_recover: msg.l2_mos_recover,
      l2_current_protect: msg.l2_current_protect,
      l2_current_recover: msg.l2_current_recover,
      l2_voltage_protect: msg.l2_voltage_protect,
      l2_voltage_recover: msg.l2_voltage_recover,
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointPower

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPower {
    /// 消息头信息
    pub header: super::msg::MessageHeader,

    /// 实际供电状态：1-上电，2-下电
    pub motor_power_state: u8,

}



impl Default for JointPower {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointPower::default())
  }
}

impl rosidl_runtime_rs::Message for JointPower {
  type RmwMsg = super::msg::rmw::JointPower;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motor_power_state: msg.motor_power_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      motor_power_state: msg.motor_power_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      motor_power_state: msg.motor_power_state,
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointMitParams

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointMitParams {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_max: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_min: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_max: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_min: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tor_max: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tor_min: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp_max: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp_min: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd_max: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd_min: i16,

}



impl Default for JointMitParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointMitParams::default())
  }
}

impl rosidl_runtime_rs::Message for JointMitParams {
  type RmwMsg = super::msg::rmw::JointMitParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pos_max: msg.pos_max,
        pos_min: msg.pos_min,
        vel_max: msg.vel_max,
        vel_min: msg.vel_min,
        tor_max: msg.tor_max,
        tor_min: msg.tor_min,
        kp_max: msg.kp_max,
        kp_min: msg.kp_min,
        kd_max: msg.kd_max,
        kd_min: msg.kd_min,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pos_max: msg.pos_max,
      pos_min: msg.pos_min,
      vel_max: msg.vel_max,
      vel_min: msg.vel_min,
      tor_max: msg.tor_max,
      tor_min: msg.tor_min,
      kp_max: msg.kp_max,
      kp_min: msg.kp_min,
      kd_max: msg.kd_max,
      kd_min: msg.kd_min,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pos_max: msg.pos_max,
      pos_min: msg.pos_min,
      vel_max: msg.vel_max,
      vel_min: msg.vel_min,
      tor_max: msg.tor_max,
      tor_min: msg.tor_min,
      kp_max: msg.kp_max,
      kp_min: msg.kp_min,
      kd_max: msg.kd_max,
      kd_min: msg.kd_min,
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointInfoArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<super::msg::JointInfo>,

}



impl Default for JointInfoArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointInfoArray::default())
  }
}

impl rosidl_runtime_rs::Message for JointInfoArray {
  type RmwMsg = super::msg::rmw::JointInfoArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joints: msg.joints
          .into_iter()
          .map(|elem| super::msg::JointInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joints: msg.joints
          .iter()
          .map(|elem| super::msg::JointInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      joints: msg.joints
          .into_iter()
          .map(super::msg::JointInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hardware_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mit_params: super::msg::JointMitParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub protect_config: super::msg::JointProtectConfig,

}



impl Default for JointInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointInfo::default())
  }
}

impl rosidl_runtime_rs::Message for JointInfo {
  type RmwMsg = super::msg::rmw::JointInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        mode: msg.mode,
        mit_params: super::msg::JointMitParams::into_rmw_message(std::borrow::Cow::Owned(msg.mit_params)).into_owned(),
        protect_config: super::msg::JointProtectConfig::into_rmw_message(std::borrow::Cow::Owned(msg.protect_config)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      mode: msg.mode,
        mit_params: super::msg::JointMitParams::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mit_params)).into_owned(),
        protect_config: super::msg::JointProtectConfig::into_rmw_message(std::borrow::Cow::Borrowed(&msg.protect_config)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      hardware_version: msg.hardware_version.to_string(),
      software_version: msg.software_version.to_string(),
      mode: msg.mode,
      mit_params: super::msg::JointMitParams::from_rmw_message(msg.mit_params),
      protect_config: super::msg::JointProtectConfig::from_rmw_message(msg.protect_config),
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointCommandArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: Vec<super::msg::JointCommand>,

}



impl Default for JointCommandArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCommandArray::default())
  }
}

impl rosidl_runtime_rs::Message for JointCommandArray {
  type RmwMsg = super::msg::rmw::JointCommandArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joints: msg.joints
          .into_iter()
          .map(|elem| super::msg::JointCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joints: msg.joints
          .iter()
          .map(|elem| super::msg::JointCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      joints: msg.joints
          .into_iter()
          .map(super::msg::JointCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__JointCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stiffness: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub damping: f64,

}



impl Default for JointCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCommand::default())
  }
}

impl rosidl_runtime_rs::Message for JointCommand {
  type RmwMsg = super::msg::rmw::JointCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        effort: msg.effort,
        stiffness: msg.stiffness,
        damping: msg.damping,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      stiffness: msg.stiffness,
      damping: msg.damping,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      stiffness: msg.stiffness,
      damping: msg.damping,
    }
  }
}


// Corresponds to aimdk_msgs__msg__HandType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl HandType {
    /// 0: 无状态, 1: 灵巧手模式, 2: 爪模式, 255: 错误
    /// 无状态
    pub const NONE: u8 = 0;

    /// 灵巧手模式
    pub const NIMBLE_HANDS: u8 = 1;

    /// 假爪模式
    pub const CLAW: u8 = 2;

    /// 错误
    pub const ERROR: u8 = 255;

}


impl Default for HandType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandType::default())
  }
}

impl rosidl_runtime_rs::Message for HandType {
  type RmwMsg = super::msg::rmw::HandType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__HandStateArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hand_type: super::msg::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands: Vec<super::msg::HandState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hand_type: super::msg::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands: Vec<super::msg::HandState>,

}



impl Default for HandStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for HandStateArray {
  type RmwMsg = super::msg::rmw::HandStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        left_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.left_hand_type)).into_owned(),
        left_hands: msg.left_hands
          .into_iter()
          .map(|elem| super::msg::HandState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        right_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.right_hand_type)).into_owned(),
        right_hands: msg.right_hands
          .into_iter()
          .map(|elem| super::msg::HandState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        left_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_hand_type)).into_owned(),
        left_hands: msg.left_hands
          .iter()
          .map(|elem| super::msg::HandState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        right_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_hand_type)).into_owned(),
        right_hands: msg.right_hands
          .iter()
          .map(|elem| super::msg::HandState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      left_hand_type: super::msg::HandType::from_rmw_message(msg.left_hand_type),
      left_hands: msg.left_hands
          .into_iter()
          .map(super::msg::HandState::from_rmw_message)
          .collect(),
      right_hand_type: super::msg::HandType::from_rmw_message(msg.right_hand_type),
      right_hands: msg.right_hands
          .into_iter()
          .map(super::msg::HandState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__HandState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub faultcode: i32,

}



impl Default for HandState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandState::default())
  }
}

impl rosidl_runtime_rs::Message for HandState {
  type RmwMsg = super::msg::rmw::HandState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        effort: msg.effort,
        state: msg.state,
        faultcode: msg.faultcode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      state: msg.state,
      faultcode: msg.faultcode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      effort: msg.effort,
      state: msg.state,
      faultcode: msg.faultcode,
    }
  }
}


// Corresponds to aimdk_msgs__msg__HandCommandArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hand_type: super::msg::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands: Vec<super::msg::HandCommand>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hand_type: super::msg::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands: Vec<super::msg::HandCommand>,

}



impl Default for HandCommandArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandCommandArray::default())
  }
}

impl rosidl_runtime_rs::Message for HandCommandArray {
  type RmwMsg = super::msg::rmw::HandCommandArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        left_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.left_hand_type)).into_owned(),
        left_hands: msg.left_hands
          .into_iter()
          .map(|elem| super::msg::HandCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        right_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.right_hand_type)).into_owned(),
        right_hands: msg.right_hands
          .into_iter()
          .map(|elem| super::msg::HandCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        left_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_hand_type)).into_owned(),
        left_hands: msg.left_hands
          .iter()
          .map(|elem| super::msg::HandCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        right_hand_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_hand_type)).into_owned(),
        right_hands: msg.right_hands
          .iter()
          .map(|elem| super::msg::HandCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      left_hand_type: super::msg::HandType::from_rmw_message(msg.left_hand_type),
      left_hands: msg.left_hands
          .into_iter()
          .map(super::msg::HandCommand::from_rmw_message)
          .collect(),
      right_hand_type: super::msg::HandType::from_rmw_message(msg.right_hand_type),
      right_hands: msg.right_hands
          .into_iter()
          .map(super::msg::HandCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__HandCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deceleration: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub effort: f64,

}



impl Default for HandCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HandCommand::default())
  }
}

impl rosidl_runtime_rs::Message for HandCommand {
  type RmwMsg = super::msg::rmw::HandCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        deceleration: msg.deceleration,
        effort: msg.effort,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      deceleration: msg.deceleration,
      effort: msg.effort,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      deceleration: msg.deceleration,
      effort: msg.effort,
    }
  }
}


// Corresponds to aimdk_msgs__msg__FluxHeartbeat
/// FluxHeartbeat.msg — flux 录制状态心跳广播

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxHeartbeat {
    /// 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
    pub recording: i8,

    /// 录制来源: "app" / "agent" / "" (未录制时为空)
    pub source: std::string::String,

    /// 录制持续秒数（未录制时为 0）
    pub duration_sec: i64,

}



impl Default for FluxHeartbeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FluxHeartbeat::default())
  }
}

impl rosidl_runtime_rs::Message for FluxHeartbeat {
  type RmwMsg = super::msg::rmw::FluxHeartbeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        recording: msg.recording,
        source: msg.source.as_str().into(),
        duration_sec: msg.duration_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      recording: msg.recording,
        source: msg.source.as_str().into(),
      duration_sec: msg.duration_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      recording: msg.recording,
      source: msg.source.to_string(),
      duration_sec: msg.duration_sec,
    }
  }
}


// Corresponds to aimdk_msgs__msg__EmergencyState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_state: i32,

}



impl Default for EmergencyState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EmergencyState::default())
  }
}

impl rosidl_runtime_rs::Message for EmergencyState {
  type RmwMsg = super::msg::rmw::EmergencyState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        emergency_state: msg.emergency_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      emergency_state: msg.emergency_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      emergency_state: msg.emergency_state,
    }
  }
}


// Corresponds to aimdk_msgs__msg__DcuMonitorData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DcuMonitorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub monitor_data: Vec<f64>,

}



impl Default for DcuMonitorData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DcuMonitorData::default())
  }
}

impl rosidl_runtime_rs::Message for DcuMonitorData {
  type RmwMsg = super::msg::rmw::DcuMonitorData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        monitor_data: msg.monitor_data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        monitor_data: msg.monitor_data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      monitor_data: msg.monitor_data.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__Bms

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bms {
    /// 数据头
    pub header: super::msg::MessageHeader,

    /// 版本信息
    /// 厂家信息
    pub manufacturer: std::string::String,

    /// 序列号
    pub serial_number: std::string::String,

    /// 协议版本
    pub protocol_version: std::string::String,

    /// 硬件版本
    pub hardware_version: std::string::String,

    /// 软件版本
    pub software_version: std::string::String,

    /// 电源状态
    pub power_request: u16,

    /// 1-触发长按—关机请求
    /// 2-请求短按+长按关机请求
    /// 状态位和状态码
    pub status: u32,

    /// bit 0:  充电标志
    /// bit 1:  充电过流标志
    /// bit 2:  放电标志
    /// bit 3:  放电过流标志
    /// bit 4:  电池短路标志
    /// bit 5:  电芯电压过压标志
    /// bit 6:  电芯电压欠压标志
    /// bit 7:  电池总电压过压标志
    /// bit 8:  电池总电压欠压标志
    /// bit 9:  预留：电芯检测到开路标志
    /// bit 10: 温感传感器检测到开路标志
    /// bit 11: 电芯温度超过放电温度上限标志
    /// bit 12: 电芯温度超过充电温度上限标志
    /// bit 13: 电芯温度低于放电温度上限标志
    /// bit 14: 电芯温度低于充电温度上限标志
    /// bit 15: 电芯最大压差超过上限标志
    /// bit 16: MOSFET禁止充电标志（表示真正故障禁用）
    /// bit 17: MOSFET禁止放电标志（表示真正故障禁用）
    /// bit 18: MOSFET此温度超过工作温度上限标志
    /// bit 19: 电池包均衡线电阻超过上限标志
    /// bit 20: 电池充满状态
    /// bit 21: 电池包固件版本，0是老固件，1新固件
    /// bit 22: 电池座key是否短接，0短接，1断开
    /// bit 23: 电池包异常，0正常，1异常
    /// bit 24: 预留：二级过温警告，0正常，1异常
    /// bit 25: 有线充电器插入Key是否短接，1短接，0断开
    /// bit 26: 无线充电器介入状态，0空闲，1介入
    /// bit 27: 正常关机触发状态
    /// bit 28: 长按关机触发状态
    /// bit 29~31: 保留
    /// 电池包均衡线电阻（单位：mΩ）
    pub balance_line_resistance: u16,

    /// 电池包电压（单位：mV）
    pub voltage: u32,

    /// 电池包电流（单位：mA，充电为正，放电为负）
    pub current: i32,

    /// 电池包输出功率（单位：mW）
    pub power: i32,

    /// 电池包当前温度（单位：℃）
    pub temperature: f32,

    /// 当前电池剩余容量（单位：mAh）
    pub remaining_capacity: u32,

    /// 当前电池剩余容量百分比（单位：％）
    pub remaining_capacity_percentage: u8,

    /// 当前电池包完整循环次数（单位：次）
    pub cycle_count: u16,

    /// 总充放电容量累计（单位：mAh）
    pub cycle_total_capacity: u32,

}



impl Default for Bms {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Bms::default())
  }
}

impl rosidl_runtime_rs::Message for Bms {
  type RmwMsg = super::msg::rmw::Bms;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        manufacturer: msg.manufacturer.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        power_request: msg.power_request,
        status: msg.status,
        balance_line_resistance: msg.balance_line_resistance,
        voltage: msg.voltage,
        current: msg.current,
        power: msg.power,
        temperature: msg.temperature,
        remaining_capacity: msg.remaining_capacity,
        remaining_capacity_percentage: msg.remaining_capacity_percentage,
        cycle_count: msg.cycle_count,
        cycle_total_capacity: msg.cycle_total_capacity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        manufacturer: msg.manufacturer.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      power_request: msg.power_request,
      status: msg.status,
      balance_line_resistance: msg.balance_line_resistance,
      voltage: msg.voltage,
      current: msg.current,
      power: msg.power,
      temperature: msg.temperature,
      remaining_capacity: msg.remaining_capacity,
      remaining_capacity_percentage: msg.remaining_capacity_percentage,
      cycle_count: msg.cycle_count,
      cycle_total_capacity: msg.cycle_total_capacity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      manufacturer: msg.manufacturer.to_string(),
      serial_number: msg.serial_number.to_string(),
      protocol_version: msg.protocol_version.to_string(),
      hardware_version: msg.hardware_version.to_string(),
      software_version: msg.software_version.to_string(),
      power_request: msg.power_request,
      status: msg.status,
      balance_line_resistance: msg.balance_line_resistance,
      voltage: msg.voltage,
      current: msg.current,
      power: msg.power,
      temperature: msg.temperature,
      remaining_capacity: msg.remaining_capacity,
      remaining_capacity_percentage: msg.remaining_capacity_percentage,
      cycle_count: msg.cycle_count,
      cycle_total_capacity: msg.cycle_total_capacity,
    }
  }
}


// Corresponds to aimdk_msgs__msg__Adu

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Adu {
    /// 数据头
    pub header: super::msg::MessageHeader,

    /// 版本信息
    /// 协议版本
    pub protocol_version: std::string::String,

    /// 硬件版本
    pub hardware_version: std::string::String,

    /// 软件版本
    pub software_version: std::string::String,

    /// 状态位和状态码
    pub status_word: u16,

    /// bit 0:  工作状态
    /// bit 13: 重启请求
    /// bit 14: 下电请求
    /// bit 15: 紧急下电
    pub error_code: u32,

    /// Bit 0：SPI CRC校验错误
    /// Bit 1：12V电源异常
    /// Bit 2：5V电源异常
    /// Bit 3：3.3V电源异常
    /// Bit 4：1.8V电源异常
    /// Bit 5：3.8V电源异常（T项目预留不上报）
    /// Bit 6：1.2V电源异常
    /// Bit 7：12V电流异常
    /// Bit 8：板载温度异常
    /// Bit 9：风扇转速异常
    /// Bit 10：RK通讯异常
    /// Bit 11：HDU通讯异常
    /// ADU板卡电压/电流信息（56Bytes）
    /// ADU板卡12V电压值（单位：V）
    pub board_12v_voltage: f32,

    /// ADU板卡5V电压值（单位：V）
    pub board_5v_voltage: f32,

    /// ADU板卡3.3V电压值（单位：V）
    pub board_3v3_voltage: f32,

    /// ADU板卡1.2V电压值（单位：V）
    pub board_1v2_voltage: f32,

    /// ADU板卡1.8V电压值（单位：V）
    pub board_1v8_voltage: f32,

    /// ADU板卡3.8V电压值（单位：V，T项目预留不上报）
    pub board_3v8_voltage: f32,

    /// ADU板卡系统12V电流值（单位：A）
    pub system_12v_current: f32,

    /// ADU板卡温度电压值（单位：V）
    pub board_temperature_voltage: f32,

    /// ADU板卡硬件版本电压值（单位：V）
    pub board_hardware_voltage: f32,

    /// ADU板载NTC温度与风扇信息（28Bytes）
    /// ADU板载NTC温度数据（单位：℃）
    pub ntc_temperature: f32,

    /// 风扇1控制转速比例（单位：%，T项目预留不上报）
    pub fan1_target_speed: u32,

    /// 风扇1反馈转速（单位：RPM，T项目预留不上报）
    pub fan1_feedback_speed: u32,

    /// 风扇2控制转速比例（单位：%，T项目预留不上报）
    pub fan2_target_speed: u32,

    /// 风扇2反馈转速（单位：RPM，T项目预留不上报）
    pub fan2_feedback_speed: u32,

}



impl Default for Adu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Adu::default())
  }
}

impl rosidl_runtime_rs::Message for Adu {
  type RmwMsg = super::msg::rmw::Adu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
        status_word: msg.status_word,
        error_code: msg.error_code,
        board_12v_voltage: msg.board_12v_voltage,
        board_5v_voltage: msg.board_5v_voltage,
        board_3v3_voltage: msg.board_3v3_voltage,
        board_1v2_voltage: msg.board_1v2_voltage,
        board_1v8_voltage: msg.board_1v8_voltage,
        board_3v8_voltage: msg.board_3v8_voltage,
        system_12v_current: msg.system_12v_current,
        board_temperature_voltage: msg.board_temperature_voltage,
        board_hardware_voltage: msg.board_hardware_voltage,
        ntc_temperature: msg.ntc_temperature,
        fan1_target_speed: msg.fan1_target_speed,
        fan1_feedback_speed: msg.fan1_feedback_speed,
        fan2_target_speed: msg.fan2_target_speed,
        fan2_feedback_speed: msg.fan2_feedback_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      status_word: msg.status_word,
      error_code: msg.error_code,
      board_12v_voltage: msg.board_12v_voltage,
      board_5v_voltage: msg.board_5v_voltage,
      board_3v3_voltage: msg.board_3v3_voltage,
      board_1v2_voltage: msg.board_1v2_voltage,
      board_1v8_voltage: msg.board_1v8_voltage,
      board_3v8_voltage: msg.board_3v8_voltage,
      system_12v_current: msg.system_12v_current,
      board_temperature_voltage: msg.board_temperature_voltage,
      board_hardware_voltage: msg.board_hardware_voltage,
      ntc_temperature: msg.ntc_temperature,
      fan1_target_speed: msg.fan1_target_speed,
      fan1_feedback_speed: msg.fan1_feedback_speed,
      fan2_target_speed: msg.fan2_target_speed,
      fan2_feedback_speed: msg.fan2_feedback_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      protocol_version: msg.protocol_version.to_string(),
      hardware_version: msg.hardware_version.to_string(),
      software_version: msg.software_version.to_string(),
      status_word: msg.status_word,
      error_code: msg.error_code,
      board_12v_voltage: msg.board_12v_voltage,
      board_5v_voltage: msg.board_5v_voltage,
      board_3v3_voltage: msg.board_3v3_voltage,
      board_1v2_voltage: msg.board_1v2_voltage,
      board_1v8_voltage: msg.board_1v8_voltage,
      board_3v8_voltage: msg.board_3v8_voltage,
      system_12v_current: msg.system_12v_current,
      board_temperature_voltage: msg.board_temperature_voltage,
      board_hardware_voltage: msg.board_hardware_voltage,
      ntc_temperature: msg.ntc_temperature,
      fan1_target_speed: msg.fan1_target_speed,
      fan1_feedback_speed: msg.fan1_feedback_speed,
      fan2_target_speed: msg.fan2_target_speed,
      fan2_feedback_speed: msg.fan2_feedback_speed,
    }
  }
}


// Corresponds to aimdk_msgs__msg__JpegImage
/// 相机元信息

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JpegImage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub camera_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub framerate: u32,

    /// 曝光值
    pub exposure: u32,

    /// 模拟增益
    pub gain: u32,

    /// JPEG 图片数据
    pub image: sensor_msgs::msg::CompressedImage,

}



impl Default for JpegImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JpegImage::default())
  }
}

impl rosidl_runtime_rs::Message for JpegImage {
  type RmwMsg = super::msg::rmw::JpegImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        camera_id: msg.camera_id.as_str().into(),
        device: msg.device.as_str().into(),
        width: msg.width,
        height: msg.height,
        framerate: msg.framerate,
        exposure: msg.exposure,
        gain: msg.gain,
        image: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        camera_id: msg.camera_id.as_str().into(),
        device: msg.device.as_str().into(),
      width: msg.width,
      height: msg.height,
      framerate: msg.framerate,
      exposure: msg.exposure,
      gain: msg.gain,
        image: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      camera_id: msg.camera_id.to_string(),
      device: msg.device.to_string(),
      width: msg.width,
      height: msg.height,
      framerate: msg.framerate,
      exposure: msg.exposure,
      gain: msg.gain,
      image: sensor_msgs::msg::CompressedImage::from_rmw_message(msg.image),
    }
  }
}


// Corresponds to aimdk_msgs__msg__VolumeType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VolumeType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl VolumeType {
    /// 本体扬声器
    pub const SPEAKRE_BUILT_IN: u8 = 0;

    /// 麦克风
    pub const MIC: u8 = 16;

}


impl Default for VolumeType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VolumeType::default())
  }
}

impl rosidl_runtime_rs::Message for VolumeType {
  type RmwMsg = super::msg::rmw::VolumeType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__VolumeChange
/// 音量类型

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VolumeChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: super::msg::VolumeType,

    /// 当前音量（0~100）
    pub audio_volume: u32,

}



impl Default for VolumeChange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VolumeChange::default())
  }
}

impl rosidl_runtime_rs::Message for VolumeChange {
  type RmwMsg = super::msg::rmw::VolumeChange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: super::msg::VolumeType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        audio_volume: msg.audio_volume,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: super::msg::VolumeType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
      audio_volume: msg.audio_volume,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: super::msg::VolumeType::from_rmw_message(msg.type_),
      audio_volume: msg.audio_volume,
    }
  }
}


// Corresponds to aimdk_msgs__msg__PlayStateType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayStateType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u8,

}

impl PlayStateType {
    /// 默认关闭状态
    pub const PLAYER_STATE_CLOSED: u8 = 0;

    /// 播放中
    pub const PLAYER_STATE_PLAYING: u8 = 1;

    /// 播放结束
    pub const PLAYER_STATE_STOPED: u8 = 2;

}


impl Default for PlayStateType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlayStateType::default())
  }
}

impl rosidl_runtime_rs::Message for PlayStateType {
  type RmwMsg = super::msg::rmw::PlayStateType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__PlayStateChange
/// 播放来源

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayStateChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: std::string::String,

    /// 播放状态
    pub state: super::msg::PlayStateType,

}



impl Default for PlayStateChange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlayStateChange::default())
  }
}

impl rosidl_runtime_rs::Message for PlayStateChange {
  type RmwMsg = super::msg::rmw::PlayStateChange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        state: super::msg::PlayStateType::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        state: super::msg::PlayStateType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pkg_name: msg.pkg_name.to_string(),
      state: super::msg::PlayStateType::from_rmw_message(msg.state),
    }
  }
}


// Corresponds to aimdk_msgs__msg__MuteChange
/// 当前静音状态

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MuteChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mute: bool,

}



impl Default for MuteChange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MuteChange::default())
  }
}

impl rosidl_runtime_rs::Message for MuteChange {
  type RmwMsg = super::msg::rmw::MuteChange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mute: msg.mute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mute: msg.mute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mute: msg.mute,
    }
  }
}


// Corresponds to aimdk_msgs__msg__MusicState
/// -----------------------------------------------------------------------------------
/// 发布音乐播放状态
/// 发布到 /aima/hal/audio/music_state
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MusicState {
    /// 当前已经执行的最新控制命令id
    pub control_command_id: u64,

    /// 当前播放状态
    pub playback_state: i32,

    /// 当前播放音乐名称
    pub song_name: std::string::String,

    /// 当前播放音乐歌手名
    pub artist: Vec<std::string::String>,

    /// 当前播放音乐总时长，单位秒
    pub total_duration: f64,

    /// 当前播放进度
    pub current_time: f64,

    /// 是否是VIP歌曲
    pub vip_song: bool,

    /// 是否在试听
    pub trail: bool,

    /// 上游自己的播放判定
    pub playable_code: i32,

    /// 音质列表
    pub qualities: Vec<std::string::String>,

    /// 当前选择音质索引
    pub quality_index: i32,

    /// 当前歌单对应的搜索命令id
    pub search_command_id: u64,

    /// 当前歌单名称，和搜索关键字保持一致
    pub song_list_name: std::string::String,

    /// 当前歌单歌曲数量
    pub song_list_size: i32,

    /// 当前播放歌曲在歌单中的索引，从0开始
    pub playback_index: i32,

    /// 当前歌单sp，和音乐搜索服务 SearchMusic 里的定义保持一致
    pub sp: i32,

    /// 搜索请求返回的HTTP STATUS
    pub search_resp_status: i32,

    /// 搜索请求返回的tts
    pub search_resp_tts_text: std::string::String,

    /// 搜索请求返回的code
    pub search_resp_code: std::string::String,

    /// url请求返回的warning
    pub url_resp_warning: std::string::String,

}

impl MusicState {
    /// playback_state 枚举
    /// 空闲状态
    pub const PLAYBACK_STATE_IDLE: i32 = 0;

    /// 播放状态
    pub const PLAYBACK_STATE_PLAYING: i32 = 1;

    /// 暂停状态
    pub const PLAYBACK_STATE_PAUSED: i32 = 2;

    /// 停止状态
    pub const PLAYBACK_STATE_STOPED: i32 = 4;

    /// 错误状态
    pub const PLAYBACK_STATE_ERROR: i32 = 5;

}


impl Default for MusicState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MusicState::default())
  }
}

impl rosidl_runtime_rs::Message for MusicState {
  type RmwMsg = super::msg::rmw::MusicState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        control_command_id: msg.control_command_id,
        playback_state: msg.playback_state,
        song_name: msg.song_name.as_str().into(),
        artist: msg.artist
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        total_duration: msg.total_duration,
        current_time: msg.current_time,
        vip_song: msg.vip_song,
        trail: msg.trail,
        playable_code: msg.playable_code,
        qualities: msg.qualities
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        quality_index: msg.quality_index,
        search_command_id: msg.search_command_id,
        song_list_name: msg.song_list_name.as_str().into(),
        song_list_size: msg.song_list_size,
        playback_index: msg.playback_index,
        sp: msg.sp,
        search_resp_status: msg.search_resp_status,
        search_resp_tts_text: msg.search_resp_tts_text.as_str().into(),
        search_resp_code: msg.search_resp_code.as_str().into(),
        url_resp_warning: msg.url_resp_warning.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      control_command_id: msg.control_command_id,
      playback_state: msg.playback_state,
        song_name: msg.song_name.as_str().into(),
        artist: msg.artist
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      total_duration: msg.total_duration,
      current_time: msg.current_time,
      vip_song: msg.vip_song,
      trail: msg.trail,
      playable_code: msg.playable_code,
        qualities: msg.qualities
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      quality_index: msg.quality_index,
      search_command_id: msg.search_command_id,
        song_list_name: msg.song_list_name.as_str().into(),
      song_list_size: msg.song_list_size,
      playback_index: msg.playback_index,
      sp: msg.sp,
      search_resp_status: msg.search_resp_status,
        search_resp_tts_text: msg.search_resp_tts_text.as_str().into(),
        search_resp_code: msg.search_resp_code.as_str().into(),
        url_resp_warning: msg.url_resp_warning.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      control_command_id: msg.control_command_id,
      playback_state: msg.playback_state,
      song_name: msg.song_name.to_string(),
      artist: msg.artist
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      total_duration: msg.total_duration,
      current_time: msg.current_time,
      vip_song: msg.vip_song,
      trail: msg.trail,
      playable_code: msg.playable_code,
      qualities: msg.qualities
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      quality_index: msg.quality_index,
      search_command_id: msg.search_command_id,
      song_list_name: msg.song_list_name.to_string(),
      song_list_size: msg.song_list_size,
      playback_index: msg.playback_index,
      sp: msg.sp,
      search_resp_status: msg.search_resp_status,
      search_resp_tts_text: msg.search_resp_tts_text.to_string(),
      search_resp_code: msg.search_resp_code.to_string(),
      url_resp_warning: msg.url_resp_warning.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__MusicInfo
/// -----------------------------------------------------------------------------------
/// 单首歌曲的信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MusicInfo {
    /// 歌曲id
    pub id: std::string::String,

    /// 歌曲名称
    pub name: std::string::String,

    /// 歌手列表
    pub artist: Vec<std::string::String>,

    /// 时长（毫秒）
    pub duration_ms: i32,

    /// 歌曲来源平台，例如qqmusic
    pub source: std::string::String,

}



impl Default for MusicInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MusicInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MusicInfo {
  type RmwMsg = super::msg::rmw::MusicInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        name: msg.name.as_str().into(),
        artist: msg.artist
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        duration_ms: msg.duration_ms,
        source: msg.source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        name: msg.name.as_str().into(),
        artist: msg.artist
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      duration_ms: msg.duration_ms,
        source: msg.source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id.to_string(),
      name: msg.name.to_string(),
      artist: msg.artist
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      duration_ms: msg.duration_ms,
      source: msg.source.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__MicSourceChange
/// 0-内置麦
/// 1-外置麦

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MicSourceChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mic_source: u32,

    /// product id
    pub pid: u32,

    /// vendor id
    pub vid: u32,

}



impl Default for MicSourceChange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MicSourceChange::default())
  }
}

impl rosidl_runtime_rs::Message for MicSourceChange {
  type RmwMsg = super::msg::rmw::MicSourceChange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mic_source: msg.mic_source,
        pid: msg.pid,
        vid: msg.vid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mic_source: msg.mic_source,
      pid: msg.pid,
      vid: msg.vid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mic_source: msg.mic_source,
      pid: msg.pid,
      vid: msg.vid,
    }
  }
}


// Corresponds to aimdk_msgs__msg__FocusResponse
/// 必要项，标识调用方来源

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FocusResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: std::string::String,

    /// 必要项，焦点结果
    /// true: 获取到焦点
    /// false: 丢失焦点
    pub focus_gain: bool,

}



impl Default for FocusResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FocusResponse::default())
  }
}

impl rosidl_runtime_rs::Message for FocusResponse {
  type RmwMsg = super::msg::rmw::FocusResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        focus_gain: msg.focus_gain,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
      focus_gain: msg.focus_gain,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pkg_name: msg.pkg_name.to_string(),
      focus_gain: msg.focus_gain,
    }
  }
}


// Corresponds to aimdk_msgs__msg__FocusRequester
/// 必要项，标识调用方来源

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FocusRequester {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: std::string::String,

    /// 必要项，优先级(1~10, 默认6)
    pub priority: u32,

    /// 可选项，(1~100) priority + priority_weight% is final priority
    pub priority_weight: u32,

}



impl Default for FocusRequester {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FocusRequester::default())
  }
}

impl rosidl_runtime_rs::Message for FocusRequester {
  type RmwMsg = super::msg::rmw::FocusRequester;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        priority: msg.priority,
        priority_weight: msg.priority_weight,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
      priority: msg.priority,
      priority_weight: msg.priority_weight,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pkg_name: msg.pkg_name.to_string(),
      priority: msg.priority,
      priority_weight: msg.priority_weight,
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioPlayback
/// 必要项，时间戳

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioPlayback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamps: builtin_interfaces::msg::Time,

    /// 必要项，音频格式
    pub info: super::msg::AudioInfo,

    /// 必要项，音频数据
    pub data: super::msg::AudioData,

    /// 必要项，标识发送方来源
    pub pkg_name: std::string::String,

    /// 可选项，token_id有变化时会清理播放缓存（用于打断当前播放）
    pub token_id: std::string::String,

}



impl Default for AudioPlayback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioPlayback::default())
  }
}

impl rosidl_runtime_rs::Message for AudioPlayback {
  type RmwMsg = super::msg::rmw::AudioPlayback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamps: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamps)).into_owned(),
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        data: super::msg::AudioData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
        pkg_name: msg.pkg_name.as_str().into(),
        token_id: msg.token_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamps: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamps)).into_owned(),
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        data: super::msg::AudioData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
        pkg_name: msg.pkg_name.as_str().into(),
        token_id: msg.token_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamps: builtin_interfaces::msg::Time::from_rmw_message(msg.stamps),
      info: super::msg::AudioInfo::from_rmw_message(msg.info),
      data: super::msg::AudioData::from_rmw_message(msg.data),
      pkg_name: msg.pkg_name.to_string(),
      token_id: msg.token_id.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioInfo
/// 必要项，通道数

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub channels: u8,

    /// 必要项，采样率
    pub sample_rate: u32,

    /// 可选项，写入size
    pub size: u32,

    /// 可选项，Audio format (e.g. S16LE， S32_LE) 默认S16_LE
    pub sample_format: std::string::String,

    /// 可选项，Audio coding format (e.g. pcm, wave, opus)
    pub coding_format: std::string::String,

}



impl Default for AudioInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioInfo::default())
  }
}

impl rosidl_runtime_rs::Message for AudioInfo {
  type RmwMsg = super::msg::rmw::AudioInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        channels: msg.channels,
        sample_rate: msg.sample_rate,
        size: msg.size,
        sample_format: msg.sample_format.as_str().into(),
        coding_format: msg.coding_format.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      channels: msg.channels,
      sample_rate: msg.sample_rate,
      size: msg.size,
        sample_format: msg.sample_format.as_str().into(),
        coding_format: msg.coding_format.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      channels: msg.channels,
      sample_rate: msg.sample_rate,
      size: msg.size,
      sample_format: msg.sample_format.to_string(),
      coding_format: msg.coding_format.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioFile
/// 必要项，标识调用方来源

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioFile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: std::string::String,

    /// 必要项，文件名
    pub file_name: std::string::String,

    /// 必要项，不设置时使用系统默认路径
    pub file_path: std::string::String,

    /// pcm格式必要项，wav格式可选项，音频格式
    pub info: super::msg::AudioInfo,

    /// 必要项，优先级(1~10, 默认6)
    pub priority: u32,

    /// 可选项，(1~100) priority + priority_weight% is final priority
    pub priority_weight: u32,

    /// 可选项，PulseAudio media.role，不传默认 music
    pub media_role: std::string::String,

}



impl Default for AudioFile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioFile::default())
  }
}

impl rosidl_runtime_rs::Message for AudioFile {
  type RmwMsg = super::msg::rmw::AudioFile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        file_name: msg.file_name.as_str().into(),
        file_path: msg.file_path.as_str().into(),
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        priority: msg.priority,
        priority_weight: msg.priority_weight,
        media_role: msg.media_role.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pkg_name: msg.pkg_name.as_str().into(),
        file_name: msg.file_name.as_str().into(),
        file_path: msg.file_path.as_str().into(),
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
      priority: msg.priority,
      priority_weight: msg.priority_weight,
        media_role: msg.media_role.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pkg_name: msg.pkg_name.to_string(),
      file_name: msg.file_name.to_string(),
      file_path: msg.file_path.to_string(),
      info: super::msg::AudioInfo::from_rmw_message(msg.info),
      priority: msg.priority,
      priority_weight: msg.priority_weight,
      media_role: msg.media_role.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioDeviceInfoList
/// 音频设备列表

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioDeviceInfoList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input_list: Vec<super::msg::AudioDeviceInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_list: Vec<super::msg::AudioDeviceInfo>,

}



impl Default for AudioDeviceInfoList {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioDeviceInfoList::default())
  }
}

impl rosidl_runtime_rs::Message for AudioDeviceInfoList {
  type RmwMsg = super::msg::rmw::AudioDeviceInfoList;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input_list: msg.input_list
          .into_iter()
          .map(|elem| super::msg::AudioDeviceInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        output_list: msg.output_list
          .into_iter()
          .map(|elem| super::msg::AudioDeviceInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        input_list: msg.input_list
          .iter()
          .map(|elem| super::msg::AudioDeviceInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        output_list: msg.output_list
          .iter()
          .map(|elem| super::msg::AudioDeviceInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      input_list: msg.input_list
          .into_iter()
          .map(super::msg::AudioDeviceInfo::from_rmw_message)
          .collect(),
      output_list: msg.output_list
          .into_iter()
          .map(super::msg::AudioDeviceInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioDeviceInfo
/// -----------------------------------------------------------------------------------
/// 一块音频设备的信息
/// -----------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioDeviceInfo {
    /// 设备索引号
    /// -1: auto mode
    pub id: i32,

    /// 设备标志符
    /// builtin_mic builtin_speaker
    pub device_addr: std::string::String,

    /// 设备类型
    /// builtin bluetooth
    pub device_type: std::string::String,

    /// 设备名称
    /// snd_card_name bluetooth
    pub device_name: std::string::String,

    /// 是否处于选中状态
    pub is_sel: bool,

}



impl Default for AudioDeviceInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioDeviceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for AudioDeviceInfo {
  type RmwMsg = super::msg::rmw::AudioDeviceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        device_addr: msg.device_addr.as_str().into(),
        device_type: msg.device_type.as_str().into(),
        device_name: msg.device_name.as_str().into(),
        is_sel: msg.is_sel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        device_addr: msg.device_addr.as_str().into(),
        device_type: msg.device_type.as_str().into(),
        device_name: msg.device_name.as_str().into(),
      is_sel: msg.is_sel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      device_addr: msg.device_addr.to_string(),
      device_type: msg.device_type.to_string(),
      device_name: msg.device_name.to_string(),
      is_sel: msg.is_sel,
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioData
/// 音频数据

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}



impl Default for AudioData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioData::default())
  }
}

impl rosidl_runtime_rs::Message for AudioData {
  type RmwMsg = super::msg::rmw::AudioData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.into(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__AudioCapture
/// 必要项，时间戳

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioCapture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamps: builtin_interfaces::msg::Time,

    /// 必要项，麦克风通道数
    pub mic_channels: u8,

    /// 必要项，回采信号通道数
    pub ref_channels: u8,

    /// 必要项，音频格式
    pub info: super::msg::AudioInfo,

    /// 必要项，音频数据
    pub data: super::msg::AudioData,

    /// 可选项，标识发送方来源
    pub pkg_name: std::string::String,

    /// 可选项，0-内置麦 1-外置麦
    pub mic_source: u32,

}



impl Default for AudioCapture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AudioCapture::default())
  }
}

impl rosidl_runtime_rs::Message for AudioCapture {
  type RmwMsg = super::msg::rmw::AudioCapture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamps: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamps)).into_owned(),
        mic_channels: msg.mic_channels,
        ref_channels: msg.ref_channels,
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        data: super::msg::AudioData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
        pkg_name: msg.pkg_name.as_str().into(),
        mic_source: msg.mic_source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamps: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamps)).into_owned(),
      mic_channels: msg.mic_channels,
      ref_channels: msg.ref_channels,
        info: super::msg::AudioInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        data: super::msg::AudioData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
        pkg_name: msg.pkg_name.as_str().into(),
      mic_source: msg.mic_source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamps: builtin_interfaces::msg::Time::from_rmw_message(msg.stamps),
      mic_channels: msg.mic_channels,
      ref_channels: msg.ref_channels,
      info: super::msg::AudioInfo::from_rmw_message(msg.info),
      data: super::msg::AudioData::from_rmw_message(msg.data),
      pkg_name: msg.pkg_name.to_string(),
      mic_source: msg.mic_source,
    }
  }
}


// Corresponds to aimdk_msgs__msg__EventProbeType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl EventProbeType {
    /// 未定义
    pub const UNDEFINED: i32 = 0;

    /// 一般的事件记录，比如系统发生的某个特定动作或状态变化。可能需要说明它是用来记录事件发生的次数或者事件本身的信息
    pub const EVENT: i32 = 1;

    /// 通常用来表示累积的数值，比如计数器，每次事件发生就增加。可能需要强调它的递增特性，适用于统计总数，比如请求次数、错误次数等。
    pub const COUNTER: i32 = 2;

    /// 通常用来表示一个值，可能需要说明它的单位，比如温度、压力等。
    pub const GAUGE: i32 = 3;

    /// 布尔类型，表示两种状态，比如真或假，开启或关闭。需要明确它用于二元状态的情况。
    pub const BOOLEAN: i32 = 4;

}


impl Default for EventProbeType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EventProbeType::default())
  }
}

impl rosidl_runtime_rs::Message for EventProbeType {
  type RmwMsg = super::msg::rmw::EventProbeType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to aimdk_msgs__msg__EventProbeInfoArray
/// 消息头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub list: Vec<super::msg::EventProbeInfo>,

}



impl Default for EventProbeInfoArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EventProbeInfoArray::default())
  }
}

impl rosidl_runtime_rs::Message for EventProbeInfoArray {
  type RmwMsg = super::msg::rmw::EventProbeInfoArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        list: msg.list
          .into_iter()
          .map(|elem| super::msg::EventProbeInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        list: msg.list
          .iter()
          .map(|elem| super::msg::EventProbeInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      list: msg.list
          .into_iter()
          .map(super::msg::EventProbeInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__EventProbeInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeInfo {
    /// 事件状态
    pub status: u8,

    /// 事件时间戳
    pub timestamp: u64,

    /// 事件类型
    pub type_: super::msg::EventProbeType,

    /// 模块ID
    pub module_id: u8,

    /// 事件ID
    pub event_id: u32,

    /// 模块时间码
    pub event_code: u64,

    /// 模块事件信息
    pub desc: std::string::String,

    /// 事件属性
    pub attrs: Vec<super::msg::EventProbeAttr>,

}

impl EventProbeInfo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_STATUS_DEFAULT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_STATUS_START: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_STATUS_END: u8 = 2;

}


impl Default for EventProbeInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EventProbeInfo::default())
  }
}

impl rosidl_runtime_rs::Message for EventProbeInfo {
  type RmwMsg = super::msg::rmw::EventProbeInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        timestamp: msg.timestamp,
        type_: super::msg::EventProbeType::into_rmw_message(std::borrow::Cow::Owned(msg.type_)).into_owned(),
        module_id: msg.module_id,
        event_id: msg.event_id,
        event_code: msg.event_code,
        desc: msg.desc.as_str().into(),
        attrs: msg.attrs
          .into_iter()
          .map(|elem| super::msg::EventProbeAttr::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      timestamp: msg.timestamp,
        type_: super::msg::EventProbeType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.type_)).into_owned(),
      module_id: msg.module_id,
      event_id: msg.event_id,
      event_code: msg.event_code,
        desc: msg.desc.as_str().into(),
        attrs: msg.attrs
          .iter()
          .map(|elem| super::msg::EventProbeAttr::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      timestamp: msg.timestamp,
      type_: super::msg::EventProbeType::from_rmw_message(msg.type_),
      module_id: msg.module_id,
      event_id: msg.event_id,
      event_code: msg.event_code,
      desc: msg.desc.to_string(),
      attrs: msg.attrs
          .into_iter()
          .map(super::msg::EventProbeAttr::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__EventProbeAttr

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeAttr {
    /// key
    pub key: std::string::String,

    /// 根据类型解析具体的数据
    pub type_: u8,

    /// 以下几种类型数据的值只会存在一个
    /// 整形数据
    pub value_int: i64,

    /// 浮点型数据
    pub value_double: f64,

    /// 字符串类型数据
    pub value_string: std::string::String,

    /// 布尔类型数据
    pub value_bool: bool,

}

impl EventProbeAttr {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_TYPE_DOUBLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_TYPE_INT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_TYPE_STRING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EA_TYPE_BOOL: u8 = 3;

}


impl Default for EventProbeAttr {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EventProbeAttr::default())
  }
}

impl rosidl_runtime_rs::Message for EventProbeAttr {
  type RmwMsg = super::msg::rmw::EventProbeAttr;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        type_: msg.type_,
        value_int: msg.value_int,
        value_double: msg.value_double,
        value_string: msg.value_string.as_str().into(),
        value_bool: msg.value_bool,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
      type_: msg.type_,
      value_int: msg.value_int,
      value_double: msg.value_double,
        value_string: msg.value_string.as_str().into(),
      value_bool: msg.value_bool,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      type_: msg.type_,
      value_int: msg.value_int,
      value_double: msg.value_double,
      value_string: msg.value_string.to_string(),
      value_bool: msg.value_bool,
    }
  }
}


// Corresponds to aimdk_msgs__msg__ResponseHeader
/// World time stamp, which is expressed as seconds and nanoseconds.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResponseHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

    /// Return code, 0 for success, others for failure.
    pub code: i64,

}



impl Default for ResponseHeader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ResponseHeader::default())
  }
}

impl rosidl_runtime_rs::Message for ResponseHeader {
  type RmwMsg = super::msg::rmw::ResponseHeader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        code: msg.code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      code: msg.code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      code: msg.code,
    }
  }
}


// Corresponds to aimdk_msgs__msg__RequestHeader
/// World time stamp, which is expressed as seconds and nanoseconds.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for RequestHeader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RequestHeader::default())
  }
}

impl rosidl_runtime_rs::Message for RequestHeader {
  type RmwMsg = super::msg::rmw::RequestHeader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to aimdk_msgs__msg__MessageHeader
/// World time stamp, which is expressed as seconds and nanoseconds.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MessageHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

    /// Transform frame with which this data is associated.
    pub frame_id: std::string::String,

    /// Message's consecutively increasing ID
    pub sequence: u32,

    /// Time of receive data, Measurement time stamp, which is expressed as seconds and nanoseconds.
    pub meas_stamp: builtin_interfaces::msg::Time,

}



impl Default for MessageHeader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MessageHeader::default())
  }
}

impl rosidl_runtime_rs::Message for MessageHeader {
  type RmwMsg = super::msg::rmw::MessageHeader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
        sequence: msg.sequence,
        meas_stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.meas_stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      sequence: msg.sequence,
        meas_stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.meas_stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      frame_id: msg.frame_id.to_string(),
      sequence: msg.sequence,
      meas_stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.meas_stamp),
    }
  }
}


// Corresponds to aimdk_msgs__msg__KeyValue
/// --------------------------------------------------------------------------------------------------------------
/// 通用键值对
/// 说明:
///   - key: 唯一/语义字段名
///   - value: 文本值；需要结构化可放 JSON 片段
/// --------------------------------------------------------------------------------------------------------------

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: std::string::String,

}



impl Default for KeyValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KeyValue::default())
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = super::msg::rmw::KeyValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__CommonTaskResponse
/// 响应头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonTaskResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::ResponseHeader,

    /// 任务ID
    pub task_id: u64,

    /// 状态
    pub state: super::msg::CommonState,

}



impl Default for CommonTaskResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonTaskResponse::default())
  }
}

impl rosidl_runtime_rs::Message for CommonTaskResponse {
  type RmwMsg = super::msg::rmw::CommonTaskResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id,
        state: super::msg::CommonState::into_rmw_message(std::borrow::Cow::Owned(msg.state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      task_id: msg.task_id,
        state: super::msg::CommonState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      task_id: msg.task_id,
      state: super::msg::CommonState::from_rmw_message(msg.state),
    }
  }
}


// Corresponds to aimdk_msgs__msg__CommonTaskRequest
/// 请求头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonTaskRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

    /// 任务ID
    pub task_id: u64,

}



impl Default for CommonTaskRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonTaskRequest::default())
  }
}

impl rosidl_runtime_rs::Message for CommonTaskRequest {
  type RmwMsg = super::msg::rmw::CommonTaskRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      task_id: msg.task_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      task_id: msg.task_id,
    }
  }
}


// Corresponds to aimdk_msgs__msg__CommonState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: u32,

}

impl CommonState {
    /// 未知
    pub const UNKNOWN: i32 = 0;

    /// 成功
    pub const SUCCESS: i32 = 1;

    /// 失败
    pub const FAILURE: i32 = 2;

    /// 中止
    pub const ABORTED: i32 = 3;

    /// 超时
    pub const TIMEOUT: i32 = 4;

    /// 无效
    pub const INVALID: i32 = 5;

    /// 手动
    pub const IN_MANUAL: i32 = 6;

    /// 未就绪
    pub const NOT_READY: i32 = 100;

    /// 等待中
    pub const PENDING: i32 = 200;

    /// 已创建
    pub const CREATED: i32 = 300;

    /// 运行中
    pub const RUNNING: i32 = 400;

    /// 成功
    pub const REASON_SUCCESS: u32 = 0;

    /// 开箱状态中
    pub const REASON_OPENBOX: u32 = 1;

    /// 开机自检中
    pub const REASON_STARTUP_CHECK: u32 = 2;

    /// 关机状态中
    pub const REASON_SHUTDOWN: u32 = 3;

    /// 当前形态不支持
    pub const REASON_FROM: u32 = 4;

    /// 低电量限制
    pub const REASON_LOW_BATTERY: u32 = 5;

    /// 正在充电中
    pub const REASON_CHARGE: u32 = 6;

    /// 动作不在白名单
    pub const REASON_NO_WHITELIST: u32 = 7;

    /// HDS故障
    pub const REASON_HDS: u32 = 8;

    /// 当前模式不支持
    pub const REASON_ACTION: u32 = 9;

    /// 前方有障碍物
    pub const REASON_OBSTACLE_FORWARD: u32 = 10;

    /// 后方有障碍物
    pub const REASON_OBSTACLE_BACK: u32 = 11;

    /// 左方有障碍物
    pub const REASON_OBSTACLE_LEFT: u32 = 12;

    /// 右方有障碍物
    pub const REASON_OBSTACLE_RIGHT: u32 = 13;

    /// 上方有障碍物
    pub const REASON_OBSTACLE_UP: u32 = 14;

    /// 其他任务正在运行
    pub const REASON_TASK_RUNNING: u32 = 15;

    /// 机器人已经是目标状态
    pub const REASON_TARGET_STATE: u32 = 16;

    /// 未找到相关动作
    pub const REASON_NOT_FOUND: u32 = 17;

    /// 无可用技能列表
    pub const REASON_NO_SKILL_LIST: u32 = 18;

    /// 无法执行任务，机器人需要处于双足站立状态
    pub const REASON_FORM_MIS_MATCH: u32 = 19;

    /// 当前动作不匹配，无法执行动画
    pub const REASON_ACTION_NOT_MATCH: u32 = 20;

    /// 前动作在黑名单中，无法执行动画
    pub const REASON_ACTION_BLACKLISTED: u32 = 21;

    /// 当前姿态下无法进行动作转移
    pub const REASON_NO_TRANSFER_PATH: u32 = 22;

    /// 无符合条件的技能
    pub const REASON_NO_ELIGIBLE_SKILL: u32 = 23;

    /// 室内模式下暂不支持该动作
    pub const REASON_INDOOR_WHOLE_BODY: u32 = 24;

    /// 动作配置未就绪，无法执行动画
    pub const REASON_ENGINE_NOT_READY: u32 = 25;

    /// 当前机型不支持该功能
    pub const REASON_NOT_SUPPORTED: u32 = 26;

    /// 机器人正在起立，暂不能收起默认动作
    pub const REASON_STAND_UP_IN_PROGRESS: u32 = 27;

    /// 当前动画不可打断
    pub const REASON_NOT_INTERRUPTIBLE: u32 = 28;

    /// 当前动画 ID 无效，无法打断
    pub const REASON_INTERRUPT_INVALID: u32 = 29;

    /// 当前状态不满足变形/动作执行条件
    pub const REASON_TRANSFORM_CONDITION: u32 = 30;

}


impl Default for CommonState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonState::default())
  }
}

impl rosidl_runtime_rs::Message for CommonState {
  type RmwMsg = super::msg::rmw::CommonState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
        reason: msg.reason,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      reason: msg.reason,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
      reason: msg.reason,
    }
  }
}


// Corresponds to aimdk_msgs__msg__CommonResponse
/// 响应头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::ResponseHeader,

    /// 响应状态码
    pub status: super::msg::CommonState,

    /// 响应消息
    pub message: std::string::String,

}



impl Default for CommonResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonResponse::default())
  }
}

impl rosidl_runtime_rs::Message for CommonResponse {
  type RmwMsg = super::msg::rmw::CommonResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        status: super::msg::CommonState::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        status: super::msg::CommonState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      status: super::msg::CommonState::from_rmw_message(msg.status),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__msg__CommonRequest
/// 请求头

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

}



impl Default for CommonRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommonRequest::default())
  }
}

impl rosidl_runtime_rs::Message for CommonRequest {
  type RmwMsg = super::msg::rmw::CommonRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
    }
  }
}


