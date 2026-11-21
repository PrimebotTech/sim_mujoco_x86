#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to aimdk_msgs__srv__SetRobotRuntimeModel_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotRuntimeModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub runtime_model: super::msg::McRuntimeModel,

}



impl Default for SetRobotRuntimeModel_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotRuntimeModel_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotRuntimeModel_Request {
  type RmwMsg = super::srv::rmw::SetRobotRuntimeModel_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Owned(msg.runtime_model)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.runtime_model)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      runtime_model: super::msg::McRuntimeModel::from_rmw_message(msg.runtime_model),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetRobotRuntimeModel_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotRuntimeModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetRobotRuntimeModel_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotRuntimeModel_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotRuntimeModel_Response {
  type RmwMsg = super::srv::rmw::SetRobotRuntimeModel_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcPresetMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcPresetMotion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: std::string::String,

    /// 控制区域
    pub area: super::msg::McControlArea,

    /// 预设动作
    pub motion: super::msg::McPresetMotion,

    /// 是否打断前一个动作
    pub interrupt: bool,

    /// 自定义动作地址
    pub ani_path: std::string::String,

}



impl Default for SetMcPresetMotion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcPresetMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcPresetMotion_Request {
  type RmwMsg = super::srv::rmw::SetMcPresetMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        area: super::msg::McControlArea::into_rmw_message(std::borrow::Cow::Owned(msg.area)).into_owned(),
        motion: super::msg::McPresetMotion::into_rmw_message(std::borrow::Cow::Owned(msg.motion)).into_owned(),
        interrupt: msg.interrupt,
        ani_path: msg.ani_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        area: super::msg::McControlArea::into_rmw_message(std::borrow::Cow::Borrowed(&msg.area)).into_owned(),
        motion: super::msg::McPresetMotion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motion)).into_owned(),
      interrupt: msg.interrupt,
        ani_path: msg.ani_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      source: msg.source.to_string(),
      area: super::msg::McControlArea::from_rmw_message(msg.area),
      motion: super::msg::McPresetMotion::from_rmw_message(msg.motion),
      interrupt: msg.interrupt,
      ani_path: msg.ani_path.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcPresetMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcPresetMotion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetMcPresetMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcPresetMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcPresetMotion_Response {
  type RmwMsg = super::srv::rmw::SetMcPresetMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcMotionSeq_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotionSeq_Request {
    /// 请求头
    pub header: super::msg::RequestHeader,

    /// 动作序列
    pub motion_seq: Vec<std::string::String>,

    /// 打断
    pub interrupt: bool,

}



impl Default for SetMcMotionSeq_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcMotionSeq_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcMotionSeq_Request {
  type RmwMsg = super::srv::rmw::SetMcMotionSeq_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motion_seq: msg.motion_seq
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        interrupt: msg.interrupt,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        motion_seq: msg.motion_seq
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      interrupt: msg.interrupt,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      motion_seq: msg.motion_seq
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      interrupt: msg.interrupt,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcMotionSeq_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotionSeq_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetMcMotionSeq_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcMotionSeq_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcMotionSeq_Response {
  type RmwMsg = super::srv::rmw::SetMcMotionSeq_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotion_Request {
    /// 请求头
    pub header: super::msg::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: std::string::String,

    /// 资源类型
    pub type_: i32,

    /// 全身动作名称，若motion为空，加载model中resource; 反之，从本地加载执行资源。
    pub motion: std::string::String,

    /// onnx 模型绝对路径
    pub model: std::string::String,

    /// 资源绝对路径，比如轨迹参考
    pub resource: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcMotion_Request {
  type RmwMsg = super::srv::rmw::SetMcMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        type_: msg.type_,
        motion: msg.motion.as_str().into(),
        model: msg.model.as_str().into(),
        resource: msg.resource.as_str().into(),
        interrupt: msg.interrupt,
        operation: msg.operation,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        source: msg.source.as_str().into(),
      type_: msg.type_,
        motion: msg.motion.as_str().into(),
        model: msg.model.as_str().into(),
        resource: msg.resource.as_str().into(),
      interrupt: msg.interrupt,
      operation: msg.operation,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      source: msg.source.to_string(),
      type_: msg.type_,
      motion: msg.motion.to_string(),
      model: msg.model.to_string(),
      resource: msg.resource.to_string(),
      interrupt: msg.interrupt,
      operation: msg.operation,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcMotion_Response {
    /// 响应头
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetMcMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcMotion_Response {
  type RmwMsg = super::srv::rmw::SetMcMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcLocomotionGait_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcLocomotionGait_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

    /// 步态
    pub gait: super::msg::McLocomotionGaitType,

}



impl Default for SetMcLocomotionGait_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcLocomotionGait_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcLocomotionGait_Request {
  type RmwMsg = super::srv::rmw::SetMcLocomotionGait_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        gait: super::msg::McLocomotionGaitType::into_rmw_message(std::borrow::Cow::Owned(msg.gait)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        gait: super::msg::McLocomotionGaitType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gait)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      gait: super::msg::McLocomotionGaitType::from_rmw_message(msg.gait),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcLocomotionGait_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcLocomotionGait_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

}



impl Default for SetMcLocomotionGait_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcLocomotionGait_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcLocomotionGait_Response {
  type RmwMsg = super::srv::rmw::SetMcLocomotionGait_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcInputSource_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcInputSource_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// ADD MODIFY DELETE DISABLE ENABLE
    pub action: super::msg::McInputAction,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_source: super::msg::McInputSource,

}



impl Default for SetMcInputSource_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcInputSource_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcInputSource_Request {
  type RmwMsg = super::srv::rmw::SetMcInputSource_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        action: super::msg::McInputAction::into_rmw_message(std::borrow::Cow::Owned(msg.action)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Owned(msg.input_source)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        action: super::msg::McInputAction::into_rmw_message(std::borrow::Cow::Borrowed(&msg.action)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.input_source)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      action: super::msg::McInputAction::from_rmw_message(msg.action),
      input_source: super::msg::McInputSource::from_rmw_message(msg.input_source),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcInputSource_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcInputSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetMcInputSource_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcInputSource_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcInputSource_Response {
  type RmwMsg = super::srv::rmw::SetMcInputSource_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__RegisterCustomMotion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterCustomMotion_Request {
    /// 动作名称
    pub motion: std::string::String,

    /// 资源路径
    pub res_path: std::string::String,

    /// 注册动作是否落盘(暂时不可用)
    pub write_to_disk: bool,

}



impl Default for RegisterCustomMotion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterCustomMotion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterCustomMotion_Request {
  type RmwMsg = super::srv::rmw::RegisterCustomMotion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: msg.motion.as_str().into(),
        res_path: msg.res_path.as_str().into(),
        write_to_disk: msg.write_to_disk,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motion: msg.motion.as_str().into(),
        res_path: msg.res_path.as_str().into(),
      write_to_disk: msg.write_to_disk,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motion: msg.motion.to_string(),
      res_path: msg.res_path.to_string(),
      write_to_disk: msg.write_to_disk,
    }
  }
}


// Corresponds to aimdk_msgs__srv__RegisterCustomMotion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterCustomMotion_Response {
    /// 响应头
    pub response: super::msg::CommonTaskResponse,

}



impl Default for RegisterCustomMotion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RegisterCustomMotion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RegisterCustomMotion_Response {
  type RmwMsg = super::srv::rmw::RegisterCustomMotion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__McMotionRecord_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionRecord_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 操作区域部分
    pub record_area: i32,

    /// 操作模式部分
    pub operation_type: i32,

    /// 录制时长限制
    pub max_duration: i32,

    /// 存储路径
    pub folder_path: std::string::String,

    /// 文件名
    pub file_name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::McMotionRecord_Request::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionRecord_Request {
  type RmwMsg = super::srv::rmw::McMotionRecord_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        record_area: msg.record_area,
        operation_type: msg.operation_type,
        max_duration: msg.max_duration,
        folder_path: msg.folder_path.as_str().into(),
        file_name: msg.file_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      record_area: msg.record_area,
      operation_type: msg.operation_type,
      max_duration: msg.max_duration,
        folder_path: msg.folder_path.as_str().into(),
        file_name: msg.file_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      record_area: msg.record_area,
      operation_type: msg.operation_type,
      max_duration: msg.max_duration,
      folder_path: msg.folder_path.to_string(),
      file_name: msg.file_name.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__McMotionRecord_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct McMotionRecord_Response {
    /// Response 部分
    pub response: super::msg::CommonResponse,

}



impl Default for McMotionRecord_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::McMotionRecord_Response::default())
  }
}

impl rosidl_runtime_rs::Message for McMotionRecord_Response {
  type RmwMsg = super::srv::rmw::McMotionRecord_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetRobotRuntimeModel_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotRuntimeModel_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonTaskRequest,

}



impl Default for GetRobotRuntimeModel_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotRuntimeModel_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotRuntimeModel_Request {
  type RmwMsg = super::srv::rmw::GetRobotRuntimeModel_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonTaskRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetRobotRuntimeModel_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetRobotRuntimeModel_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub runtime_model: super::msg::McRuntimeModel,

}



impl Default for GetRobotRuntimeModel_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetRobotRuntimeModel_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetRobotRuntimeModel_Response {
  type RmwMsg = super::srv::rmw::GetRobotRuntimeModel_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Owned(msg.runtime_model)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        runtime_model: super::msg::McRuntimeModel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.runtime_model)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
      runtime_model: super::msg::McRuntimeModel::from_rmw_message(msg.runtime_model),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcPresetMotionState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcPresetMotionState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonTaskRequest,

}



impl Default for GetMcPresetMotionState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcPresetMotionState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcPresetMotionState_Request {
  type RmwMsg = super::srv::rmw::GetMcPresetMotionState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonTaskRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcPresetMotionState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcPresetMotionState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for GetMcPresetMotionState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcPresetMotionState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcPresetMotionState_Response {
  type RmwMsg = super::srv::rmw::GetMcPresetMotionState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcMotions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcMotions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

    /// 动作形态，通过指定形态过滤动作
    pub form_state: super::msg::McFormState,

}



impl Default for GetMcMotions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcMotions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcMotions_Request {
  type RmwMsg = super::srv::rmw::GetMcMotions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        form_state: super::msg::McFormState::into_rmw_message(std::borrow::Cow::Owned(msg.form_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        form_state: super::msg::McFormState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.form_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      form_state: super::msg::McFormState::from_rmw_message(msg.form_state),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcMotions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcMotions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

    /// 当前存在的动作列表
    pub motion: Vec<super::msg::McMotion>,

}



impl Default for GetMcMotions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcMotions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcMotions_Response {
  type RmwMsg = super::srv::rmw::GetMcMotions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        motion: msg.motion
          .into_iter()
          .map(|elem| super::msg::McMotion::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        motion: msg.motion
          .iter()
          .map(|elem| super::msg::McMotion::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
      motion: msg.motion
          .into_iter()
          .map(super::msg::McMotion::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcLocomotionGait_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcLocomotionGait_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetMcLocomotionGait_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcLocomotionGait_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcLocomotionGait_Request {
  type RmwMsg = super::srv::rmw::GetMcLocomotionGait_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcLocomotionGait_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcLocomotionGait_Response {
    /// 响应头
    pub header: super::msg::ResponseHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gait: super::msg::McLocomotionGaitType,

}



impl Default for GetMcLocomotionGait_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcLocomotionGait_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcLocomotionGait_Response {
  type RmwMsg = super::srv::rmw::GetMcLocomotionGait_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        gait: super::msg::McLocomotionGaitType::into_rmw_message(std::borrow::Cow::Owned(msg.gait)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        gait: super::msg::McLocomotionGaitType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gait)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      gait: super::msg::McLocomotionGaitType::from_rmw_message(msg.gait),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCurrentInputSource_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentInputSource_Request {
    /// Request 部分
    pub request: super::msg::CommonRequest,

}



impl Default for GetCurrentInputSource_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentInputSource_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentInputSource_Request {
  type RmwMsg = super::srv::rmw::GetCurrentInputSource_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCurrentInputSource_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCurrentInputSource_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub input_source: super::msg::McInputSource,

}



impl Default for GetCurrentInputSource_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCurrentInputSource_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCurrentInputSource_Response {
  type RmwMsg = super::srv::rmw::GetCurrentInputSource_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Owned(msg.input_source)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        input_source: super::msg::McInputSource::into_rmw_message(std::borrow::Cow::Borrowed(&msg.input_source)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
      input_source: super::msg::McInputSource::from_rmw_message(msg.input_source),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcTaskState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcTaskState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonTaskRequest,

}



impl Default for GetMcTaskState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcTaskState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcTaskState_Request {
  type RmwMsg = super::srv::rmw::GetMcTaskState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonTaskRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonTaskRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcTaskState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcTaskState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for GetMcTaskState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcTaskState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcTaskState_Response {
  type RmwMsg = super::srv::rmw::GetMcTaskState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcJointState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcJointState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetMcJointState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcJointState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcJointState_Request {
  type RmwMsg = super::srv::rmw::GetMcJointState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcJointState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcJointState_Response {
    /// 响应头
    pub header: super::msg::ResponseHeader,

    /// Joint信息
    pub joints: Vec<super::msg::JointState>,

}



impl Default for GetMcJointState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcJointState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcJointState_Response {
  type RmwMsg = super::srv::rmw::GetMcJointState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joints: msg.joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joints: msg.joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      joints: msg.joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcAction_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::RequestHeader,

    /// 触发源 定义见 McTaskSource.msg
    pub source: std::string::String,

    /// Action命令
    pub command: super::msg::McActionCommand,

}



impl Default for SetMcAction_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcAction_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcAction_Request {
  type RmwMsg = super::srv::rmw::SetMcAction_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        command: super::msg::McActionCommand::into_rmw_message(std::borrow::Cow::Owned(msg.command)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::RequestHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        source: msg.source.as_str().into(),
        command: super::msg::McActionCommand::into_rmw_message(std::borrow::Cow::Borrowed(&msg.command)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::RequestHeader::from_rmw_message(msg.header),
      source: msg.source.to_string(),
      command: super::msg::McActionCommand::from_rmw_message(msg.command),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMcAction_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMcAction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonTaskResponse,

}



impl Default for SetMcAction_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMcAction_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMcAction_Response {
  type RmwMsg = super::srv::rmw::SetMcAction_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonTaskResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonTaskResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcAvailableActions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAvailableActions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetMcAvailableActions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcAvailableActions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcAvailableActions_Request {
  type RmwMsg = super::srv::rmw::GetMcAvailableActions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcAvailableActions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAvailableActions_Response {
    /// 响应头
    pub header: super::msg::ResponseHeader,

    /// 可用的Action列表
    pub actions: Vec<std::string::String>,

    /// 可用的Action命令列表
    pub commands: Vec<super::msg::McActionCommand>,

}



impl Default for GetMcAvailableActions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcAvailableActions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcAvailableActions_Response {
  type RmwMsg = super::srv::rmw::GetMcAvailableActions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        actions: msg.actions
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        commands: msg.commands
          .into_iter()
          .map(|elem| super::msg::McActionCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        actions: msg.actions
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        commands: msg.commands
          .iter()
          .map(|elem| super::msg::McActionCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      actions: msg.actions
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      commands: msg.commands
          .into_iter()
          .map(super::msg::McActionCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcAction_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetMcAction_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcAction_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcAction_Request {
  type RmwMsg = super::srv::rmw::GetMcAction_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMcAction_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMcAction_Response {
    /// 响应头
    pub header: super::msg::ResponseHeader,

    /// Action信息
    pub info: super::msg::McActionInfo,

}



impl Default for GetMcAction_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMcAction_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMcAction_Response {
  type RmwMsg = super::srv::rmw::GetMcAction_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        info: super::msg::McActionInfo::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::ResponseHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        info: super::msg::McActionInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::ResponseHeader::from_rmw_message(msg.header),
      info: super::msg::McActionInfo::from_rmw_message(msg.info),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetAlertCodeJsonFile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAlertCodeJsonFile_Request {
    /// ----------------------------------------------------
    /// 请求头
    pub header: super::msg::CommonRequest,

}



impl Default for GetAlertCodeJsonFile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAlertCodeJsonFile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAlertCodeJsonFile_Request {
  type RmwMsg = super::srv::rmw::GetAlertCodeJsonFile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonRequest::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetAlertCodeJsonFile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAlertCodeJsonFile_Response {
    /// ----------------------------------------------------
    /// 响应头
    pub header: super::msg::CommonResponse,

    /// ----------------------------------------------------
    /// json文件转成字符串返回
    pub alert_code_json: std::string::String,

}



impl Default for GetAlertCodeJsonFile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAlertCodeJsonFile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAlertCodeJsonFile_Response {
  type RmwMsg = super::srv::rmw::GetAlertCodeJsonFile_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        alert_code_json: msg.alert_code_json.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        alert_code_json: msg.alert_code_json.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
      alert_code_json: msg.alert_code_json.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetServo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetServo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 位置,范围为0-90度，0度为四足形态的位置，90度为双足形态的位置
    pub position: u8,

    /// 速度，范围为100-1000。该值为每秒运动的步数，1步为0.225度。
    pub speed: u16,

}



impl Default for SetServo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetServo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetServo_Request {
  type RmwMsg = super::srv::rmw::SetServo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        position: msg.position,
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      position: msg.position,
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      position: msg.position,
      speed: msg.speed,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetServo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetServo_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,

}



impl Default for SetServo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetServo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetServo_Response {
  type RmwMsg = super::srv::rmw::SetServo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPowerDownOrin_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDownOrin_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 位置
    pub command: u8,

    /// 调用请求的模块名
    pub input_source: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerDownOrin_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerDownOrin_Request {
  type RmwMsg = super::srv::rmw::SetPowerDownOrin_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        command: msg.command,
        input_source: msg.input_source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      command: msg.command,
        input_source: msg.input_source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      command: msg.command,
      input_source: msg.input_source.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPowerDownOrin_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDownOrin_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

}



impl Default for SetPowerDownOrin_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerDownOrin_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerDownOrin_Response {
  type RmwMsg = super::srv::rmw::SetPowerDownOrin_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPowerDown_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDown_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 位置
    pub command: u8,

    /// 调用请求的模块名
    pub input_source: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerDown_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerDown_Request {
  type RmwMsg = super::srv::rmw::SetPowerDown_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        command: msg.command,
        input_source: msg.input_source.as_str().into(),
        power_reboot_interval: msg.power_reboot_interval,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      command: msg.command,
        input_source: msg.input_source.as_str().into(),
      power_reboot_interval: msg.power_reboot_interval,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      command: msg.command,
      input_source: msg.input_source.to_string(),
      power_reboot_interval: msg.power_reboot_interval,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPowerDown_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerDown_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

}



impl Default for SetPowerDown_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerDown_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerDown_Response {
  type RmwMsg = super::srv::rmw::SetPowerDown_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPmuSN_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuSN_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPmuSN_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPmuSN_Request {
  type RmwMsg = super::srv::rmw::SetPmuSN_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        device: msg.device,
        serial_number: msg.serial_number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      device: msg.device,
        serial_number: msg.serial_number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      device: msg.device,
      serial_number: msg.serial_number,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPmuSN_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuSN_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 设置是否成功
    pub result: u16,

}



impl Default for SetPmuSN_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPmuSN_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPmuSN_Response {
  type RmwMsg = super::srv::rmw::SetPmuSN_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      result: msg.result,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPmuFanDuty_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuFanDuty_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duty: f64,

}



impl Default for SetPmuFanDuty_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPmuFanDuty_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPmuFanDuty_Request {
  type RmwMsg = super::srv::rmw::SetPmuFanDuty_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        duty: msg.duty,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      duty: msg.duty,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      duty: msg.duty,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetPmuFanDuty_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPmuFanDuty_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 设置是否成功
    pub result: u16,

}



impl Default for SetPmuFanDuty_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPmuFanDuty_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPmuFanDuty_Response {
  type RmwMsg = super::srv::rmw::SetPmuFanDuty_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      result: msg.result,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetNeckLight_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNeckLight_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for SetNeckLight_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetNeckLight_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetNeckLight_Request {
  type RmwMsg = super::srv::rmw::SetNeckLight_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        enable: msg.enable,
        brightness: msg.brightness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      enable: msg.enable,
      brightness: msg.brightness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      enable: msg.enable,
      brightness: msg.brightness,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetNeckLight_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetNeckLight_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,

}



impl Default for SetNeckLight_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetNeckLight_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetNeckLight_Response {
  type RmwMsg = super::srv::rmw::SetNeckLight_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetJointPower_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 调用请求的模块名
    pub input_source: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointPower_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointPower_Request {
  type RmwMsg = super::srv::rmw::SetJointPower_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        input_source: msg.input_source.as_str().into(),
        command: msg.command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        input_source: msg.input_source.as_str().into(),
      command: msg.command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      input_source: msg.input_source.to_string(),
      command: msg.command,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetJointPower_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPower_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,

}



impl Default for SetJointPower_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointPower_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointPower_Response {
  type RmwMsg = super::srv::rmw::SetJointPower_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalTofStream_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalTofStream_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求唯一标识，用于问题定位
    pub trace_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalTofStream_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalTofStream_Request {
  type RmwMsg = super::srv::rmw::SetHalTofStream_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
        power_ctrl_mask: msg.power_ctrl_mask,
        stream_ctrl_mask: msg.stream_ctrl_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
      power_ctrl_mask: msg.power_ctrl_mask,
      stream_ctrl_mask: msg.stream_ctrl_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      trace_id: msg.trace_id.to_string(),
      power_ctrl_mask: msg.power_ctrl_mask,
      stream_ctrl_mask: msg.stream_ctrl_mask,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalTofStream_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalTofStream_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::msg::CommonResponse,

    /// 本次响应对于的请求id
    pub trace_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalTofStream_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalTofStream_Response {
  type RmwMsg = super::srv::rmw::SetHalTofStream_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
        switch_state: msg.switch_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
      switch_state: msg.switch_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      trace_id: msg.trace_id.to_string(),
      switch_state: msg.switch_state,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalRgbdPowerSave_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalRgbdPowerSave_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalRgbdPowerSave_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalRgbdPowerSave_Request {
  type RmwMsg = super::srv::rmw::SetHalRgbdPowerSave_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        camera_mask: msg.camera_mask,
        trigger_type: msg.trigger_type,
        trigger_reason: msg.trigger_reason,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      camera_mask: msg.camera_mask,
      trigger_type: msg.trigger_type,
      trigger_reason: msg.trigger_reason,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      camera_mask: msg.camera_mask,
      trigger_type: msg.trigger_type,
      trigger_reason: msg.trigger_reason,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalRgbdPowerSave_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalRgbdPowerSave_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::msg::CommonResponse,

}



impl Default for SetHalRgbdPowerSave_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalRgbdPowerSave_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalRgbdPowerSave_Response {
  type RmwMsg = super::srv::rmw::SetHalRgbdPowerSave_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalCameraStream_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalCameraStream_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求唯一标识，用于问题定位
    pub trace_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalCameraStream_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalCameraStream_Request {
  type RmwMsg = super::srv::rmw::SetHalCameraStream_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
        req_type: msg.req_type,
        power_ctrl_mask: msg.power_ctrl_mask,
        stream_ctrl_mask: msg.stream_ctrl_mask,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
      req_type: msg.req_type,
      power_ctrl_mask: msg.power_ctrl_mask,
      stream_ctrl_mask: msg.stream_ctrl_mask,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      trace_id: msg.trace_id.to_string(),
      req_type: msg.req_type,
      power_ctrl_mask: msg.power_ctrl_mask,
      stream_ctrl_mask: msg.stream_ctrl_mask,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetHalCameraStream_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetHalCameraStream_Response {
    /// 响应头（结果以 status 为准）
    pub response: super::msg::CommonResponse,

    /// 本次响应对于的请求id
    pub trace_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetHalCameraStream_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetHalCameraStream_Response {
  type RmwMsg = super::srv::rmw::SetHalCameraStream_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
        req_result: msg.req_result,
        target_state_mask: msg.target_state_mask,
        switch_state: msg.switch_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        trace_id: msg.trace_id.as_str().into(),
      req_result: msg.req_result,
      target_state_mask: msg.target_state_mask,
      switch_state: msg.switch_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      trace_id: msg.trace_id.to_string(),
      req_result: msg.req_result,
      target_state_mask: msg.target_state_mask,
      switch_state: msg.switch_state,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetExt12vPower_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExt12vPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// true：上电，false：下电
    pub enable: bool,

}



impl Default for SetExt12vPower_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetExt12vPower_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetExt12vPower_Request {
  type RmwMsg = super::srv::rmw::SetExt12vPower_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      enable: msg.enable,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetExt12vPower_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetExt12vPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

}



impl Default for SetExt12vPower_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetExt12vPower_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetExt12vPower_Response {
  type RmwMsg = super::srv::rmw::SetExt12vPower_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetDcuMotorPowerState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDcuMotorPowerState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 从站序号 1 2
    pub dcu_type: u8,

    /// 对应状态
    pub state: u8,

}



impl Default for SetDcuMotorPowerState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDcuMotorPowerState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDcuMotorPowerState_Request {
  type RmwMsg = super::srv::rmw::SetDcuMotorPowerState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        dcu_type: msg.dcu_type,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      dcu_type: msg.dcu_type,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      dcu_type: msg.dcu_type,
      state: msg.state,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetDcuMotorPowerState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDcuMotorPowerState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ret: u8,

}



impl Default for SetDcuMotorPowerState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDcuMotorPowerState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDcuMotorPowerState_Response {
  type RmwMsg = super::srv::rmw::SetDcuMotorPowerState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        ret: msg.ret,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      ret: msg.ret,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      ret: msg.ret,
    }
  }
}


// Corresponds to aimdk_msgs__srv__MotorTest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorTest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 从站序号 1 2  3
    pub dcu_type: u8,

    /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
    pub can_channel: u8,

    /// can通信id
    pub can_id: u8,

    /// payload len
    pub payload_len: u8,

    /// payload
    pub request_payload: Vec<u8>,

}



impl Default for MotorTest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorTest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MotorTest_Request {
  type RmwMsg = super::srv::rmw::MotorTest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        dcu_type: msg.dcu_type,
        can_channel: msg.can_channel,
        can_id: msg.can_id,
        payload_len: msg.payload_len,
        request_payload: msg.request_payload.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      dcu_type: msg.dcu_type,
      can_channel: msg.can_channel,
      can_id: msg.can_id,
      payload_len: msg.payload_len,
        request_payload: msg.request_payload.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      dcu_type: msg.dcu_type,
      can_channel: msg.can_channel,
      can_id: msg.can_id,
      payload_len: msg.payload_len,
      request_payload: msg.request_payload.into(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__MotorTest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorTest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 从站序号 1 2  3
    pub dcu_type: u8,

    /// can通信通道 1-左臂，左腿   2-右臂，右腿  3-头，腰
    pub can_channel: u8,

    /// can通信id
    pub can_id: u8,

    /// payload len
    pub payload_len: u8,

    /// payload
    pub response_payload: Vec<u8>,

}



impl Default for MotorTest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorTest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MotorTest_Response {
  type RmwMsg = super::srv::rmw::MotorTest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        dcu_type: msg.dcu_type,
        can_channel: msg.can_channel,
        can_id: msg.can_id,
        payload_len: msg.payload_len,
        response_payload: msg.response_payload.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      dcu_type: msg.dcu_type,
      can_channel: msg.can_channel,
      can_id: msg.can_id,
      payload_len: msg.payload_len,
        response_payload: msg.response_payload.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      dcu_type: msg.dcu_type,
      can_channel: msg.can_channel,
      can_id: msg.can_id,
      payload_len: msg.payload_len,
      response_payload: msg.response_payload.into(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__LedStripCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedStripCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LedStripCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LedStripCommand_Request {
  type RmwMsg = super::srv::rmw::LedStripCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        led_strip_mode: msg.led_strip_mode,
        r: msg.r,
        g: msg.g,
        b: msg.b,
        period: msg.period,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      led_strip_mode: msg.led_strip_mode,
      r: msg.r,
      g: msg.g,
      b: msg.b,
      period: msg.period,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      led_strip_mode: msg.led_strip_mode,
      r: msg.r,
      g: msg.g,
      b: msg.b,
      period: msg.period,
    }
  }
}


// Corresponds to aimdk_msgs__srv__LedStripCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedStripCommand_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,

}



impl Default for LedStripCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LedStripCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LedStripCommand_Response {
  type RmwMsg = super::srv::rmw::LedStripCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetPmuSN_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuSN_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPmuSN_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPmuSN_Request {
  type RmwMsg = super::srv::rmw::GetPmuSN_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        device: msg.device,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      device: msg.device,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      device: msg.device,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetPmuSN_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuSN_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 设置是否成功
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub serial_number: [u8; 19],

}



impl Default for GetPmuSN_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPmuSN_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPmuSN_Response {
  type RmwMsg = super::srv::rmw::GetPmuSN_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        result: msg.result,
        serial_number: msg.serial_number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      result: msg.result,
        serial_number: msg.serial_number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      result: msg.result,
      serial_number: msg.serial_number,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetPmuFanRpm_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuFanRpm_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetPmuFanRpm_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPmuFanRpm_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPmuFanRpm_Request {
  type RmwMsg = super::srv::rmw::GetPmuFanRpm_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetPmuFanRpm_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPmuFanRpm_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 设置是否成功
    pub result: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpm: f64,

}



impl Default for GetPmuFanRpm_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPmuFanRpm_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPmuFanRpm_Response {
  type RmwMsg = super::srv::rmw::GetPmuFanRpm_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        result: msg.result,
        rpm: msg.rpm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      result: msg.result,
      rpm: msg.rpm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      result: msg.result,
      rpm: msg.rpm,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetNeckLightState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNeckLightState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetNeckLightState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNeckLightState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetNeckLightState_Request {
  type RmwMsg = super::srv::rmw::GetNeckLightState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetNeckLightState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNeckLightState_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,

    /// 开关: true开, false关
    pub enable: bool,

    /// 亮度: 0-100 百分比
    pub brightness: u8,

}



impl Default for GetNeckLightState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNeckLightState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetNeckLightState_Response {
  type RmwMsg = super::srv::rmw::GetNeckLightState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        enable: msg.enable,
        brightness: msg.brightness,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      enable: msg.enable,
      brightness: msg.brightness,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
      enable: msg.enable,
      brightness: msg.brightness,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetModuleInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetModuleInfo_Request {
    /// ---------------- 请求 ----------------
    pub request: super::msg::CommonRequest,


    // This member is not documented.
    #[allow(missing_docs)]
    pub module_id: std::string::String,

}



impl Default for GetModuleInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetModuleInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetModuleInfo_Request {
  type RmwMsg = super::srv::rmw::GetModuleInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        module_id: msg.module_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        module_id: msg.module_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      module_id: msg.module_id.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetModuleInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetModuleInfo_Response {
    /// ---------------- 响应 ----------------
    pub response: super::msg::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modules: Vec<super::msg::ModuleInfo>,

}



impl Default for GetModuleInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetModuleInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetModuleInfo_Response {
  type RmwMsg = super::srv::rmw::GetModuleInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        modules: msg.modules
          .into_iter()
          .map(|elem| super::msg::ModuleInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        modules: msg.modules
          .iter()
          .map(|elem| super::msg::ModuleInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      modules: msg.modules
          .into_iter()
          .map(super::msg::ModuleInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetJointPowerState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointPowerState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetJointPowerState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointPowerState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointPowerState_Request {
  type RmwMsg = super::srv::rmw::GetJointPowerState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetJointPowerState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointPowerState_Response {
    /// 响应头
    pub header: super::msg::CommonResponse,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointPowerState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointPowerState_Response {
  type RmwMsg = super::srv::rmw::GetJointPowerState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        power_state: msg.power_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      power_state: msg.power_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::CommonResponse::from_rmw_message(msg.header),
      power_state: msg.power_state,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetHandType_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandType_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetHandType_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetHandType_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetHandType_Request {
  type RmwMsg = super::srv::rmw::GetHandType_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetHandType_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandType_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_hands_type: super::msg::HandType,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_hands_type: super::msg::HandType,

}



impl Default for GetHandType_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetHandType_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetHandType_Response {
  type RmwMsg = super::srv::rmw::GetHandType_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        left_hands_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.left_hands_type)).into_owned(),
        right_hands_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Owned(msg.right_hands_type)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        left_hands_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.left_hands_type)).into_owned(),
        right_hands_type: super::msg::HandType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.right_hands_type)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      left_hands_type: super::msg::HandType::from_rmw_message(msg.left_hands_type),
      right_hands_type: super::msg::HandType::from_rmw_message(msg.right_hands_type),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetDcuInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDcuInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetDcuInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDcuInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetDcuInfo_Request {
  type RmwMsg = super::srv::rmw::GetDcuInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetDcuInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDcuInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_fw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_hw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub udcu_build_time: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_fw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_hw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddcu_build_time: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_fw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_hw_ver: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safedcu_build_time: std::string::String,

}



impl Default for GetDcuInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDcuInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetDcuInfo_Response {
  type RmwMsg = super::srv::rmw::GetDcuInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        udcu_fw_ver: msg.udcu_fw_ver.as_str().into(),
        udcu_hw_ver: msg.udcu_hw_ver.as_str().into(),
        udcu_build_time: msg.udcu_build_time.as_str().into(),
        ddcu_fw_ver: msg.ddcu_fw_ver.as_str().into(),
        ddcu_hw_ver: msg.ddcu_hw_ver.as_str().into(),
        ddcu_build_time: msg.ddcu_build_time.as_str().into(),
        safedcu_fw_ver: msg.safedcu_fw_ver.as_str().into(),
        safedcu_hw_ver: msg.safedcu_hw_ver.as_str().into(),
        safedcu_build_time: msg.safedcu_build_time.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        udcu_fw_ver: msg.udcu_fw_ver.as_str().into(),
        udcu_hw_ver: msg.udcu_hw_ver.as_str().into(),
        udcu_build_time: msg.udcu_build_time.as_str().into(),
        ddcu_fw_ver: msg.ddcu_fw_ver.as_str().into(),
        ddcu_hw_ver: msg.ddcu_hw_ver.as_str().into(),
        ddcu_build_time: msg.ddcu_build_time.as_str().into(),
        safedcu_fw_ver: msg.safedcu_fw_ver.as_str().into(),
        safedcu_hw_ver: msg.safedcu_hw_ver.as_str().into(),
        safedcu_build_time: msg.safedcu_build_time.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      udcu_fw_ver: msg.udcu_fw_ver.to_string(),
      udcu_hw_ver: msg.udcu_hw_ver.to_string(),
      udcu_build_time: msg.udcu_build_time.to_string(),
      ddcu_fw_ver: msg.ddcu_fw_ver.to_string(),
      ddcu_hw_ver: msg.ddcu_hw_ver.to_string(),
      ddcu_build_time: msg.ddcu_build_time.to_string(),
      safedcu_fw_ver: msg.safedcu_fw_ver.to_string(),
      safedcu_hw_ver: msg.safedcu_hw_ver.to_string(),
      safedcu_build_time: msg.safedcu_build_time.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetBatteryInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetBatteryInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBatteryInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetBatteryInfo_Request {
  type RmwMsg = super::srv::rmw::GetBatteryInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetBatteryInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBatteryInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

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

}



impl Default for GetBatteryInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetBatteryInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetBatteryInfo_Response {
  type RmwMsg = super::srv::rmw::GetBatteryInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        manufacturer: msg.manufacturer.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        manufacturer: msg.manufacturer.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        protocol_version: msg.protocol_version.as_str().into(),
        hardware_version: msg.hardware_version.as_str().into(),
        software_version: msg.software_version.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      manufacturer: msg.manufacturer.to_string(),
      serial_number: msg.serial_number.to_string(),
      protocol_version: msg.protocol_version.to_string(),
      hardware_version: msg.hardware_version.to_string(),
      software_version: msg.software_version.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetAllJointState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAllJointState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetAllJointState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAllJointState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAllJointState_Request {
  type RmwMsg = super::srv::rmw::GetAllJointState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetAllJointState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAllJointState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,


    // This member is not documented.
    #[allow(missing_docs)]
    pub head_joints: Vec<super::msg::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arm_joints: Vec<super::msg::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waist_joints: Vec<super::msg::JointState>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub leg_joints: Vec<super::msg::JointState>,

}



impl Default for GetAllJointState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetAllJointState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAllJointState_Response {
  type RmwMsg = super::srv::rmw::GetAllJointState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        head_joints: msg.head_joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        arm_joints: msg.arm_joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        waist_joints: msg.waist_joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        leg_joints: msg.leg_joints
          .into_iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        head_joints: msg.head_joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        arm_joints: msg.arm_joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        waist_joints: msg.waist_joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        leg_joints: msg.leg_joints
          .iter()
          .map(|elem| super::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      head_joints: msg.head_joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
      arm_joints: msg.arm_joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
      waist_joints: msg.waist_joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
      leg_joints: msg.leg_joints
          .into_iter()
          .map(super::msg::JointState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxRecordCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxRecordCommand_Request {
    /// request
    /// "record.start" or "record.stop"
    pub command: std::string::String,

    /// seconds, 0 = use config default
    pub duration: i32,

}



impl Default for FluxRecordCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxRecordCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FluxRecordCommand_Request {
  type RmwMsg = super::srv::rmw::FluxRecordCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
        duration: msg.duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        command: msg.command.as_str().into(),
      duration: msg.duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      command: msg.command.to_string(),
      duration: msg.duration,
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxRecordCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxRecordCommand_Response {
    /// 0=success, non-zero=fail
    pub status: i32,

    /// error reason code (0 when success)
    pub reason: i32,

    /// human-readable status/error message
    pub message: std::string::String,

}



impl Default for FluxRecordCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxRecordCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FluxRecordCommand_Response {
  type RmwMsg = super::srv::rmw::FluxRecordCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        reason: msg.reason,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      reason: msg.reason,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      reason: msg.reason,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxGetRecordStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxGetRecordStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for FluxGetRecordStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxGetRecordStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FluxGetRecordStatus_Request {
  type RmwMsg = super::srv::rmw::FluxGetRecordStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxGetRecordStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxGetRecordStatus_Response {
    /// 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
    pub recording: i8,

    /// 录制持续秒数（未录制时为 0）
    pub duration_sec: i64,

    /// 录制来源 "app" / "agent" / "" (未录制时为空)
    pub source: std::string::String,

}



impl Default for FluxGetRecordStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxGetRecordStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FluxGetRecordStatus_Response {
  type RmwMsg = super::srv::rmw::FluxGetRecordStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        recording: msg.recording,
        duration_sec: msg.duration_sec,
        source: msg.source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      recording: msg.recording,
      duration_sec: msg.duration_sec,
        source: msg.source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      recording: msg.recording,
      duration_sec: msg.duration_sec,
      source: msg.source.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxCaptureImage_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxCaptureImage_Request {
    /// request
    /// JPEG quality 1-100, 0 = use server default (100)
    pub quality: u32,

}



impl Default for FluxCaptureImage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxCaptureImage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FluxCaptureImage_Request {
  type RmwMsg = super::srv::rmw::FluxCaptureImage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        quality: msg.quality,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      quality: msg.quality,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      quality: msg.quality,
    }
  }
}


// Corresponds to aimdk_msgs__srv__FluxCaptureImage_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FluxCaptureImage_Response {
    /// 0=success, non-zero=fail
    pub status: i32,

    /// error reason code (0 when success)
    pub reason: i32,

    /// human-readable status/error message
    pub message: std::string::String,

}



impl Default for FluxCaptureImage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::FluxCaptureImage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FluxCaptureImage_Response {
  type RmwMsg = super::srv::rmw::FluxCaptureImage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        reason: msg.reason,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      reason: msg.reason,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      reason: msg.reason,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetCameraSwitch_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCameraSwitch_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求相机开关状态
    /// true(open)
    /// false(close)
    pub camera_enabled: bool,

}



impl Default for SetCameraSwitch_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCameraSwitch_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetCameraSwitch_Request {
  type RmwMsg = super::srv::rmw::SetCameraSwitch_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        camera_enabled: msg.camera_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      camera_enabled: msg.camera_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      camera_enabled: msg.camera_enabled,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetCameraSwitch_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCameraSwitch_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前相机开关状态
    pub camera_enabled: bool,

}



impl Default for SetCameraSwitch_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetCameraSwitch_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetCameraSwitch_Response {
  type RmwMsg = super::srv::rmw::SetCameraSwitch_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        camera_enabled: msg.camera_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      camera_enabled: msg.camera_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      camera_enabled: msg.camera_enabled,
    }
  }
}


// Corresponds to aimdk_msgs__srv__HALCameraCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HALCameraCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 命令名（点分层级），例如：
    ///   stream.enable    → 开启某路 NV12 发布
    ///   stream.disable   → 关闭某路 NV12 发布
    ///   （预留：set.fps、set.resolution、snapshot.trigger ...）
    pub command: std::string::String,

    /// KV 参数列表（param_keys[i] 对应 param_values[i]）
    /// 示例 stream.enable: keys=["topic"], values=["/aima/hal/camera/bgr_camera_l/nv12"]
    pub param_keys: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub param_values: Vec<std::string::String>,

}



impl Default for HALCameraCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::HALCameraCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for HALCameraCommand_Request {
  type RmwMsg = super::srv::rmw::HALCameraCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        command: msg.command.as_str().into(),
        param_keys: msg.param_keys
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        param_values: msg.param_values
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        command: msg.command.as_str().into(),
        param_keys: msg.param_keys
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        param_values: msg.param_values
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      command: msg.command.to_string(),
      param_keys: msg.param_keys
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      param_values: msg.param_values
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__HALCameraCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HALCameraCommand_Response {
    /// response
    pub response: super::msg::CommonResponse,

    /// 可选返回值（供需要回传数据的命令使用，如 get.fps 返回当前帧率）
    pub result_keys: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_values: Vec<std::string::String>,

}



impl Default for HALCameraCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::HALCameraCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for HALCameraCommand_Response {
  type RmwMsg = super::srv::rmw::HALCameraCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        result_keys: msg.result_keys
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        result_values: msg.result_values
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        result_keys: msg.result_keys
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        result_values: msg.result_values
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      result_keys: msg.result_keys
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      result_values: msg.result_values
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCameraSwitch_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraSwitch_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for GetCameraSwitch_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCameraSwitch_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCameraSwitch_Request {
  type RmwMsg = super::srv::rmw::GetCameraSwitch_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCameraSwitch_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraSwitch_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前相机开关状态
    pub camera_enabled: bool,

}



impl Default for GetCameraSwitch_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCameraSwitch_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCameraSwitch_Response {
  type RmwMsg = super::srv::rmw::GetCameraSwitch_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        camera_enabled: msg.camera_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      camera_enabled: msg.camera_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      camera_enabled: msg.camera_enabled,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCameraAuthorization_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraAuthorization_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for GetCameraAuthorization_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCameraAuthorization_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCameraAuthorization_Request {
  type RmwMsg = super::srv::rmw::GetCameraAuthorization_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetCameraAuthorization_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCameraAuthorization_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前授权状态
    pub is_authorized: bool,

}



impl Default for GetCameraAuthorization_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCameraAuthorization_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCameraAuthorization_Response {
  type RmwMsg = super::srv::rmw::GetCameraAuthorization_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        is_authorized: msg.is_authorized,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      is_authorized: msg.is_authorized,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      is_authorized: msg.is_authorized,
    }
  }
}


// Corresponds to aimdk_msgs__srv__CaptureJpegImage_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureJpegImage_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 相机 ID
    pub camera_id: std::string::String,

    /// 可选项，等待新帧的超时时间，单位 ms；为 0 时使用服务端默认值
    pub timeout_ms: u32,

}



impl Default for CaptureJpegImage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureJpegImage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureJpegImage_Request {
  type RmwMsg = super::srv::rmw::CaptureJpegImage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        camera_id: msg.camera_id.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        camera_id: msg.camera_id.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      camera_id: msg.camera_id.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to aimdk_msgs__srv__CaptureJpegImage_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureJpegImage_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// JPEG 图片数据
    pub jpeg: super::msg::JpegImage,

}



impl Default for CaptureJpegImage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureJpegImage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureJpegImage_Response {
  type RmwMsg = super::srv::rmw::CaptureJpegImage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        jpeg: super::msg::JpegImage::into_rmw_message(std::borrow::Cow::Owned(msg.jpeg)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        jpeg: super::msg::JpegImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.jpeg)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      jpeg: super::msg::JpegImage::from_rmw_message(msg.jpeg),
    }
  }
}


// Corresponds to aimdk_msgs__srv__AuthorizeCamera_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthorizeCamera_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for AuthorizeCamera_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AuthorizeCamera_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AuthorizeCamera_Request {
  type RmwMsg = super::srv::rmw::AuthorizeCamera_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__AuthorizeCamera_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthorizeCamera_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前授权状态
    pub is_authorized: bool,

}



impl Default for AuthorizeCamera_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AuthorizeCamera_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AuthorizeCamera_Response {
  type RmwMsg = super::srv::rmw::AuthorizeCamera_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        is_authorized: msg.is_authorized,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      is_authorized: msg.is_authorized,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      is_authorized: msg.is_authorized,
    }
  }
}


// Corresponds to aimdk_msgs__srv__StopCaptureAudioFile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopCaptureAudioFile_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 文件信息
    pub file: super::msg::AudioFile,

}



impl Default for StopCaptureAudioFile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopCaptureAudioFile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StopCaptureAudioFile_Request {
  type RmwMsg = super::srv::rmw::StopCaptureAudioFile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Owned(msg.file)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.file)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      file: super::msg::AudioFile::from_rmw_message(msg.file),
    }
  }
}


// Corresponds to aimdk_msgs__srv__StopCaptureAudioFile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopCaptureAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

}



impl Default for StopCaptureAudioFile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopCaptureAudioFile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StopCaptureAudioFile_Response {
  type RmwMsg = super::srv::rmw::StopCaptureAudioFile_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__StopAudioPlay_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopAudioPlay_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for StopAudioPlay_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopAudioPlay_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StopAudioPlay_Request {
  type RmwMsg = super::srv::rmw::StopAudioPlay_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__StopAudioPlay_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopAudioPlay_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

}



impl Default for StopAudioPlay_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopAudioPlay_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StopAudioPlay_Response {
  type RmwMsg = super::srv::rmw::StopAudioPlay_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetVolume_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVolume_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求音量（0~100）
    pub audio_volume: u32,

}



impl Default for SetVolume_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVolume_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetVolume_Request {
  type RmwMsg = super::srv::rmw::SetVolume_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        audio_volume: msg.audio_volume,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      audio_volume: msg.audio_volume,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      audio_volume: msg.audio_volume,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetVolume_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVolume_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 播放音量（0~100）
    pub audio_volume: u32,

}



impl Default for SetVolume_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVolume_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetVolume_Response {
  type RmwMsg = super::srv::rmw::SetVolume_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        audio_volume: msg.audio_volume,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      audio_volume: msg.audio_volume,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      audio_volume: msg.audio_volume,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMute_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMute_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求静音状态
    /// true(mute)
    /// false(unmute)
    pub is_mute: bool,

}



impl Default for SetMute_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMute_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMute_Request {
  type RmwMsg = super::srv::rmw::SetMute_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        is_mute: msg.is_mute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      is_mute: msg.is_mute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      is_mute: msg.is_mute,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SetMute_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMute_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前静音状态
    pub is_mute: bool,

}



impl Default for SetMute_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMute_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMute_Response {
  type RmwMsg = super::srv::rmw::SetMute_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        is_mute: msg.is_mute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      is_mute: msg.is_mute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      is_mute: msg.is_mute,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SearchMusic_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchMusic_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 搜索文字
    pub query: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SearchMusic_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SearchMusic_Request {
  type RmwMsg = super::srv::rmw::SearchMusic_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        query: msg.query.as_str().into(),
        sp: msg.sp,
        size: msg.size,
        library_mode: msg.library_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        query: msg.query.as_str().into(),
      sp: msg.sp,
      size: msg.size,
      library_mode: msg.library_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      query: msg.query.to_string(),
      sp: msg.sp,
      size: msg.size,
      library_mode: msg.library_mode,
    }
  }
}


// Corresponds to aimdk_msgs__srv__SearchMusic_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SearchMusic_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 搜索命令id
    pub search_command_id: u64,

}



impl Default for SearchMusic_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SearchMusic_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SearchMusic_Response {
  type RmwMsg = super::srv::rmw::SearchMusic_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        search_command_id: msg.search_command_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      search_command_id: msg.search_command_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      search_command_id: msg.search_command_id,
    }
  }
}


// Corresponds to aimdk_msgs__srv__RequestAudioFocus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestAudioFocus_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求焦点信息
    pub focus_requester: super::msg::FocusRequester,

}



impl Default for RequestAudioFocus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RequestAudioFocus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RequestAudioFocus_Request {
  type RmwMsg = super::srv::rmw::RequestAudioFocus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        focus_requester: super::msg::FocusRequester::into_rmw_message(std::borrow::Cow::Owned(msg.focus_requester)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        focus_requester: super::msg::FocusRequester::into_rmw_message(std::borrow::Cow::Borrowed(&msg.focus_requester)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      focus_requester: super::msg::FocusRequester::from_rmw_message(msg.focus_requester),
    }
  }
}


// Corresponds to aimdk_msgs__srv__RequestAudioFocus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestAudioFocus_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 请求结果
    pub focus_response: super::msg::FocusResponse,

}



impl Default for RequestAudioFocus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RequestAudioFocus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RequestAudioFocus_Response {
  type RmwMsg = super::srv::rmw::RequestAudioFocus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        focus_response: super::msg::FocusResponse::into_rmw_message(std::borrow::Cow::Owned(msg.focus_response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        focus_response: super::msg::FocusResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.focus_response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      focus_response: super::msg::FocusResponse::from_rmw_message(msg.focus_response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__PlayAudioFile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayAudioFile_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 文件信息
    pub file: super::msg::AudioFile,

}



impl Default for PlayAudioFile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlayAudioFile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayAudioFile_Request {
  type RmwMsg = super::srv::rmw::PlayAudioFile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Owned(msg.file)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.file)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      file: super::msg::AudioFile::from_rmw_message(msg.file),
    }
  }
}


// Corresponds to aimdk_msgs__srv__PlayAudioFile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

}



impl Default for PlayAudioFile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlayAudioFile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayAudioFile_Response {
  type RmwMsg = super::srv::rmw::PlayAudioFile_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetVolume_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVolume_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for GetVolume_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVolume_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetVolume_Request {
  type RmwMsg = super::srv::rmw::GetVolume_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetVolume_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVolume_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前音量（0~100）
    pub audio_volume: u32,

}



impl Default for GetVolume_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVolume_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetVolume_Response {
  type RmwMsg = super::srv::rmw::GetVolume_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        audio_volume: msg.audio_volume,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      audio_volume: msg.audio_volume,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      audio_volume: msg.audio_volume,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMute_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMute_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

}



impl Default for GetMute_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMute_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMute_Request {
  type RmwMsg = super::srv::rmw::GetMute_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMute_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMute_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 当前静音状态
    pub is_mute: bool,

}



impl Default for GetMute_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMute_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMute_Response {
  type RmwMsg = super::srv::rmw::GetMute_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        is_mute: msg.is_mute,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      is_mute: msg.is_mute,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      is_mute: msg.is_mute,
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMusicList_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMusicList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

}



impl Default for GetMusicList_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMusicList_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetMusicList_Request {
  type RmwMsg = super::srv::rmw::GetMusicList_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
    }
  }
}


// Corresponds to aimdk_msgs__srv__GetMusicList_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetMusicList_Response {
    /// 当前歌单
    pub music_list: Vec<super::msg::MusicInfo>,

    /// 当前播放索引，从0开始
    pub current_index: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

}



impl Default for GetMusicList_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetMusicList_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetMusicList_Response {
  type RmwMsg = super::srv::rmw::GetMusicList_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        music_list: msg.music_list
          .into_iter()
          .map(|elem| super::msg::MusicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        current_index: msg.current_index,
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        music_list: msg.music_list
          .iter()
          .map(|elem| super::msg::MusicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      current_index: msg.current_index,
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      music_list: msg.music_list
          .into_iter()
          .map(super::msg::MusicInfo::from_rmw_message)
          .collect(),
      current_index: msg.current_index,
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
    }
  }
}


// Corresponds to aimdk_msgs__srv__ControlMusic_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlMusic_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request: super::msg::CommonRequest,

    /// 控制类型
    pub control_type: i32,

    /// 播放索引（从0开始），当 control_type == CONTROL_TYPE_PLAY 时有效，用于播放歌单中指定索引对应的歌曲。缺省时，默认播放当前歌曲（机器人播放器内部维护的一个索引）。
    pub play_index: i32,

    /// 是否禁用自动播放下一首，当 control_type == CONTROL_TYPE_PLAY 时有效，默认false（默认开启自动播放下一首功能）。
    pub no_auto_next: bool,

    /// 调试参数
    pub debug_args: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlMusic_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ControlMusic_Request {
  type RmwMsg = super::srv::rmw::ControlMusic_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        control_type: msg.control_type,
        play_index: msg.play_index,
        no_auto_next: msg.no_auto_next,
        debug_args: msg.debug_args.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
      control_type: msg.control_type,
      play_index: msg.play_index,
      no_auto_next: msg.no_auto_next,
        debug_args: msg.debug_args.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      control_type: msg.control_type,
      play_index: msg.play_index,
      no_auto_next: msg.no_auto_next,
      debug_args: msg.debug_args.to_string(),
    }
  }
}


// Corresponds to aimdk_msgs__srv__ControlMusic_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlMusic_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: super::msg::CommonResponse,

    /// 控制命令id
    pub control_command_id: u64,

}



impl Default for ControlMusic_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlMusic_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ControlMusic_Response {
  type RmwMsg = super::srv::rmw::ControlMusic_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        control_command_id: msg.control_command_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      control_command_id: msg.control_command_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      control_command_id: msg.control_command_id,
    }
  }
}


// Corresponds to aimdk_msgs__srv__CaptureAudioFile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureAudioFile_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 文件信息
    pub file: super::msg::AudioFile,

    /// 可选项，文件录制时长
    /// 如未设置时长，默认一直录音，调用StopCaptureAudioFile或切换内外置麦时停止录音
    pub duration: u32,

}



impl Default for CaptureAudioFile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureAudioFile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureAudioFile_Request {
  type RmwMsg = super::srv::rmw::CaptureAudioFile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Owned(msg.file)).into_owned(),
        duration: msg.duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.file)).into_owned(),
      duration: msg.duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      file: super::msg::AudioFile::from_rmw_message(msg.file),
      duration: msg.duration,
    }
  }
}


// Corresponds to aimdk_msgs__srv__CaptureAudioFile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureAudioFile_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 必要项，表明当前麦克风类型
    pub mic_source: u32,

    /// 文件信息
    pub file: super::msg::AudioFile,

}



impl Default for CaptureAudioFile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CaptureAudioFile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CaptureAudioFile_Response {
  type RmwMsg = super::srv::rmw::CaptureAudioFile_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        mic_source: msg.mic_source,
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Owned(msg.file)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
      mic_source: msg.mic_source,
        file: super::msg::AudioFile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.file)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      mic_source: msg.mic_source,
      file: super::msg::AudioFile::from_rmw_message(msg.file),
    }
  }
}


// Corresponds to aimdk_msgs__srv__AbandonAudioFocus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AbandonAudioFocus_Request {
    /// 请求头
    pub request: super::msg::CommonRequest,

    /// 请求焦点信息
    pub focus_requester: super::msg::FocusRequester,

}



impl Default for AbandonAudioFocus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AbandonAudioFocus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AbandonAudioFocus_Request {
  type RmwMsg = super::srv::rmw::AbandonAudioFocus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Owned(msg.request)).into_owned(),
        focus_requester: super::msg::FocusRequester::into_rmw_message(std::borrow::Cow::Owned(msg.focus_requester)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: super::msg::CommonRequest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.request)).into_owned(),
        focus_requester: super::msg::FocusRequester::into_rmw_message(std::borrow::Cow::Borrowed(&msg.focus_requester)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: super::msg::CommonRequest::from_rmw_message(msg.request),
      focus_requester: super::msg::FocusRequester::from_rmw_message(msg.focus_requester),
    }
  }
}


// Corresponds to aimdk_msgs__srv__AbandonAudioFocus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AbandonAudioFocus_Response {
    /// ----------------------------------------------------
    /// response
    /// 响应头
    pub response: super::msg::CommonResponse,

    /// 请求结果
    pub focus_response: super::msg::FocusResponse,

}



impl Default for AbandonAudioFocus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AbandonAudioFocus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AbandonAudioFocus_Response {
  type RmwMsg = super::srv::rmw::AbandonAudioFocus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Owned(msg.response)).into_owned(),
        focus_response: super::msg::FocusResponse::into_rmw_message(std::borrow::Cow::Owned(msg.focus_response)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: super::msg::CommonResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.response)).into_owned(),
        focus_response: super::msg::FocusResponse::into_rmw_message(std::borrow::Cow::Borrowed(&msg.focus_response)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: super::msg::CommonResponse::from_rmw_message(msg.response),
      focus_response: super::msg::FocusResponse::from_rmw_message(msg.focus_response),
    }
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


