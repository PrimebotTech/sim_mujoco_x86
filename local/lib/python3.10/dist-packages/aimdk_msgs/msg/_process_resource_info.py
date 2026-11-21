# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/ProcessResourceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProcessResourceInfo(type):
    """Metaclass of message 'ProcessResourceInfo'."""

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
                'aimdk_msgs.msg.ProcessResourceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__process_resource_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__process_resource_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__process_resource_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__process_resource_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__process_resource_info

            from aimdk_msgs.msg import ThreadResourceInfo
            if ThreadResourceInfo.__class__._TYPE_SUPPORT is None:
                ThreadResourceInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProcessResourceInfo(metaclass=Metaclass_ProcessResourceInfo):
    """Message class 'ProcessResourceInfo'."""

    __slots__ = [
        '_process_id',
        '_process_name',
        '_process_mem_usage',
        '_process_mem_usage_ratio',
        '_process_cpu_usage_ratio',
        '_thread_count',
        '_threads',
    ]

    _fields_and_field_types = {
        'process_id': 'uint64',
        'process_name': 'string',
        'process_mem_usage': 'uint64',
        'process_mem_usage_ratio': 'double',
        'process_cpu_usage_ratio': 'double',
        'thread_count': 'uint64',
        'threads': 'sequence<aimdk_msgs/ThreadResourceInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ThreadResourceInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.process_id = kwargs.get('process_id', int())
        self.process_name = kwargs.get('process_name', str())
        self.process_mem_usage = kwargs.get('process_mem_usage', int())
        self.process_mem_usage_ratio = kwargs.get('process_mem_usage_ratio', float())
        self.process_cpu_usage_ratio = kwargs.get('process_cpu_usage_ratio', float())
        self.thread_count = kwargs.get('thread_count', int())
        self.threads = kwargs.get('threads', [])

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
        if self.process_id != other.process_id:
            return False
        if self.process_name != other.process_name:
            return False
        if self.process_mem_usage != other.process_mem_usage:
            return False
        if self.process_mem_usage_ratio != other.process_mem_usage_ratio:
            return False
        if self.process_cpu_usage_ratio != other.process_cpu_usage_ratio:
            return False
        if self.thread_count != other.thread_count:
            return False
        if self.threads != other.threads:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def process_id(self):
        """Message field 'process_id'."""
        return self._process_id

    @process_id.setter
    def process_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'process_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'process_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._process_id = value

    @builtins.property
    def process_name(self):
        """Message field 'process_name'."""
        return self._process_name

    @process_name.setter
    def process_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'process_name' field must be of type 'str'"
        self._process_name = value

    @builtins.property
    def process_mem_usage(self):
        """Message field 'process_mem_usage'."""
        return self._process_mem_usage

    @process_mem_usage.setter
    def process_mem_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'process_mem_usage' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'process_mem_usage' field must be an unsigned integer in [0, 18446744073709551615]"
        self._process_mem_usage = value

    @builtins.property
    def process_mem_usage_ratio(self):
        """Message field 'process_mem_usage_ratio'."""
        return self._process_mem_usage_ratio

    @process_mem_usage_ratio.setter
    def process_mem_usage_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_mem_usage_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_mem_usage_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_mem_usage_ratio = value

    @builtins.property
    def process_cpu_usage_ratio(self):
        """Message field 'process_cpu_usage_ratio'."""
        return self._process_cpu_usage_ratio

    @process_cpu_usage_ratio.setter
    def process_cpu_usage_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_cpu_usage_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_cpu_usage_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_cpu_usage_ratio = value

    @builtins.property
    def thread_count(self):
        """Message field 'thread_count'."""
        return self._thread_count

    @thread_count.setter
    def thread_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'thread_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'thread_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._thread_count = value

    @builtins.property
    def threads(self):
        """Message field 'threads'."""
        return self._threads

    @threads.setter
    def threads(self, value):
        if __debug__:
            from aimdk_msgs.msg import ThreadResourceInfo
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
                 all(isinstance(v, ThreadResourceInfo) for v in value) and
                 True), \
                "The 'threads' field must be a set or sequence and each value of type 'ThreadResourceInfo'"
        self._threads = value
