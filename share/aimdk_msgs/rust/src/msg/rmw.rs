#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McRuntimeModel() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McRuntimeModel__init(msg: *mut McRuntimeModel) -> bool;
    fn aimdk_msgs__msg__McRuntimeModel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McRuntimeModel>, size: usize) -> bool;
    fn aimdk_msgs__msg__McRuntimeModel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McRuntimeModel>);
    fn aimdk_msgs__msg__McRuntimeModel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McRuntimeModel>, out_seq: *mut rosidl_runtime_rs::Sequence<McRuntimeModel>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McRuntimeModel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 运行模型信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McRuntimeModel {
    /// 腰部状态
    pub waist_status: bool,

    /// 左手手部状态
    pub left_hand_status: super::super::msg::rmw::McHandStatus,

    /// 右手手部状态
    pub right_hand_status: super::super::msg::rmw::McHandStatus,

}



impl Default for McRuntimeModel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McRuntimeModel__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McRuntimeModel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McRuntimeModel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRuntimeModel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRuntimeModel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRuntimeModel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McRuntimeModel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McRuntimeModel where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McRuntimeModel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McRuntimeModel() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPresetMotion() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McPresetMotion__init(msg: *mut McPresetMotion) -> bool;
    fn aimdk_msgs__msg__McPresetMotion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McPresetMotion>, size: usize) -> bool;
    fn aimdk_msgs__msg__McPresetMotion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McPresetMotion>);
    fn aimdk_msgs__msg__McPresetMotion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McPresetMotion>, out_seq: *mut rosidl_runtime_rs::Sequence<McPresetMotion>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McPresetMotion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 预设动作

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McPresetMotion__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McPresetMotion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McPresetMotion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPresetMotion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPresetMotion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPresetMotion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McPresetMotion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McPresetMotion where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McPresetMotion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPresetMotion() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPlayerState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McPlayerState__init(msg: *mut McPlayerState) -> bool;
    fn aimdk_msgs__msg__McPlayerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McPlayerState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McPlayerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McPlayerState>);
    fn aimdk_msgs__msg__McPlayerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McPlayerState>, out_seq: *mut rosidl_runtime_rs::Sequence<McPlayerState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McPlayerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 上肢动作运行状态
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McPlayerState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McPlayerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McPlayerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPlayerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPlayerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPlayerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McPlayerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McPlayerState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McPlayerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPlayerState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMotionType__init(msg: *mut McMotionType) -> bool;
    fn aimdk_msgs__msg__McMotionType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionType>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMotionType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionType>);
    fn aimdk_msgs__msg__McMotionType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionType>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMotionType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMotionType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMotionType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMotionType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionIntrType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMotionIntrType__init(msg: *mut McMotionIntrType) -> bool;
    fn aimdk_msgs__msg__McMotionIntrType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrType>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMotionIntrType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrType>);
    fn aimdk_msgs__msg__McMotionIntrType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionIntrType>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMotionIntrType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 定义枚举字段

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMotionIntrType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMotionIntrType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionIntrType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionIntrType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionIntrType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMotionIntrType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionIntrType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionIntrInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMotionIntrInfo__init(msg: *mut McMotionIntrInfo) -> bool;
    fn aimdk_msgs__msg__McMotionIntrInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMotionIntrInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrInfo>);
    fn aimdk_msgs__msg__McMotionIntrInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionIntrInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionIntrInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMotionIntrInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 动作断点信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionIntrInfo {
    /// 打断类型
    pub intr_type: super::super::msg::rmw::McMotionIntrType,

    /// 断点列表
    pub breakpoint_steps: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for McMotionIntrInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMotionIntrInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMotionIntrInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionIntrInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionIntrInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionIntrInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionIntrInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMotionIntrInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionIntrInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotion() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMotion__init(msg: *mut McMotion) -> bool;
    fn aimdk_msgs__msg__McMotion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotion>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMotion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotion>);
    fn aimdk_msgs__msg__McMotion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotion>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotion>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMotion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Mc 动作接口

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotion {
    /// 名称
    pub tag: rosidl_runtime_rs::String,

    /// 动作类型
    pub type_: super::super::msg::rmw::McMotionType,

    /// 打断信息
    pub intr_info: super::super::msg::rmw::McMotionIntrInfo,

}



impl Default for McMotion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMotion__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMotion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotion where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMotion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotion() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLocomotionVelocity() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McLocomotionVelocity__init(msg: *mut McLocomotionVelocity) -> bool;
    fn aimdk_msgs__msg__McLocomotionVelocity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McLocomotionVelocity>, size: usize) -> bool;
    fn aimdk_msgs__msg__McLocomotionVelocity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McLocomotionVelocity>);
    fn aimdk_msgs__msg__McLocomotionVelocity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McLocomotionVelocity>, out_seq: *mut rosidl_runtime_rs::Sequence<McLocomotionVelocity>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McLocomotionVelocity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McLocomotionVelocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// 输入源
    pub source: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McLocomotionVelocity__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McLocomotionVelocity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McLocomotionVelocity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionVelocity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionVelocity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionVelocity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McLocomotionVelocity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McLocomotionVelocity where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McLocomotionVelocity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLocomotionVelocity() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLocomotionGaitType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McLocomotionGaitType__init(msg: *mut McLocomotionGaitType) -> bool;
    fn aimdk_msgs__msg__McLocomotionGaitType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McLocomotionGaitType>, size: usize) -> bool;
    fn aimdk_msgs__msg__McLocomotionGaitType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McLocomotionGaitType>);
    fn aimdk_msgs__msg__McLocomotionGaitType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McLocomotionGaitType>, out_seq: *mut rosidl_runtime_rs::Sequence<McLocomotionGaitType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McLocomotionGaitType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McLocomotionGaitType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McLocomotionGaitType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McLocomotionGaitType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionGaitType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionGaitType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLocomotionGaitType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McLocomotionGaitType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McLocomotionGaitType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McLocomotionGaitType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLocomotionGaitType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McInputSource() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McInputSource__init(msg: *mut McInputSource) -> bool;
    fn aimdk_msgs__msg__McInputSource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McInputSource>, size: usize) -> bool;
    fn aimdk_msgs__msg__McInputSource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McInputSource>);
    fn aimdk_msgs__msg__McInputSource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McInputSource>, out_seq: *mut rosidl_runtime_rs::Sequence<McInputSource>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McInputSource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 输入源信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McInputSource {
    /// 输入源名称（rc/vr/app_proxy/interaction/pnc）
    pub name: rosidl_runtime_rs::String,

    /// 输入源优先级(0-100)
    pub priority: i32,

    /// 超时时间(ms), 默认 1000 ms
    pub timeout: i32,

}



impl Default for McInputSource {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McInputSource__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McInputSource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McInputSource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputSource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputSource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputSource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McInputSource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McInputSource where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McInputSource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McInputSource() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McInputAction() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McInputAction__init(msg: *mut McInputAction) -> bool;
    fn aimdk_msgs__msg__McInputAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McInputAction>, size: usize) -> bool;
    fn aimdk_msgs__msg__McInputAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McInputAction>);
    fn aimdk_msgs__msg__McInputAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McInputAction>, out_seq: *mut rosidl_runtime_rs::Sequence<McInputAction>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McInputAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 输入源操作

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McInputAction__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McInputAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McInputAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McInputAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McInputAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McInputAction where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McInputAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McInputAction() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McHandStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McHandStatus__init(msg: *mut McHandStatus) -> bool;
    fn aimdk_msgs__msg__McHandStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McHandStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__McHandStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McHandStatus>);
    fn aimdk_msgs__msg__McHandStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McHandStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<McHandStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McHandStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 手部状态

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McHandStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McHandStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McHandStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McHandStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McHandStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McHandStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McHandStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McCustomJointCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McCustomJointCommand__init(msg: *mut McCustomJointCommand) -> bool;
    fn aimdk_msgs__msg__McCustomJointCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McCustomJointCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__McCustomJointCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McCustomJointCommand>);
    fn aimdk_msgs__msg__McCustomJointCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McCustomJointCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<McCustomJointCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McCustomJointCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McCustomJointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// 上肢关节目标命令数组（mc内部自动按 name 匹配对应关节数据）
    pub joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointCommand>,

}



impl Default for McCustomJointCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McCustomJointCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McCustomJointCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McCustomJointCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCustomJointCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCustomJointCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCustomJointCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McCustomJointCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McCustomJointCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McCustomJointCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McCustomJointCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McControlArea() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McControlArea__init(msg: *mut McControlArea) -> bool;
    fn aimdk_msgs__msg__McControlArea__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McControlArea>, size: usize) -> bool;
    fn aimdk_msgs__msg__McControlArea__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McControlArea>);
    fn aimdk_msgs__msg__McControlArea__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McControlArea>, out_seq: *mut rosidl_runtime_rs::Sequence<McControlArea>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McControlArea
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McControlArea__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McControlArea__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McControlArea {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McControlArea__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McControlArea__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McControlArea__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McControlArea {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McControlArea where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McControlArea";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McControlArea() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McBodyPose() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McBodyPose__init(msg: *mut McBodyPose) -> bool;
    fn aimdk_msgs__msg__McBodyPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McBodyPose>, size: usize) -> bool;
    fn aimdk_msgs__msg__McBodyPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McBodyPose>);
    fn aimdk_msgs__msg__McBodyPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McBodyPose>, out_seq: *mut rosidl_runtime_rs::Sequence<McBodyPose>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McBodyPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McBodyPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// 输入源
    pub source: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McBodyPose__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McBodyPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McBodyPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McBodyPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McBodyPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McBodyPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McBodyPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McBodyPose where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McBodyPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McBodyPose() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McRLDebug() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McRLDebug__init(msg: *mut McRLDebug) -> bool;
    fn aimdk_msgs__msg__McRLDebug__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McRLDebug>, size: usize) -> bool;
    fn aimdk_msgs__msg__McRLDebug__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McRLDebug>);
    fn aimdk_msgs__msg__McRLDebug__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McRLDebug>, out_seq: *mut rosidl_runtime_rs::Sequence<McRLDebug>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McRLDebug
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// RL debug信息msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McRLDebug {
    /// 消息头
    pub header: super::super::msg::rmw::MessageHeader,

    /// 观测数组
    pub obs_vec: rosidl_runtime_rs::Sequence<f32>,

    /// 行为数组
    pub action_vec: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for McRLDebug {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McRLDebug__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McRLDebug__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McRLDebug {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRLDebug__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRLDebug__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McRLDebug__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McRLDebug {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McRLDebug where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McRLDebug";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McRLDebug() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McTaskSource() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McTaskSource__init(msg: *mut McTaskSource) -> bool;
    fn aimdk_msgs__msg__McTaskSource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McTaskSource>, size: usize) -> bool;
    fn aimdk_msgs__msg__McTaskSource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McTaskSource>);
    fn aimdk_msgs__msg__McTaskSource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McTaskSource>, out_seq: *mut rosidl_runtime_rs::Sequence<McTaskSource>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McTaskSource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 定义 Action 触发源

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McTaskSource__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McTaskSource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McTaskSource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskSource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskSource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskSource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McTaskSource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McTaskSource where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McTaskSource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McTaskSource() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McTaskInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McTaskInfo__init(msg: *mut McTaskInfo) -> bool;
    fn aimdk_msgs__msg__McTaskInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McTaskInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__McTaskInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McTaskInfo>);
    fn aimdk_msgs__msg__McTaskInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McTaskInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<McTaskInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McTaskInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 任务 ID (0 表示未曾接收过任何请求)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McTaskInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: u64,

}



impl Default for McTaskInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McTaskInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McTaskInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McTaskInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McTaskInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McTaskInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McTaskInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McTaskInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McTaskInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McSquatStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McSquatStatus__init(msg: *mut McSquatStatus) -> bool;
    fn aimdk_msgs__msg__McSquatStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McSquatStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__McSquatStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McSquatStatus>);
    fn aimdk_msgs__msg__McSquatStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McSquatStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<McSquatStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McSquatStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 下蹲动作运行状态
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McSquatStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McSquatStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McSquatStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McSquatStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McSquatStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McSquatStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McSquatStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McSquatStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McSquatStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McSquatStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPostureState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McPostureState__init(msg: *mut McPostureState) -> bool;
    fn aimdk_msgs__msg__McPostureState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McPostureState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McPostureState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McPostureState>);
    fn aimdk_msgs__msg__McPostureState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McPostureState>, out_seq: *mut rosidl_runtime_rs::Sequence<McPostureState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McPostureState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人姿态检测结果 (security_guard 姿态检测)
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McPostureState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McPostureState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McPostureState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPostureState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPostureState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPostureState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McPostureState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McPostureState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McPostureState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPostureState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPosture() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McPosture__init(msg: *mut McPosture) -> bool;
    fn aimdk_msgs__msg__McPosture__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McPosture>, size: usize) -> bool;
    fn aimdk_msgs__msg__McPosture__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McPosture>);
    fn aimdk_msgs__msg__McPosture__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McPosture>, out_seq: *mut rosidl_runtime_rs::Sequence<McPosture>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McPosture
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人姿态信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McPosture__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McPosture__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McPosture {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPosture__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPosture__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McPosture__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McPosture {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McPosture where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McPosture";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McPosture() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMotionStatus__init(msg: *mut McMotionStatus) -> bool;
    fn aimdk_msgs__msg__McMotionStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMotionStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionStatus>);
    fn aimdk_msgs__msg__McMotionStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMotionStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 动作运行信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionStatus {
    /// 动作运行状态
    pub player_state: super::super::msg::rmw::McPlayerState,

    /// 控制区域
    pub control_area: super::super::msg::rmw::McControlArea,

    /// 动作名称
    pub motion: rosidl_runtime_rs::String,

    /// 动作类型
    pub type_: super::super::msg::rmw::McMotionType,

    /// 动作断点信息
    pub intr_info: super::super::msg::rmw::McMotionIntrInfo,

    /// 当前动作执行进度
    pub current_steps: i32,

    /// 全身动作重力向量状态
    pub gravity_state: super::super::msg::rmw::McMimicGravityState,

}



impl Default for McMotionStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMotionStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMotionStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMotionStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMotionStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMotionStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMimicGravityState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McMimicGravityState__init(msg: *mut McMimicGravityState) -> bool;
    fn aimdk_msgs__msg__McMimicGravityState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMimicGravityState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McMimicGravityState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMimicGravityState>);
    fn aimdk_msgs__msg__McMimicGravityState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMimicGravityState>, out_seq: *mut rosidl_runtime_rs::Sequence<McMimicGravityState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McMimicGravityState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McMimicGravityState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McMimicGravityState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMimicGravityState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMimicGravityState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMimicGravityState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McMimicGravityState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMimicGravityState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMimicGravityState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McMimicGravityState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McMimicGravityState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLiftState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McLiftState__init(msg: *mut McLiftState) -> bool;
    fn aimdk_msgs__msg__McLiftState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McLiftState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McLiftState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McLiftState>);
    fn aimdk_msgs__msg__McLiftState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McLiftState>, out_seq: *mut rosidl_runtime_rs::Sequence<McLiftState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McLiftState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// Lift detector detailed state
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McLiftState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McLiftState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McLiftState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLiftState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLiftState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McLiftState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McLiftState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McLiftState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McLiftState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McLiftState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McHandHeldState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McHandHeldState__init(msg: *mut McHandHeldState) -> bool;
    fn aimdk_msgs__msg__McHandHeldState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McHandHeldState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McHandHeldState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McHandHeldState>);
    fn aimdk_msgs__msg__McHandHeldState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McHandHeldState>, out_seq: *mut rosidl_runtime_rs::Sequence<McHandHeldState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McHandHeldState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Robot motion-control hand-held state.

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McHandHeldState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McHandHeldState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McHandHeldState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandHeldState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandHeldState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McHandHeldState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McHandHeldState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McHandHeldState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McHandHeldState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McHandHeldState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFsmState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McFsmState__init(msg: *mut McFsmState) -> bool;
    fn aimdk_msgs__msg__McFsmState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McFsmState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McFsmState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McFsmState>);
    fn aimdk_msgs__msg__McFsmState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McFsmState>, out_seq: *mut rosidl_runtime_rs::Sequence<McFsmState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McFsmState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 有限状态机状态
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McFsmState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McFsmState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McFsmState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFsmState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFsmState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFsmState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McFsmState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McFsmState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McFsmState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFsmState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFormState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McFormState__init(msg: *mut McFormState) -> bool;
    fn aimdk_msgs__msg__McFormState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McFormState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McFormState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McFormState>);
    fn aimdk_msgs__msg__McFormState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McFormState>, out_seq: *mut rosidl_runtime_rs::Sequence<McFormState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McFormState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态 - 机器人形态
/// -----------------------------------------------------------------------------------

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McFormState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McFormState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McFormState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFormState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFormState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFormState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McFormState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McFormState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McFormState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFormState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McCommonState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McCommonState__init(msg: *mut McCommonState) -> bool;
    fn aimdk_msgs__msg__McCommonState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McCommonState>, size: usize) -> bool;
    fn aimdk_msgs__msg__McCommonState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McCommonState>);
    fn aimdk_msgs__msg__McCommonState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McCommonState>, out_seq: *mut rosidl_runtime_rs::Sequence<McCommonState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McCommonState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 机器人运控状态
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McCommonState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// ------------ 输入源信息 ------------ #
    pub input_source: super::super::msg::rmw::McInputSource,

    /// ----------- Action 信息 ----------- #
    pub action_info: super::super::msg::rmw::McActionInfo,

    /// --------- 机器运行模型信息 ---------- #
    pub runtime_model: super::super::msg::rmw::McRuntimeModel,

    /// --------- 动作运行信息 ---------- #
    pub motion_status: super::super::msg::rmw::McMotionStatus,

    /// --------- 有限状态机状态 ---------- #
    pub fsm_state: super::super::msg::rmw::McFsmState,

    /// --------- 机器人形态信息 ---------- #
    pub form_state: super::super::msg::rmw::McFormState,

    /// --------- 机器人姿态信息 ---------- #
    pub posture: super::super::msg::rmw::McPosture,

    /// ----------机器人是否处于运动状态 ----------
    pub is_moving: bool,

    /// ----------机器人是否摔倒（防摔检测触发后置 true；重新解锁站立防摔检测时置 false）----------
    pub is_fallen: bool,

    /// ---------- 机器人提起检测状态 ---------- #
    pub lift_state: super::super::msg::rmw::McLiftState,

    /// ---------- rpc 请求 执行状态 ----------
    pub task_info: super::super::msg::rmw::McTaskInfo,

    /// ---------- 机器人牵手状态 ---------- #
    pub held_state: super::super::msg::rmw::McHandHeldState,

    /// ---------- 机器人姿态检测结果 (站立/坐姿/仰卧/俯卧/未知) ---------- #
    pub posture_state: super::super::msg::rmw::McPostureState,

}



impl Default for McCommonState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McCommonState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McCommonState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McCommonState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCommonState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCommonState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McCommonState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McCommonState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McCommonState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McCommonState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McCommonState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFullAction() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McFullAction__init(msg: *mut McFullAction) -> bool;
    fn aimdk_msgs__msg__McFullAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McFullAction>, size: usize) -> bool;
    fn aimdk_msgs__msg__McFullAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McFullAction>);
    fn aimdk_msgs__msg__McFullAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McFullAction>, out_seq: *mut rosidl_runtime_rs::Sequence<McFullAction>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McFullAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 定义枚举字段

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McFullAction__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McFullAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McFullAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFullAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFullAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McFullAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McFullAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McFullAction where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McFullAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McFullAction() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McActionStatus__init(msg: *mut McActionStatus) -> bool;
    fn aimdk_msgs__msg__McActionStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McActionStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__McActionStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McActionStatus>);
    fn aimdk_msgs__msg__McActionStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McActionStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<McActionStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McActionStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 定义枚举字段

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McActionStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McActionStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McActionStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McActionStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McActionStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McActionStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McActionInfo__init(msg: *mut McActionInfo) -> bool;
    fn aimdk_msgs__msg__McActionInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McActionInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__McActionInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McActionInfo>);
    fn aimdk_msgs__msg__McActionInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McActionInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<McActionInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McActionInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 当前运行的Action

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McActionInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_action: super::super::msg::rmw::McAction,

    /// 当前action的触发源
    pub source: rosidl_runtime_rs::String,

    /// 描述
    pub action_desc: rosidl_runtime_rs::String,

    /// Action状态
    pub status: super::super::msg::rmw::McActionStatus,

    /// action 切换是否就绪, false 未准备就绪, true 切换就绪
    pub switch_ready: bool,

}



impl Default for McActionInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McActionInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McActionInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McActionInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McActionInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McActionInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McActionInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McActionCommand__init(msg: *mut McActionCommand) -> bool;
    fn aimdk_msgs__msg__McActionCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McActionCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__McActionCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McActionCommand>);
    fn aimdk_msgs__msg__McActionCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McActionCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<McActionCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McActionCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Action

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McActionCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::super::msg::rmw::McAction,

    /// 描述
    pub action_desc: rosidl_runtime_rs::String,

}



impl Default for McActionCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McActionCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McActionCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McActionCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McActionCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McActionCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McActionCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McActionCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McActionCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McAction() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__McAction__init(msg: *mut McAction) -> bool;
    fn aimdk_msgs__msg__McAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McAction>, size: usize) -> bool;
    fn aimdk_msgs__msg__McAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McAction>);
    fn aimdk_msgs__msg__McAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McAction>, out_seq: *mut rosidl_runtime_rs::Sequence<McAction>) -> bool;
}

// Corresponds to aimdk_msgs__msg__McAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 定义枚举字段

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__McAction__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__McAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__McAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McAction where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/McAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__McAction() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ThreadResourceInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ThreadResourceInfo__init(msg: *mut ThreadResourceInfo) -> bool;
    fn aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ThreadResourceInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ThreadResourceInfo>);
    fn aimdk_msgs__msg__ThreadResourceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ThreadResourceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ThreadResourceInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ThreadResourceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 线程ID

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ThreadResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub thread_id: u64,

    /// 线程名称
    pub thread_name: rosidl_runtime_rs::String,

    /// 当前线程cpu使用率
    pub cpu_usage_ratio: f64,

    /// 当前进程调度策略
    pub cpu_sched_policy: rosidl_runtime_rs::String,

    /// 当前进程调度优先级
    pub cpu_sched_priority: i32,

    /// 当前进程绑定cpu
    pub bounding_cpus: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for ThreadResourceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ThreadResourceInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ThreadResourceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ThreadResourceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ThreadResourceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ThreadResourceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ThreadResourceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ThreadResourceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ThreadResourceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ThreadResourceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ThreadResourceInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ProcessResourceInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ProcessResourceInfo__init(msg: *mut ProcessResourceInfo) -> bool;
    fn aimdk_msgs__msg__ProcessResourceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessResourceInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ProcessResourceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessResourceInfo>);
    fn aimdk_msgs__msg__ProcessResourceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessResourceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessResourceInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ProcessResourceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 进程ID

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub process_id: u64,

    /// 进程名称
    pub process_name: rosidl_runtime_rs::String,

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
    pub threads: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ThreadResourceInfo>,

}



impl Default for ProcessResourceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ProcessResourceInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ProcessResourceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessResourceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessResourceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessResourceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessResourceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessResourceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessResourceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ProcessResourceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ProcessResourceInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ProcessInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ProcessInfo__init(msg: *mut ProcessInfo) -> bool;
    fn aimdk_msgs__msg__ProcessInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ProcessInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessInfo>);
    fn aimdk_msgs__msg__ProcessInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ProcessInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// 程序名称
    pub app_name: rosidl_runtime_rs::String,

    /// 进程资源信息
    pub resource: super::super::msg::rmw::ProcessResourceInfo,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modules: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleResourceInfo>,

}



impl Default for ProcessInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ProcessInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ProcessInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ProcessInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ProcessInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ProcessInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleRpcInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ModuleRpcInfo__init(msg: *mut ModuleRpcInfo) -> bool;
    fn aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModuleRpcInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModuleRpcInfo>);
    fn aimdk_msgs__msg__ModuleRpcInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModuleRpcInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ModuleRpcInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ModuleRpcInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 话题名

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleRpcInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// 类型名
    pub req_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub res_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub backends: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ModuleRpcInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ModuleRpcInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ModuleRpcInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModuleRpcInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleRpcInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleRpcInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleRpcInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModuleRpcInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModuleRpcInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ModuleRpcInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleRpcInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleResourceInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ModuleResourceInfo__init(msg: *mut ModuleResourceInfo) -> bool;
    fn aimdk_msgs__msg__ModuleResourceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModuleResourceInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ModuleResourceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModuleResourceInfo>);
    fn aimdk_msgs__msg__ModuleResourceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModuleResourceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ModuleResourceInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ModuleResourceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleResourceInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub module_name: rosidl_runtime_rs::String,

    /// 模块rpc客户端信息
    pub rpc_clients: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleRpcInfo>,

    /// 模块service channel信息
    pub rpc_services: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleRpcInfo>,

    /// 模块pub channel信息
    pub pub_channels: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleChannelInfo>,

    /// 模块sub channel信息
    pub sub_channels: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleChannelInfo>,

}



impl Default for ModuleResourceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ModuleResourceInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ModuleResourceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModuleResourceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleResourceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleResourceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleResourceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModuleResourceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModuleResourceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ModuleResourceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleResourceInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleChannelInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ModuleChannelInfo__init(msg: *mut ModuleChannelInfo) -> bool;
    fn aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModuleChannelInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModuleChannelInfo>);
    fn aimdk_msgs__msg__ModuleChannelInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModuleChannelInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ModuleChannelInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ModuleChannelInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 话题名

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleChannelInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// 类型名
    pub type_: rosidl_runtime_rs::String,

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
    pub backends: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ModuleChannelInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ModuleChannelInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ModuleChannelInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModuleChannelInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleChannelInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleChannelInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleChannelInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModuleChannelInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModuleChannelInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ModuleChannelInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleChannelInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__DiagnosticType__init(msg: *mut DiagnosticType) -> bool;
    fn aimdk_msgs__msg__DiagnosticType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticType>, size: usize) -> bool;
    fn aimdk_msgs__msg__DiagnosticType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticType>);
    fn aimdk_msgs__msg__DiagnosticType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticType>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__DiagnosticType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__DiagnosticType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__DiagnosticType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/DiagnosticType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticInfoArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__DiagnosticInfoArray__init(msg: *mut DiagnosticInfoArray) -> bool;
    fn aimdk_msgs__msg__DiagnosticInfoArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfoArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__DiagnosticInfoArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfoArray>);
    fn aimdk_msgs__msg__DiagnosticInfoArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticInfoArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfoArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__DiagnosticInfoArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub diagnostics: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DiagnosticInfo>,

}



impl Default for DiagnosticInfoArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__DiagnosticInfoArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__DiagnosticInfoArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticInfoArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfoArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfoArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfoArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticInfoArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticInfoArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/DiagnosticInfoArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticInfoArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__DiagnosticInfo__init(msg: *mut DiagnosticInfo) -> bool;
    fn aimdk_msgs__msg__DiagnosticInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__DiagnosticInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfo>);
    fn aimdk_msgs__msg__DiagnosticInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__DiagnosticInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ns 时间辍

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// 异常类型
    pub type_: super::super::msg::rmw::DiagnosticType,

    /// 模块ID
    pub module_id: u8,

    /// 模块诊断码
    pub code: u32,

    /// 模块诊断码
    pub diag_code: u64,

    /// 模块诊断信息
    pub info: rosidl_runtime_rs::String,

}



impl Default for DiagnosticInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__DiagnosticInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__DiagnosticInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DiagnosticInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/DiagnosticInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DiagnosticInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AlertCodeArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AlertCodeArray__init(msg: *mut AlertCodeArray) -> bool;
    fn aimdk_msgs__msg__AlertCodeArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlertCodeArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__AlertCodeArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlertCodeArray>);
    fn aimdk_msgs__msg__AlertCodeArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlertCodeArray>, out_seq: *mut rosidl_runtime_rs::Sequence<AlertCodeArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AlertCodeArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AlertCodeArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AlertCode>,

}



impl Default for AlertCodeArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AlertCodeArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AlertCodeArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlertCodeArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCodeArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCodeArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCodeArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlertCodeArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlertCodeArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AlertCodeArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AlertCodeArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AlertCode() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AlertCode__init(msg: *mut AlertCode) -> bool;
    fn aimdk_msgs__msg__AlertCode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AlertCode>, size: usize) -> bool;
    fn aimdk_msgs__msg__AlertCode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AlertCode>);
    fn aimdk_msgs__msg__AlertCode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AlertCode>, out_seq: *mut rosidl_runtime_rs::Sequence<AlertCode>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AlertCode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// uuid

#[repr(C)]
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
    pub code: rosidl_runtime_rs::String,

    /// 0 未知, 1 出现, 2 消失
    pub alert_event_type: u8,

    /// 1 h1级告警，2 h2级告警，3 h3级告警, 4 h4级告警, 5 h5级告警
    pub level: u8,

    /// 端侧后处理
    /// 语音报警
    pub text: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_audio_cycle: bool,

    /// 灯光报警，在interaction通过level做映射
    pub light_msg: rosidl_runtime_rs::String,

    /// 表情报警
    pub emotion_id: u32,

    /// 其他后处理部分，后续再添加
    pub post_process: u32,

    /// app显示id
    pub app_show_id: rosidl_runtime_rs::String,

    /// 故障信息
    pub breakdown_msg: rosidl_runtime_rs::String,

    /// 功能禁用能力，多个能力使用英文逗号分隔
    /// 支持语音召唤（人形/四足）、前方目标跟随（人形/四足）、四足左右目标跟随、避障、自主建图、自主导航、自主回充
    pub capability_limit: rosidl_runtime_rs::String,

    /// 故障诊断名称
    pub diag_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub audio_strategy: u8,

    /// 激活播报匹配的功能限制名，来自诊断表“功能限制播报”列，独立于 capability_limit
    pub disabled_capabilities: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 激活播报使用的 NLG 场景 ID
    pub nlg_scene_id: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AlertCode__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AlertCode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AlertCode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AlertCode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AlertCode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AlertCode where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AlertCode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AlertCode() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__TouchState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__TouchState__init(msg: *mut TouchState) -> bool;
    fn aimdk_msgs__msg__TouchState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TouchState>, size: usize) -> bool;
    fn aimdk_msgs__msg__TouchState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TouchState>);
    fn aimdk_msgs__msg__TouchState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TouchState>, out_seq: *mut rosidl_runtime_rs::Sequence<TouchState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__TouchState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// --------------------------------------------------------------------------------------------------------------
/// 机器人触摸传感器状态
/// --------------------------------------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchState {
    /// 触摸传感器状态消息
    pub header: super::super::msg::rmw::MessageHeader,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__TouchState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__TouchState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TouchState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__TouchState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__TouchState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__TouchState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TouchState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TouchState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/TouchState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__TouchState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__SysInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__SysInfo__init(msg: *mut SysInfo) -> bool;
    fn aimdk_msgs__msg__SysInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SysInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__SysInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SysInfo>);
    fn aimdk_msgs__msg__SysInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SysInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<SysInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__SysInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SysInfo {
    /// 数据头
    pub header: super::super::msg::rmw::MessageHeader,

    /// ORIN 温度信息
    /// cpu温度
    pub soc1_cpu_temperature: f32,

}



impl Default for SysInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__SysInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__SysInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SysInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__SysInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__SysInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__SysInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SysInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SysInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/SysInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__SysInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ServoStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ServoStatus__init(msg: *mut ServoStatus) -> bool;
    fn aimdk_msgs__msg__ServoStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__ServoStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>);
    fn aimdk_msgs__msg__ServoStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ServoStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoStatus {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

    /// 头部舵机反馈角度(当前没有反馈等于控制角度)
    pub position: f32,

}



impl Default for ServoStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ServoStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ServoStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ServoStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ServoStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ServoCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ServoCommand__init(msg: *mut ServoCommand) -> bool;
    fn aimdk_msgs__msg__ServoCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__ServoCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoCommand>);
    fn aimdk_msgs__msg__ServoCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ServoCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoCommand {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

    /// 头部舵机控制角度，单位 rad，0-pi/2
    pub position: f32,

}



impl Default for ServoCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ServoCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ServoCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ServoCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ServoCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ServoCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RgbdInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__RgbdInfo__init(msg: *mut RgbdInfo) -> bool;
    fn aimdk_msgs__msg__RgbdInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RgbdInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__RgbdInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RgbdInfo>);
    fn aimdk_msgs__msg__RgbdInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RgbdInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<RgbdInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__RgbdInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RgbdInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub exposure: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,

}



impl Default for RgbdInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__RgbdInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__RgbdInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RgbdInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RgbdInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RgbdInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RgbdInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RgbdInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RgbdInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/RgbdInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RgbdInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RGBState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__RGBState__init(msg: *mut RGBState) -> bool;
    fn aimdk_msgs__msg__RGBState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RGBState>, size: usize) -> bool;
    fn aimdk_msgs__msg__RGBState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RGBState>);
    fn aimdk_msgs__msg__RGBState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RGBState>, out_seq: *mut rosidl_runtime_rs::Sequence<RGBState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__RGBState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RGBState {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__RGBState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__RGBState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RGBState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RGBState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RGBState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RGBState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RGBState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RGBState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/RGBState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RGBState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PmuStateArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__PmuStateArray__init(msg: *mut PmuStateArray) -> bool;
    fn aimdk_msgs__msg__PmuStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PmuStateArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__PmuStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PmuStateArray>);
    fn aimdk_msgs__msg__PmuStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PmuStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<PmuStateArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__PmuStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PmuStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pmu: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PmuState>,

}



impl Default for PmuStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__PmuStateArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__PmuStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PmuStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PmuStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PmuStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/PmuStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PmuStateArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PmuState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__PmuState__init(msg: *mut PmuState) -> bool;
    fn aimdk_msgs__msg__PmuState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PmuState>, size: usize) -> bool;
    fn aimdk_msgs__msg__PmuState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PmuState>);
    fn aimdk_msgs__msg__PmuState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PmuState>, out_seq: *mut rosidl_runtime_rs::Sequence<PmuState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__PmuState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -------------- pmu -------------- #
/// 版本信息

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PmuState {
    /// 协议版本
    pub pmu_protocol_version: rosidl_runtime_rs::String,

    /// 硬件版本
    pub pmu_hardware_version: rosidl_runtime_rs::String,

    /// 软件版本
    pub pmu_software_version: rosidl_runtime_rs::String,

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
    pub bms_manufacturer: rosidl_runtime_rs::String,

    /// 序列号
    pub bms_serial_number: rosidl_runtime_rs::String,

    /// 协议版本
    pub bms_protocol_version: rosidl_runtime_rs::String,

    /// 硬件版本
    pub bms_hardware_version: rosidl_runtime_rs::String,

    /// 软件版本
    pub bms_software_version: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__PmuState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__PmuState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PmuState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PmuState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PmuState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PmuState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/PmuState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PmuState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Pmu() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__Pmu__init(msg: *mut Pmu) -> bool;
    fn aimdk_msgs__msg__Pmu__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pmu>, size: usize) -> bool;
    fn aimdk_msgs__msg__Pmu__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pmu>);
    fn aimdk_msgs__msg__Pmu__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pmu>, out_seq: *mut rosidl_runtime_rs::Sequence<Pmu>) -> bool;
}

// Corresponds to aimdk_msgs__msg__Pmu
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pmu {
    /// 数据头
    pub header: super::super::msg::rmw::MessageHeader,

    /// 版本信息
    /// 协议版本
    pub protocol_version: rosidl_runtime_rs::String,

    /// 硬件版本
    pub hardware_version: rosidl_runtime_rs::String,

    /// 软件版本
    pub software_version: rosidl_runtime_rs::String,

    /// ORIN版本
    pub orin_hardware_version: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__Pmu__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__Pmu__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pmu {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Pmu__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Pmu__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Pmu__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pmu {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pmu where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/Pmu";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Pmu() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__NeckLightState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__NeckLightState__init(msg: *mut NeckLightState) -> bool;
    fn aimdk_msgs__msg__NeckLightState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NeckLightState>, size: usize) -> bool;
    fn aimdk_msgs__msg__NeckLightState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NeckLightState>);
    fn aimdk_msgs__msg__NeckLightState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NeckLightState>, out_seq: *mut rosidl_runtime_rs::Sequence<NeckLightState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__NeckLightState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NeckLightState {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for NeckLightState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__NeckLightState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__NeckLightState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NeckLightState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__NeckLightState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__NeckLightState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__NeckLightState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NeckLightState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NeckLightState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/NeckLightState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__NeckLightState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MotorStatus__init(msg: *mut MotorStatus) -> bool;
    fn aimdk_msgs__msg__MotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>, size: usize) -> bool;
    fn aimdk_msgs__msg__MotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>);
    fn aimdk_msgs__msg__MotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 电机状态消息

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// 电机使能状态：true 全部电机使能成功, false 电机不供电/未使能/部分电机使能失败
    /// 暂不检测运行过程中电机掉使能
    pub motor_enable: bool,

}



impl Default for MotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MotorStatus__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MotorStatus() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ModuleInfo__init(msg: *mut ModuleInfo) -> bool;
    fn aimdk_msgs__msg__ModuleInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModuleInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__ModuleInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModuleInfo>);
    fn aimdk_msgs__msg__ModuleInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModuleInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ModuleInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ModuleInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// --------------------------------------------------------------------------------------------------------------
/// 模块信息 (ModuleInfo)
///
/// 字段说明:
///   header:    消息头 (时间戳、坐标系、序列号等)
///   module_id: 模块唯一标识符
///   info:      模块属性键值对列表
///
/// --------------------------------------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModuleInfo {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

    /// 模块唯一ID
    pub module_id: rosidl_runtime_rs::String,

    /// 模块信息键值对列表
    pub info: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyValue>,

}



impl Default for ModuleInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ModuleInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ModuleInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModuleInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ModuleInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModuleInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModuleInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ModuleInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ModuleInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ManipulationCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ManipulationCommandArray__init(msg: *mut ManipulationCommandArray) -> bool;
    fn aimdk_msgs__msg__ManipulationCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommandArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__ManipulationCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommandArray>);
    fn aimdk_msgs__msg__ManipulationCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManipulationCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommandArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ManipulationCommandArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManipulationCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manipulations: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ManipulationCommand>,

}



impl Default for ManipulationCommandArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ManipulationCommandArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ManipulationCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManipulationCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManipulationCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManipulationCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ManipulationCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ManipulationCommandArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ManipulationCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ManipulationCommand__init(msg: *mut ManipulationCommand) -> bool;
    fn aimdk_msgs__msg__ManipulationCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__ManipulationCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommand>);
    fn aimdk_msgs__msg__ManipulationCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ManipulationCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ManipulationCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ManipulationCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ManipulationCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ManipulationCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ManipulationCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ManipulationCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ManipulationCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ManipulationCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ManipulationCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ManipulationCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ManipulationCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__LidarRawData() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__LidarRawData__init(msg: *mut LidarRawData) -> bool;
    fn aimdk_msgs__msg__LidarRawData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LidarRawData>, size: usize) -> bool;
    fn aimdk_msgs__msg__LidarRawData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LidarRawData>);
    fn aimdk_msgs__msg__LidarRawData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LidarRawData>, out_seq: *mut rosidl_runtime_rs::Sequence<LidarRawData>) -> bool;
}

// Corresponds to aimdk_msgs__msg__LidarRawData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// --------------------------------------------------------------------------------------------------------------
/// 机器人激光雷达原始数据 (Raw packets from LiDAR sensor)
/// --------------------------------------------------------------------------------------------------------------
/// 头部信息：时间戳、坐标系、序列号等

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarRawData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,

    /// MSOP (Measurement Data Packets):
    ///   - 含点云量测数据原始字节
    ///   - 通常为设备按固定包长度输出的连续数据
    ///   - 不做解析，保持原始二进制序列
    pub msop_data: rosidl_runtime_rs::Sequence<u8>,

    /// DIFOP (Device Information Packets):
    ///   - 设备状态、校准、雷达内部配置等信息
    ///   - 一般频率低于 MSOP
    ///   - 解析可用于标定/雷达健康监测
    pub difop_data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for LidarRawData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__LidarRawData__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__LidarRawData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LidarRawData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__LidarRawData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__LidarRawData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__LidarRawData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LidarRawData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LidarRawData where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/LidarRawData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__LidarRawData() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointStateArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointStateArray__init(msg: *mut JointStateArray) -> bool;
    fn aimdk_msgs__msg__JointStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>);
    fn aimdk_msgs__msg__JointStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,

}



impl Default for JointStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointStateArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointStateArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointState__init(msg: *mut JointState) -> bool;
    fn aimdk_msgs__msg__JointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointState>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointState>);
    fn aimdk_msgs__msg__JointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointState>, out_seq: *mut rosidl_runtime_rs::Sequence<JointState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointProtectConfig() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointProtectConfig__init(msg: *mut JointProtectConfig) -> bool;
    fn aimdk_msgs__msg__JointProtectConfig__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointProtectConfig>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointProtectConfig__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointProtectConfig>);
    fn aimdk_msgs__msg__JointProtectConfig__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointProtectConfig>, out_seq: *mut rosidl_runtime_rs::Sequence<JointProtectConfig>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointProtectConfig
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointProtectConfig__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointProtectConfig__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointProtectConfig {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointProtectConfig__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointProtectConfig__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointProtectConfig__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointProtectConfig {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointProtectConfig where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointProtectConfig";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointProtectConfig() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointPower() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointPower__init(msg: *mut JointPower) -> bool;
    fn aimdk_msgs__msg__JointPower__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointPower>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointPower__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointPower>);
    fn aimdk_msgs__msg__JointPower__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointPower>, out_seq: *mut rosidl_runtime_rs::Sequence<JointPower>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointPower
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointPower {
    /// 消息头信息
    pub header: super::super::msg::rmw::MessageHeader,

    /// 实际供电状态：1-上电，2-下电
    pub motor_power_state: u8,

}



impl Default for JointPower {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointPower__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointPower__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointPower {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointPower__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointPower__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointPower__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointPower {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointPower where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointPower";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointPower() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointMitParams() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointMitParams__init(msg: *mut JointMitParams) -> bool;
    fn aimdk_msgs__msg__JointMitParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointMitParams>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointMitParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointMitParams>);
    fn aimdk_msgs__msg__JointMitParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointMitParams>, out_seq: *mut rosidl_runtime_rs::Sequence<JointMitParams>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointMitParams
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointMitParams__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointMitParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointMitParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointMitParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointMitParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointMitParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointMitParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointMitParams where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointMitParams";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointMitParams() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointInfoArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointInfoArray__init(msg: *mut JointInfoArray) -> bool;
    fn aimdk_msgs__msg__JointInfoArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointInfoArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointInfoArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointInfoArray>);
    fn aimdk_msgs__msg__JointInfoArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointInfoArray>, out_seq: *mut rosidl_runtime_rs::Sequence<JointInfoArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointInfoArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointInfo>,

}



impl Default for JointInfoArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointInfoArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointInfoArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointInfoArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfoArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfoArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfoArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointInfoArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointInfoArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointInfoArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointInfoArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointInfo__init(msg: *mut JointInfo) -> bool;
    fn aimdk_msgs__msg__JointInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointInfo>);
    fn aimdk_msgs__msg__JointInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<JointInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hardware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub software_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mit_params: super::super::msg::rmw::JointMitParams,


    // This member is not documented.
    #[allow(missing_docs)]
    pub protect_config: super::super::msg::rmw::JointProtectConfig,

}



impl Default for JointInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointCommandArray__init(msg: *mut JointCommandArray) -> bool;
    fn aimdk_msgs__msg__JointCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>);
    fn aimdk_msgs__msg__JointCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointCommandArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointCommand>,

}



impl Default for JointCommandArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointCommandArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointCommandArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JointCommand__init(msg: *mut JointCommand) -> bool;
    fn aimdk_msgs__msg__JointCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__JointCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>);
    fn aimdk_msgs__msg__JointCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JointCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JointCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JointCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JointCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JointCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JointCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__HandType__init(msg: *mut HandType) -> bool;
    fn aimdk_msgs__msg__HandType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandType>, size: usize) -> bool;
    fn aimdk_msgs__msg__HandType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandType>);
    fn aimdk_msgs__msg__HandType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandType>, out_seq: *mut rosidl_runtime_rs::Sequence<HandType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__HandType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__HandType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__HandType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/HandType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandStateArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__HandStateArray__init(msg: *mut HandStateArray) -> bool;
    fn aimdk_msgs__msg__HandStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandStateArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__HandStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandStateArray>);
    fn aimdk_msgs__msg__HandStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<HandStateArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__HandStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hand_type: super::super::msg::rmw::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HandState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hand_type: super::super::msg::rmw::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HandState>,

}



impl Default for HandStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__HandStateArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__HandStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/HandStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandStateArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__HandState__init(msg: *mut HandState) -> bool;
    fn aimdk_msgs__msg__HandState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandState>, size: usize) -> bool;
    fn aimdk_msgs__msg__HandState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandState>);
    fn aimdk_msgs__msg__HandState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandState>, out_seq: *mut rosidl_runtime_rs::Sequence<HandState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__HandState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__HandState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__HandState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/HandState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__HandCommandArray__init(msg: *mut HandCommandArray) -> bool;
    fn aimdk_msgs__msg__HandCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandCommandArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__HandCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandCommandArray>);
    fn aimdk_msgs__msg__HandCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<HandCommandArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__HandCommandArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCommandArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hand_type: super::super::msg::rmw::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HandCommand>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hand_type: super::super::msg::rmw::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HandCommand>,

}



impl Default for HandCommandArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__HandCommandArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__HandCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/HandCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandCommandArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__HandCommand__init(msg: *mut HandCommand) -> bool;
    fn aimdk_msgs__msg__HandCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandCommand>, size: usize) -> bool;
    fn aimdk_msgs__msg__HandCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandCommand>);
    fn aimdk_msgs__msg__HandCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<HandCommand>) -> bool;
}

// Corresponds to aimdk_msgs__msg__HandCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__HandCommand__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__HandCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__HandCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/HandCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__HandCommand() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FluxHeartbeat() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__FluxHeartbeat__init(msg: *mut FluxHeartbeat) -> bool;
    fn aimdk_msgs__msg__FluxHeartbeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxHeartbeat>, size: usize) -> bool;
    fn aimdk_msgs__msg__FluxHeartbeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxHeartbeat>);
    fn aimdk_msgs__msg__FluxHeartbeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxHeartbeat>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxHeartbeat>) -> bool;
}

// Corresponds to aimdk_msgs__msg__FluxHeartbeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// FluxHeartbeat.msg — flux 录制状态心跳广播

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxHeartbeat {
    /// 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
    pub recording: i8,

    /// 录制来源: "app" / "agent" / "" (未录制时为空)
    pub source: rosidl_runtime_rs::String,

    /// 录制持续秒数（未录制时为 0）
    pub duration_sec: i64,

}



impl Default for FluxHeartbeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__FluxHeartbeat__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__FluxHeartbeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxHeartbeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FluxHeartbeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FluxHeartbeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FluxHeartbeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxHeartbeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxHeartbeat where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/FluxHeartbeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FluxHeartbeat() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EmergencyState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__EmergencyState__init(msg: *mut EmergencyState) -> bool;
    fn aimdk_msgs__msg__EmergencyState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EmergencyState>, size: usize) -> bool;
    fn aimdk_msgs__msg__EmergencyState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EmergencyState>);
    fn aimdk_msgs__msg__EmergencyState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EmergencyState>, out_seq: *mut rosidl_runtime_rs::Sequence<EmergencyState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__EmergencyState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_state: i32,

}



impl Default for EmergencyState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__EmergencyState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__EmergencyState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EmergencyState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EmergencyState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EmergencyState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EmergencyState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EmergencyState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EmergencyState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/EmergencyState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EmergencyState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DcuMonitorData() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__DcuMonitorData__init(msg: *mut DcuMonitorData) -> bool;
    fn aimdk_msgs__msg__DcuMonitorData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DcuMonitorData>, size: usize) -> bool;
    fn aimdk_msgs__msg__DcuMonitorData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DcuMonitorData>);
    fn aimdk_msgs__msg__DcuMonitorData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DcuMonitorData>, out_seq: *mut rosidl_runtime_rs::Sequence<DcuMonitorData>) -> bool;
}

// Corresponds to aimdk_msgs__msg__DcuMonitorData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DcuMonitorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub monitor_data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for DcuMonitorData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__DcuMonitorData__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__DcuMonitorData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DcuMonitorData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DcuMonitorData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DcuMonitorData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__DcuMonitorData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DcuMonitorData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DcuMonitorData where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/DcuMonitorData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__DcuMonitorData() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Bms() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__Bms__init(msg: *mut Bms) -> bool;
    fn aimdk_msgs__msg__Bms__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Bms>, size: usize) -> bool;
    fn aimdk_msgs__msg__Bms__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Bms>);
    fn aimdk_msgs__msg__Bms__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Bms>, out_seq: *mut rosidl_runtime_rs::Sequence<Bms>) -> bool;
}

// Corresponds to aimdk_msgs__msg__Bms
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Bms {
    /// 数据头
    pub header: super::super::msg::rmw::MessageHeader,

    /// 版本信息
    /// 厂家信息
    pub manufacturer: rosidl_runtime_rs::String,

    /// 序列号
    pub serial_number: rosidl_runtime_rs::String,

    /// 协议版本
    pub protocol_version: rosidl_runtime_rs::String,

    /// 硬件版本
    pub hardware_version: rosidl_runtime_rs::String,

    /// 软件版本
    pub software_version: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__Bms__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__Bms__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Bms {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Bms__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Bms__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Bms__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Bms {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Bms where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/Bms";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Bms() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Adu() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__Adu__init(msg: *mut Adu) -> bool;
    fn aimdk_msgs__msg__Adu__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Adu>, size: usize) -> bool;
    fn aimdk_msgs__msg__Adu__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Adu>);
    fn aimdk_msgs__msg__Adu__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Adu>, out_seq: *mut rosidl_runtime_rs::Sequence<Adu>) -> bool;
}

// Corresponds to aimdk_msgs__msg__Adu
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Adu {
    /// 数据头
    pub header: super::super::msg::rmw::MessageHeader,

    /// 版本信息
    /// 协议版本
    pub protocol_version: rosidl_runtime_rs::String,

    /// 硬件版本
    pub hardware_version: rosidl_runtime_rs::String,

    /// 软件版本
    pub software_version: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__Adu__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__Adu__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Adu {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Adu__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Adu__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__Adu__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Adu {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Adu where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/Adu";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__Adu() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JpegImage() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__JpegImage__init(msg: *mut JpegImage) -> bool;
    fn aimdk_msgs__msg__JpegImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JpegImage>, size: usize) -> bool;
    fn aimdk_msgs__msg__JpegImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JpegImage>);
    fn aimdk_msgs__msg__JpegImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JpegImage>, out_seq: *mut rosidl_runtime_rs::Sequence<JpegImage>) -> bool;
}

// Corresponds to aimdk_msgs__msg__JpegImage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 相机元信息

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JpegImage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub camera_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device: rosidl_runtime_rs::String,


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
    pub image: sensor_msgs::msg::rmw::CompressedImage,

}



impl Default for JpegImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__JpegImage__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__JpegImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JpegImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JpegImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JpegImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__JpegImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JpegImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JpegImage where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/JpegImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__JpegImage() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__VolumeType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__VolumeType__init(msg: *mut VolumeType) -> bool;
    fn aimdk_msgs__msg__VolumeType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VolumeType>, size: usize) -> bool;
    fn aimdk_msgs__msg__VolumeType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VolumeType>);
    fn aimdk_msgs__msg__VolumeType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VolumeType>, out_seq: *mut rosidl_runtime_rs::Sequence<VolumeType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__VolumeType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__VolumeType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__VolumeType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VolumeType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VolumeType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VolumeType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/VolumeType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__VolumeType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__VolumeChange() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__VolumeChange__init(msg: *mut VolumeChange) -> bool;
    fn aimdk_msgs__msg__VolumeChange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VolumeChange>, size: usize) -> bool;
    fn aimdk_msgs__msg__VolumeChange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VolumeChange>);
    fn aimdk_msgs__msg__VolumeChange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VolumeChange>, out_seq: *mut rosidl_runtime_rs::Sequence<VolumeChange>) -> bool;
}

// Corresponds to aimdk_msgs__msg__VolumeChange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 音量类型

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VolumeChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: super::super::msg::rmw::VolumeType,

    /// 当前音量（0~100）
    pub audio_volume: u32,

}



impl Default for VolumeChange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__VolumeChange__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__VolumeChange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VolumeChange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeChange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeChange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__VolumeChange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VolumeChange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VolumeChange where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/VolumeChange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__VolumeChange() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PlayStateType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__PlayStateType__init(msg: *mut PlayStateType) -> bool;
    fn aimdk_msgs__msg__PlayStateType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayStateType>, size: usize) -> bool;
    fn aimdk_msgs__msg__PlayStateType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayStateType>);
    fn aimdk_msgs__msg__PlayStateType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayStateType>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayStateType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__PlayStateType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__PlayStateType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__PlayStateType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayStateType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayStateType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayStateType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/PlayStateType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PlayStateType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PlayStateChange() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__PlayStateChange__init(msg: *mut PlayStateChange) -> bool;
    fn aimdk_msgs__msg__PlayStateChange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayStateChange>, size: usize) -> bool;
    fn aimdk_msgs__msg__PlayStateChange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayStateChange>);
    fn aimdk_msgs__msg__PlayStateChange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayStateChange>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayStateChange>) -> bool;
}

// Corresponds to aimdk_msgs__msg__PlayStateChange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 播放来源

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayStateChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: rosidl_runtime_rs::String,

    /// 播放状态
    pub state: super::super::msg::rmw::PlayStateType,

}



impl Default for PlayStateChange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__PlayStateChange__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__PlayStateChange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayStateChange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateChange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateChange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__PlayStateChange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayStateChange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayStateChange where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/PlayStateChange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__PlayStateChange() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MuteChange() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MuteChange__init(msg: *mut MuteChange) -> bool;
    fn aimdk_msgs__msg__MuteChange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MuteChange>, size: usize) -> bool;
    fn aimdk_msgs__msg__MuteChange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MuteChange>);
    fn aimdk_msgs__msg__MuteChange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MuteChange>, out_seq: *mut rosidl_runtime_rs::Sequence<MuteChange>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MuteChange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 当前静音状态

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MuteChange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mute: bool,

}



impl Default for MuteChange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MuteChange__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MuteChange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MuteChange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MuteChange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MuteChange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MuteChange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MuteChange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MuteChange where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MuteChange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MuteChange() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MusicState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MusicState__init(msg: *mut MusicState) -> bool;
    fn aimdk_msgs__msg__MusicState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MusicState>, size: usize) -> bool;
    fn aimdk_msgs__msg__MusicState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MusicState>);
    fn aimdk_msgs__msg__MusicState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MusicState>, out_seq: *mut rosidl_runtime_rs::Sequence<MusicState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MusicState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 发布音乐播放状态
/// 发布到 /aima/hal/audio/music_state
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MusicState {
    /// 当前已经执行的最新控制命令id
    pub control_command_id: u64,

    /// 当前播放状态
    pub playback_state: i32,

    /// 当前播放音乐名称
    pub song_name: rosidl_runtime_rs::String,

    /// 当前播放音乐歌手名
    pub artist: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

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
    pub qualities: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 当前选择音质索引
    pub quality_index: i32,

    /// 当前歌单对应的搜索命令id
    pub search_command_id: u64,

    /// 当前歌单名称，和搜索关键字保持一致
    pub song_list_name: rosidl_runtime_rs::String,

    /// 当前歌单歌曲数量
    pub song_list_size: i32,

    /// 当前播放歌曲在歌单中的索引，从0开始
    pub playback_index: i32,

    /// 当前歌单sp，和音乐搜索服务 SearchMusic 里的定义保持一致
    pub sp: i32,

    /// 搜索请求返回的HTTP STATUS
    pub search_resp_status: i32,

    /// 搜索请求返回的tts
    pub search_resp_tts_text: rosidl_runtime_rs::String,

    /// 搜索请求返回的code
    pub search_resp_code: rosidl_runtime_rs::String,

    /// url请求返回的warning
    pub url_resp_warning: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MusicState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MusicState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MusicState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MusicState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MusicState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MusicState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MusicState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MusicInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MusicInfo__init(msg: *mut MusicInfo) -> bool;
    fn aimdk_msgs__msg__MusicInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MusicInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__MusicInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MusicInfo>);
    fn aimdk_msgs__msg__MusicInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MusicInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MusicInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MusicInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 单首歌曲的信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MusicInfo {
    /// 歌曲id
    pub id: rosidl_runtime_rs::String,

    /// 歌曲名称
    pub name: rosidl_runtime_rs::String,

    /// 歌手列表
    pub artist: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 时长（毫秒）
    pub duration_ms: i32,

    /// 歌曲来源平台，例如qqmusic
    pub source: rosidl_runtime_rs::String,

}



impl Default for MusicInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MusicInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MusicInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MusicInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MusicInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MusicInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MusicInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MusicInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MusicInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MicSourceChange() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MicSourceChange__init(msg: *mut MicSourceChange) -> bool;
    fn aimdk_msgs__msg__MicSourceChange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MicSourceChange>, size: usize) -> bool;
    fn aimdk_msgs__msg__MicSourceChange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MicSourceChange>);
    fn aimdk_msgs__msg__MicSourceChange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MicSourceChange>, out_seq: *mut rosidl_runtime_rs::Sequence<MicSourceChange>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MicSourceChange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 0-内置麦
/// 1-外置麦

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MicSourceChange__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MicSourceChange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MicSourceChange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MicSourceChange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MicSourceChange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MicSourceChange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MicSourceChange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MicSourceChange where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MicSourceChange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MicSourceChange() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FocusResponse() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__FocusResponse__init(msg: *mut FocusResponse) -> bool;
    fn aimdk_msgs__msg__FocusResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FocusResponse>, size: usize) -> bool;
    fn aimdk_msgs__msg__FocusResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FocusResponse>);
    fn aimdk_msgs__msg__FocusResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FocusResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<FocusResponse>) -> bool;
}

// Corresponds to aimdk_msgs__msg__FocusResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，标识调用方来源

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FocusResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: rosidl_runtime_rs::String,

    /// 必要项，焦点结果
    /// true: 获取到焦点
    /// false: 丢失焦点
    pub focus_gain: bool,

}



impl Default for FocusResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__FocusResponse__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__FocusResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FocusResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FocusResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FocusResponse where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/FocusResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FocusResponse() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FocusRequester() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__FocusRequester__init(msg: *mut FocusRequester) -> bool;
    fn aimdk_msgs__msg__FocusRequester__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FocusRequester>, size: usize) -> bool;
    fn aimdk_msgs__msg__FocusRequester__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FocusRequester>);
    fn aimdk_msgs__msg__FocusRequester__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FocusRequester>, out_seq: *mut rosidl_runtime_rs::Sequence<FocusRequester>) -> bool;
}

// Corresponds to aimdk_msgs__msg__FocusRequester
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，标识调用方来源

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FocusRequester {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: rosidl_runtime_rs::String,

    /// 必要项，优先级(1~10, 默认6)
    pub priority: u32,

    /// 可选项，(1~100) priority + priority_weight% is final priority
    pub priority_weight: u32,

}



impl Default for FocusRequester {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__FocusRequester__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__FocusRequester__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FocusRequester {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusRequester__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusRequester__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__FocusRequester__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FocusRequester {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FocusRequester where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/FocusRequester";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__FocusRequester() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioPlayback() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioPlayback__init(msg: *mut AudioPlayback) -> bool;
    fn aimdk_msgs__msg__AudioPlayback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioPlayback>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioPlayback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioPlayback>);
    fn aimdk_msgs__msg__AudioPlayback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioPlayback>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioPlayback>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioPlayback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，时间戳

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioPlayback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamps: builtin_interfaces::msg::rmw::Time,

    /// 必要项，音频格式
    pub info: super::super::msg::rmw::AudioInfo,

    /// 必要项，音频数据
    pub data: super::super::msg::rmw::AudioData,

    /// 必要项，标识发送方来源
    pub pkg_name: rosidl_runtime_rs::String,

    /// 可选项，token_id有变化时会清理播放缓存（用于打断当前播放）
    pub token_id: rosidl_runtime_rs::String,

}



impl Default for AudioPlayback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioPlayback__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioPlayback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioPlayback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioPlayback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioPlayback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioPlayback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioPlayback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioPlayback where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioPlayback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioPlayback() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioInfo__init(msg: *mut AudioInfo) -> bool;
    fn aimdk_msgs__msg__AudioInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioInfo>);
    fn aimdk_msgs__msg__AudioInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，通道数

#[repr(C)]
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
    pub sample_format: rosidl_runtime_rs::String,

    /// 可选项，Audio coding format (e.g. pcm, wave, opus)
    pub coding_format: rosidl_runtime_rs::String,

}



impl Default for AudioInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioFile() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioFile__init(msg: *mut AudioFile) -> bool;
    fn aimdk_msgs__msg__AudioFile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioFile>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioFile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioFile>);
    fn aimdk_msgs__msg__AudioFile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioFile>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioFile>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioFile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，标识调用方来源

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioFile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pkg_name: rosidl_runtime_rs::String,

    /// 必要项，文件名
    pub file_name: rosidl_runtime_rs::String,

    /// 必要项，不设置时使用系统默认路径
    pub file_path: rosidl_runtime_rs::String,

    /// pcm格式必要项，wav格式可选项，音频格式
    pub info: super::super::msg::rmw::AudioInfo,

    /// 必要项，优先级(1~10, 默认6)
    pub priority: u32,

    /// 可选项，(1~100) priority + priority_weight% is final priority
    pub priority_weight: u32,

    /// 可选项，PulseAudio media.role，不传默认 music
    pub media_role: rosidl_runtime_rs::String,

}



impl Default for AudioFile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioFile__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioFile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioFile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioFile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioFile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioFile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioFile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioFile where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioFile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioFile() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioDeviceInfoList() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioDeviceInfoList__init(msg: *mut AudioDeviceInfoList) -> bool;
    fn aimdk_msgs__msg__AudioDeviceInfoList__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfoList>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioDeviceInfoList__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfoList>);
    fn aimdk_msgs__msg__AudioDeviceInfoList__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioDeviceInfoList>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfoList>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioDeviceInfoList
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 音频设备列表

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioDeviceInfoList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub input_list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AudioDeviceInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AudioDeviceInfo>,

}



impl Default for AudioDeviceInfoList {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioDeviceInfoList__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioDeviceInfoList__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioDeviceInfoList {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfoList__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfoList__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfoList__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioDeviceInfoList {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioDeviceInfoList where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioDeviceInfoList";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioDeviceInfoList() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioDeviceInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioDeviceInfo__init(msg: *mut AudioDeviceInfo) -> bool;
    fn aimdk_msgs__msg__AudioDeviceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioDeviceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfo>);
    fn aimdk_msgs__msg__AudioDeviceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioDeviceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioDeviceInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioDeviceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// -----------------------------------------------------------------------------------
/// 一块音频设备的信息
/// -----------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioDeviceInfo {
    /// 设备索引号
    /// -1: auto mode
    pub id: i32,

    /// 设备标志符
    /// builtin_mic builtin_speaker
    pub device_addr: rosidl_runtime_rs::String,

    /// 设备类型
    /// builtin bluetooth
    pub device_type: rosidl_runtime_rs::String,

    /// 设备名称
    /// snd_card_name bluetooth
    pub device_name: rosidl_runtime_rs::String,

    /// 是否处于选中状态
    pub is_sel: bool,

}



impl Default for AudioDeviceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioDeviceInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioDeviceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioDeviceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioDeviceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioDeviceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioDeviceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioDeviceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioDeviceInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioData() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioData__init(msg: *mut AudioData) -> bool;
    fn aimdk_msgs__msg__AudioData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioData>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioData>);
    fn aimdk_msgs__msg__AudioData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioData>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioData>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 音频数据

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for AudioData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioData__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioData where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioData() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioCapture() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__AudioCapture__init(msg: *mut AudioCapture) -> bool;
    fn aimdk_msgs__msg__AudioCapture__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AudioCapture>, size: usize) -> bool;
    fn aimdk_msgs__msg__AudioCapture__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AudioCapture>);
    fn aimdk_msgs__msg__AudioCapture__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AudioCapture>, out_seq: *mut rosidl_runtime_rs::Sequence<AudioCapture>) -> bool;
}

// Corresponds to aimdk_msgs__msg__AudioCapture
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 必要项，时间戳

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AudioCapture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamps: builtin_interfaces::msg::rmw::Time,

    /// 必要项，麦克风通道数
    pub mic_channels: u8,

    /// 必要项，回采信号通道数
    pub ref_channels: u8,

    /// 必要项，音频格式
    pub info: super::super::msg::rmw::AudioInfo,

    /// 必要项，音频数据
    pub data: super::super::msg::rmw::AudioData,

    /// 可选项，标识发送方来源
    pub pkg_name: rosidl_runtime_rs::String,

    /// 可选项，0-内置麦 1-外置麦
    pub mic_source: u32,

}



impl Default for AudioCapture {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__AudioCapture__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__AudioCapture__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AudioCapture {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioCapture__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioCapture__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__AudioCapture__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AudioCapture {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AudioCapture where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/AudioCapture";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__AudioCapture() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeType() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__EventProbeType__init(msg: *mut EventProbeType) -> bool;
    fn aimdk_msgs__msg__EventProbeType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EventProbeType>, size: usize) -> bool;
    fn aimdk_msgs__msg__EventProbeType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EventProbeType>);
    fn aimdk_msgs__msg__EventProbeType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EventProbeType>, out_seq: *mut rosidl_runtime_rs::Sequence<EventProbeType>) -> bool;
}

// Corresponds to aimdk_msgs__msg__EventProbeType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__EventProbeType__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__EventProbeType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EventProbeType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EventProbeType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EventProbeType where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/EventProbeType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeType() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeInfoArray() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__EventProbeInfoArray__init(msg: *mut EventProbeInfoArray) -> bool;
    fn aimdk_msgs__msg__EventProbeInfoArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfoArray>, size: usize) -> bool;
    fn aimdk_msgs__msg__EventProbeInfoArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfoArray>);
    fn aimdk_msgs__msg__EventProbeInfoArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EventProbeInfoArray>, out_seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfoArray>) -> bool;
}

// Corresponds to aimdk_msgs__msg__EventProbeInfoArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 消息头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeInfoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EventProbeInfo>,

}



impl Default for EventProbeInfoArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__EventProbeInfoArray__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__EventProbeInfoArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EventProbeInfoArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfoArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfoArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfoArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EventProbeInfoArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EventProbeInfoArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/EventProbeInfoArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeInfoArray() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeInfo() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__EventProbeInfo__init(msg: *mut EventProbeInfo) -> bool;
    fn aimdk_msgs__msg__EventProbeInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfo>, size: usize) -> bool;
    fn aimdk_msgs__msg__EventProbeInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfo>);
    fn aimdk_msgs__msg__EventProbeInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EventProbeInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<EventProbeInfo>) -> bool;
}

// Corresponds to aimdk_msgs__msg__EventProbeInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeInfo {
    /// 事件状态
    pub status: u8,

    /// 事件时间戳
    pub timestamp: u64,

    /// 事件类型
    pub type_: super::super::msg::rmw::EventProbeType,

    /// 模块ID
    pub module_id: u8,

    /// 事件ID
    pub event_id: u32,

    /// 模块时间码
    pub event_code: u64,

    /// 模块事件信息
    pub desc: rosidl_runtime_rs::String,

    /// 事件属性
    pub attrs: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EventProbeAttr>,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__EventProbeInfo__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__EventProbeInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EventProbeInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EventProbeInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EventProbeInfo where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/EventProbeInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeInfo() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeAttr() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__EventProbeAttr__init(msg: *mut EventProbeAttr) -> bool;
    fn aimdk_msgs__msg__EventProbeAttr__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EventProbeAttr>, size: usize) -> bool;
    fn aimdk_msgs__msg__EventProbeAttr__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EventProbeAttr>);
    fn aimdk_msgs__msg__EventProbeAttr__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EventProbeAttr>, out_seq: *mut rosidl_runtime_rs::Sequence<EventProbeAttr>) -> bool;
}

// Corresponds to aimdk_msgs__msg__EventProbeAttr
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EventProbeAttr {
    /// key
    pub key: rosidl_runtime_rs::String,

    /// 根据类型解析具体的数据
    pub type_: u8,

    /// 以下几种类型数据的值只会存在一个
    /// 整形数据
    pub value_int: i64,

    /// 浮点型数据
    pub value_double: f64,

    /// 字符串类型数据
    pub value_string: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__EventProbeAttr__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__EventProbeAttr__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EventProbeAttr {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeAttr__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeAttr__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__EventProbeAttr__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EventProbeAttr {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EventProbeAttr where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/EventProbeAttr";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__EventProbeAttr() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ResponseHeader() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__ResponseHeader__init(msg: *mut ResponseHeader) -> bool;
    fn aimdk_msgs__msg__ResponseHeader__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResponseHeader>, size: usize) -> bool;
    fn aimdk_msgs__msg__ResponseHeader__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResponseHeader>);
    fn aimdk_msgs__msg__ResponseHeader__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResponseHeader>, out_seq: *mut rosidl_runtime_rs::Sequence<ResponseHeader>) -> bool;
}

// Corresponds to aimdk_msgs__msg__ResponseHeader
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// World time stamp, which is expressed as seconds and nanoseconds.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResponseHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Return code, 0 for success, others for failure.
    pub code: i64,

}



impl Default for ResponseHeader {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__ResponseHeader__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__ResponseHeader__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResponseHeader {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ResponseHeader__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ResponseHeader__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__ResponseHeader__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResponseHeader {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResponseHeader where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/ResponseHeader";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__ResponseHeader() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RequestHeader() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__RequestHeader__init(msg: *mut RequestHeader) -> bool;
    fn aimdk_msgs__msg__RequestHeader__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RequestHeader>, size: usize) -> bool;
    fn aimdk_msgs__msg__RequestHeader__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RequestHeader>);
    fn aimdk_msgs__msg__RequestHeader__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RequestHeader>, out_seq: *mut rosidl_runtime_rs::Sequence<RequestHeader>) -> bool;
}

// Corresponds to aimdk_msgs__msg__RequestHeader
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// World time stamp, which is expressed as seconds and nanoseconds.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RequestHeader {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__RequestHeader__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__RequestHeader__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RequestHeader {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RequestHeader__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RequestHeader__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__RequestHeader__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RequestHeader {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RequestHeader where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/RequestHeader";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__RequestHeader() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MessageHeader() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__MessageHeader__init(msg: *mut MessageHeader) -> bool;
    fn aimdk_msgs__msg__MessageHeader__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>, size: usize) -> bool;
    fn aimdk_msgs__msg__MessageHeader__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>);
    fn aimdk_msgs__msg__MessageHeader__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MessageHeader>, out_seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>) -> bool;
}

// Corresponds to aimdk_msgs__msg__MessageHeader
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// World time stamp, which is expressed as seconds and nanoseconds.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MessageHeader {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Transform frame with which this data is associated.
    pub frame_id: rosidl_runtime_rs::String,

    /// Message's consecutively increasing ID
    pub sequence: u32,

    /// Time of receive data, Measurement time stamp, which is expressed as seconds and nanoseconds.
    pub meas_stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MessageHeader {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__MessageHeader__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__MessageHeader__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MessageHeader {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MessageHeader__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MessageHeader__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__MessageHeader__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MessageHeader {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MessageHeader where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/MessageHeader";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__MessageHeader() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__KeyValue() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__KeyValue__init(msg: *mut KeyValue) -> bool;
    fn aimdk_msgs__msg__KeyValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>, size: usize) -> bool;
    fn aimdk_msgs__msg__KeyValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>);
    fn aimdk_msgs__msg__KeyValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KeyValue>, out_seq: *mut rosidl_runtime_rs::Sequence<KeyValue>) -> bool;
}

// Corresponds to aimdk_msgs__msg__KeyValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// --------------------------------------------------------------------------------------------------------------
/// 通用键值对
/// 说明:
///   - key: 唯一/语义字段名
///   - value: 文本值；需要结构化可放 JSON 片段
/// --------------------------------------------------------------------------------------------------------------

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for KeyValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__KeyValue__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__KeyValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KeyValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__KeyValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__KeyValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__KeyValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KeyValue where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/KeyValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__KeyValue() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonTaskResponse() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__CommonTaskResponse__init(msg: *mut CommonTaskResponse) -> bool;
    fn aimdk_msgs__msg__CommonTaskResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonTaskResponse>, size: usize) -> bool;
    fn aimdk_msgs__msg__CommonTaskResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonTaskResponse>);
    fn aimdk_msgs__msg__CommonTaskResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonTaskResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonTaskResponse>) -> bool;
}

// Corresponds to aimdk_msgs__msg__CommonTaskResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 响应头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonTaskResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::ResponseHeader,

    /// 任务ID
    pub task_id: u64,

    /// 状态
    pub state: super::super::msg::rmw::CommonState,

}



impl Default for CommonTaskResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__CommonTaskResponse__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__CommonTaskResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonTaskResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonTaskResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonTaskResponse where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/CommonTaskResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonTaskResponse() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonTaskRequest() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__CommonTaskRequest__init(msg: *mut CommonTaskRequest) -> bool;
    fn aimdk_msgs__msg__CommonTaskRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonTaskRequest>, size: usize) -> bool;
    fn aimdk_msgs__msg__CommonTaskRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonTaskRequest>);
    fn aimdk_msgs__msg__CommonTaskRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonTaskRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonTaskRequest>) -> bool;
}

// Corresponds to aimdk_msgs__msg__CommonTaskRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 请求头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonTaskRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

    /// 任务ID
    pub task_id: u64,

}



impl Default for CommonTaskRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__CommonTaskRequest__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__CommonTaskRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonTaskRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonTaskRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonTaskRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonTaskRequest where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/CommonTaskRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonTaskRequest() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonState() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__CommonState__init(msg: *mut CommonState) -> bool;
    fn aimdk_msgs__msg__CommonState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonState>, size: usize) -> bool;
    fn aimdk_msgs__msg__CommonState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonState>);
    fn aimdk_msgs__msg__CommonState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonState>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonState>) -> bool;
}

// Corresponds to aimdk_msgs__msg__CommonState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__CommonState__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__CommonState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonState where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/CommonState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonState() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonResponse() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__CommonResponse__init(msg: *mut CommonResponse) -> bool;
    fn aimdk_msgs__msg__CommonResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonResponse>, size: usize) -> bool;
    fn aimdk_msgs__msg__CommonResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonResponse>);
    fn aimdk_msgs__msg__CommonResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonResponse>) -> bool;
}

// Corresponds to aimdk_msgs__msg__CommonResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 响应头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::ResponseHeader,

    /// 响应状态码
    pub status: super::super::msg::rmw::CommonState,

    /// 响应消息
    pub message: rosidl_runtime_rs::String,

}



impl Default for CommonResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__CommonResponse__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__CommonResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonResponse where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/CommonResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonResponse() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonRequest() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__msg__CommonRequest__init(msg: *mut CommonRequest) -> bool;
    fn aimdk_msgs__msg__CommonRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommonRequest>, size: usize) -> bool;
    fn aimdk_msgs__msg__CommonRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommonRequest>);
    fn aimdk_msgs__msg__CommonRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommonRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<CommonRequest>) -> bool;
}

// Corresponds to aimdk_msgs__msg__CommonRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 请求头

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommonRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

}



impl Default for CommonRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__msg__CommonRequest__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__msg__CommonRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommonRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__msg__CommonRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommonRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommonRequest where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/msg/CommonRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__msg__CommonRequest() }
  }
}


