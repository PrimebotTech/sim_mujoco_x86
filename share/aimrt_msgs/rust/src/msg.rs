#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to aimrt_msgs__msg__MessageHeader
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
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        frame_id: msg.frame_id.as_str().into(),
      sequence: msg.sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      frame_id: msg.frame_id.to_string(),
      sequence: msg.sequence,
    }
  }
}


// Corresponds to aimrt_msgs__msg__TouchSensorStateArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensorStateArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: super::msg::MessageHeader,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::TouchSensorState>,

}



impl Default for TouchSensorStateArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TouchSensorStateArray::default())
  }
}

impl rosidl_runtime_rs::Message for TouchSensorStateArray {
  type RmwMsg = super::msg::rmw::TouchSensorStateArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::TouchSensorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MessageHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::TouchSensorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MessageHeader::from_rmw_message(msg.header),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::TouchSensorState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aimrt_msgs__msg__TouchSensorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TouchSensorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pressure: Vec<i16>,

}



impl Default for TouchSensorState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TouchSensorState::default())
  }
}

impl rosidl_runtime_rs::Message for TouchSensorState {
  type RmwMsg = super::msg::rmw::TouchSensorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pressure: msg.pressure.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pressure: msg.pressure.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pressure: msg.pressure.into(),
    }
  }
}


// Corresponds to aimrt_msgs__msg__JointStateArray

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


// Corresponds to aimrt_msgs__msg__JointState

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


// Corresponds to aimrt_msgs__msg__JointCommandArray

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


// Corresponds to aimrt_msgs__msg__JointCommand

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


