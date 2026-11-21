#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to ros2_plugin_proto__srv__RosRpcWrapper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosRpcWrapper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub serialization_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub context: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}



impl Default for RosRpcWrapper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RosRpcWrapper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RosRpcWrapper_Request {
  type RmwMsg = super::srv::rmw::RosRpcWrapper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        serialization_type: msg.serialization_type.as_str().into(),
        context: msg.context
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        serialization_type: msg.serialization_type.as_str().into(),
        context: msg.context
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      serialization_type: msg.serialization_type.to_string(),
      context: msg.context
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      data: msg.data.into(),
    }
  }
}


// Corresponds to ros2_plugin_proto__srv__RosRpcWrapper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RosRpcWrapper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serialization_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}



impl Default for RosRpcWrapper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RosRpcWrapper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RosRpcWrapper_Response {
  type RmwMsg = super::srv::rmw::RosRpcWrapper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        serialization_type: msg.serialization_type.as_str().into(),
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        serialization_type: msg.serialization_type.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      serialization_type: msg.serialization_type.to_string(),
      data: msg.data.into(),
    }
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


