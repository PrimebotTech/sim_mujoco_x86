# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/LedStripCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedStripCommand_Request(type):
    """Metaclass of message 'LedStripCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LED_ALL_OFF': 0,
        'LED_GREEN_FLOW': 1,
        'LED_RAINBOW': 2,
        'LED_DANCING': 3,
        'LED_TWINKLE': 4,
        'LED_TAIL_INCREASE': 5,
        'LED_TAIL_DECREASE': 6,
        'LED_FOUR_TO_TWO_LEGS': 7,
        'LED_TWO_TO_FOUR_LEGS': 8,
        'LED_START_UP': 9,
        'LED_DISPLAY_CHARGING': 10,
        'LED_DISPLAY_FAULT': 11,
        'LED_DISPLAY_25_LOW_BATTERY': 12,
        'LED_DISPLAY_15_LOW_BATTERY': 13,
        'LED_DISPLAY_POWER_OFF': 14,
        'LED_DISPLAY_POWER_ON': 15,
        'LED_WHITE_FLOW': 16,
        'LED_WHITE_ON': 17,
        'LED_DISPLAY_25_LOW_TRANSFORM': 18,
        'LED_DISPLAY_15_LOW_TRANSFORM': 19,
        'LED_WHITE_BREATH': 20,
        'LED_CUSTOM_BREATH': 254,
        'LED_CUSTOM_BLINK': 255,
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
                'aimdk_msgs.srv.LedStripCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_strip_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_strip_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_strip_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_strip_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_strip_command__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LED_ALL_OFF': cls.__constants['LED_ALL_OFF'],
            'LED_GREEN_FLOW': cls.__constants['LED_GREEN_FLOW'],
            'LED_RAINBOW': cls.__constants['LED_RAINBOW'],
            'LED_DANCING': cls.__constants['LED_DANCING'],
            'LED_TWINKLE': cls.__constants['LED_TWINKLE'],
            'LED_TAIL_INCREASE': cls.__constants['LED_TAIL_INCREASE'],
            'LED_TAIL_DECREASE': cls.__constants['LED_TAIL_DECREASE'],
            'LED_FOUR_TO_TWO_LEGS': cls.__constants['LED_FOUR_TO_TWO_LEGS'],
            'LED_TWO_TO_FOUR_LEGS': cls.__constants['LED_TWO_TO_FOUR_LEGS'],
            'LED_START_UP': cls.__constants['LED_START_UP'],
            'LED_DISPLAY_CHARGING': cls.__constants['LED_DISPLAY_CHARGING'],
            'LED_DISPLAY_FAULT': cls.__constants['LED_DISPLAY_FAULT'],
            'LED_DISPLAY_25_LOW_BATTERY': cls.__constants['LED_DISPLAY_25_LOW_BATTERY'],
            'LED_DISPLAY_15_LOW_BATTERY': cls.__constants['LED_DISPLAY_15_LOW_BATTERY'],
            'LED_DISPLAY_POWER_OFF': cls.__constants['LED_DISPLAY_POWER_OFF'],
            'LED_DISPLAY_POWER_ON': cls.__constants['LED_DISPLAY_POWER_ON'],
            'LED_WHITE_FLOW': cls.__constants['LED_WHITE_FLOW'],
            'LED_WHITE_ON': cls.__constants['LED_WHITE_ON'],
            'LED_DISPLAY_25_LOW_TRANSFORM': cls.__constants['LED_DISPLAY_25_LOW_TRANSFORM'],
            'LED_DISPLAY_15_LOW_TRANSFORM': cls.__constants['LED_DISPLAY_15_LOW_TRANSFORM'],
            'LED_WHITE_BREATH': cls.__constants['LED_WHITE_BREATH'],
            'LED_CUSTOM_BREATH': cls.__constants['LED_CUSTOM_BREATH'],
            'LED_CUSTOM_BLINK': cls.__constants['LED_CUSTOM_BLINK'],
        }

    @property
    def LED_ALL_OFF(self):
        """Message constant 'LED_ALL_OFF'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_ALL_OFF']

    @property
    def LED_GREEN_FLOW(self):
        """Message constant 'LED_GREEN_FLOW'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_GREEN_FLOW']

    @property
    def LED_RAINBOW(self):
        """Message constant 'LED_RAINBOW'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_RAINBOW']

    @property
    def LED_DANCING(self):
        """Message constant 'LED_DANCING'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DANCING']

    @property
    def LED_TWINKLE(self):
        """Message constant 'LED_TWINKLE'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_TWINKLE']

    @property
    def LED_TAIL_INCREASE(self):
        """Message constant 'LED_TAIL_INCREASE'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_TAIL_INCREASE']

    @property
    def LED_TAIL_DECREASE(self):
        """Message constant 'LED_TAIL_DECREASE'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_TAIL_DECREASE']

    @property
    def LED_FOUR_TO_TWO_LEGS(self):
        """Message constant 'LED_FOUR_TO_TWO_LEGS'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_FOUR_TO_TWO_LEGS']

    @property
    def LED_TWO_TO_FOUR_LEGS(self):
        """Message constant 'LED_TWO_TO_FOUR_LEGS'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_TWO_TO_FOUR_LEGS']

    @property
    def LED_START_UP(self):
        """Message constant 'LED_START_UP'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_START_UP']

    @property
    def LED_DISPLAY_CHARGING(self):
        """Message constant 'LED_DISPLAY_CHARGING'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_CHARGING']

    @property
    def LED_DISPLAY_FAULT(self):
        """Message constant 'LED_DISPLAY_FAULT'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_FAULT']

    @property
    def LED_DISPLAY_25_LOW_BATTERY(self):
        """Message constant 'LED_DISPLAY_25_LOW_BATTERY'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_25_LOW_BATTERY']

    @property
    def LED_DISPLAY_15_LOW_BATTERY(self):
        """Message constant 'LED_DISPLAY_15_LOW_BATTERY'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_15_LOW_BATTERY']

    @property
    def LED_DISPLAY_POWER_OFF(self):
        """Message constant 'LED_DISPLAY_POWER_OFF'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_POWER_OFF']

    @property
    def LED_DISPLAY_POWER_ON(self):
        """Message constant 'LED_DISPLAY_POWER_ON'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_POWER_ON']

    @property
    def LED_WHITE_FLOW(self):
        """Message constant 'LED_WHITE_FLOW'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_WHITE_FLOW']

    @property
    def LED_WHITE_ON(self):
        """Message constant 'LED_WHITE_ON'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_WHITE_ON']

    @property
    def LED_DISPLAY_25_LOW_TRANSFORM(self):
        """Message constant 'LED_DISPLAY_25_LOW_TRANSFORM'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_25_LOW_TRANSFORM']

    @property
    def LED_DISPLAY_15_LOW_TRANSFORM(self):
        """Message constant 'LED_DISPLAY_15_LOW_TRANSFORM'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_DISPLAY_15_LOW_TRANSFORM']

    @property
    def LED_WHITE_BREATH(self):
        """Message constant 'LED_WHITE_BREATH'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_WHITE_BREATH']

    @property
    def LED_CUSTOM_BREATH(self):
        """Message constant 'LED_CUSTOM_BREATH'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_CUSTOM_BREATH']

    @property
    def LED_CUSTOM_BLINK(self):
        """Message constant 'LED_CUSTOM_BLINK'."""
        return Metaclass_LedStripCommand_Request.__constants['LED_CUSTOM_BLINK']


class LedStripCommand_Request(metaclass=Metaclass_LedStripCommand_Request):
    """
    Message class 'LedStripCommand_Request'.

    Constants:
      LED_ALL_OFF
      LED_GREEN_FLOW
      LED_RAINBOW
      LED_DANCING
      LED_TWINKLE
      LED_TAIL_INCREASE
      LED_TAIL_DECREASE
      LED_FOUR_TO_TWO_LEGS
      LED_TWO_TO_FOUR_LEGS
      LED_START_UP
      LED_DISPLAY_CHARGING
      LED_DISPLAY_FAULT
      LED_DISPLAY_25_LOW_BATTERY
      LED_DISPLAY_15_LOW_BATTERY
      LED_DISPLAY_POWER_OFF
      LED_DISPLAY_POWER_ON
      LED_WHITE_FLOW
      LED_WHITE_ON
      LED_DISPLAY_25_LOW_TRANSFORM
      LED_DISPLAY_15_LOW_TRANSFORM
      LED_WHITE_BREATH
      LED_CUSTOM_BREATH
      LED_CUSTOM_BLINK
    """

    __slots__ = [
        '_request',
        '_led_strip_mode',
        '_r',
        '_g',
        '_b',
        '_period',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'led_strip_mode': 'uint8',
        'r': 'uint8',
        'g': 'uint8',
        'b': 'uint8',
        'period': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.led_strip_mode = kwargs.get('led_strip_mode', int())
        self.r = kwargs.get('r', int())
        self.g = kwargs.get('g', int())
        self.b = kwargs.get('b', int())
        self.period = kwargs.get('period', int())

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
        if self.led_strip_mode != other.led_strip_mode:
            return False
        if self.r != other.r:
            return False
        if self.g != other.g:
            return False
        if self.b != other.b:
            return False
        if self.period != other.period:
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
    def led_strip_mode(self):
        """Message field 'led_strip_mode'."""
        return self._led_strip_mode

    @led_strip_mode.setter
    def led_strip_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_strip_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_strip_mode' field must be an unsigned integer in [0, 255]"
        self._led_strip_mode = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'r' field must be an unsigned integer in [0, 255]"
        self._r = value

    @builtins.property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'g' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'g' field must be an unsigned integer in [0, 255]"
        self._g = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'b' field must be an unsigned integer in [0, 255]"
        self._b = value

    @builtins.property
    def period(self):
        """Message field 'period'."""
        return self._period

    @period.setter
    def period(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'period' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'period' field must be an unsigned integer in [0, 65535]"
        self._period = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LedStripCommand_Response(type):
    """Metaclass of message 'LedStripCommand_Response'."""

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
                'aimdk_msgs.srv.LedStripCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_strip_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_strip_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_strip_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_strip_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_strip_command__response

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


class LedStripCommand_Response(metaclass=Metaclass_LedStripCommand_Response):
    """Message class 'LedStripCommand_Response'."""

    __slots__ = [
        '_header',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/CommonResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.header = kwargs.get('header', CommonResponse())

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
        if self.header != other.header:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonResponse
            assert \
                isinstance(value, CommonResponse), \
                "The 'header' field must be a sub message of type 'CommonResponse'"
        self._header = value


class Metaclass_LedStripCommand(type):
    """Metaclass of service 'LedStripCommand'."""

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
                'aimdk_msgs.srv.LedStripCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__led_strip_command

            from aimdk_msgs.srv import _led_strip_command
            if _led_strip_command.Metaclass_LedStripCommand_Request._TYPE_SUPPORT is None:
                _led_strip_command.Metaclass_LedStripCommand_Request.__import_type_support__()
            if _led_strip_command.Metaclass_LedStripCommand_Response._TYPE_SUPPORT is None:
                _led_strip_command.Metaclass_LedStripCommand_Response.__import_type_support__()


class LedStripCommand(metaclass=Metaclass_LedStripCommand):
    from aimdk_msgs.srv._led_strip_command import LedStripCommand_Request as Request
    from aimdk_msgs.srv._led_strip_command import LedStripCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
