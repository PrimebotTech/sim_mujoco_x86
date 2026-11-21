#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "ros2_plugin_proto__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper_Request() -> *const std::ffi::c_void;
}

#[link(name = "ros2_plugin_proto__rosidl_generator_c")]
extern "C" {
    fn ros2_plugin_proto__srv__RosRpcWrapper_Request__init(msg: *mut RosRpcWrapper_Request) -> bool;
    fn ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Request>, size: usize) -> bool;
    fn ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Request>);
    fn ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RosRpcWrapper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Request>) -> bool;
}

// Corresponds to ros2_plugin_proto__srv__RosRpcWrapper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosRpcWrapper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub serialization_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub context: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for RosRpcWrapper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_plugin_proto__srv__RosRpcWrapper_Request__init(&mut msg as *mut _) {
        panic!("Call to ros2_plugin_proto__srv__RosRpcWrapper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RosRpcWrapper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RosRpcWrapper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RosRpcWrapper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_plugin_proto/srv/RosRpcWrapper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper_Request() }
  }
}


#[link(name = "ros2_plugin_proto__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper_Response() -> *const std::ffi::c_void;
}

#[link(name = "ros2_plugin_proto__rosidl_generator_c")]
extern "C" {
    fn ros2_plugin_proto__srv__RosRpcWrapper_Response__init(msg: *mut RosRpcWrapper_Response) -> bool;
    fn ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Response>, size: usize) -> bool;
    fn ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Response>);
    fn ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RosRpcWrapper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RosRpcWrapper_Response>) -> bool;
}

// Corresponds to ros2_plugin_proto__srv__RosRpcWrapper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosRpcWrapper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serialization_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for RosRpcWrapper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_plugin_proto__srv__RosRpcWrapper_Response__init(&mut msg as *mut _) {
        panic!("Call to ros2_plugin_proto__srv__RosRpcWrapper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RosRpcWrapper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_plugin_proto__srv__RosRpcWrapper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RosRpcWrapper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RosRpcWrapper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_plugin_proto/srv/RosRpcWrapper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper_Response() }
  }
}






#[link(name = "ros2_plugin_proto__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper() -> *const std::ffi::c_void;
}

// Corresponds to ros2_plugin_proto__srv__RosRpcWrapper
#[allow(missing_docs, non_camel_case_types)]
pub struct RosRpcWrapper;

impl rosidl_runtime_rs::Service for RosRpcWrapper {
    type Request = RosRpcWrapper_Request;
    type Response = RosRpcWrapper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ros2_plugin_proto__srv__RosRpcWrapper() }
    }
}


