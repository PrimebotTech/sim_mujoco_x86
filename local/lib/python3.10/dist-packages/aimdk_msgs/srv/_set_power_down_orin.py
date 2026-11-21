# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SetPowerDownOrin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPowerDownOrin_Request(type):
    """Metaclass of message 'SetPowerDownOrin_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_UNKNOWN': 0,
        'CMD_POWER_DOWN': 1,
        'CMD_REBOOT': 2,
        'CMD_EMERGENCY_POWER_DOWN': 3,
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
                'aimdk_msgs.srv.SetPowerDownOrin_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_power_down_orin__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_power_down_orin__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_power_down_orin__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_power_down_orin__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_power_down_orin__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_UNKNOWN': cls.__constants['CMD_UNKNOWN'],
            'CMD_POWER_DOWN': cls.__constants['CMD_POWER_DOWN'],
            'CMD_REBOOT': cls.__constants['CMD_REBOOT'],
            'CMD_EMERGENCY_POWER_DOWN': cls.__constants['CMD_EMERGENCY_POWER_DOWN'],
        }

    @property
    def CMD_UNKNOWN(self):
        """Message constant 'CMD_UNKNOWN'."""
        return Metaclass_SetPowerDownOrin_Request.__constants['CMD_UNKNOWN']

    @property
    def CMD_POWER_DOWN(self):
        """Message constant 'CMD_POWER_DOWN'."""
        return Metaclass_SetPowerDownOrin_Request.__constants['CMD_POWER_DOWN']

    @property
    def CMD_REBOOT(self):
        """Message constant 'CMD_REBOOT'."""
        return Metaclass_SetPowerDownOrin_Request.__constants['CMD_REBOOT']

    @property
    def CMD_EMERGENCY_POWER_DOWN(self):
        """Message constant 'CMD_EMERGENCY_POWER_DOWN'."""
        return Metaclass_SetPowerDownOrin_Request.__constants['CMD_EMERGENCY_POWER_DOWN']


class SetPowerDownOrin_Request(metaclass=Metaclass_SetPowerDownOrin_Request):
    """
    Message class 'SetPowerDownOrin_Request'.

    Constants:
      CMD_UNKNOWN
      CMD_POWER_DOWN
      CMD_REBOOT
      CMD_EMERGENCY_POWER_DOWN
    """

    __slots__ = [
        '_request',
        '_command',
        '_input_source',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'command': 'uint8',
        'input_source': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.command = kwargs.get('command', int())
        self.input_source = kwargs.get('input_source', str())

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
        if self.command != other.command:
            return False
        if self.input_source != other.input_source:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def input_source(self):
        """Message field 'input_source'."""
        return self._input_source

    @input_source.setter
    def input_source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'input_source' field must be of type 'str'"
        self._input_source = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPowerDownOrin_Response(type):
    """Metaclass of message 'SetPowerDownOrin_Response'."""

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
                'aimdk_msgs.srv.SetPowerDownOrin_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_power_down_orin__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_power_down_orin__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_power_down_orin__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_power_down_orin__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_power_down_orin__response

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


class SetPowerDownOrin_Response(metaclass=Metaclass_SetPowerDownOrin_Response):
    """Message class 'SetPowerDownOrin_Response'."""

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


class Metaclass_SetPowerDownOrin(type):
    """Metaclass of service 'SetPowerDownOrin'."""

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
                'aimdk_msgs.srv.SetPowerDownOrin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_power_down_orin

            from aimdk_msgs.srv import _set_power_down_orin
            if _set_power_down_orin.Metaclass_SetPowerDownOrin_Request._TYPE_SUPPORT is None:
                _set_power_down_orin.Metaclass_SetPowerDownOrin_Request.__import_type_support__()
            if _set_power_down_orin.Metaclass_SetPowerDownOrin_Response._TYPE_SUPPORT is None:
                _set_power_down_orin.Metaclass_SetPowerDownOrin_Response.__import_type_support__()


class SetPowerDownOrin(metaclass=Metaclass_SetPowerDownOrin):
    from aimdk_msgs.srv._set_power_down_orin import SetPowerDownOrin_Request as Request
    from aimdk_msgs.srv._set_power_down_orin import SetPowerDownOrin_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
