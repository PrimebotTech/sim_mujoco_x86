#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hds_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hds_msgs__msg__ExceptionChannel() -> *const std::ffi::c_void;
}

#[link(name = "hds_msgs__rosidl_generator_c")]
extern "C" {
    fn hds_msgs__msg__ExceptionChannel__init(msg: *mut ExceptionChannel) -> bool;
    fn hds_msgs__msg__ExceptionChannel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExceptionChannel>, size: usize) -> bool;
    fn hds_msgs__msg__ExceptionChannel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExceptionChannel>);
    fn hds_msgs__msg__ExceptionChannel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExceptionChannel>, out_seq: *mut rosidl_runtime_rs::Sequence<ExceptionChannel>) -> bool;
}

// Corresponds to hds_msgs__msg__ExceptionChannel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ms时间辍

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExceptionChannel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// 异常类型
    pub exception_list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Exception>,

}



impl Default for ExceptionChannel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hds_msgs__msg__ExceptionChannel__init(&mut msg as *mut _) {
        panic!("Call to hds_msgs__msg__ExceptionChannel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExceptionChannel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__ExceptionChannel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__ExceptionChannel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__ExceptionChannel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExceptionChannel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExceptionChannel where Self: Sized {
  const TYPE_NAME: &'static str = "hds_msgs/msg/ExceptionChannel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hds_msgs__msg__ExceptionChannel() }
  }
}


#[link(name = "hds_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hds_msgs__msg__Exception() -> *const std::ffi::c_void;
}

#[link(name = "hds_msgs__rosidl_generator_c")]
extern "C" {
    fn hds_msgs__msg__Exception__init(msg: *mut Exception) -> bool;
    fn hds_msgs__msg__Exception__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Exception>, size: usize) -> bool;
    fn hds_msgs__msg__Exception__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Exception>);
    fn hds_msgs__msg__Exception__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Exception>, out_seq: *mut rosidl_runtime_rs::Sequence<Exception>) -> bool;
}

// Corresponds to hds_msgs__msg__Exception
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ms时间辍

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Exception {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// 异常类型
    pub type_: u8,

    /// 模块ID
    pub module_id: u8,

    /// 模块异常码
    pub code: u32,

    /// 异常信息
    pub info: rosidl_runtime_rs::String,

}

impl Exception {
    /// 异常类型定义#####################
    /// 正常类型 该类型异常需要周期性上报
    pub const TYPE_NORMAL: u8 = 0;

    /// 触发式异常 设置异常为产生状态
    pub const TYPE_TRIGGER_APPEAR: u8 = 1;

    /// 触发式异常 设置异常为消失状态
    pub const TYPE_TRIGGER_DISAPPEAR: u8 = 2;

}


impl Default for Exception {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hds_msgs__msg__Exception__init(&mut msg as *mut _) {
        panic!("Call to hds_msgs__msg__Exception__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Exception {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__Exception__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__Exception__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hds_msgs__msg__Exception__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Exception {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Exception where Self: Sized {
  const TYPE_NAME: &'static str = "hds_msgs/msg/Exception";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hds_msgs__msg__Exception() }
  }
}


