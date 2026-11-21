# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/AudioDeviceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioDeviceInfo(type):
    """Metaclass of message 'AudioDeviceInfo'."""

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
                'aimdk_msgs.msg.AudioDeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioDeviceInfo(metaclass=Metaclass_AudioDeviceInfo):
    """Message class 'AudioDeviceInfo'."""

    __slots__ = [
        '_id',
        '_device_addr',
        '_device_type',
        '_device_name',
        '_is_sel',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'device_addr': 'string',
        'device_type': 'string',
        'device_name': 'string',
        'is_sel': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.device_addr = kwargs.get('device_addr', str())
        self.device_type = kwargs.get('device_type', str())
        self.device_name = kwargs.get('device_name', str())
        self.is_sel = kwargs.get('is_sel', bool())

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
        if self.id != other.id:
            return False
        if self.device_addr != other.device_addr:
            return False
        if self.device_type != other.device_type:
            return False
        if self.device_name != other.device_name:
            return False
        if self.is_sel != other.is_sel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def device_addr(self):
        """Message field 'device_addr'."""
        return self._device_addr

    @device_addr.setter
    def device_addr(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_addr' field must be of type 'str'"
        self._device_addr = value

    @builtins.property
    def device_type(self):
        """Message field 'device_type'."""
        return self._device_type

    @device_type.setter
    def device_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_type' field must be of type 'str'"
        self._device_type = value

    @builtins.property
    def device_name(self):
        """Message field 'device_name'."""
        return self._device_name

    @device_name.setter
    def device_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_name' field must be of type 'str'"
        self._device_name = value

    @builtins.property
    def is_sel(self):
        """Message field 'is_sel'."""
        return self._is_sel

    @is_sel.setter
    def is_sel(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_sel' field must be of type 'bool'"
        self._is_sel = value
