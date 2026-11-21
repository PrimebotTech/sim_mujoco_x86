# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/ThreadResourceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bounding_cpus'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThreadResourceInfo(type):
    """Metaclass of message 'ThreadResourceInfo'."""

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
                'aimdk_msgs.msg.ThreadResourceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thread_resource_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thread_resource_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thread_resource_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thread_resource_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thread_resource_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThreadResourceInfo(metaclass=Metaclass_ThreadResourceInfo):
    """Message class 'ThreadResourceInfo'."""

    __slots__ = [
        '_thread_id',
        '_thread_name',
        '_cpu_usage_ratio',
        '_cpu_sched_policy',
        '_cpu_sched_priority',
        '_bounding_cpus',
    ]

    _fields_and_field_types = {
        'thread_id': 'uint64',
        'thread_name': 'string',
        'cpu_usage_ratio': 'double',
        'cpu_sched_policy': 'string',
        'cpu_sched_priority': 'int32',
        'bounding_cpus': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.thread_id = kwargs.get('thread_id', int())
        self.thread_name = kwargs.get('thread_name', str())
        self.cpu_usage_ratio = kwargs.get('cpu_usage_ratio', float())
        self.cpu_sched_policy = kwargs.get('cpu_sched_policy', str())
        self.cpu_sched_priority = kwargs.get('cpu_sched_priority', int())
        self.bounding_cpus = array.array('i', kwargs.get('bounding_cpus', []))

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
        if self.thread_id != other.thread_id:
            return False
        if self.thread_name != other.thread_name:
            return False
        if self.cpu_usage_ratio != other.cpu_usage_ratio:
            return False
        if self.cpu_sched_policy != other.cpu_sched_policy:
            return False
        if self.cpu_sched_priority != other.cpu_sched_priority:
            return False
        if self.bounding_cpus != other.bounding_cpus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def thread_id(self):
        """Message field 'thread_id'."""
        return self._thread_id

    @thread_id.setter
    def thread_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'thread_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'thread_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._thread_id = value

    @builtins.property
    def thread_name(self):
        """Message field 'thread_name'."""
        return self._thread_name

    @thread_name.setter
    def thread_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'thread_name' field must be of type 'str'"
        self._thread_name = value

    @builtins.property
    def cpu_usage_ratio(self):
        """Message field 'cpu_usage_ratio'."""
        return self._cpu_usage_ratio

    @cpu_usage_ratio.setter
    def cpu_usage_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_usage_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_usage_ratio = value

    @builtins.property
    def cpu_sched_policy(self):
        """Message field 'cpu_sched_policy'."""
        return self._cpu_sched_policy

    @cpu_sched_policy.setter
    def cpu_sched_policy(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cpu_sched_policy' field must be of type 'str'"
        self._cpu_sched_policy = value

    @builtins.property
    def cpu_sched_priority(self):
        """Message field 'cpu_sched_priority'."""
        return self._cpu_sched_priority

    @cpu_sched_priority.setter
    def cpu_sched_priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cpu_sched_priority' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cpu_sched_priority' field must be an integer in [-2147483648, 2147483647]"
        self._cpu_sched_priority = value

    @builtins.property
    def bounding_cpus(self):
        """Message field 'bounding_cpus'."""
        return self._bounding_cpus

    @bounding_cpus.setter
    def bounding_cpus(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'bounding_cpus' array.array() must have the type code of 'i'"
            self._bounding_cpus = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bounding_cpus' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bounding_cpus = array.array('i', value)
