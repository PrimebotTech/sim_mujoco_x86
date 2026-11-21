# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/FluxHeartbeat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FluxHeartbeat(type):
    """Metaclass of message 'FluxHeartbeat'."""

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
                'aimdk_msgs.msg.FluxHeartbeat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flux_heartbeat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flux_heartbeat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flux_heartbeat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flux_heartbeat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flux_heartbeat

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FluxHeartbeat(metaclass=Metaclass_FluxHeartbeat):
    """Message class 'FluxHeartbeat'."""

    __slots__ = [
        '_recording',
        '_source',
        '_duration_sec',
    ]

    _fields_and_field_types = {
        'recording': 'int8',
        'source': 'string',
        'duration_sec': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.recording = kwargs.get('recording', int())
        self.source = kwargs.get('source', str())
        self.duration_sec = kwargs.get('duration_sec', int())

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
        if self.recording != other.recording:
            return False
        if self.source != other.source:
            return False
        if self.duration_sec != other.duration_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def recording(self):
        """Message field 'recording'."""
        return self._recording

    @recording.setter
    def recording(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'recording' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'recording' field must be an integer in [-128, 127]"
        self._recording = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value

    @builtins.property
    def duration_sec(self):
        """Message field 'duration_sec'."""
        return self._duration_sec

    @duration_sec.setter
    def duration_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration_sec' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration_sec' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration_sec = value
