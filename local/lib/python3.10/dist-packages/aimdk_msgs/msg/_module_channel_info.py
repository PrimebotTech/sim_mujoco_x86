# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/ModuleChannelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModuleChannelInfo(type):
    """Metaclass of message 'ModuleChannelInfo'."""

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
                'aimdk_msgs.msg.ModuleChannelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__module_channel_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__module_channel_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__module_channel_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__module_channel_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__module_channel_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModuleChannelInfo(metaclass=Metaclass_ModuleChannelInfo):
    """Message class 'ModuleChannelInfo'."""

    __slots__ = [
        '_name',
        '_type',
        '_frequency',
        '_min_time_diff',
        '_max_time_diff',
        '_std_dev',
        '_window_size',
        '_timeout_threshold',
        '_is_active',
        '_backends',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'string',
        'frequency': 'double',
        'min_time_diff': 'double',
        'max_time_diff': 'double',
        'std_dev': 'double',
        'window_size': 'int32',
        'timeout_threshold': 'double',
        'is_active': 'boolean',
        'backends': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', str())
        self.frequency = kwargs.get('frequency', float())
        self.min_time_diff = kwargs.get('min_time_diff', float())
        self.max_time_diff = kwargs.get('max_time_diff', float())
        self.std_dev = kwargs.get('std_dev', float())
        self.window_size = kwargs.get('window_size', int())
        self.timeout_threshold = kwargs.get('timeout_threshold', float())
        self.is_active = kwargs.get('is_active', bool())
        self.backends = kwargs.get('backends', [])

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
        if self.name != other.name:
            return False
        if self.type != other.type:
            return False
        if self.frequency != other.frequency:
            return False
        if self.min_time_diff != other.min_time_diff:
            return False
        if self.max_time_diff != other.max_time_diff:
            return False
        if self.std_dev != other.std_dev:
            return False
        if self.window_size != other.window_size:
            return False
        if self.timeout_threshold != other.timeout_threshold:
            return False
        if self.is_active != other.is_active:
            return False
        if self.backends != other.backends:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'frequency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._frequency = value

    @builtins.property
    def min_time_diff(self):
        """Message field 'min_time_diff'."""
        return self._min_time_diff

    @min_time_diff.setter
    def min_time_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_time_diff' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_time_diff' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_time_diff = value

    @builtins.property
    def max_time_diff(self):
        """Message field 'max_time_diff'."""
        return self._max_time_diff

    @max_time_diff.setter
    def max_time_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_time_diff' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_time_diff' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_time_diff = value

    @builtins.property
    def std_dev(self):
        """Message field 'std_dev'."""
        return self._std_dev

    @std_dev.setter
    def std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'std_dev' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._std_dev = value

    @builtins.property
    def window_size(self):
        """Message field 'window_size'."""
        return self._window_size

    @window_size.setter
    def window_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'window_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'window_size' field must be an integer in [-2147483648, 2147483647]"
        self._window_size = value

    @builtins.property
    def timeout_threshold(self):
        """Message field 'timeout_threshold'."""
        return self._timeout_threshold

    @timeout_threshold.setter
    def timeout_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timeout_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timeout_threshold = value

    @builtins.property
    def is_active(self):
        """Message field 'is_active'."""
        return self._is_active

    @is_active.setter
    def is_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_active' field must be of type 'bool'"
        self._is_active = value

    @builtins.property
    def backends(self):
        """Message field 'backends'."""
        return self._backends

    @backends.setter
    def backends(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'backends' field must be a set or sequence and each value of type 'str'"
        self._backends = value
