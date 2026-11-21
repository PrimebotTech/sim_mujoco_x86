# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/TouchState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TouchState(type):
    """Metaclass of message 'TouchState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TOUCH_EVENT_NONE': 0,
        'TOUCH_EVENT_SINGLE_CLICK': 1,
        'TOUCH_EVENT_DOUBLE_CLICK': 2,
        'TOUCH_EVENT_TRIPLE_CLICK': 3,
        'TOUCH_EVENT_QUADRUPLE_CLICK': 4,
        'TOUCH_EVENT_QUINTUPLE_CLICK': 5,
        'TOUCH_EVENT_SEXTUPLE_CLICK': 6,
        'TOUCH_EVENT_MULTI_CLICK': 7,
        'TOUCH_EVENT_SLIDE_LEFT': 8,
        'TOUCH_EVENT_SLIDE_RIGHT': 9,
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
                'aimdk_msgs.msg.TouchState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__touch_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__touch_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__touch_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__touch_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__touch_state

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOUCH_EVENT_NONE': cls.__constants['TOUCH_EVENT_NONE'],
            'TOUCH_EVENT_SINGLE_CLICK': cls.__constants['TOUCH_EVENT_SINGLE_CLICK'],
            'TOUCH_EVENT_DOUBLE_CLICK': cls.__constants['TOUCH_EVENT_DOUBLE_CLICK'],
            'TOUCH_EVENT_TRIPLE_CLICK': cls.__constants['TOUCH_EVENT_TRIPLE_CLICK'],
            'TOUCH_EVENT_QUADRUPLE_CLICK': cls.__constants['TOUCH_EVENT_QUADRUPLE_CLICK'],
            'TOUCH_EVENT_QUINTUPLE_CLICK': cls.__constants['TOUCH_EVENT_QUINTUPLE_CLICK'],
            'TOUCH_EVENT_SEXTUPLE_CLICK': cls.__constants['TOUCH_EVENT_SEXTUPLE_CLICK'],
            'TOUCH_EVENT_MULTI_CLICK': cls.__constants['TOUCH_EVENT_MULTI_CLICK'],
            'TOUCH_EVENT_SLIDE_LEFT': cls.__constants['TOUCH_EVENT_SLIDE_LEFT'],
            'TOUCH_EVENT_SLIDE_RIGHT': cls.__constants['TOUCH_EVENT_SLIDE_RIGHT'],
        }

    @property
    def TOUCH_EVENT_NONE(self):
        """Message constant 'TOUCH_EVENT_NONE'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_NONE']

    @property
    def TOUCH_EVENT_SINGLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_SINGLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_SINGLE_CLICK']

    @property
    def TOUCH_EVENT_DOUBLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_DOUBLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_DOUBLE_CLICK']

    @property
    def TOUCH_EVENT_TRIPLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_TRIPLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_TRIPLE_CLICK']

    @property
    def TOUCH_EVENT_QUADRUPLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_QUADRUPLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_QUADRUPLE_CLICK']

    @property
    def TOUCH_EVENT_QUINTUPLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_QUINTUPLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_QUINTUPLE_CLICK']

    @property
    def TOUCH_EVENT_SEXTUPLE_CLICK(self):
        """Message constant 'TOUCH_EVENT_SEXTUPLE_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_SEXTUPLE_CLICK']

    @property
    def TOUCH_EVENT_MULTI_CLICK(self):
        """Message constant 'TOUCH_EVENT_MULTI_CLICK'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_MULTI_CLICK']

    @property
    def TOUCH_EVENT_SLIDE_LEFT(self):
        """Message constant 'TOUCH_EVENT_SLIDE_LEFT'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_SLIDE_LEFT']

    @property
    def TOUCH_EVENT_SLIDE_RIGHT(self):
        """Message constant 'TOUCH_EVENT_SLIDE_RIGHT'."""
        return Metaclass_TouchState.__constants['TOUCH_EVENT_SLIDE_RIGHT']


class TouchState(metaclass=Metaclass_TouchState):
    """
    Message class 'TouchState'.

    Constants:
      TOUCH_EVENT_NONE
      TOUCH_EVENT_SINGLE_CLICK
      TOUCH_EVENT_DOUBLE_CLICK
      TOUCH_EVENT_TRIPLE_CLICK
      TOUCH_EVENT_QUADRUPLE_CLICK
      TOUCH_EVENT_QUINTUPLE_CLICK
      TOUCH_EVENT_SEXTUPLE_CLICK
      TOUCH_EVENT_MULTI_CLICK
      TOUCH_EVENT_SLIDE_LEFT
      TOUCH_EVENT_SLIDE_RIGHT
    """

    __slots__ = [
        '_header',
        '_sensor_id',
        '_event_type',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'sensor_id': 'uint8',
        'event_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.sensor_id = kwargs.get('sensor_id', int())
        self.event_type = kwargs.get('event_type', int())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.event_type != other.event_type:
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
            from aimdk_msgs.msg import MessageHeader
            assert \
                isinstance(value, MessageHeader), \
                "The 'header' field must be a sub message of type 'MessageHeader'"
        self._header = value

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_id' field must be an unsigned integer in [0, 255]"
        self._sensor_id = value

    @builtins.property
    def event_type(self):
        """Message field 'event_type'."""
        return self._event_type

    @event_type.setter
    def event_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event_type' field must be an unsigned integer in [0, 255]"
        self._event_type = value
