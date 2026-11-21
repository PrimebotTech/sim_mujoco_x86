# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/EventProbeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EventProbeInfo(type):
    """Metaclass of message 'EventProbeInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EA_STATUS_DEFAULT': 0,
        'EA_STATUS_START': 1,
        'EA_STATUS_END': 2,
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
                'aimdk_msgs.msg.EventProbeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__event_probe_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__event_probe_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__event_probe_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__event_probe_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__event_probe_info

            from aimdk_msgs.msg import EventProbeAttr
            if EventProbeAttr.__class__._TYPE_SUPPORT is None:
                EventProbeAttr.__class__.__import_type_support__()

            from aimdk_msgs.msg import EventProbeType
            if EventProbeType.__class__._TYPE_SUPPORT is None:
                EventProbeType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EA_STATUS_DEFAULT': cls.__constants['EA_STATUS_DEFAULT'],
            'EA_STATUS_START': cls.__constants['EA_STATUS_START'],
            'EA_STATUS_END': cls.__constants['EA_STATUS_END'],
        }

    @property
    def EA_STATUS_DEFAULT(self):
        """Message constant 'EA_STATUS_DEFAULT'."""
        return Metaclass_EventProbeInfo.__constants['EA_STATUS_DEFAULT']

    @property
    def EA_STATUS_START(self):
        """Message constant 'EA_STATUS_START'."""
        return Metaclass_EventProbeInfo.__constants['EA_STATUS_START']

    @property
    def EA_STATUS_END(self):
        """Message constant 'EA_STATUS_END'."""
        return Metaclass_EventProbeInfo.__constants['EA_STATUS_END']


class EventProbeInfo(metaclass=Metaclass_EventProbeInfo):
    """
    Message class 'EventProbeInfo'.

    Constants:
      EA_STATUS_DEFAULT
      EA_STATUS_START
      EA_STATUS_END
    """

    __slots__ = [
        '_status',
        '_timestamp',
        '_type',
        '_module_id',
        '_event_id',
        '_event_code',
        '_desc',
        '_attrs',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'timestamp': 'uint64',
        'type': 'aimdk_msgs/EventProbeType',
        'module_id': 'uint8',
        'event_id': 'uint32',
        'event_code': 'uint64',
        'desc': 'string',
        'attrs': 'sequence<aimdk_msgs/EventProbeAttr>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'EventProbeType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'EventProbeAttr')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.timestamp = kwargs.get('timestamp', int())
        from aimdk_msgs.msg import EventProbeType
        self.type = kwargs.get('type', EventProbeType())
        self.module_id = kwargs.get('module_id', int())
        self.event_id = kwargs.get('event_id', int())
        self.event_code = kwargs.get('event_code', int())
        self.desc = kwargs.get('desc', str())
        self.attrs = kwargs.get('attrs', [])

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
        if self.status != other.status:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.type != other.type:
            return False
        if self.module_id != other.module_id:
            return False
        if self.event_id != other.event_id:
            return False
        if self.event_code != other.event_code:
            return False
        if self.desc != other.desc:
            return False
        if self.attrs != other.attrs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            from aimdk_msgs.msg import EventProbeType
            assert \
                isinstance(value, EventProbeType), \
                "The 'type' field must be a sub message of type 'EventProbeType'"
        self._type = value

    @builtins.property
    def module_id(self):
        """Message field 'module_id'."""
        return self._module_id

    @module_id.setter
    def module_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'module_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'module_id' field must be an unsigned integer in [0, 255]"
        self._module_id = value

    @builtins.property
    def event_id(self):
        """Message field 'event_id'."""
        return self._event_id

    @event_id.setter
    def event_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'event_id' field must be an unsigned integer in [0, 4294967295]"
        self._event_id = value

    @builtins.property
    def event_code(self):
        """Message field 'event_code'."""
        return self._event_code

    @event_code.setter
    def event_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'event_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._event_code = value

    @builtins.property
    def desc(self):
        """Message field 'desc'."""
        return self._desc

    @desc.setter
    def desc(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'desc' field must be of type 'str'"
        self._desc = value

    @builtins.property
    def attrs(self):
        """Message field 'attrs'."""
        return self._attrs

    @attrs.setter
    def attrs(self, value):
        if __debug__:
            from aimdk_msgs.msg import EventProbeAttr
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
                 all(isinstance(v, EventProbeAttr) for v in value) and
                 True), \
                "The 'attrs' field must be a set or sequence and each value of type 'EventProbeAttr'"
        self._attrs = value
