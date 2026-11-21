#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__MessageHeader() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__MessageHeader__init(msg: *mut MessageHeader) -> bool;
    fn aimrt_msgs__msg__MessageHeader__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>, size: usize) -> bool;
    fn aimrt_msgs__msg__MessageHeader__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>);
    fn aimrt_msgs__msg__MessageHeader__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MessageHeader>, out_seq: *mut rosidl_runtime_rs::Sequence<MessageHeader>) -> bool;
}

// Corresponds to aimrt_msgs__msg__MessageHeader
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

}



impl Default for MessageHeader {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimrt_msgs__msg__MessageHeader__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__MessageHeader__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MessageHeader {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__MessageHeader__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__MessageHeader__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__MessageHeader__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MessageHeader {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MessageHeader where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/MessageHeader";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__MessageHeader() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__TouchSensorStateArray() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__TouchSensorStateArray__init(msg: *mut TouchSensorStateArray) -> bool;
    fn aimrt_msgs__msg__TouchSensorStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TouchSensorStateArray>, size: usize) -> bool;
    fn aimrt_msgs__msg__TouchSensorStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TouchSensorStateArray>);
    fn aimrt_msgs__msg__TouchSensorStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TouchSensorStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<TouchSensorStateArray>) -> bool;
}

// Corresponds to aimrt_msgs__msg__TouchSensorStateArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensorStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::super::msg::rmw::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TouchSensorState>,

}



impl Default for TouchSensorStateArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimrt_msgs__msg__TouchSensorStateArray__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__TouchSensorStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TouchSensorStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TouchSensorStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TouchSensorStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/TouchSensorStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__TouchSensorStateArray() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__TouchSensorState() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__TouchSensorState__init(msg: *mut TouchSensorState) -> bool;
    fn aimrt_msgs__msg__TouchSensorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TouchSensorState>, size: usize) -> bool;
    fn aimrt_msgs__msg__TouchSensorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TouchSensorState>);
    fn aimrt_msgs__msg__TouchSensorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TouchSensorState>, out_seq: *mut rosidl_runtime_rs::Sequence<TouchSensorState>) -> bool;
}

// Corresponds to aimrt_msgs__msg__TouchSensorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pressure: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for TouchSensorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimrt_msgs__msg__TouchSensorState__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__TouchSensorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TouchSensorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__TouchSensorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TouchSensorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TouchSensorState where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/TouchSensorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__TouchSensorState() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointStateArray() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__JointStateArray__init(msg: *mut JointStateArray) -> bool;
    fn aimrt_msgs__msg__JointStateArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>, size: usize) -> bool;
    fn aimrt_msgs__msg__JointStateArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>);
    fn aimrt_msgs__msg__JointStateArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointStateArray>, out_seq: *mut rosidl_runtime_rs::Sequence<JointStateArray>) -> bool;
}

// Corresponds to aimrt_msgs__msg__JointStateArray
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
      if !aimrt_msgs__msg__JointStateArray__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__JointStateArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointStateArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointStateArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointStateArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointStateArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointStateArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointStateArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/JointStateArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointStateArray() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointState() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__JointState__init(msg: *mut JointState) -> bool;
    fn aimrt_msgs__msg__JointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointState>, size: usize) -> bool;
    fn aimrt_msgs__msg__JointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointState>);
    fn aimrt_msgs__msg__JointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointState>, out_seq: *mut rosidl_runtime_rs::Sequence<JointState>) -> bool;
}

// Corresponds to aimrt_msgs__msg__JointState
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

}



impl Default for JointState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !aimrt_msgs__msg__JointState__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__JointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointState where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/JointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointState() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointCommandArray() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__JointCommandArray__init(msg: *mut JointCommandArray) -> bool;
    fn aimrt_msgs__msg__JointCommandArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>, size: usize) -> bool;
    fn aimrt_msgs__msg__JointCommandArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>);
    fn aimrt_msgs__msg__JointCommandArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCommandArray>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCommandArray>) -> bool;
}

// Corresponds to aimrt_msgs__msg__JointCommandArray
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
      if !aimrt_msgs__msg__JointCommandArray__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__JointCommandArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCommandArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommandArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommandArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommandArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCommandArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCommandArray where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/JointCommandArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointCommandArray() }
  }
}


#[link(name = "aimrt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointCommand() -> *const std::ffi::c_void;
}

#[link(name = "aimrt_msgs__rosidl_generator_c")]
extern "C" {
    fn aimrt_msgs__msg__JointCommand__init(msg: *mut JointCommand) -> bool;
    fn aimrt_msgs__msg__JointCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>, size: usize) -> bool;
    fn aimrt_msgs__msg__JointCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>);
    fn aimrt_msgs__msg__JointCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCommand>) -> bool;
}

// Corresponds to aimrt_msgs__msg__JointCommand
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
      if !aimrt_msgs__msg__JointCommand__init(&mut msg as *mut _) {
        panic!("Call to aimrt_msgs__msg__JointCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aimrt_msgs__msg__JointCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCommand where Self: Sized {
  const TYPE_NAME: &'static str = "aimrt_msgs/msg/JointCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aimrt_msgs__msg__JointCommand() }
  }
}


