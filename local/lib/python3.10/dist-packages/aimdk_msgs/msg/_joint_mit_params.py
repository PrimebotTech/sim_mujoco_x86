# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/JointMitParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointMitParams(type):
    """Metaclass of message 'JointMitParams'."""

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
                'aimdk_msgs.msg.JointMitParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_mit_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_mit_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_mit_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_mit_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_mit_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointMitParams(metaclass=Metaclass_JointMitParams):
    """Message class 'JointMitParams'."""

    __slots__ = [
        '_pos_max',
        '_pos_min',
        '_vel_max',
        '_vel_min',
        '_tor_max',
        '_tor_min',
        '_kp_max',
        '_kp_min',
        '_kd_max',
        '_kd_min',
    ]

    _fields_and_field_types = {
        'pos_max': 'int16',
        'pos_min': 'int16',
        'vel_max': 'int16',
        'vel_min': 'int16',
        'tor_max': 'int16',
        'tor_min': 'int16',
        'kp_max': 'int16',
        'kp_min': 'int16',
        'kd_max': 'int16',
        'kd_min': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_max = kwargs.get('pos_max', int())
        self.pos_min = kwargs.get('pos_min', int())
        self.vel_max = kwargs.get('vel_max', int())
        self.vel_min = kwargs.get('vel_min', int())
        self.tor_max = kwargs.get('tor_max', int())
        self.tor_min = kwargs.get('tor_min', int())
        self.kp_max = kwargs.get('kp_max', int())
        self.kp_min = kwargs.get('kp_min', int())
        self.kd_max = kwargs.get('kd_max', int())
        self.kd_min = kwargs.get('kd_min', int())

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
        if self.pos_max != other.pos_max:
            return False
        if self.pos_min != other.pos_min:
            return False
        if self.vel_max != other.vel_max:
            return False
        if self.vel_min != other.vel_min:
            return False
        if self.tor_max != other.tor_max:
            return False
        if self.tor_min != other.tor_min:
            return False
        if self.kp_max != other.kp_max:
            return False
        if self.kp_min != other.kp_min:
            return False
        if self.kd_max != other.kd_max:
            return False
        if self.kd_min != other.kd_min:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos_max(self):
        """Message field 'pos_max'."""
        return self._pos_max

    @pos_max.setter
    def pos_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_max' field must be an integer in [-32768, 32767]"
        self._pos_max = value

    @builtins.property
    def pos_min(self):
        """Message field 'pos_min'."""
        return self._pos_min

    @pos_min.setter
    def pos_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_min' field must be an integer in [-32768, 32767]"
        self._pos_min = value

    @builtins.property
    def vel_max(self):
        """Message field 'vel_max'."""
        return self._vel_max

    @vel_max.setter
    def vel_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_max' field must be an integer in [-32768, 32767]"
        self._vel_max = value

    @builtins.property
    def vel_min(self):
        """Message field 'vel_min'."""
        return self._vel_min

    @vel_min.setter
    def vel_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vel_min' field must be an integer in [-32768, 32767]"
        self._vel_min = value

    @builtins.property
    def tor_max(self):
        """Message field 'tor_max'."""
        return self._tor_max

    @tor_max.setter
    def tor_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tor_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tor_max' field must be an integer in [-32768, 32767]"
        self._tor_max = value

    @builtins.property
    def tor_min(self):
        """Message field 'tor_min'."""
        return self._tor_min

    @tor_min.setter
    def tor_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tor_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tor_min' field must be an integer in [-32768, 32767]"
        self._tor_min = value

    @builtins.property
    def kp_max(self):
        """Message field 'kp_max'."""
        return self._kp_max

    @kp_max.setter
    def kp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kp_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'kp_max' field must be an integer in [-32768, 32767]"
        self._kp_max = value

    @builtins.property
    def kp_min(self):
        """Message field 'kp_min'."""
        return self._kp_min

    @kp_min.setter
    def kp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kp_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'kp_min' field must be an integer in [-32768, 32767]"
        self._kp_min = value

    @builtins.property
    def kd_max(self):
        """Message field 'kd_max'."""
        return self._kd_max

    @kd_max.setter
    def kd_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kd_max' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'kd_max' field must be an integer in [-32768, 32767]"
        self._kd_max = value

    @builtins.property
    def kd_min(self):
        """Message field 'kd_min'."""
        return self._kd_min

    @kd_min.setter
    def kd_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kd_min' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'kd_min' field must be an integer in [-32768, 32767]"
        self._kd_min = value
