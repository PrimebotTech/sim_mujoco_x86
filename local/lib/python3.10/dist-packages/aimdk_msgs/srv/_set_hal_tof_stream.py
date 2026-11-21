# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SetHalTofStream.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetHalTofStream_Request(type):
    """Metaclass of message 'SetHalTofStream_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAMERA_ALL': 31,
        'CAMERA_TOF_0': 1,
        'CAMERA_TOF_1': 2,
        'CAMERA_TOF_2': 4,
        'CAMERA_TOF_3': 8,
        'CAMERA_TOF_4': 16,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.srv.SetHalTofStream_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hal_tof_stream__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hal_tof_stream__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hal_tof_stream__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hal_tof_stream__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hal_tof_stream__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAMERA_ALL': cls.__constants['CAMERA_ALL'],
            'CAMERA_TOF_0': cls.__constants['CAMERA_TOF_0'],
            'CAMERA_TOF_1': cls.__constants['CAMERA_TOF_1'],
            'CAMERA_TOF_2': cls.__constants['CAMERA_TOF_2'],
            'CAMERA_TOF_3': cls.__constants['CAMERA_TOF_3'],
            'CAMERA_TOF_4': cls.__constants['CAMERA_TOF_4'],
        }

    @property
    def CAMERA_ALL(self):
        """Message constant 'CAMERA_ALL'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_ALL']

    @property
    def CAMERA_TOF_0(self):
        """Message constant 'CAMERA_TOF_0'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_TOF_0']

    @property
    def CAMERA_TOF_1(self):
        """Message constant 'CAMERA_TOF_1'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_TOF_1']

    @property
    def CAMERA_TOF_2(self):
        """Message constant 'CAMERA_TOF_2'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_TOF_2']

    @property
    def CAMERA_TOF_3(self):
        """Message constant 'CAMERA_TOF_3'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_TOF_3']

    @property
    def CAMERA_TOF_4(self):
        """Message constant 'CAMERA_TOF_4'."""
        return Metaclass_SetHalTofStream_Request.__constants['CAMERA_TOF_4']


class SetHalTofStream_Request(metaclass=Metaclass_SetHalTofStream_Request):
    """
    Message class 'SetHalTofStream_Request'.

    Constants:
      CAMERA_ALL
      CAMERA_TOF_0
      CAMERA_TOF_1
      CAMERA_TOF_2
      CAMERA_TOF_3
      CAMERA_TOF_4
    """

    __slots__ = [
        '_request',
        '_trace_id',
        '_power_ctrl_mask',
        '_stream_ctrl_mask',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'trace_id': 'string',
        'power_ctrl_mask': 'uint32',
        'stream_ctrl_mask': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.trace_id = kwargs.get('trace_id', str())
        self.power_ctrl_mask = kwargs.get('power_ctrl_mask', int())
        self.stream_ctrl_mask = kwargs.get('stream_ctrl_mask', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.request != other.request:
            return False
        if self.trace_id != other.trace_id:
            return False
        if self.power_ctrl_mask != other.power_ctrl_mask:
            return False
        if self.stream_ctrl_mask != other.stream_ctrl_mask:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonRequest
            assert \
                isinstance(value, CommonRequest), \
                "The 'request' field must be a sub message of type 'CommonRequest'"
        self._request = value

    @builtins.property
    def trace_id(self):
        """Message field 'trace_id'."""
        return self._trace_id

    @trace_id.setter
    def trace_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'trace_id' field must be of type 'str'"
        self._trace_id = value

    @builtins.property
    def power_ctrl_mask(self):
        """Message field 'power_ctrl_mask'."""
        return self._power_ctrl_mask

    @power_ctrl_mask.setter
    def power_ctrl_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_ctrl_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'power_ctrl_mask' field must be an unsigned integer in [0, 4294967295]"
        self._power_ctrl_mask = value

    @builtins.property
    def stream_ctrl_mask(self):
        """Message field 'stream_ctrl_mask'."""
        return self._stream_ctrl_mask

    @stream_ctrl_mask.setter
    def stream_ctrl_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stream_ctrl_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stream_ctrl_mask' field must be an unsigned integer in [0, 4294967295]"
        self._stream_ctrl_mask = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetHalTofStream_Response(type):
    """Metaclass of message 'SetHalTofStream_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SWITCH_FAILED': 0,
        'SWITCH_SUCCESS': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.srv.SetHalTofStream_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hal_tof_stream__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hal_tof_stream__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hal_tof_stream__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hal_tof_stream__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hal_tof_stream__response

            from aimdk_msgs.msg import CommonResponse
            if CommonResponse.__class__._TYPE_SUPPORT is None:
                CommonResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SWITCH_FAILED': cls.__constants['SWITCH_FAILED'],
            'SWITCH_SUCCESS': cls.__constants['SWITCH_SUCCESS'],
        }

    @property
    def SWITCH_FAILED(self):
        """Message constant 'SWITCH_FAILED'."""
        return Metaclass_SetHalTofStream_Response.__constants['SWITCH_FAILED']

    @property
    def SWITCH_SUCCESS(self):
        """Message constant 'SWITCH_SUCCESS'."""
        return Metaclass_SetHalTofStream_Response.__constants['SWITCH_SUCCESS']


class SetHalTofStream_Response(metaclass=Metaclass_SetHalTofStream_Response):
    """
    Message class 'SetHalTofStream_Response'.

    Constants:
      SWITCH_FAILED
      SWITCH_SUCCESS
    """

    __slots__ = [
        '_response',
        '_trace_id',
        '_switch_state',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'trace_id': 'string',
        'switch_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.trace_id = kwargs.get('trace_id', str())
        self.switch_state = kwargs.get('switch_state', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.response != other.response:
            return False
        if self.trace_id != other.trace_id:
            return False
        if self.switch_state != other.switch_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonResponse
            assert \
                isinstance(value, CommonResponse), \
                "The 'response' field must be a sub message of type 'CommonResponse'"
        self._response = value

    @builtins.property
    def trace_id(self):
        """Message field 'trace_id'."""
        return self._trace_id

    @trace_id.setter
    def trace_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'trace_id' field must be of type 'str'"
        self._trace_id = value

    @builtins.property
    def switch_state(self):
        """Message field 'switch_state'."""
        return self._switch_state

    @switch_state.setter
    def switch_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'switch_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'switch_state' field must be an unsigned integer in [0, 255]"
        self._switch_state = value


class Metaclass_SetHalTofStream(type):
    """Metaclass of service 'SetHalTofStream'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.srv.SetHalTofStream')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_hal_tof_stream

            from aimdk_msgs.srv import _set_hal_tof_stream
            if _set_hal_tof_stream.Metaclass_SetHalTofStream_Request._TYPE_SUPPORT is None:
                _set_hal_tof_stream.Metaclass_SetHalTofStream_Request.__import_type_support__()
            if _set_hal_tof_stream.Metaclass_SetHalTofStream_Response._TYPE_SUPPORT is None:
                _set_hal_tof_stream.Metaclass_SetHalTofStream_Response.__import_type_support__()


class SetHalTofStream(metaclass=Metaclass_SetHalTofStream):
    from aimdk_msgs.srv._set_hal_tof_stream import SetHalTofStream_Request as Request
    from aimdk_msgs.srv._set_hal_tof_stream import SetHalTofStream_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
