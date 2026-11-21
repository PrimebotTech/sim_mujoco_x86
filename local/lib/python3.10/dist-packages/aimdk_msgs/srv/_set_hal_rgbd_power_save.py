# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SetHalRgbdPowerSave.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetHalRgbdPowerSave_Request(type):
    """Metaclass of message 'SetHalRgbdPowerSave_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAMERA_ALL': 0,
        'CAMERA_TOF_1': 1,
        'CAMERA_TOF_2': 2,
        'CAMERA_TOF_3': 4,
        'CAMERA_TOF_4': 8,
        'CAMERA_TOF_5': 16,
        'ENTER_POWER_SAVE_MODE': 0,
        'EXIT_POWER_SAVE_MODE': 1,
        'TRIGGER_UNKNOWN': 0,
        'TRIGGER_LOW_POWER': 1,
        'TRIGGER_CHARGING': 2,
        'TRIGGER_NORMAL': 3,
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
                'aimdk_msgs.srv.SetHalRgbdPowerSave_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hal_rgbd_power_save__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hal_rgbd_power_save__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hal_rgbd_power_save__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hal_rgbd_power_save__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hal_rgbd_power_save__request

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
            'CAMERA_TOF_1': cls.__constants['CAMERA_TOF_1'],
            'CAMERA_TOF_2': cls.__constants['CAMERA_TOF_2'],
            'CAMERA_TOF_3': cls.__constants['CAMERA_TOF_3'],
            'CAMERA_TOF_4': cls.__constants['CAMERA_TOF_4'],
            'CAMERA_TOF_5': cls.__constants['CAMERA_TOF_5'],
            'ENTER_POWER_SAVE_MODE': cls.__constants['ENTER_POWER_SAVE_MODE'],
            'EXIT_POWER_SAVE_MODE': cls.__constants['EXIT_POWER_SAVE_MODE'],
            'TRIGGER_UNKNOWN': cls.__constants['TRIGGER_UNKNOWN'],
            'TRIGGER_LOW_POWER': cls.__constants['TRIGGER_LOW_POWER'],
            'TRIGGER_CHARGING': cls.__constants['TRIGGER_CHARGING'],
            'TRIGGER_NORMAL': cls.__constants['TRIGGER_NORMAL'],
        }

    @property
    def CAMERA_ALL(self):
        """Message constant 'CAMERA_ALL'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_ALL']

    @property
    def CAMERA_TOF_1(self):
        """Message constant 'CAMERA_TOF_1'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_TOF_1']

    @property
    def CAMERA_TOF_2(self):
        """Message constant 'CAMERA_TOF_2'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_TOF_2']

    @property
    def CAMERA_TOF_3(self):
        """Message constant 'CAMERA_TOF_3'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_TOF_3']

    @property
    def CAMERA_TOF_4(self):
        """Message constant 'CAMERA_TOF_4'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_TOF_4']

    @property
    def CAMERA_TOF_5(self):
        """Message constant 'CAMERA_TOF_5'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['CAMERA_TOF_5']

    @property
    def ENTER_POWER_SAVE_MODE(self):
        """Message constant 'ENTER_POWER_SAVE_MODE'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['ENTER_POWER_SAVE_MODE']

    @property
    def EXIT_POWER_SAVE_MODE(self):
        """Message constant 'EXIT_POWER_SAVE_MODE'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['EXIT_POWER_SAVE_MODE']

    @property
    def TRIGGER_UNKNOWN(self):
        """Message constant 'TRIGGER_UNKNOWN'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['TRIGGER_UNKNOWN']

    @property
    def TRIGGER_LOW_POWER(self):
        """Message constant 'TRIGGER_LOW_POWER'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['TRIGGER_LOW_POWER']

    @property
    def TRIGGER_CHARGING(self):
        """Message constant 'TRIGGER_CHARGING'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['TRIGGER_CHARGING']

    @property
    def TRIGGER_NORMAL(self):
        """Message constant 'TRIGGER_NORMAL'."""
        return Metaclass_SetHalRgbdPowerSave_Request.__constants['TRIGGER_NORMAL']


class SetHalRgbdPowerSave_Request(metaclass=Metaclass_SetHalRgbdPowerSave_Request):
    """
    Message class 'SetHalRgbdPowerSave_Request'.

    Constants:
      CAMERA_ALL
      CAMERA_TOF_1
      CAMERA_TOF_2
      CAMERA_TOF_3
      CAMERA_TOF_4
      CAMERA_TOF_5
      ENTER_POWER_SAVE_MODE
      EXIT_POWER_SAVE_MODE
      TRIGGER_UNKNOWN
      TRIGGER_LOW_POWER
      TRIGGER_CHARGING
      TRIGGER_NORMAL
    """

    __slots__ = [
        '_request',
        '_camera_mask',
        '_trigger_type',
        '_trigger_reason',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'camera_mask': 'uint32',
        'trigger_type': 'uint8',
        'trigger_reason': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.camera_mask = kwargs.get('camera_mask', int())
        self.trigger_type = kwargs.get('trigger_type', int())
        self.trigger_reason = kwargs.get('trigger_reason', int())

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
        if self.camera_mask != other.camera_mask:
            return False
        if self.trigger_type != other.trigger_type:
            return False
        if self.trigger_reason != other.trigger_reason:
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
    def camera_mask(self):
        """Message field 'camera_mask'."""
        return self._camera_mask

    @camera_mask.setter
    def camera_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'camera_mask' field must be an unsigned integer in [0, 4294967295]"
        self._camera_mask = value

    @builtins.property
    def trigger_type(self):
        """Message field 'trigger_type'."""
        return self._trigger_type

    @trigger_type.setter
    def trigger_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trigger_type' field must be an unsigned integer in [0, 255]"
        self._trigger_type = value

    @builtins.property
    def trigger_reason(self):
        """Message field 'trigger_reason'."""
        return self._trigger_reason

    @trigger_reason.setter
    def trigger_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trigger_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trigger_reason' field must be an unsigned integer in [0, 255]"
        self._trigger_reason = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetHalRgbdPowerSave_Response(type):
    """Metaclass of message 'SetHalRgbdPowerSave_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'aimdk_msgs.srv.SetHalRgbdPowerSave_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_hal_rgbd_power_save__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_hal_rgbd_power_save__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_hal_rgbd_power_save__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_hal_rgbd_power_save__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_hal_rgbd_power_save__response

            from aimdk_msgs.msg import CommonResponse
            if CommonResponse.__class__._TYPE_SUPPORT is None:
                CommonResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetHalRgbdPowerSave_Response(metaclass=Metaclass_SetHalRgbdPowerSave_Response):
    """Message class 'SetHalRgbdPowerSave_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())

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


class Metaclass_SetHalRgbdPowerSave(type):
    """Metaclass of service 'SetHalRgbdPowerSave'."""

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
                'aimdk_msgs.srv.SetHalRgbdPowerSave')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_hal_rgbd_power_save

            from aimdk_msgs.srv import _set_hal_rgbd_power_save
            if _set_hal_rgbd_power_save.Metaclass_SetHalRgbdPowerSave_Request._TYPE_SUPPORT is None:
                _set_hal_rgbd_power_save.Metaclass_SetHalRgbdPowerSave_Request.__import_type_support__()
            if _set_hal_rgbd_power_save.Metaclass_SetHalRgbdPowerSave_Response._TYPE_SUPPORT is None:
                _set_hal_rgbd_power_save.Metaclass_SetHalRgbdPowerSave_Response.__import_type_support__()


class SetHalRgbdPowerSave(metaclass=Metaclass_SetHalRgbdPowerSave):
    from aimdk_msgs.srv._set_hal_rgbd_power_save import SetHalRgbdPowerSave_Request as Request
    from aimdk_msgs.srv._set_hal_rgbd_power_save import SetHalRgbdPowerSave_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
