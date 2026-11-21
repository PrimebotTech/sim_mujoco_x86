# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/ControlMusic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMusic_Request(type):
    """Metaclass of message 'ControlMusic_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_TYPE_NONE': 0,
        'CONTROL_TYPE_PLAY': 1,
        'CONTROL_TYPE_STOP': 2,
        'CONTROL_TYPE_PAUSE': 3,
        'CONTROL_TYPE_RESUME': 4,
        'CONTROL_TYPE_PREVIOUS': 5,
        'CONTROL_TYPE_NEXT': 6,
        'CONTROL_TYPE_DEBUG': 1000,
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
                'aimdk_msgs.srv.ControlMusic_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_music__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_music__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_music__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_music__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_music__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_TYPE_NONE': cls.__constants['CONTROL_TYPE_NONE'],
            'CONTROL_TYPE_PLAY': cls.__constants['CONTROL_TYPE_PLAY'],
            'CONTROL_TYPE_STOP': cls.__constants['CONTROL_TYPE_STOP'],
            'CONTROL_TYPE_PAUSE': cls.__constants['CONTROL_TYPE_PAUSE'],
            'CONTROL_TYPE_RESUME': cls.__constants['CONTROL_TYPE_RESUME'],
            'CONTROL_TYPE_PREVIOUS': cls.__constants['CONTROL_TYPE_PREVIOUS'],
            'CONTROL_TYPE_NEXT': cls.__constants['CONTROL_TYPE_NEXT'],
            'CONTROL_TYPE_DEBUG': cls.__constants['CONTROL_TYPE_DEBUG'],
        }

    @property
    def CONTROL_TYPE_NONE(self):
        """Message constant 'CONTROL_TYPE_NONE'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_NONE']

    @property
    def CONTROL_TYPE_PLAY(self):
        """Message constant 'CONTROL_TYPE_PLAY'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_PLAY']

    @property
    def CONTROL_TYPE_STOP(self):
        """Message constant 'CONTROL_TYPE_STOP'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_STOP']

    @property
    def CONTROL_TYPE_PAUSE(self):
        """Message constant 'CONTROL_TYPE_PAUSE'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_PAUSE']

    @property
    def CONTROL_TYPE_RESUME(self):
        """Message constant 'CONTROL_TYPE_RESUME'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_RESUME']

    @property
    def CONTROL_TYPE_PREVIOUS(self):
        """Message constant 'CONTROL_TYPE_PREVIOUS'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_PREVIOUS']

    @property
    def CONTROL_TYPE_NEXT(self):
        """Message constant 'CONTROL_TYPE_NEXT'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_NEXT']

    @property
    def CONTROL_TYPE_DEBUG(self):
        """Message constant 'CONTROL_TYPE_DEBUG'."""
        return Metaclass_ControlMusic_Request.__constants['CONTROL_TYPE_DEBUG']


class ControlMusic_Request(metaclass=Metaclass_ControlMusic_Request):
    """
    Message class 'ControlMusic_Request'.

    Constants:
      CONTROL_TYPE_NONE
      CONTROL_TYPE_PLAY
      CONTROL_TYPE_STOP
      CONTROL_TYPE_PAUSE
      CONTROL_TYPE_RESUME
      CONTROL_TYPE_PREVIOUS
      CONTROL_TYPE_NEXT
      CONTROL_TYPE_DEBUG
    """

    __slots__ = [
        '_request',
        '_control_type',
        '_play_index',
        '_no_auto_next',
        '_debug_args',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'control_type': 'int32',
        'play_index': 'int32',
        'no_auto_next': 'boolean',
        'debug_args': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.control_type = kwargs.get('control_type', int())
        self.play_index = kwargs.get('play_index', int())
        self.no_auto_next = kwargs.get('no_auto_next', bool())
        self.debug_args = kwargs.get('debug_args', str())

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
        if self.control_type != other.control_type:
            return False
        if self.play_index != other.play_index:
            return False
        if self.no_auto_next != other.no_auto_next:
            return False
        if self.debug_args != other.debug_args:
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
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'control_type' field must be an integer in [-2147483648, 2147483647]"
        self._control_type = value

    @builtins.property
    def play_index(self):
        """Message field 'play_index'."""
        return self._play_index

    @play_index.setter
    def play_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'play_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'play_index' field must be an integer in [-2147483648, 2147483647]"
        self._play_index = value

    @builtins.property
    def no_auto_next(self):
        """Message field 'no_auto_next'."""
        return self._no_auto_next

    @no_auto_next.setter
    def no_auto_next(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'no_auto_next' field must be of type 'bool'"
        self._no_auto_next = value

    @builtins.property
    def debug_args(self):
        """Message field 'debug_args'."""
        return self._debug_args

    @debug_args.setter
    def debug_args(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'debug_args' field must be of type 'str'"
        self._debug_args = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlMusic_Response(type):
    """Metaclass of message 'ControlMusic_Response'."""

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
                'aimdk_msgs.srv.ControlMusic_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_music__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_music__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_music__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_music__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_music__response

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


class ControlMusic_Response(metaclass=Metaclass_ControlMusic_Response):
    """Message class 'ControlMusic_Response'."""

    __slots__ = [
        '_response',
        '_control_command_id',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'control_command_id': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.control_command_id = kwargs.get('control_command_id', int())

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
        if self.control_command_id != other.control_command_id:
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
    def control_command_id(self):
        """Message field 'control_command_id'."""
        return self._control_command_id

    @control_command_id.setter
    def control_command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_command_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'control_command_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._control_command_id = value


class Metaclass_ControlMusic(type):
    """Metaclass of service 'ControlMusic'."""

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
                'aimdk_msgs.srv.ControlMusic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_music

            from aimdk_msgs.srv import _control_music
            if _control_music.Metaclass_ControlMusic_Request._TYPE_SUPPORT is None:
                _control_music.Metaclass_ControlMusic_Request.__import_type_support__()
            if _control_music.Metaclass_ControlMusic_Response._TYPE_SUPPORT is None:
                _control_music.Metaclass_ControlMusic_Response.__import_type_support__()


class ControlMusic(metaclass=Metaclass_ControlMusic):
    from aimdk_msgs.srv._control_music import ControlMusic_Request as Request
    from aimdk_msgs.srv._control_music import ControlMusic_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
