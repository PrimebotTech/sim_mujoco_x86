# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SetCameraSwitch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetCameraSwitch_Request(type):
    """Metaclass of message 'SetCameraSwitch_Request'."""

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
                'aimdk_msgs.srv.SetCameraSwitch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_camera_switch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_camera_switch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_camera_switch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_camera_switch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_camera_switch__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetCameraSwitch_Request(metaclass=Metaclass_SetCameraSwitch_Request):
    """Message class 'SetCameraSwitch_Request'."""

    __slots__ = [
        '_request',
        '_camera_enabled',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'camera_enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.camera_enabled = kwargs.get('camera_enabled', bool())

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
        if self.camera_enabled != other.camera_enabled:
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
    def camera_enabled(self):
        """Message field 'camera_enabled'."""
        return self._camera_enabled

    @camera_enabled.setter
    def camera_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'camera_enabled' field must be of type 'bool'"
        self._camera_enabled = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetCameraSwitch_Response(type):
    """Metaclass of message 'SetCameraSwitch_Response'."""

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
                'aimdk_msgs.srv.SetCameraSwitch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_camera_switch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_camera_switch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_camera_switch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_camera_switch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_camera_switch__response

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


class SetCameraSwitch_Response(metaclass=Metaclass_SetCameraSwitch_Response):
    """Message class 'SetCameraSwitch_Response'."""

    __slots__ = [
        '_response',
        '_camera_enabled',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'camera_enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.camera_enabled = kwargs.get('camera_enabled', bool())

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
        if self.camera_enabled != other.camera_enabled:
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
    def camera_enabled(self):
        """Message field 'camera_enabled'."""
        return self._camera_enabled

    @camera_enabled.setter
    def camera_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'camera_enabled' field must be of type 'bool'"
        self._camera_enabled = value


class Metaclass_SetCameraSwitch(type):
    """Metaclass of service 'SetCameraSwitch'."""

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
                'aimdk_msgs.srv.SetCameraSwitch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_camera_switch

            from aimdk_msgs.srv import _set_camera_switch
            if _set_camera_switch.Metaclass_SetCameraSwitch_Request._TYPE_SUPPORT is None:
                _set_camera_switch.Metaclass_SetCameraSwitch_Request.__import_type_support__()
            if _set_camera_switch.Metaclass_SetCameraSwitch_Response._TYPE_SUPPORT is None:
                _set_camera_switch.Metaclass_SetCameraSwitch_Response.__import_type_support__()


class SetCameraSwitch(metaclass=Metaclass_SetCameraSwitch):
    from aimdk_msgs.srv._set_camera_switch import SetCameraSwitch_Request as Request
    from aimdk_msgs.srv._set_camera_switch import SetCameraSwitch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
