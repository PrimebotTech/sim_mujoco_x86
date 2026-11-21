#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to hds_msgs__msg__ExceptionChannel
/// ms时间辍

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExceptionChannel {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: u64,

    /// 异常类型
    pub exception_list: Vec<super::msg::Exception>,

}



impl Default for ExceptionChannel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ExceptionChannel::default())
  }
}

impl rosidl_runtime_rs::Message for ExceptionChannel {
  type RmwMsg = super::msg::rmw::ExceptionChannel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        exception_list: msg.exception_list
          .into_iter()
          .map(|elem| super::msg::Exception::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
        exception_list: msg.exception_list
          .iter()
          .map(|elem| super::msg::Exception::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      exception_list: msg.exception_list
          .into_iter()
          .map(super::msg::Exception::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to hds_msgs__msg__Exception
/// ms时间辍

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub info: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Exception::default())
  }
}

impl rosidl_runtime_rs::Message for Exception {
  type RmwMsg = super::msg::rmw::Exception;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: msg.timestamp,
        type_: msg.type_,
        module_id: msg.module_id,
        code: msg.code,
        info: msg.info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timestamp: msg.timestamp,
      type_: msg.type_,
      module_id: msg.module_id,
      code: msg.code,
        info: msg.info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: msg.timestamp,
      type_: msg.type_,
      module_id: msg.module_id,
      code: msg.code,
      info: msg.info.to_string(),
    }
  }
}


