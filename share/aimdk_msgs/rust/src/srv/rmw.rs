#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Request__init(msg: *mut SetRobotRuntimeModel_Request) -> bool;
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Request>);
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetRobotRuntimeModel_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotRuntimeModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub runtime_model: super::super::msg::rmw::McRuntimeModel,

}



impl Default for SetRobotRuntimeModel_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetRobotRuntimeModel_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetRobotRuntimeModel_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotRuntimeModel_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotRuntimeModel_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotRuntimeModel_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetRobotRuntimeModel_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Response__init(msg: *mut SetRobotRuntimeModel_Response) -> bool;
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Response>);
    fn aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotRuntimeModel_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetRobotRuntimeModel_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotRuntimeModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetRobotRuntimeModel_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetRobotRuntimeModel_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetRobotRuntimeModel_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotRuntimeModel_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetRobotRuntimeModel_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotRuntimeModel_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotRuntimeModel_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetRobotRuntimeModel_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcPresetMotion_Request__init(msg: *mut SetMcPresetMotion_Request) -> bool;
    fn aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Request>);
    fn aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcPresetMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcPresetMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcPresetMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: rosidl_runtime_rs::String,

    /// 控制区域
    pub area: super::super::msg::rmw::McControlArea,

    /// 预设动作
    pub motion: super::super::msg::rmw::McPresetMotion,

    /// 是否打断前一个动作
    pub interrupt: bool,

    /// 自定义动作地址
    pub ani_path: rosidl_runtime_rs::String,

}



impl Default for SetMcPresetMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcPresetMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcPresetMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcPresetMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcPresetMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcPresetMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcPresetMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcPresetMotion_Response__init(msg: *mut SetMcPresetMotion_Response) -> bool;
    fn aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Response>);
    fn aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcPresetMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcPresetMotion_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcPresetMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcPresetMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetMcPresetMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcPresetMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcPresetMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcPresetMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcPresetMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcPresetMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcPresetMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcPresetMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcMotionSeq_Request__init(msg: *mut SetMcMotionSeq_Request) -> bool;
    fn aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Request>);
    fn aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcMotionSeq_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcMotionSeq_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotionSeq_Request {
    /// 请求头
    pub header: super::super::msg::rmw::RequestHeader,

    /// 动作序列
    pub motion_seq: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 打断
    pub interrupt: bool,

}



impl Default for SetMcMotionSeq_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcMotionSeq_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcMotionSeq_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcMotionSeq_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcMotionSeq_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcMotionSeq_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcMotionSeq_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcMotionSeq_Response__init(msg: *mut SetMcMotionSeq_Response) -> bool;
    fn aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Response>);
    fn aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcMotionSeq_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcMotionSeq_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcMotionSeq_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotionSeq_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetMcMotionSeq_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcMotionSeq_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcMotionSeq_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcMotionSeq_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotionSeq_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcMotionSeq_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcMotionSeq_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcMotionSeq_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcMotion_Request__init(msg: *mut SetMcMotion_Request) -> bool;
    fn aimdk_msgs__srv__SetMcMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Request>);
    fn aimdk_msgs__srv__SetMcMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotion_Request {
    /// 请求头
    pub header: super::super::msg::rmw::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: rosidl_runtime_rs::String,

    /// 资源类型
    pub type_: i32,

    /// 全身动作名称，若motion为空，加载model中resource; 反之，从本地加载执行资源。
    pub motion: rosidl_runtime_rs::String,

    /// onnx 模型绝对路径
    pub model: rosidl_runtime_rs::String,

    /// 资源绝对路径，比如轨迹参考
    pub resource: rosidl_runtime_rs::String,

    /// 是否打断(给后面animation接口合并预留)
    pub interrupt: bool,

    /// 操作类型
    pub operation: i32,

}

impl SetMcMotion_Request {
    /// 自有模型
    pub const MIMIC_QY: i32 = 1;

    /// 灵创模型
    pub const MIMIC_LC: i32 = 2;

    /// 预先加载
    pub const PRELOAD: i32 = 1;

    /// 开始执行
    pub const EXECUTION: i32 = 2;

}


impl Default for SetMcMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotion_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcMotion_Response__init(msg: *mut SetMcMotion_Response) -> bool;
    fn aimdk_msgs__srv__SetMcMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Response>);
    fn aimdk_msgs__srv__SetMcMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcMotion_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotion_Response {
    /// 响应头
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetMcMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcMotion_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcLocomotionGait_Request__init(msg: *mut SetMcLocomotionGait_Request) -> bool;
    fn aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Request>);
    fn aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcLocomotionGait_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcLocomotionGait_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

    /// 步态
    pub gait: super::super::msg::rmw::McLocomotionGaitType,

}



impl Default for SetMcLocomotionGait_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcLocomotionGait_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcLocomotionGait_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcLocomotionGait_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcLocomotionGait_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcLocomotionGait_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcLocomotionGait_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcLocomotionGait_Response__init(msg: *mut SetMcLocomotionGait_Response) -> bool;
    fn aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Response>);
    fn aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcLocomotionGait_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcLocomotionGait_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcLocomotionGait_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for SetMcLocomotionGait_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcLocomotionGait_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcLocomotionGait_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcLocomotionGait_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcLocomotionGait_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcLocomotionGait_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcLocomotionGait_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcLocomotionGait_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcInputSource_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcInputSource_Request__init(msg: *mut SetMcInputSource_Request) -> bool;
    fn aimdk_msgs__srv__SetMcInputSource_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcInputSource_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Request>);
    fn aimdk_msgs__srv__SetMcInputSource_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcInputSource_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcInputSource_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcInputSource_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// ADD MODIFY DELETE DISABLE ENABLE
    pub action: super::super::msg::rmw::McInputAction,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_source: super::super::msg::rmw::McInputSource,

}



impl Default for SetMcInputSource_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcInputSource_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcInputSource_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcInputSource_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcInputSource_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcInputSource_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcInputSource_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcInputSource_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcInputSource_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcInputSource_Response__init(msg: *mut SetMcInputSource_Response) -> bool;
    fn aimdk_msgs__srv__SetMcInputSource_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcInputSource_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Response>);
    fn aimdk_msgs__srv__SetMcInputSource_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcInputSource_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcInputSource_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcInputSource_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcInputSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetMcInputSource_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcInputSource_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcInputSource_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcInputSource_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcInputSource_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcInputSource_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcInputSource_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcInputSource_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcInputSource_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__RegisterCustomMotion_Request__init(msg: *mut RegisterCustomMotion_Request) -> bool;
    fn aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Request>);
    fn aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterCustomMotion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__RegisterCustomMotion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterCustomMotion_Request {
    /// 动作名称
    pub motion: rosidl_runtime_rs::String,

    /// 资源路径
    pub res_path: rosidl_runtime_rs::String,

    /// 注册动作是否落盘(暂时不可用)
    pub write_to_disk: bool,

}



impl Default for RegisterCustomMotion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__RegisterCustomMotion_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__RegisterCustomMotion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterCustomMotion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterCustomMotion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterCustomMotion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/RegisterCustomMotion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__RegisterCustomMotion_Response__init(msg: *mut RegisterCustomMotion_Response) -> bool;
    fn aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Response>);
    fn aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterCustomMotion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterCustomMotion_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__RegisterCustomMotion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterCustomMotion_Response {
    /// 响应头
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for RegisterCustomMotion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__RegisterCustomMotion_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__RegisterCustomMotion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterCustomMotion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RegisterCustomMotion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterCustomMotion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterCustomMotion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/RegisterCustomMotion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__McMotionRecord_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__McMotionRecord_Request__init(msg: *mut McMotionRecord_Request) -> bool;
    fn aimdk_msgs__srv__McMotionRecord_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__McMotionRecord_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Request>);
    fn aimdk_msgs__srv__McMotionRecord_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionRecord_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__McMotionRecord_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionRecord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 操作区域部分
    pub record_area: i32,

    /// 操作模式部分
    pub operation_type: i32,

    /// 录制时长限制
    pub max_duration: i32,

    /// 存储路径
    pub folder_path: rosidl_runtime_rs::String,

    /// 文件名
    pub file_name: rosidl_runtime_rs::String,

}

impl McMotionRecord_Request {
    /// 上半身
    pub const RECORD_UPPER: i32 = 1;

    /// 下半身
    pub const RECORD_LOWER: i32 = 2;

    /// 全身
    pub const RECORD_ALL: i32 = 3;

    /// 开始录制
    pub const OPER_START: i32 = 1;

    /// 结束录制
    pub const OPER_STOP: i32 = 2;

    /// 暂停录制(产品暂时没提)
    pub const OPER_PAUSE: i32 = 3;

    /// 继续录制(产品暂时没提)
    pub const OPER_RESUME: i32 = 4;

}


impl Default for McMotionRecord_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__McMotionRecord_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__McMotionRecord_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionRecord_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionRecord_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionRecord_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/McMotionRecord_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__McMotionRecord_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__McMotionRecord_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__McMotionRecord_Response__init(msg: *mut McMotionRecord_Response) -> bool;
    fn aimdk_msgs__srv__McMotionRecord_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__McMotionRecord_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Response>);
    fn aimdk_msgs__srv__McMotionRecord_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<McMotionRecord_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<McMotionRecord_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__McMotionRecord_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionRecord_Response {
    /// Response 部分
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for McMotionRecord_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__McMotionRecord_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__McMotionRecord_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for McMotionRecord_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__McMotionRecord_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for McMotionRecord_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for McMotionRecord_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/McMotionRecord_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__McMotionRecord_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Request__init(msg: *mut GetRobotRuntimeModel_Request) -> bool;
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Request>);
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetRobotRuntimeModel_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotRuntimeModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonTaskRequest,

}



impl Default for GetRobotRuntimeModel_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetRobotRuntimeModel_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetRobotRuntimeModel_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotRuntimeModel_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotRuntimeModel_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotRuntimeModel_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetRobotRuntimeModel_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Response__init(msg: *mut GetRobotRuntimeModel_Response) -> bool;
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Response>);
    fn aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetRobotRuntimeModel_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetRobotRuntimeModel_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotRuntimeModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub runtime_model: super::super::msg::rmw::McRuntimeModel,

}



impl Default for GetRobotRuntimeModel_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetRobotRuntimeModel_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetRobotRuntimeModel_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetRobotRuntimeModel_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetRobotRuntimeModel_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetRobotRuntimeModel_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetRobotRuntimeModel_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetRobotRuntimeModel_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcPresetMotionState_Request__init(msg: *mut GetMcPresetMotionState_Request) -> bool;
    fn aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Request>);
    fn aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcPresetMotionState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcPresetMotionState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonTaskRequest,

}



impl Default for GetMcPresetMotionState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcPresetMotionState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcPresetMotionState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcPresetMotionState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcPresetMotionState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcPresetMotionState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcPresetMotionState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcPresetMotionState_Response__init(msg: *mut GetMcPresetMotionState_Response) -> bool;
    fn aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Response>);
    fn aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcPresetMotionState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcPresetMotionState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcPresetMotionState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for GetMcPresetMotionState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcPresetMotionState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcPresetMotionState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcPresetMotionState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcPresetMotionState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcPresetMotionState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcPresetMotionState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcPresetMotionState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcMotions_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcMotions_Request__init(msg: *mut GetMcMotions_Request) -> bool;
    fn aimdk_msgs__srv__GetMcMotions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcMotions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Request>);
    fn aimdk_msgs__srv__GetMcMotions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcMotions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcMotions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcMotions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

    /// 动作形态，通过指定形态过滤动作
    pub form_state: super::super::msg::rmw::McFormState,

}



impl Default for GetMcMotions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcMotions_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcMotions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcMotions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcMotions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcMotions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcMotions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcMotions_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcMotions_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcMotions_Response__init(msg: *mut GetMcMotions_Response) -> bool;
    fn aimdk_msgs__srv__GetMcMotions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcMotions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Response>);
    fn aimdk_msgs__srv__GetMcMotions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcMotions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcMotions_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcMotions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcMotions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

    /// 当前存在的动作列表
    pub motion: rosidl_runtime_rs::Sequence<super::super::msg::rmw::McMotion>,

}



impl Default for GetMcMotions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcMotions_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcMotions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcMotions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcMotions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcMotions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcMotions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcMotions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcMotions_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcLocomotionGait_Request__init(msg: *mut GetMcLocomotionGait_Request) -> bool;
    fn aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Request>);
    fn aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcLocomotionGait_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcLocomotionGait_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMcLocomotionGait_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcLocomotionGait_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcLocomotionGait_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcLocomotionGait_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcLocomotionGait_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcLocomotionGait_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcLocomotionGait_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcLocomotionGait_Response__init(msg: *mut GetMcLocomotionGait_Response) -> bool;
    fn aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Response>);
    fn aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcLocomotionGait_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcLocomotionGait_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcLocomotionGait_Response {
    /// 响应头
    pub header: super::super::msg::rmw::ResponseHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gait: super::super::msg::rmw::McLocomotionGaitType,

}



impl Default for GetMcLocomotionGait_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcLocomotionGait_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcLocomotionGait_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcLocomotionGait_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcLocomotionGait_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcLocomotionGait_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcLocomotionGait_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcLocomotionGait_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCurrentInputSource_Request__init(msg: *mut GetCurrentInputSource_Request) -> bool;
    fn aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Request>);
    fn aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentInputSource_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCurrentInputSource_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentInputSource_Request {
    /// Request 部分
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetCurrentInputSource_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCurrentInputSource_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCurrentInputSource_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentInputSource_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentInputSource_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentInputSource_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCurrentInputSource_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCurrentInputSource_Response__init(msg: *mut GetCurrentInputSource_Response) -> bool;
    fn aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Response>);
    fn aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCurrentInputSource_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCurrentInputSource_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCurrentInputSource_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentInputSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_source: super::super::msg::rmw::McInputSource,

}



impl Default for GetCurrentInputSource_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCurrentInputSource_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCurrentInputSource_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCurrentInputSource_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCurrentInputSource_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCurrentInputSource_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCurrentInputSource_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCurrentInputSource_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcTaskState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcTaskState_Request__init(msg: *mut GetMcTaskState_Request) -> bool;
    fn aimdk_msgs__srv__GetMcTaskState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcTaskState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Request>);
    fn aimdk_msgs__srv__GetMcTaskState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcTaskState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcTaskState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcTaskState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonTaskRequest,

}



impl Default for GetMcTaskState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcTaskState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcTaskState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcTaskState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcTaskState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcTaskState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcTaskState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcTaskState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcTaskState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcTaskState_Response__init(msg: *mut GetMcTaskState_Response) -> bool;
    fn aimdk_msgs__srv__GetMcTaskState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcTaskState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Response>);
    fn aimdk_msgs__srv__GetMcTaskState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcTaskState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcTaskState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcTaskState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcTaskState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for GetMcTaskState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcTaskState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcTaskState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcTaskState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcTaskState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcTaskState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcTaskState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcTaskState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcTaskState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcJointState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcJointState_Request__init(msg: *mut GetMcJointState_Request) -> bool;
    fn aimdk_msgs__srv__GetMcJointState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcJointState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Request>);
    fn aimdk_msgs__srv__GetMcJointState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcJointState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcJointState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcJointState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMcJointState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcJointState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcJointState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcJointState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcJointState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcJointState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcJointState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcJointState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcJointState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcJointState_Response__init(msg: *mut GetMcJointState_Response) -> bool;
    fn aimdk_msgs__srv__GetMcJointState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcJointState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Response>);
    fn aimdk_msgs__srv__GetMcJointState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcJointState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcJointState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcJointState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcJointState_Response {
    /// 响应头
    pub header: super::super::msg::rmw::ResponseHeader,

    /// Joint信息
    pub joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,

}



impl Default for GetMcJointState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcJointState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcJointState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcJointState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcJointState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcJointState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcJointState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcJointState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcJointState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcAction_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcAction_Request__init(msg: *mut SetMcAction_Request) -> bool;
    fn aimdk_msgs__srv__SetMcAction_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcAction_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Request>);
    fn aimdk_msgs__srv__SetMcAction_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcAction_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcAction_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: rosidl_runtime_rs::String,

    /// Action命令
    pub command: super::super::msg::rmw::McActionCommand,

}



impl Default for SetMcAction_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcAction_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcAction_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcAction_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcAction_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcAction_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcAction_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcAction_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcAction_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMcAction_Response__init(msg: *mut SetMcAction_Response) -> bool;
    fn aimdk_msgs__srv__SetMcAction_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMcAction_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Response>);
    fn aimdk_msgs__srv__SetMcAction_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMcAction_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMcAction_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMcAction_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcAction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonTaskResponse,

}



impl Default for SetMcAction_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMcAction_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMcAction_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMcAction_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMcAction_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMcAction_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMcAction_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMcAction_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMcAction_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcAvailableActions_Request__init(msg: *mut GetMcAvailableActions_Request) -> bool;
    fn aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Request>);
    fn aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcAvailableActions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcAvailableActions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAvailableActions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMcAvailableActions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcAvailableActions_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcAvailableActions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcAvailableActions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcAvailableActions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcAvailableActions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcAvailableActions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcAvailableActions_Response__init(msg: *mut GetMcAvailableActions_Response) -> bool;
    fn aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Response>);
    fn aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcAvailableActions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcAvailableActions_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcAvailableActions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAvailableActions_Response {
    /// 响应头
    pub header: super::super::msg::rmw::ResponseHeader,

    /// 可用的Action列表
    pub actions: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 可用的Action命令列表
    pub commands: rosidl_runtime_rs::Sequence<super::super::msg::rmw::McActionCommand>,

}



impl Default for GetMcAvailableActions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcAvailableActions_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcAvailableActions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcAvailableActions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAvailableActions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcAvailableActions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcAvailableActions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcAvailableActions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAction_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcAction_Request__init(msg: *mut GetMcAction_Request) -> bool;
    fn aimdk_msgs__srv__GetMcAction_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcAction_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Request>);
    fn aimdk_msgs__srv__GetMcAction_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcAction_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcAction_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMcAction_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcAction_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcAction_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcAction_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcAction_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcAction_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcAction_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAction_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAction_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMcAction_Response__init(msg: *mut GetMcAction_Response) -> bool;
    fn aimdk_msgs__srv__GetMcAction_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMcAction_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Response>);
    fn aimdk_msgs__srv__GetMcAction_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMcAction_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMcAction_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMcAction_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAction_Response {
    /// 响应头
    pub header: super::super::msg::rmw::ResponseHeader,

    /// Action信息
    pub info: super::super::msg::rmw::McActionInfo,

}



impl Default for GetMcAction_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMcAction_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMcAction_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMcAction_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMcAction_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMcAction_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMcAction_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMcAction_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMcAction_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Request__init(msg: *mut GetAlertCodeJsonFile_Request) -> bool;
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Request>);
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetAlertCodeJsonFile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAlertCodeJsonFile_Request {
    /// ----------------------------------------------------
    /// 请求头
    pub header: super::super::msg::rmw::CommonRequest,

}



impl Default for GetAlertCodeJsonFile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetAlertCodeJsonFile_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetAlertCodeJsonFile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAlertCodeJsonFile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAlertCodeJsonFile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAlertCodeJsonFile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetAlertCodeJsonFile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Response__init(msg: *mut GetAlertCodeJsonFile_Response) -> bool;
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Response>);
    fn aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAlertCodeJsonFile_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetAlertCodeJsonFile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAlertCodeJsonFile_Response {
    /// ----------------------------------------------------
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

    /// ----------------------------------------------------
    /// json文件转成字符串返回
    pub alert_code_json: rosidl_runtime_rs::String,

}



impl Default for GetAlertCodeJsonFile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetAlertCodeJsonFile_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetAlertCodeJsonFile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAlertCodeJsonFile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAlertCodeJsonFile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAlertCodeJsonFile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAlertCodeJsonFile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetAlertCodeJsonFile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetServo_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetServo_Request__init(msg: *mut SetServo_Request) -> bool;
    fn aimdk_msgs__srv__SetServo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetServo_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetServo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetServo_Request>);
    fn aimdk_msgs__srv__SetServo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetServo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetServo_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetServo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetServo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 位置,范围为0-90度，0度为四足形态的位置，90度为双足形态的位置
    pub position: u8,

    /// 速度，范围为100-1000。该值为每秒运动的步数，1步为0.225度。
    pub speed: u16,

}



impl Default for SetServo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetServo_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetServo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetServo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetServo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetServo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetServo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetServo_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetServo_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetServo_Response__init(msg: *mut SetServo_Response) -> bool;
    fn aimdk_msgs__srv__SetServo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetServo_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetServo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetServo_Response>);
    fn aimdk_msgs__srv__SetServo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetServo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetServo_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetServo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetServo_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

}



impl Default for SetServo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetServo_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetServo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetServo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetServo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetServo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetServo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetServo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetServo_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPowerDownOrin_Request__init(msg: *mut SetPowerDownOrin_Request) -> bool;
    fn aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Request>);
    fn aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerDownOrin_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPowerDownOrin_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDownOrin_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 位置
    pub command: u8,

    /// 调用请求的模块名
    pub input_source: rosidl_runtime_rs::String,

}

impl SetPowerDownOrin_Request {
    /// command: 控制命令
    /// 未知指令
    pub const CMD_UNKNOWN: u8 = 0;

    /// 正常下电
    pub const CMD_POWER_DOWN: u8 = 1;

    /// 重启
    pub const CMD_REBOOT: u8 = 2;

    /// 紧急下电/急停断电
    pub const CMD_EMERGENCY_POWER_DOWN: u8 = 3;

}


impl Default for SetPowerDownOrin_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPowerDownOrin_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPowerDownOrin_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerDownOrin_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerDownOrin_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerDownOrin_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPowerDownOrin_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPowerDownOrin_Response__init(msg: *mut SetPowerDownOrin_Response) -> bool;
    fn aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Response>);
    fn aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerDownOrin_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerDownOrin_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPowerDownOrin_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDownOrin_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for SetPowerDownOrin_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPowerDownOrin_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPowerDownOrin_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerDownOrin_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDownOrin_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerDownOrin_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerDownOrin_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPowerDownOrin_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDown_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPowerDown_Request__init(msg: *mut SetPowerDown_Request) -> bool;
    fn aimdk_msgs__srv__SetPowerDown_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPowerDown_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Request>);
    fn aimdk_msgs__srv__SetPowerDown_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerDown_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPowerDown_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDown_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 位置
    pub command: u8,

    /// 调用请求的模块名
    pub input_source: rosidl_runtime_rs::String,

    /// 电池下电后重新上电的时间，单位：s
    pub power_reboot_interval: u8,

}

impl SetPowerDown_Request {
    /// command: 控制命令
    /// 未知
    pub const UNKNOWN: u8 = 0;

    /// 按键关机确认关机
    pub const POWERDOWN: u8 = 1;

    /// 按键关机取消关机
    pub const CANCEL_POWERDOWN: u8 = 2;

    /// 主动关机
    pub const SOFTWARE_POWERDOWN: u8 = 3;

    /// 电池立即下电再重新上电
    pub const BATTERY_REBOOT: u8 = 4;

    /// 关机并重启
    pub const SHUTDOWN_REBOOT: u8 = 5;

}


impl Default for SetPowerDown_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPowerDown_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPowerDown_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerDown_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerDown_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerDown_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPowerDown_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDown_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDown_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPowerDown_Response__init(msg: *mut SetPowerDown_Response) -> bool;
    fn aimdk_msgs__srv__SetPowerDown_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPowerDown_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Response>);
    fn aimdk_msgs__srv__SetPowerDown_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerDown_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerDown_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPowerDown_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDown_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for SetPowerDown_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPowerDown_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPowerDown_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerDown_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPowerDown_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerDown_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerDown_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPowerDown_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPowerDown_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuSN_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPmuSN_Request__init(msg: *mut SetPmuSN_Request) -> bool;
    fn aimdk_msgs__srv__SetPmuSN_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPmuSN_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Request>);
    fn aimdk_msgs__srv__SetPmuSN_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPmuSN_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPmuSN_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuSN_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serial_number: [u8; 19],

}

impl SetPmuSN_Request {
    /// 目标设备是PMU
    pub const PMU_SN: u8 = 0;

    /// 目标设备是LORA
    pub const LORA_SN: u8 = 1;

}


impl Default for SetPmuSN_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPmuSN_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPmuSN_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPmuSN_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPmuSN_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPmuSN_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPmuSN_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuSN_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuSN_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPmuSN_Response__init(msg: *mut SetPmuSN_Response) -> bool;
    fn aimdk_msgs__srv__SetPmuSN_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPmuSN_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Response>);
    fn aimdk_msgs__srv__SetPmuSN_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPmuSN_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPmuSN_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPmuSN_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuSN_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 设置是否成功
    pub result: u16,

}



impl Default for SetPmuSN_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPmuSN_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPmuSN_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPmuSN_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuSN_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPmuSN_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPmuSN_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPmuSN_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuSN_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPmuFanDuty_Request__init(msg: *mut SetPmuFanDuty_Request) -> bool;
    fn aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Request>);
    fn aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPmuFanDuty_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPmuFanDuty_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuFanDuty_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duty: f64,

}



impl Default for SetPmuFanDuty_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPmuFanDuty_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPmuFanDuty_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPmuFanDuty_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPmuFanDuty_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPmuFanDuty_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPmuFanDuty_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetPmuFanDuty_Response__init(msg: *mut SetPmuFanDuty_Response) -> bool;
    fn aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Response>);
    fn aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPmuFanDuty_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPmuFanDuty_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetPmuFanDuty_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuFanDuty_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 设置是否成功
    pub result: u16,

}



impl Default for SetPmuFanDuty_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetPmuFanDuty_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetPmuFanDuty_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPmuFanDuty_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetPmuFanDuty_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPmuFanDuty_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPmuFanDuty_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetPmuFanDuty_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetNeckLight_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetNeckLight_Request__init(msg: *mut SetNeckLight_Request) -> bool;
    fn aimdk_msgs__srv__SetNeckLight_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetNeckLight_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Request>);
    fn aimdk_msgs__srv__SetNeckLight_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetNeckLight_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetNeckLight_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNeckLight_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for SetNeckLight_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetNeckLight_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetNeckLight_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetNeckLight_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetNeckLight_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetNeckLight_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetNeckLight_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetNeckLight_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetNeckLight_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetNeckLight_Response__init(msg: *mut SetNeckLight_Response) -> bool;
    fn aimdk_msgs__srv__SetNeckLight_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetNeckLight_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Response>);
    fn aimdk_msgs__srv__SetNeckLight_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetNeckLight_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetNeckLight_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetNeckLight_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNeckLight_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

}



impl Default for SetNeckLight_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetNeckLight_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetNeckLight_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetNeckLight_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetNeckLight_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetNeckLight_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetNeckLight_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetNeckLight_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetNeckLight_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetJointPower_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetJointPower_Request__init(msg: *mut SetJointPower_Request) -> bool;
    fn aimdk_msgs__srv__SetJointPower_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetJointPower_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Request>);
    fn aimdk_msgs__srv__SetJointPower_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPower_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetJointPower_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 调用请求的模块名
    pub input_source: rosidl_runtime_rs::String,

    /// 命令
    pub command: u8,

}

impl SetJointPower_Request {
    /// 电机上电
    pub const POWER_ON: u8 = 1;

    /// 电机下电
    pub const POWER_OFF: u8 = 2;

}


impl Default for SetJointPower_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetJointPower_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetJointPower_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPower_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPower_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPower_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetJointPower_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetJointPower_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetJointPower_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetJointPower_Response__init(msg: *mut SetJointPower_Response) -> bool;
    fn aimdk_msgs__srv__SetJointPower_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetJointPower_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Response>);
    fn aimdk_msgs__srv__SetJointPower_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPower_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPower_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetJointPower_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPower_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

}



impl Default for SetJointPower_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetJointPower_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetJointPower_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPower_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetJointPower_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPower_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPower_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetJointPower_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetJointPower_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalTofStream_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalTofStream_Request__init(msg: *mut SetHalTofStream_Request) -> bool;
    fn aimdk_msgs__srv__SetHalTofStream_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalTofStream_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Request>);
    fn aimdk_msgs__srv__SetHalTofStream_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalTofStream_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalTofStream_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalTofStream_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求唯一标识，用于问题定位
    pub trace_id: rosidl_runtime_rs::String,

    ///  目标相机电源控制mask，0关闭 1打开
    /// 预留
    pub power_ctrl_mask: u32,

    /// 目标相机出流控制mask，0关闭 1打开
    pub stream_ctrl_mask: u32,

}

impl SetHalTofStream_Request {
    /// 全部 5 路 TOF（默认）
    pub const CAMERA_ALL: u32 = 31;

    /// main tof
    pub const CAMERA_TOF_0: u32 = 1;

    /// front tof
    pub const CAMERA_TOF_1: u32 = 2;

    /// rear tof
    pub const CAMERA_TOF_2: u32 = 4;

    /// left tof
    pub const CAMERA_TOF_3: u32 = 8;

    /// right tof
    pub const CAMERA_TOF_4: u32 = 16;

}


impl Default for SetHalTofStream_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalTofStream_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalTofStream_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalTofStream_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalTofStream_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalTofStream_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalTofStream_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalTofStream_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalTofStream_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalTofStream_Response__init(msg: *mut SetHalTofStream_Response) -> bool;
    fn aimdk_msgs__srv__SetHalTofStream_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalTofStream_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Response>);
    fn aimdk_msgs__srv__SetHalTofStream_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalTofStream_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalTofStream_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalTofStream_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalTofStream_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::super::msg::rmw::CommonResponse,

    /// 本次响应对于的请求id
    pub trace_id: rosidl_runtime_rs::String,

    /// 热切换结果，0 失败 1 成功
    pub switch_state: u8,

}

impl SetHalTofStream_Response {
    /// 最近一次请求的切换失败
    pub const SWITCH_FAILED: u8 = 0;

    /// 最近一次切换成功
    pub const SWITCH_SUCCESS: u8 = 1;

}


impl Default for SetHalTofStream_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalTofStream_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalTofStream_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalTofStream_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalTofStream_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalTofStream_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalTofStream_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalTofStream_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalTofStream_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Request__init(msg: *mut SetHalRgbdPowerSave_Request) -> bool;
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Request>);
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalRgbdPowerSave_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalRgbdPowerSave_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 目标相机掩码；0 表示操作全部 5 路 TOF
    pub camera_mask: u32,

    /// 操作类型：进入省电相关状态 → 热关闭 TOF；退出省电相关状态 → 热启动 TOF
    pub trigger_type: u8,

    /// 触发原因（低功耗与充电对 TOF 行为相同，仅用于日志与问题定位）
    pub trigger_reason: u8,

}

impl SetHalRgbdPowerSave_Request {
    /// 全部 5 路 TOF（默认）
    pub const CAMERA_ALL: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_TOF_1: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_TOF_2: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_TOF_3: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_TOF_4: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_TOF_5: u32 = 16;

    /// 热关闭 TOF
    pub const ENTER_POWER_SAVE_MODE: u8 = 0;

    /// 热启动 TOF
    pub const EXIT_POWER_SAVE_MODE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRIGGER_UNKNOWN: u8 = 0;

    /// 进入低功耗
    pub const TRIGGER_LOW_POWER: u8 = 1;

    /// 进入充电
    pub const TRIGGER_CHARGING: u8 = 2;

    /// 退出省电状态，恢复正常工作
    pub const TRIGGER_NORMAL: u8 = 3;

}


impl Default for SetHalRgbdPowerSave_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalRgbdPowerSave_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalRgbdPowerSave_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalRgbdPowerSave_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalRgbdPowerSave_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalRgbdPowerSave_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalRgbdPowerSave_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Response__init(msg: *mut SetHalRgbdPowerSave_Response) -> bool;
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Response>);
    fn aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalRgbdPowerSave_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalRgbdPowerSave_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalRgbdPowerSave_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for SetHalRgbdPowerSave_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalRgbdPowerSave_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalRgbdPowerSave_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalRgbdPowerSave_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalRgbdPowerSave_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalRgbdPowerSave_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalRgbdPowerSave_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalRgbdPowerSave_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalCameraStream_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalCameraStream_Request__init(msg: *mut SetHalCameraStream_Request) -> bool;
    fn aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Request>);
    fn aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalCameraStream_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalCameraStream_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalCameraStream_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求唯一标识，用于问题定位
    pub trace_id: rosidl_runtime_rs::String,

    /// 请求类型，0: SET 1: GET
    pub req_type: u8,

    ///  目标相机电源控制mask，0关闭 1打开
    /// 预留
    pub power_ctrl_mask: u32,

    /// 目标相机出流控制mask，0关闭 1打开
    pub stream_ctrl_mask: u32,

}

impl SetHalCameraStream_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SET: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GET: u8 = 1;

    /// 双目左 or 低配单目
    pub const CAMERA_0: u32 = 1;

    /// 双目右
    pub const CAMERA_1: u32 = 2;

    /// 鱼眼左
    pub const CAMERA_2: u32 = 4;

    /// 鱼眼右
    pub const CAMERA_3: u32 = 8;

}


impl Default for SetHalCameraStream_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalCameraStream_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalCameraStream_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalCameraStream_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalCameraStream_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalCameraStream_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalCameraStream_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalCameraStream_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalCameraStream_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetHalCameraStream_Response__init(msg: *mut SetHalCameraStream_Response) -> bool;
    fn aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Response>);
    fn aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetHalCameraStream_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetHalCameraStream_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetHalCameraStream_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalCameraStream_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::super::msg::rmw::CommonResponse,

    /// 本次响应对于的请求id
    pub trace_id: rosidl_runtime_rs::String,

    /// 热切换结果，0 失败 1 成功
    pub req_result: u8,

    /// 上一次执行steam_ctrl_mask
    pub target_state_mask: u32,

    /// 当前切换状态
    pub switch_state: u8,

}

impl SetHalCameraStream_Response {
    /// 最近一次请求失败
    pub const REQ_FAILED: u8 = 0;

    /// 最近一次切换成功
    pub const REQ_SUCCESS: u8 = 1;

    /// 已经切换完成
    pub const STATE_SWITCHED: u8 = 0;

    /// 正在切换中
    pub const STATE_SWITCHING: u8 = 1;

}


impl Default for SetHalCameraStream_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetHalCameraStream_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetHalCameraStream_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetHalCameraStream_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetHalCameraStream_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetHalCameraStream_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetHalCameraStream_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetHalCameraStream_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetHalCameraStream_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetExt12vPower_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetExt12vPower_Request__init(msg: *mut SetExt12vPower_Request) -> bool;
    fn aimdk_msgs__srv__SetExt12vPower_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetExt12vPower_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Request>);
    fn aimdk_msgs__srv__SetExt12vPower_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetExt12vPower_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetExt12vPower_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExt12vPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// true：上电，false：下电
    pub enable: bool,

}



impl Default for SetExt12vPower_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetExt12vPower_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetExt12vPower_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetExt12vPower_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetExt12vPower_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetExt12vPower_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetExt12vPower_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetExt12vPower_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetExt12vPower_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetExt12vPower_Response__init(msg: *mut SetExt12vPower_Response) -> bool;
    fn aimdk_msgs__srv__SetExt12vPower_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetExt12vPower_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Response>);
    fn aimdk_msgs__srv__SetExt12vPower_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetExt12vPower_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetExt12vPower_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetExt12vPower_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExt12vPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for SetExt12vPower_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetExt12vPower_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetExt12vPower_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetExt12vPower_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetExt12vPower_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetExt12vPower_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetExt12vPower_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetExt12vPower_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetExt12vPower_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Request__init(msg: *mut SetDcuMotorPowerState_Request) -> bool;
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Request>);
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetDcuMotorPowerState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDcuMotorPowerState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 从站序号 1 2
    pub dcu_type: u8,

    /// 对应状态
    pub state: u8,

}



impl Default for SetDcuMotorPowerState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetDcuMotorPowerState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetDcuMotorPowerState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDcuMotorPowerState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDcuMotorPowerState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDcuMotorPowerState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetDcuMotorPowerState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Response__init(msg: *mut SetDcuMotorPowerState_Response) -> bool;
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Response>);
    fn aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDcuMotorPowerState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetDcuMotorPowerState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDcuMotorPowerState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ret: u8,

}



impl Default for SetDcuMotorPowerState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetDcuMotorPowerState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetDcuMotorPowerState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDcuMotorPowerState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetDcuMotorPowerState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDcuMotorPowerState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDcuMotorPowerState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetDcuMotorPowerState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__MotorTest_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__MotorTest_Request__init(msg: *mut MotorTest_Request) -> bool;
    fn aimdk_msgs__srv__MotorTest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__MotorTest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Request>);
    fn aimdk_msgs__srv__MotorTest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorTest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__MotorTest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorTest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 从站序号 1 2  3
    pub dcu_type: u8,

    /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
    pub can_channel: u8,

    /// can通信id
    pub can_id: u8,

    /// payload len
    pub payload_len: u8,

    /// payload
    pub request_payload: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for MotorTest_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__MotorTest_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__MotorTest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorTest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorTest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorTest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/MotorTest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__MotorTest_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__MotorTest_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__MotorTest_Response__init(msg: *mut MotorTest_Response) -> bool;
    fn aimdk_msgs__srv__MotorTest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__MotorTest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Response>);
    fn aimdk_msgs__srv__MotorTest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorTest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorTest_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__MotorTest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorTest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 从站序号 1 2  3
    pub dcu_type: u8,

    /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
    pub can_channel: u8,

    /// can通信id
    pub can_id: u8,

    /// payload len
    pub payload_len: u8,

    /// payload
    pub response_payload: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for MotorTest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__MotorTest_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__MotorTest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorTest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__MotorTest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorTest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorTest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/MotorTest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__MotorTest_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__LedStripCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__LedStripCommand_Request__init(msg: *mut LedStripCommand_Request) -> bool;
    fn aimdk_msgs__srv__LedStripCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__LedStripCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Request>);
    fn aimdk_msgs__srv__LedStripCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedStripCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__LedStripCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedStripCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 灯带模式
    pub led_strip_mode: u8,

    /// 红色分量，自定义模式下生效
    pub r: u8,

    /// 绿色分量，自定义模式下生效
    pub g: u8,

    /// 蓝色分量，自定义模式下生效
    pub b: u8,

    /// 周期，自定义模式下生效，单位ms。
    /// 呼吸灯效自定义模式下，0表示常亮，非0值表示呼吸灯效从最亮到熄灭的时间。
    /// 闪烁灯效自定义模式下，0表示常亮，非0值表示点亮或者熄灭的保持时间。
    pub period: u16,

}

impl LedStripCommand_Request {
    /// led_strip_mode: 灯带模式枚举
    /// 全部熄灭
    pub const LED_ALL_OFF: u8 = 0;

    /// 绿色流水
    pub const LED_GREEN_FLOW: u8 = 1;

    /// 彩虹
    pub const LED_RAINBOW: u8 = 2;

    /// 律动
    pub const LED_DANCING: u8 = 3;

    /// 星光闪烁
    pub const LED_TWINKLE: u8 = 4;

    /// 尾部渐亮
    pub const LED_TAIL_INCREASE: u8 = 5;

    /// 尾部渐暗
    pub const LED_TAIL_DECREASE: u8 = 6;

    /// 白色流水-蓝色流水交替
    pub const LED_FOUR_TO_TWO_LEGS: u8 = 7;

    /// 蓝色流水-白色流水交替
    pub const LED_TWO_TO_FOUR_LEGS: u8 = 8;

    /// 白色常亮r=g=b=128
    pub const LED_START_UP: u8 = 9;

    /// 白色流水
    pub const LED_DISPLAY_CHARGING: u8 = 10;

    /// 红色快闪
    pub const LED_DISPLAY_FAULT: u8 = 11;

    /// 黄色长亮
    pub const LED_DISPLAY_25_LOW_BATTERY: u8 = 12;

    /// 橙红闪烁
    pub const LED_DISPLAY_15_LOW_BATTERY: u8 = 13;

    /// 白色从亮到暗渐变
    pub const LED_DISPLAY_POWER_OFF: u8 = 14;

    /// 白色从暗到亮渐变
    pub const LED_DISPLAY_POWER_ON: u8 = 15;

    /// 白色填充
    pub const LED_WHITE_FLOW: u8 = 16;

    /// 白色常亮r=g=b=150
    pub const LED_WHITE_ON: u8 = 17;

    /// 黄色流水
    pub const LED_DISPLAY_25_LOW_TRANSFORM: u8 = 18;

    /// 橙红流水
    pub const LED_DISPLAY_15_LOW_TRANSFORM: u8 = 19;

    /// 白色呼吸
    pub const LED_WHITE_BREATH: u8 = 20;

    /// 呼吸灯效自定义模式
    pub const LED_CUSTOM_BREATH: u8 = 254;

    /// 闪烁灯效自定义模式
    pub const LED_CUSTOM_BLINK: u8 = 255;

}


impl Default for LedStripCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__LedStripCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__LedStripCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedStripCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedStripCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedStripCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/LedStripCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__LedStripCommand_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__LedStripCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__LedStripCommand_Response__init(msg: *mut LedStripCommand_Response) -> bool;
    fn aimdk_msgs__srv__LedStripCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__LedStripCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Response>);
    fn aimdk_msgs__srv__LedStripCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedStripCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LedStripCommand_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__LedStripCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedStripCommand_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

}



impl Default for LedStripCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__LedStripCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__LedStripCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedStripCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__LedStripCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedStripCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedStripCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/LedStripCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__LedStripCommand_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuSN_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetPmuSN_Request__init(msg: *mut GetPmuSN_Request) -> bool;
    fn aimdk_msgs__srv__GetPmuSN_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetPmuSN_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Request>);
    fn aimdk_msgs__srv__GetPmuSN_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPmuSN_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetPmuSN_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuSN_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device: u8,

}

impl GetPmuSN_Request {
    /// 目标设备是PMU
    pub const PMU_SN: u8 = 0;

    /// 目标设备是LORA
    pub const LORA_SN: u8 = 1;

}


impl Default for GetPmuSN_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetPmuSN_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetPmuSN_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPmuSN_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPmuSN_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPmuSN_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetPmuSN_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuSN_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuSN_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetPmuSN_Response__init(msg: *mut GetPmuSN_Response) -> bool;
    fn aimdk_msgs__srv__GetPmuSN_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetPmuSN_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Response>);
    fn aimdk_msgs__srv__GetPmuSN_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPmuSN_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPmuSN_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetPmuSN_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuSN_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 设置是否成功
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serial_number: [u8; 19],

}



impl Default for GetPmuSN_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetPmuSN_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetPmuSN_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPmuSN_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuSN_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPmuSN_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPmuSN_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetPmuSN_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuSN_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetPmuFanRpm_Request__init(msg: *mut GetPmuFanRpm_Request) -> bool;
    fn aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Request>);
    fn aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPmuFanRpm_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetPmuFanRpm_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuFanRpm_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetPmuFanRpm_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetPmuFanRpm_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetPmuFanRpm_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPmuFanRpm_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPmuFanRpm_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPmuFanRpm_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetPmuFanRpm_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetPmuFanRpm_Response__init(msg: *mut GetPmuFanRpm_Response) -> bool;
    fn aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Response>);
    fn aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPmuFanRpm_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPmuFanRpm_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetPmuFanRpm_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuFanRpm_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 设置是否成功
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpm: f64,

}



impl Default for GetPmuFanRpm_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetPmuFanRpm_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetPmuFanRpm_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPmuFanRpm_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetPmuFanRpm_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPmuFanRpm_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPmuFanRpm_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetPmuFanRpm_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetNeckLightState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetNeckLightState_Request__init(msg: *mut GetNeckLightState_Request) -> bool;
    fn aimdk_msgs__srv__GetNeckLightState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetNeckLightState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Request>);
    fn aimdk_msgs__srv__GetNeckLightState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNeckLightState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetNeckLightState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNeckLightState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetNeckLightState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetNeckLightState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetNeckLightState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNeckLightState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNeckLightState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNeckLightState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetNeckLightState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetNeckLightState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetNeckLightState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetNeckLightState_Response__init(msg: *mut GetNeckLightState_Response) -> bool;
    fn aimdk_msgs__srv__GetNeckLightState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetNeckLightState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Response>);
    fn aimdk_msgs__srv__GetNeckLightState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNeckLightState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNeckLightState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetNeckLightState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNeckLightState_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for GetNeckLightState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetNeckLightState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetNeckLightState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNeckLightState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetNeckLightState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNeckLightState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNeckLightState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetNeckLightState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetNeckLightState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetModuleInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetModuleInfo_Request__init(msg: *mut GetModuleInfo_Request) -> bool;
    fn aimdk_msgs__srv__GetModuleInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetModuleInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Request>);
    fn aimdk_msgs__srv__GetModuleInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetModuleInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetModuleInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetModuleInfo_Request {
    /// ---------------- 请求 ----------------
    pub request: super::super::msg::rmw::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub module_id: rosidl_runtime_rs::String,

}



impl Default for GetModuleInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetModuleInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetModuleInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetModuleInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetModuleInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetModuleInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetModuleInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetModuleInfo_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetModuleInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetModuleInfo_Response__init(msg: *mut GetModuleInfo_Response) -> bool;
    fn aimdk_msgs__srv__GetModuleInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetModuleInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Response>);
    fn aimdk_msgs__srv__GetModuleInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetModuleInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetModuleInfo_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetModuleInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetModuleInfo_Response {
    /// ---------------- 响应 ----------------
    pub response: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modules: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModuleInfo>,

}



impl Default for GetModuleInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetModuleInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetModuleInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetModuleInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetModuleInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetModuleInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetModuleInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetModuleInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetModuleInfo_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetJointPowerState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetJointPowerState_Request__init(msg: *mut GetJointPowerState_Request) -> bool;
    fn aimdk_msgs__srv__GetJointPowerState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetJointPowerState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Request>);
    fn aimdk_msgs__srv__GetJointPowerState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointPowerState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetJointPowerState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointPowerState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetJointPowerState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetJointPowerState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetJointPowerState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointPowerState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointPowerState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointPowerState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetJointPowerState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetJointPowerState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetJointPowerState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetJointPowerState_Response__init(msg: *mut GetJointPowerState_Response) -> bool;
    fn aimdk_msgs__srv__GetJointPowerState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetJointPowerState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Response>);
    fn aimdk_msgs__srv__GetJointPowerState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointPowerState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointPowerState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetJointPowerState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointPowerState_Response {
    /// 响应头
    pub header: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_state: u8,

}

impl GetJointPowerState_Response {
    /// 电机上电
    pub const POWER_ON: u8 = 1;

    /// 电机下电
    pub const POWER_OFF: u8 = 2;

}


impl Default for GetJointPowerState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetJointPowerState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetJointPowerState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointPowerState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetJointPowerState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointPowerState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointPowerState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetJointPowerState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetJointPowerState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetHandType_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetHandType_Request__init(msg: *mut GetHandType_Request) -> bool;
    fn aimdk_msgs__srv__GetHandType_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetHandType_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Request>);
    fn aimdk_msgs__srv__GetHandType_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetHandType_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetHandType_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandType_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetHandType_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetHandType_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetHandType_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetHandType_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetHandType_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetHandType_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetHandType_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetHandType_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetHandType_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetHandType_Response__init(msg: *mut GetHandType_Response) -> bool;
    fn aimdk_msgs__srv__GetHandType_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetHandType_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Response>);
    fn aimdk_msgs__srv__GetHandType_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetHandType_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetHandType_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetHandType_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandType_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands_type: super::super::msg::rmw::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands_type: super::super::msg::rmw::HandType,

}



impl Default for GetHandType_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetHandType_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetHandType_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetHandType_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetHandType_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetHandType_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetHandType_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetHandType_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetHandType_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetDcuInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetDcuInfo_Request__init(msg: *mut GetDcuInfo_Request) -> bool;
    fn aimdk_msgs__srv__GetDcuInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetDcuInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Request>);
    fn aimdk_msgs__srv__GetDcuInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDcuInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetDcuInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDcuInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetDcuInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetDcuInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetDcuInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDcuInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDcuInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDcuInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetDcuInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetDcuInfo_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetDcuInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetDcuInfo_Response__init(msg: *mut GetDcuInfo_Response) -> bool;
    fn aimdk_msgs__srv__GetDcuInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetDcuInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Response>);
    fn aimdk_msgs__srv__GetDcuInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDcuInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDcuInfo_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetDcuInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDcuInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_fw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_hw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_build_time: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_fw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_hw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_build_time: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_fw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_hw_ver: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_build_time: rosidl_runtime_rs::String,

}



impl Default for GetDcuInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetDcuInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetDcuInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDcuInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetDcuInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDcuInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDcuInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetDcuInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetDcuInfo_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetBatteryInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetBatteryInfo_Request__init(msg: *mut GetBatteryInfo_Request) -> bool;
    fn aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Request>);
    fn aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBatteryInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetBatteryInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetBatteryInfo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetBatteryInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetBatteryInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBatteryInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBatteryInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBatteryInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetBatteryInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetBatteryInfo_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetBatteryInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetBatteryInfo_Response__init(msg: *mut GetBatteryInfo_Response) -> bool;
    fn aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Response>);
    fn aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBatteryInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBatteryInfo_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetBatteryInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

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

}



impl Default for GetBatteryInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetBatteryInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetBatteryInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBatteryInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetBatteryInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBatteryInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBatteryInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetBatteryInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetBatteryInfo_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAllJointState_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetAllJointState_Request__init(msg: *mut GetAllJointState_Request) -> bool;
    fn aimdk_msgs__srv__GetAllJointState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetAllJointState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Request>);
    fn aimdk_msgs__srv__GetAllJointState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAllJointState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetAllJointState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAllJointState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetAllJointState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetAllJointState_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetAllJointState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAllJointState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAllJointState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAllJointState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetAllJointState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAllJointState_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAllJointState_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetAllJointState_Response__init(msg: *mut GetAllJointState_Response) -> bool;
    fn aimdk_msgs__srv__GetAllJointState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetAllJointState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Response>);
    fn aimdk_msgs__srv__GetAllJointState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAllJointState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAllJointState_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetAllJointState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAllJointState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arm_joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waist_joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub leg_joints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointState>,

}



impl Default for GetAllJointState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetAllJointState_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetAllJointState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAllJointState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetAllJointState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAllJointState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAllJointState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetAllJointState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetAllJointState_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxRecordCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxRecordCommand_Request__init(msg: *mut FluxRecordCommand_Request) -> bool;
    fn aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Request>);
    fn aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxRecordCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxRecordCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxRecordCommand_Request {
    /// request
    /// "record.start" or "record.stop"
    pub command: rosidl_runtime_rs::String,

    /// seconds, 0 = use config default
    pub duration: i32,

}



impl Default for FluxRecordCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxRecordCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxRecordCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxRecordCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxRecordCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxRecordCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxRecordCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxRecordCommand_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxRecordCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxRecordCommand_Response__init(msg: *mut FluxRecordCommand_Response) -> bool;
    fn aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Response>);
    fn aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxRecordCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxRecordCommand_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxRecordCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxRecordCommand_Response {
    /// 0=success, non-zero=fail
    pub status: i32,

    /// error reason code (0 when success)
    pub reason: i32,

    /// human-readable status/error message
    pub message: rosidl_runtime_rs::String,

}



impl Default for FluxRecordCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxRecordCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxRecordCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxRecordCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxRecordCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxRecordCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxRecordCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxRecordCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxRecordCommand_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxGetRecordStatus_Request__init(msg: *mut FluxGetRecordStatus_Request) -> bool;
    fn aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Request>);
    fn aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxGetRecordStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxGetRecordStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for FluxGetRecordStatus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxGetRecordStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxGetRecordStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxGetRecordStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxGetRecordStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxGetRecordStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxGetRecordStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxGetRecordStatus_Response__init(msg: *mut FluxGetRecordStatus_Response) -> bool;
    fn aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Response>);
    fn aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxGetRecordStatus_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxGetRecordStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxGetRecordStatus_Response {
    /// 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
    pub recording: i8,

    /// 录制持续秒数（未录制时为 0）
    pub duration_sec: i64,

    /// 录制来源 "app" / "agent" / "" (未录制时为空)
    pub source: rosidl_runtime_rs::String,

}



impl Default for FluxGetRecordStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxGetRecordStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxGetRecordStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxGetRecordStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxGetRecordStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxGetRecordStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxGetRecordStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxGetRecordStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxCaptureImage_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxCaptureImage_Request__init(msg: *mut FluxCaptureImage_Request) -> bool;
    fn aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Request>);
    fn aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxCaptureImage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxCaptureImage_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxCaptureImage_Request {
    /// request
    /// JPEG quality 1-100, 0 = use server default (100)
    pub quality: u32,

}



impl Default for FluxCaptureImage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxCaptureImage_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxCaptureImage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxCaptureImage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxCaptureImage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxCaptureImage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxCaptureImage_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxCaptureImage_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxCaptureImage_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__FluxCaptureImage_Response__init(msg: *mut FluxCaptureImage_Response) -> bool;
    fn aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Response>);
    fn aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FluxCaptureImage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FluxCaptureImage_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__FluxCaptureImage_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxCaptureImage_Response {
    /// 0=success, non-zero=fail
    pub status: i32,

    /// error reason code (0 when success)
    pub reason: i32,

    /// human-readable status/error message
    pub message: rosidl_runtime_rs::String,

}



impl Default for FluxCaptureImage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__FluxCaptureImage_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__FluxCaptureImage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FluxCaptureImage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__FluxCaptureImage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FluxCaptureImage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FluxCaptureImage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/FluxCaptureImage_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__FluxCaptureImage_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetCameraSwitch_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetCameraSwitch_Request__init(msg: *mut SetCameraSwitch_Request) -> bool;
    fn aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Request>);
    fn aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCameraSwitch_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetCameraSwitch_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCameraSwitch_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求相机开关状态
    /// true(open)
    /// false(close)
    pub camera_enabled: bool,

}



impl Default for SetCameraSwitch_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetCameraSwitch_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetCameraSwitch_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCameraSwitch_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCameraSwitch_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCameraSwitch_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetCameraSwitch_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetCameraSwitch_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetCameraSwitch_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetCameraSwitch_Response__init(msg: *mut SetCameraSwitch_Response) -> bool;
    fn aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Response>);
    fn aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCameraSwitch_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCameraSwitch_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetCameraSwitch_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCameraSwitch_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前相机开关状态
    pub camera_enabled: bool,

}



impl Default for SetCameraSwitch_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetCameraSwitch_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetCameraSwitch_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCameraSwitch_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetCameraSwitch_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCameraSwitch_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCameraSwitch_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetCameraSwitch_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetCameraSwitch_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__HALCameraCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__HALCameraCommand_Request__init(msg: *mut HALCameraCommand_Request) -> bool;
    fn aimdk_msgs__srv__HALCameraCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__HALCameraCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Request>);
    fn aimdk_msgs__srv__HALCameraCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HALCameraCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__HALCameraCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HALCameraCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 命令名（点分层级），例如：
    ///   stream.enable    → 开启某路 NV12 发布
    ///   stream.disable   → 关闭某路 NV12 发布
    ///   （预留：set.fps、set.resolution、snapshot.trigger ...）
    pub command: rosidl_runtime_rs::String,

    /// KV 参数列表（param_keys[i] 对应 param_values[i]）
    /// 示例 stream.enable: keys=["topic"], values=["/aima/hal/camera/bgr_camera_l/nv12"]
    pub param_keys: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param_values: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for HALCameraCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__HALCameraCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__HALCameraCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HALCameraCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HALCameraCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HALCameraCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/HALCameraCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__HALCameraCommand_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__HALCameraCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__HALCameraCommand_Response__init(msg: *mut HALCameraCommand_Response) -> bool;
    fn aimdk_msgs__srv__HALCameraCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__HALCameraCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Response>);
    fn aimdk_msgs__srv__HALCameraCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HALCameraCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<HALCameraCommand_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__HALCameraCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HALCameraCommand_Response {
    /// response
    pub response: super::super::msg::rmw::CommonResponse,

    /// 可选返回值（供需要回传数据的命令使用，如 get.fps 返回当前帧率）
    pub result_keys: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_values: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for HALCameraCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__HALCameraCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__HALCameraCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HALCameraCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__HALCameraCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HALCameraCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HALCameraCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/HALCameraCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__HALCameraCommand_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraSwitch_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCameraSwitch_Request__init(msg: *mut GetCameraSwitch_Request) -> bool;
    fn aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Request>);
    fn aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCameraSwitch_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCameraSwitch_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraSwitch_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetCameraSwitch_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCameraSwitch_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCameraSwitch_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCameraSwitch_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCameraSwitch_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCameraSwitch_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCameraSwitch_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraSwitch_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraSwitch_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCameraSwitch_Response__init(msg: *mut GetCameraSwitch_Response) -> bool;
    fn aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Response>);
    fn aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCameraSwitch_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCameraSwitch_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCameraSwitch_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraSwitch_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前相机开关状态
    pub camera_enabled: bool,

}



impl Default for GetCameraSwitch_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCameraSwitch_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCameraSwitch_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCameraSwitch_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraSwitch_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCameraSwitch_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCameraSwitch_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCameraSwitch_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraSwitch_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCameraAuthorization_Request__init(msg: *mut GetCameraAuthorization_Request) -> bool;
    fn aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Request>);
    fn aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCameraAuthorization_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCameraAuthorization_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraAuthorization_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetCameraAuthorization_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCameraAuthorization_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCameraAuthorization_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCameraAuthorization_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCameraAuthorization_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCameraAuthorization_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCameraAuthorization_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetCameraAuthorization_Response__init(msg: *mut GetCameraAuthorization_Response) -> bool;
    fn aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Response>);
    fn aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCameraAuthorization_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCameraAuthorization_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetCameraAuthorization_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraAuthorization_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前授权状态
    pub is_authorized: bool,

}



impl Default for GetCameraAuthorization_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetCameraAuthorization_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetCameraAuthorization_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCameraAuthorization_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetCameraAuthorization_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCameraAuthorization_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCameraAuthorization_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetCameraAuthorization_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureJpegImage_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__CaptureJpegImage_Request__init(msg: *mut CaptureJpegImage_Request) -> bool;
    fn aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Request>);
    fn aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureJpegImage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__CaptureJpegImage_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureJpegImage_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 相机 ID
    pub camera_id: rosidl_runtime_rs::String,

    /// 可选项，等待新帧的超时时间，单位 ms；为 0 时使用服务端默认值
    pub timeout_ms: u32,

}



impl Default for CaptureJpegImage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__CaptureJpegImage_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__CaptureJpegImage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureJpegImage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureJpegImage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureJpegImage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/CaptureJpegImage_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureJpegImage_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureJpegImage_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__CaptureJpegImage_Response__init(msg: *mut CaptureJpegImage_Response) -> bool;
    fn aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Response>);
    fn aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureJpegImage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureJpegImage_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__CaptureJpegImage_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureJpegImage_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// JPEG 图片数据
    pub jpeg: super::super::msg::rmw::JpegImage,

}



impl Default for CaptureJpegImage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__CaptureJpegImage_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__CaptureJpegImage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureJpegImage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureJpegImage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureJpegImage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureJpegImage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/CaptureJpegImage_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureJpegImage_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AuthorizeCamera_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__AuthorizeCamera_Request__init(msg: *mut AuthorizeCamera_Request) -> bool;
    fn aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Request>);
    fn aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AuthorizeCamera_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__AuthorizeCamera_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthorizeCamera_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for AuthorizeCamera_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__AuthorizeCamera_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__AuthorizeCamera_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AuthorizeCamera_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AuthorizeCamera_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AuthorizeCamera_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/AuthorizeCamera_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AuthorizeCamera_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AuthorizeCamera_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__AuthorizeCamera_Response__init(msg: *mut AuthorizeCamera_Response) -> bool;
    fn aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Response>);
    fn aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AuthorizeCamera_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AuthorizeCamera_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__AuthorizeCamera_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthorizeCamera_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前授权状态
    pub is_authorized: bool,

}



impl Default for AuthorizeCamera_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__AuthorizeCamera_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__AuthorizeCamera_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AuthorizeCamera_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AuthorizeCamera_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AuthorizeCamera_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AuthorizeCamera_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/AuthorizeCamera_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AuthorizeCamera_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__StopCaptureAudioFile_Request__init(msg: *mut StopCaptureAudioFile_Request) -> bool;
    fn aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Request>);
    fn aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__StopCaptureAudioFile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopCaptureAudioFile_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 文件信息
    pub file: super::super::msg::rmw::AudioFile,

}



impl Default for StopCaptureAudioFile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__StopCaptureAudioFile_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__StopCaptureAudioFile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopCaptureAudioFile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopCaptureAudioFile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopCaptureAudioFile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/StopCaptureAudioFile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__StopCaptureAudioFile_Response__init(msg: *mut StopCaptureAudioFile_Response) -> bool;
    fn aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Response>);
    fn aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StopCaptureAudioFile_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__StopCaptureAudioFile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopCaptureAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for StopCaptureAudioFile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__StopCaptureAudioFile_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__StopCaptureAudioFile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopCaptureAudioFile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopCaptureAudioFile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopCaptureAudioFile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopCaptureAudioFile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/StopCaptureAudioFile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopAudioPlay_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__StopAudioPlay_Request__init(msg: *mut StopAudioPlay_Request) -> bool;
    fn aimdk_msgs__srv__StopAudioPlay_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__StopAudioPlay_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Request>);
    fn aimdk_msgs__srv__StopAudioPlay_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopAudioPlay_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__StopAudioPlay_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopAudioPlay_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for StopAudioPlay_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__StopAudioPlay_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__StopAudioPlay_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopAudioPlay_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopAudioPlay_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopAudioPlay_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/StopAudioPlay_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopAudioPlay_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopAudioPlay_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__StopAudioPlay_Response__init(msg: *mut StopAudioPlay_Response) -> bool;
    fn aimdk_msgs__srv__StopAudioPlay_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__StopAudioPlay_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Response>);
    fn aimdk_msgs__srv__StopAudioPlay_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopAudioPlay_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StopAudioPlay_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__StopAudioPlay_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopAudioPlay_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for StopAudioPlay_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__StopAudioPlay_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__StopAudioPlay_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopAudioPlay_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__StopAudioPlay_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopAudioPlay_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopAudioPlay_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/StopAudioPlay_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__StopAudioPlay_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetVolume_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetVolume_Request__init(msg: *mut SetVolume_Request) -> bool;
    fn aimdk_msgs__srv__SetVolume_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetVolume_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Request>);
    fn aimdk_msgs__srv__SetVolume_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVolume_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetVolume_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVolume_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求音量（0~100）
    pub audio_volume: u32,

}



impl Default for SetVolume_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetVolume_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetVolume_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVolume_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVolume_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVolume_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetVolume_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetVolume_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetVolume_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetVolume_Response__init(msg: *mut SetVolume_Response) -> bool;
    fn aimdk_msgs__srv__SetVolume_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetVolume_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Response>);
    fn aimdk_msgs__srv__SetVolume_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVolume_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVolume_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetVolume_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVolume_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 播放音量（0~100）
    pub audio_volume: u32,

}



impl Default for SetVolume_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetVolume_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetVolume_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVolume_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetVolume_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVolume_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVolume_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetVolume_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetVolume_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMute_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMute_Request__init(msg: *mut SetMute_Request) -> bool;
    fn aimdk_msgs__srv__SetMute_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMute_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMute_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMute_Request>);
    fn aimdk_msgs__srv__SetMute_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMute_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMute_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMute_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMute_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求静音状态
    /// true(mute)
    /// false(unmute)
    pub is_mute: bool,

}



impl Default for SetMute_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMute_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMute_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMute_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMute_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMute_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMute_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMute_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMute_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SetMute_Response__init(msg: *mut SetMute_Response) -> bool;
    fn aimdk_msgs__srv__SetMute_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMute_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SetMute_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMute_Response>);
    fn aimdk_msgs__srv__SetMute_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMute_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMute_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SetMute_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMute_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前静音状态
    pub is_mute: bool,

}



impl Default for SetMute_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SetMute_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SetMute_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMute_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SetMute_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMute_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMute_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SetMute_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SetMute_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SearchMusic_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SearchMusic_Request__init(msg: *mut SearchMusic_Request) -> bool;
    fn aimdk_msgs__srv__SearchMusic_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__SearchMusic_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Request>);
    fn aimdk_msgs__srv__SearchMusic_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchMusic_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SearchMusic_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchMusic_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 搜索文字
    pub query: rosidl_runtime_rs::String,

    /// sp 类型, 默认0（qq音乐）
    pub sp: i32,

    /// 请求歌曲数量，默认30
    pub size: i32,

    /// 曲库，默认是1（默认曲库）
    pub library_mode: i32,

}

impl SearchMusic_Request {
    /// sp 枚举
    /// QQ音乐
    pub const SP_TYPE_QM: i32 = 0;

    /// 喜马拉雅
    pub const SP_TYPE_XM: i32 = 1;

    /// library_mode 枚举
    /// 默认曲库
    pub const LIBRARY_MODE_DEFAULT: i32 = 1;

    /// 儿童曲库
    pub const LIBRARY_MODE_CHILDREN: i32 = 2;

    /// 默认歌曲数量
    pub const SIZE_DEFAULT: i32 = 30;

}


impl Default for SearchMusic_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SearchMusic_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SearchMusic_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchMusic_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchMusic_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchMusic_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SearchMusic_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SearchMusic_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SearchMusic_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__SearchMusic_Response__init(msg: *mut SearchMusic_Response) -> bool;
    fn aimdk_msgs__srv__SearchMusic_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__SearchMusic_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Response>);
    fn aimdk_msgs__srv__SearchMusic_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SearchMusic_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SearchMusic_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__SearchMusic_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchMusic_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 搜索命令id
    pub search_command_id: u64,

}



impl Default for SearchMusic_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__SearchMusic_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__SearchMusic_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SearchMusic_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__SearchMusic_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SearchMusic_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SearchMusic_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/SearchMusic_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__SearchMusic_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RequestAudioFocus_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__RequestAudioFocus_Request__init(msg: *mut RequestAudioFocus_Request) -> bool;
    fn aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Request>);
    fn aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RequestAudioFocus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__RequestAudioFocus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestAudioFocus_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求焦点信息
    pub focus_requester: super::super::msg::rmw::FocusRequester,

}



impl Default for RequestAudioFocus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__RequestAudioFocus_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__RequestAudioFocus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RequestAudioFocus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RequestAudioFocus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RequestAudioFocus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/RequestAudioFocus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RequestAudioFocus_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RequestAudioFocus_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__RequestAudioFocus_Response__init(msg: *mut RequestAudioFocus_Response) -> bool;
    fn aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Response>);
    fn aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RequestAudioFocus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RequestAudioFocus_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__RequestAudioFocus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestAudioFocus_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 请求结果
    pub focus_response: super::super::msg::rmw::FocusResponse,

}



impl Default for RequestAudioFocus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__RequestAudioFocus_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__RequestAudioFocus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RequestAudioFocus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__RequestAudioFocus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RequestAudioFocus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RequestAudioFocus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/RequestAudioFocus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__RequestAudioFocus_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__PlayAudioFile_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__PlayAudioFile_Request__init(msg: *mut PlayAudioFile_Request) -> bool;
    fn aimdk_msgs__srv__PlayAudioFile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__PlayAudioFile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Request>);
    fn aimdk_msgs__srv__PlayAudioFile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayAudioFile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__PlayAudioFile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayAudioFile_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 文件信息
    pub file: super::super::msg::rmw::AudioFile,

}



impl Default for PlayAudioFile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__PlayAudioFile_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__PlayAudioFile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayAudioFile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayAudioFile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayAudioFile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/PlayAudioFile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__PlayAudioFile_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__PlayAudioFile_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__PlayAudioFile_Response__init(msg: *mut PlayAudioFile_Response) -> bool;
    fn aimdk_msgs__srv__PlayAudioFile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__PlayAudioFile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Response>);
    fn aimdk_msgs__srv__PlayAudioFile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayAudioFile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayAudioFile_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__PlayAudioFile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for PlayAudioFile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__PlayAudioFile_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__PlayAudioFile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayAudioFile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__PlayAudioFile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayAudioFile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayAudioFile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/PlayAudioFile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__PlayAudioFile_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetVolume_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetVolume_Request__init(msg: *mut GetVolume_Request) -> bool;
    fn aimdk_msgs__srv__GetVolume_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetVolume_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Request>);
    fn aimdk_msgs__srv__GetVolume_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVolume_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetVolume_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVolume_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetVolume_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetVolume_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetVolume_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVolume_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVolume_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVolume_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetVolume_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetVolume_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetVolume_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetVolume_Response__init(msg: *mut GetVolume_Response) -> bool;
    fn aimdk_msgs__srv__GetVolume_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetVolume_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Response>);
    fn aimdk_msgs__srv__GetVolume_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVolume_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVolume_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetVolume_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVolume_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前音量（0~100）
    pub audio_volume: u32,

}



impl Default for GetVolume_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetVolume_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetVolume_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVolume_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetVolume_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVolume_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVolume_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetVolume_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetVolume_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMute_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMute_Request__init(msg: *mut GetMute_Request) -> bool;
    fn aimdk_msgs__srv__GetMute_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMute_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMute_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMute_Request>);
    fn aimdk_msgs__srv__GetMute_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMute_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMute_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMute_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMute_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMute_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMute_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMute_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMute_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMute_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMute_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMute_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMute_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMute_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMute_Response__init(msg: *mut GetMute_Response) -> bool;
    fn aimdk_msgs__srv__GetMute_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMute_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMute_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMute_Response>);
    fn aimdk_msgs__srv__GetMute_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMute_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMute_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMute_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMute_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 当前静音状态
    pub is_mute: bool,

}



impl Default for GetMute_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMute_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMute_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMute_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMute_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMute_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMute_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMute_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMute_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMusicList_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMusicList_Request__init(msg: *mut GetMusicList_Request) -> bool;
    fn aimdk_msgs__srv__GetMusicList_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMusicList_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Request>);
    fn aimdk_msgs__srv__GetMusicList_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMusicList_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMusicList_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMusicList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

}



impl Default for GetMusicList_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMusicList_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMusicList_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMusicList_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMusicList_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMusicList_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMusicList_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMusicList_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMusicList_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__GetMusicList_Response__init(msg: *mut GetMusicList_Response) -> bool;
    fn aimdk_msgs__srv__GetMusicList_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__GetMusicList_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Response>);
    fn aimdk_msgs__srv__GetMusicList_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetMusicList_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetMusicList_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__GetMusicList_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMusicList_Response {
    /// 当前歌单
    pub music_list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MusicInfo>,

    /// 当前播放索引，从0开始
    pub current_index: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

}



impl Default for GetMusicList_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__GetMusicList_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__GetMusicList_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetMusicList_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__GetMusicList_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetMusicList_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetMusicList_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/GetMusicList_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__GetMusicList_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__ControlMusic_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__ControlMusic_Request__init(msg: *mut ControlMusic_Request) -> bool;
    fn aimdk_msgs__srv__ControlMusic_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__ControlMusic_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Request>);
    fn aimdk_msgs__srv__ControlMusic_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlMusic_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__ControlMusic_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlMusic_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::super::msg::rmw::CommonRequest,

    /// 控制类型
    pub control_type: i32,

    /// 播放索引（从0开始），当 control_type == CONTROL_TYPE_PLAY 时有效，用于播放歌单中指定索引对应的歌曲。缺省时，默认播放当前歌曲（机器人播放器内部维护的一个索引）。
    pub play_index: i32,

    /// 是否禁用自动播放下一首，当 control_type == CONTROL_TYPE_PLAY 时有效，默认false（默认开启自动播放下一首功能）。
    pub no_auto_next: bool,

    /// 调试参数
    pub debug_args: rosidl_runtime_rs::String,

}

impl ControlMusic_Request {
    /// control_type 枚举
    /// 空类型
    pub const CONTROL_TYPE_NONE: i32 = 0;

    /// 播放
    pub const CONTROL_TYPE_PLAY: i32 = 1;

    /// 停止
    pub const CONTROL_TYPE_STOP: i32 = 2;

    /// 暂停
    pub const CONTROL_TYPE_PAUSE: i32 = 3;

    /// 恢复
    pub const CONTROL_TYPE_RESUME: i32 = 4;

    /// 上一首
    pub const CONTROL_TYPE_PREVIOUS: i32 = 5;

    /// 下一首
    pub const CONTROL_TYPE_NEXT: i32 = 6;

    /// 调试
    pub const CONTROL_TYPE_DEBUG: i32 = 1000;

}


impl Default for ControlMusic_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__ControlMusic_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__ControlMusic_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlMusic_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlMusic_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlMusic_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/ControlMusic_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__ControlMusic_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__ControlMusic_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__ControlMusic_Response__init(msg: *mut ControlMusic_Response) -> bool;
    fn aimdk_msgs__srv__ControlMusic_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__ControlMusic_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Response>);
    fn aimdk_msgs__srv__ControlMusic_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlMusic_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlMusic_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__ControlMusic_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlMusic_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::super::msg::rmw::CommonResponse,

    /// 控制命令id
    pub control_command_id: u64,

}



impl Default for ControlMusic_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__ControlMusic_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__ControlMusic_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlMusic_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__ControlMusic_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlMusic_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlMusic_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/ControlMusic_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__ControlMusic_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureAudioFile_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__CaptureAudioFile_Request__init(msg: *mut CaptureAudioFile_Request) -> bool;
    fn aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Request>);
    fn aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureAudioFile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__CaptureAudioFile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureAudioFile_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 文件信息
    pub file: super::super::msg::rmw::AudioFile,

    /// 可选项，文件录制时长
    /// 如未设置时长，默认一直录音，调用StopCaptureAudioFile或切换内外置麦时停止录音
    pub duration: u32,

}



impl Default for CaptureAudioFile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__CaptureAudioFile_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__CaptureAudioFile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureAudioFile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureAudioFile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureAudioFile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/CaptureAudioFile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureAudioFile_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureAudioFile_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__CaptureAudioFile_Response__init(msg: *mut CaptureAudioFile_Response) -> bool;
    fn aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Response>);
    fn aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureAudioFile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureAudioFile_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__CaptureAudioFile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 必要项，表明当前麦克风类型
    pub mic_source: u32,

    /// 文件信息
    pub file: super::super::msg::rmw::AudioFile,

}



impl Default for CaptureAudioFile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__CaptureAudioFile_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__CaptureAudioFile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureAudioFile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__CaptureAudioFile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureAudioFile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureAudioFile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/CaptureAudioFile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__CaptureAudioFile_Response() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus_Request() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__AbandonAudioFocus_Request__init(msg: *mut AbandonAudioFocus_Request) -> bool;
    fn aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Request>, size: usize) -> bool;
    fn aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Request>);
    fn aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AbandonAudioFocus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Request>) -> bool;
}

// Corresponds to aimdk_msgs__srv__AbandonAudioFocus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AbandonAudioFocus_Request {
    /// 请求头
    pub request: super::super::msg::rmw::CommonRequest,

    /// 请求焦点信息
    pub focus_requester: super::super::msg::rmw::FocusRequester,

}



impl Default for AbandonAudioFocus_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__AbandonAudioFocus_Request__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__AbandonAudioFocus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AbandonAudioFocus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AbandonAudioFocus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AbandonAudioFocus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/AbandonAudioFocus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus_Request() }
  }
}


#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus_Response() -> *const std::ffi::c_void;
}

#[link(name = "aimdk_msgs__rosidl_generator_c")]
extern "C" {
    fn aimdk_msgs__srv__AbandonAudioFocus_Response__init(msg: *mut AbandonAudioFocus_Response) -> bool;
    fn aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Response>, size: usize) -> bool;
    fn aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Response>);
    fn aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AbandonAudioFocus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AbandonAudioFocus_Response>) -> bool;
}

// Corresponds to aimdk_msgs__srv__AbandonAudioFocus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AbandonAudioFocus_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::super::msg::rmw::CommonResponse,

    /// 请求结果
    pub focus_response: super::super::msg::rmw::FocusResponse,

}



impl Default for AbandonAudioFocus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimdk_msgs__srv__AbandonAudioFocus_Response__init(&mut msg as *mut _) {
        panic!("Call to aimdk_msgs__srv__AbandonAudioFocus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AbandonAudioFocus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimdk_msgs__srv__AbandonAudioFocus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AbandonAudioFocus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AbandonAudioFocus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "aimdk_msgs/srv/AbandonAudioFocus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus_Response() }
  }
}






#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetRobotRuntimeModel
#[allow(missing_docs, non_camel_case_types)]
pub struct SetRobotRuntimeModel;

impl rosidl_runtime_rs::Service for SetRobotRuntimeModel {
    type Request = SetRobotRuntimeModel_Request;
    type Response = SetRobotRuntimeModel_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetRobotRuntimeModel() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcPresetMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcPresetMotion;

impl rosidl_runtime_rs::Service for SetMcPresetMotion {
    type Request = SetMcPresetMotion_Request;
    type Response = SetMcPresetMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcPresetMotion() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcMotionSeq
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcMotionSeq;

impl rosidl_runtime_rs::Service for SetMcMotionSeq {
    type Request = SetMcMotionSeq_Request;
    type Response = SetMcMotionSeq_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcMotionSeq() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcMotion() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcMotion;

impl rosidl_runtime_rs::Service for SetMcMotion {
    type Request = SetMcMotion_Request;
    type Response = SetMcMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcMotion() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcLocomotionGait
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcLocomotionGait;

impl rosidl_runtime_rs::Service for SetMcLocomotionGait {
    type Request = SetMcLocomotionGait_Request;
    type Response = SetMcLocomotionGait_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcLocomotionGait() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcInputSource() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcInputSource
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcInputSource;

impl rosidl_runtime_rs::Service for SetMcInputSource {
    type Request = SetMcInputSource_Request;
    type Response = SetMcInputSource_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcInputSource() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__RegisterCustomMotion
#[allow(missing_docs, non_camel_case_types)]
pub struct RegisterCustomMotion;

impl rosidl_runtime_rs::Service for RegisterCustomMotion {
    type Request = RegisterCustomMotion_Request;
    type Response = RegisterCustomMotion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__RegisterCustomMotion() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__McMotionRecord() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__McMotionRecord
#[allow(missing_docs, non_camel_case_types)]
pub struct McMotionRecord;

impl rosidl_runtime_rs::Service for McMotionRecord {
    type Request = McMotionRecord_Request;
    type Response = McMotionRecord_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__McMotionRecord() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetRobotRuntimeModel
#[allow(missing_docs, non_camel_case_types)]
pub struct GetRobotRuntimeModel;

impl rosidl_runtime_rs::Service for GetRobotRuntimeModel {
    type Request = GetRobotRuntimeModel_Request;
    type Response = GetRobotRuntimeModel_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetRobotRuntimeModel() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcPresetMotionState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcPresetMotionState;

impl rosidl_runtime_rs::Service for GetMcPresetMotionState {
    type Request = GetMcPresetMotionState_Request;
    type Response = GetMcPresetMotionState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcPresetMotionState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcMotions() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcMotions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcMotions;

impl rosidl_runtime_rs::Service for GetMcMotions {
    type Request = GetMcMotions_Request;
    type Response = GetMcMotions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcMotions() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcLocomotionGait
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcLocomotionGait;

impl rosidl_runtime_rs::Service for GetMcLocomotionGait {
    type Request = GetMcLocomotionGait_Request;
    type Response = GetMcLocomotionGait_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcLocomotionGait() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetCurrentInputSource
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCurrentInputSource;

impl rosidl_runtime_rs::Service for GetCurrentInputSource {
    type Request = GetCurrentInputSource_Request;
    type Response = GetCurrentInputSource_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCurrentInputSource() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcTaskState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcTaskState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcTaskState;

impl rosidl_runtime_rs::Service for GetMcTaskState {
    type Request = GetMcTaskState_Request;
    type Response = GetMcTaskState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcTaskState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcJointState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcJointState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcJointState;

impl rosidl_runtime_rs::Service for GetMcJointState {
    type Request = GetMcJointState_Request;
    type Response = GetMcJointState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcJointState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcAction() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMcAction
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMcAction;

impl rosidl_runtime_rs::Service for SetMcAction {
    type Request = SetMcAction_Request;
    type Response = SetMcAction_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMcAction() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcAvailableActions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcAvailableActions;

impl rosidl_runtime_rs::Service for GetMcAvailableActions {
    type Request = GetMcAvailableActions_Request;
    type Response = GetMcAvailableActions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcAvailableActions() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcAction() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMcAction
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMcAction;

impl rosidl_runtime_rs::Service for GetMcAction {
    type Request = GetMcAction_Request;
    type Response = GetMcAction_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMcAction() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetAlertCodeJsonFile
#[allow(missing_docs, non_camel_case_types)]
pub struct GetAlertCodeJsonFile;

impl rosidl_runtime_rs::Service for GetAlertCodeJsonFile {
    type Request = GetAlertCodeJsonFile_Request;
    type Response = GetAlertCodeJsonFile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetAlertCodeJsonFile() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetServo() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetServo
#[allow(missing_docs, non_camel_case_types)]
pub struct SetServo;

impl rosidl_runtime_rs::Service for SetServo {
    type Request = SetServo_Request;
    type Response = SetServo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetServo() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetPowerDownOrin
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPowerDownOrin;

impl rosidl_runtime_rs::Service for SetPowerDownOrin {
    type Request = SetPowerDownOrin_Request;
    type Response = SetPowerDownOrin_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPowerDownOrin() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPowerDown() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetPowerDown
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPowerDown;

impl rosidl_runtime_rs::Service for SetPowerDown {
    type Request = SetPowerDown_Request;
    type Response = SetPowerDown_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPowerDown() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPmuSN() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetPmuSN
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPmuSN;

impl rosidl_runtime_rs::Service for SetPmuSN {
    type Request = SetPmuSN_Request;
    type Response = SetPmuSN_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPmuSN() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetPmuFanDuty
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPmuFanDuty;

impl rosidl_runtime_rs::Service for SetPmuFanDuty {
    type Request = SetPmuFanDuty_Request;
    type Response = SetPmuFanDuty_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetPmuFanDuty() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetNeckLight() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetNeckLight
#[allow(missing_docs, non_camel_case_types)]
pub struct SetNeckLight;

impl rosidl_runtime_rs::Service for SetNeckLight {
    type Request = SetNeckLight_Request;
    type Response = SetNeckLight_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetNeckLight() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetJointPower() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetJointPower
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointPower;

impl rosidl_runtime_rs::Service for SetJointPower {
    type Request = SetJointPower_Request;
    type Response = SetJointPower_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetJointPower() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalTofStream() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetHalTofStream
#[allow(missing_docs, non_camel_case_types)]
pub struct SetHalTofStream;

impl rosidl_runtime_rs::Service for SetHalTofStream {
    type Request = SetHalTofStream_Request;
    type Response = SetHalTofStream_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalTofStream() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetHalRgbdPowerSave
#[allow(missing_docs, non_camel_case_types)]
pub struct SetHalRgbdPowerSave;

impl rosidl_runtime_rs::Service for SetHalRgbdPowerSave {
    type Request = SetHalRgbdPowerSave_Request;
    type Response = SetHalRgbdPowerSave_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalRgbdPowerSave() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalCameraStream() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetHalCameraStream
#[allow(missing_docs, non_camel_case_types)]
pub struct SetHalCameraStream;

impl rosidl_runtime_rs::Service for SetHalCameraStream {
    type Request = SetHalCameraStream_Request;
    type Response = SetHalCameraStream_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetHalCameraStream() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetExt12vPower() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetExt12vPower
#[allow(missing_docs, non_camel_case_types)]
pub struct SetExt12vPower;

impl rosidl_runtime_rs::Service for SetExt12vPower {
    type Request = SetExt12vPower_Request;
    type Response = SetExt12vPower_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetExt12vPower() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetDcuMotorPowerState
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDcuMotorPowerState;

impl rosidl_runtime_rs::Service for SetDcuMotorPowerState {
    type Request = SetDcuMotorPowerState_Request;
    type Response = SetDcuMotorPowerState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetDcuMotorPowerState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__MotorTest() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__MotorTest
#[allow(missing_docs, non_camel_case_types)]
pub struct MotorTest;

impl rosidl_runtime_rs::Service for MotorTest {
    type Request = MotorTest_Request;
    type Response = MotorTest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__MotorTest() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__LedStripCommand() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__LedStripCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct LedStripCommand;

impl rosidl_runtime_rs::Service for LedStripCommand {
    type Request = LedStripCommand_Request;
    type Response = LedStripCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__LedStripCommand() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetPmuSN() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetPmuSN
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPmuSN;

impl rosidl_runtime_rs::Service for GetPmuSN {
    type Request = GetPmuSN_Request;
    type Response = GetPmuSN_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetPmuSN() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetPmuFanRpm
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPmuFanRpm;

impl rosidl_runtime_rs::Service for GetPmuFanRpm {
    type Request = GetPmuFanRpm_Request;
    type Response = GetPmuFanRpm_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetPmuFanRpm() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetNeckLightState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetNeckLightState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNeckLightState;

impl rosidl_runtime_rs::Service for GetNeckLightState {
    type Request = GetNeckLightState_Request;
    type Response = GetNeckLightState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetNeckLightState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetModuleInfo() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetModuleInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetModuleInfo;

impl rosidl_runtime_rs::Service for GetModuleInfo {
    type Request = GetModuleInfo_Request;
    type Response = GetModuleInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetModuleInfo() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetJointPowerState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetJointPowerState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetJointPowerState;

impl rosidl_runtime_rs::Service for GetJointPowerState {
    type Request = GetJointPowerState_Request;
    type Response = GetJointPowerState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetJointPowerState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetHandType() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetHandType
#[allow(missing_docs, non_camel_case_types)]
pub struct GetHandType;

impl rosidl_runtime_rs::Service for GetHandType {
    type Request = GetHandType_Request;
    type Response = GetHandType_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetHandType() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetDcuInfo() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetDcuInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDcuInfo;

impl rosidl_runtime_rs::Service for GetDcuInfo {
    type Request = GetDcuInfo_Request;
    type Response = GetDcuInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetDcuInfo() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetBatteryInfo() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetBatteryInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBatteryInfo;

impl rosidl_runtime_rs::Service for GetBatteryInfo {
    type Request = GetBatteryInfo_Request;
    type Response = GetBatteryInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetBatteryInfo() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetAllJointState() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetAllJointState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetAllJointState;

impl rosidl_runtime_rs::Service for GetAllJointState {
    type Request = GetAllJointState_Request;
    type Response = GetAllJointState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetAllJointState() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxRecordCommand() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__FluxRecordCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct FluxRecordCommand;

impl rosidl_runtime_rs::Service for FluxRecordCommand {
    type Request = FluxRecordCommand_Request;
    type Response = FluxRecordCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxRecordCommand() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__FluxGetRecordStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct FluxGetRecordStatus;

impl rosidl_runtime_rs::Service for FluxGetRecordStatus {
    type Request = FluxGetRecordStatus_Request;
    type Response = FluxGetRecordStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxGetRecordStatus() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxCaptureImage() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__FluxCaptureImage
#[allow(missing_docs, non_camel_case_types)]
pub struct FluxCaptureImage;

impl rosidl_runtime_rs::Service for FluxCaptureImage {
    type Request = FluxCaptureImage_Request;
    type Response = FluxCaptureImage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__FluxCaptureImage() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetCameraSwitch() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetCameraSwitch
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCameraSwitch;

impl rosidl_runtime_rs::Service for SetCameraSwitch {
    type Request = SetCameraSwitch_Request;
    type Response = SetCameraSwitch_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetCameraSwitch() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__HALCameraCommand() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__HALCameraCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct HALCameraCommand;

impl rosidl_runtime_rs::Service for HALCameraCommand {
    type Request = HALCameraCommand_Request;
    type Response = HALCameraCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__HALCameraCommand() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCameraSwitch() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetCameraSwitch
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCameraSwitch;

impl rosidl_runtime_rs::Service for GetCameraSwitch {
    type Request = GetCameraSwitch_Request;
    type Response = GetCameraSwitch_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCameraSwitch() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetCameraAuthorization
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCameraAuthorization;

impl rosidl_runtime_rs::Service for GetCameraAuthorization {
    type Request = GetCameraAuthorization_Request;
    type Response = GetCameraAuthorization_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetCameraAuthorization() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__CaptureJpegImage() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__CaptureJpegImage
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureJpegImage;

impl rosidl_runtime_rs::Service for CaptureJpegImage {
    type Request = CaptureJpegImage_Request;
    type Response = CaptureJpegImage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__CaptureJpegImage() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__AuthorizeCamera() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__AuthorizeCamera
#[allow(missing_docs, non_camel_case_types)]
pub struct AuthorizeCamera;

impl rosidl_runtime_rs::Service for AuthorizeCamera {
    type Request = AuthorizeCamera_Request;
    type Response = AuthorizeCamera_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__AuthorizeCamera() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__StopCaptureAudioFile
#[allow(missing_docs, non_camel_case_types)]
pub struct StopCaptureAudioFile;

impl rosidl_runtime_rs::Service for StopCaptureAudioFile {
    type Request = StopCaptureAudioFile_Request;
    type Response = StopCaptureAudioFile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__StopCaptureAudioFile() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__StopAudioPlay() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__StopAudioPlay
#[allow(missing_docs, non_camel_case_types)]
pub struct StopAudioPlay;

impl rosidl_runtime_rs::Service for StopAudioPlay {
    type Request = StopAudioPlay_Request;
    type Response = StopAudioPlay_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__StopAudioPlay() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetVolume() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetVolume
#[allow(missing_docs, non_camel_case_types)]
pub struct SetVolume;

impl rosidl_runtime_rs::Service for SetVolume {
    type Request = SetVolume_Request;
    type Response = SetVolume_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetVolume() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMute() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SetMute
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMute;

impl rosidl_runtime_rs::Service for SetMute {
    type Request = SetMute_Request;
    type Response = SetMute_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SetMute() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SearchMusic() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__SearchMusic
#[allow(missing_docs, non_camel_case_types)]
pub struct SearchMusic;

impl rosidl_runtime_rs::Service for SearchMusic {
    type Request = SearchMusic_Request;
    type Response = SearchMusic_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__SearchMusic() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__RequestAudioFocus() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__RequestAudioFocus
#[allow(missing_docs, non_camel_case_types)]
pub struct RequestAudioFocus;

impl rosidl_runtime_rs::Service for RequestAudioFocus {
    type Request = RequestAudioFocus_Request;
    type Response = RequestAudioFocus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__RequestAudioFocus() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__PlayAudioFile() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__PlayAudioFile
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayAudioFile;

impl rosidl_runtime_rs::Service for PlayAudioFile {
    type Request = PlayAudioFile_Request;
    type Response = PlayAudioFile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__PlayAudioFile() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetVolume() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetVolume
#[allow(missing_docs, non_camel_case_types)]
pub struct GetVolume;

impl rosidl_runtime_rs::Service for GetVolume {
    type Request = GetVolume_Request;
    type Response = GetVolume_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetVolume() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMute() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMute
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMute;

impl rosidl_runtime_rs::Service for GetMute {
    type Request = GetMute_Request;
    type Response = GetMute_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMute() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMusicList() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__GetMusicList
#[allow(missing_docs, non_camel_case_types)]
pub struct GetMusicList;

impl rosidl_runtime_rs::Service for GetMusicList {
    type Request = GetMusicList_Request;
    type Response = GetMusicList_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__GetMusicList() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__ControlMusic() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__ControlMusic
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlMusic;

impl rosidl_runtime_rs::Service for ControlMusic {
    type Request = ControlMusic_Request;
    type Response = ControlMusic_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__ControlMusic() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__CaptureAudioFile() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__CaptureAudioFile
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureAudioFile;

impl rosidl_runtime_rs::Service for CaptureAudioFile {
    type Request = CaptureAudioFile_Request;
    type Response = CaptureAudioFile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__CaptureAudioFile() }
    }
}




#[link(name = "aimdk_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus() -> *const std::ffi::c_void;
}

// Corresponds to aimdk_msgs__srv__AbandonAudioFocus
#[allow(missing_docs, non_camel_case_types)]
pub struct AbandonAudioFocus;

impl rosidl_runtime_rs::Service for AbandonAudioFocus {
    type Request = AbandonAudioFocus_Request;
    type Response = AbandonAudioFocus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__aimdk_msgs__srv__AbandonAudioFocus() }
    }
}


