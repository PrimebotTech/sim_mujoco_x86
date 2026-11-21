# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/EventProbeAttr.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EventProbeAttr(type):
    """Metaclass of message 'EventProbeAttr'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EA_TYPE_DOUBLE': 0,
        'EA_TYPE_INT': 1,
        'EA_TYPE_STRING': 2,
        'EA_TYPE_BOOL': 3,
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
                'aimdk_msgs.msg.EventProbeAttr')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__event_probe_attr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__event_probe_attr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__event_probe_attr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__event_probe_attr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__event_probe_attr

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EA_TYPE_DOUBLE': cls.__constants['EA_TYPE_DOUBLE'],
            'EA_TYPE_INT': cls.__constants['EA_TYPE_INT'],
            'EA_TYPE_STRING': cls.__constants['EA_TYPE_STRING'],
            'EA_TYPE_BOOL': cls.__constants['EA_TYPE_BOOL'],
        }

    @property
    def EA_TYPE_DOUBLE(self):
        """Message constant 'EA_TYPE_DOUBLE'."""
        return Metaclass_EventProbeAttr.__constants['EA_TYPE_DOUBLE']

    @property
    def EA_TYPE_INT(self):
        """Message constant 'EA_TYPE_INT'."""
        return Metaclass_EventProbeAttr.__constants['EA_TYPE_INT']

    @property
    def EA_TYPE_STRING(self):
        """Message constant 'EA_TYPE_STRING'."""
        return Metaclass_EventProbeAttr.__constants['EA_TYPE_STRING']

    @property
    def EA_TYPE_BOOL(self):
        """Message constant 'EA_TYPE_BOOL'."""
        return Metaclass_EventProbeAttr.__constants['EA_TYPE_BOOL']


class EventProbeAttr(metaclass=Metaclass_EventProbeAttr):
    """
    Message class 'EventProbeAttr'.

    Constants:
      EA_TYPE_DOUBLE
      EA_TYPE_INT
      EA_TYPE_STRING
      EA_TYPE_BOOL
    """

    __slots__ = [
        '_key',
        '_type',
        '_value_int',
        '_value_double',
        '_value_string',
        '_value_bool',
    ]

    _fields_and_field_types = {
        'key': 'string',
        'type': 'uint8',
        'value_int': 'int64',
        'value_double': 'double',
        'value_string': 'string',
        'value_bool': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.key = kwargs.get('key', str())
        self.type = kwargs.get('type', int())
        self.value_int = kwargs.get('value_int', int())
        self.value_double = kwargs.get('value_double', float())
        self.value_string = kwargs.get('value_string', str())
        self.value_bool = kwargs.get('value_bool', bool())

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
        if self.key != other.key:
            return False
        if self.type != other.type:
            return False
        if self.value_int != other.value_int:
            return False
        if self.value_double != other.value_double:
            return False
        if self.value_string != other.value_string:
            return False
        if self.value_bool != other.value_bool:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def key(self):
        """Message field 'key'."""
        return self._key

    @key.setter
    def key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'key' field must be of type 'str'"
        self._key = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def value_int(self):
        """Message field 'value_int'."""
        return self._value_int

    @value_int.setter
    def value_int(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value_int' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'value_int' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._value_int = value

    @builtins.property
    def value_double(self):
        """Message field 'value_double'."""
        return self._value_double

    @value_double.setter
    def value_double(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value_double' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value_double' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value_double = value

    @builtins.property
    def value_string(self):
        """Message field 'value_string'."""
        return self._value_string

    @value_string.setter
    def value_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'value_string' field must be of type 'str'"
        self._value_string = value

    @builtins.property
    def value_bool(self):
        """Message field 'value_bool'."""
        return self._value_bool

    @value_bool.setter
    def value_bool(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'value_bool' field must be of type 'bool'"
        self._value_bool = value
