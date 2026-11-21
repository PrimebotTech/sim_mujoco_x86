# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/JointProtectConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointProtectConfig(type):
    """Metaclass of message 'JointProtectConfig'."""

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
                'aimdk_msgs.msg.JointProtectConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_protect_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_protect_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_protect_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_protect_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_protect_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointProtectConfig(metaclass=Metaclass_JointProtectConfig):
    """Message class 'JointProtectConfig'."""

    __slots__ = [
        '_l1_mos_protect',
        '_l1_mos_recover',
        '_l1_current_protect',
        '_l1_current_recover',
        '_l1_voltage_protect',
        '_l1_voltage_recover',
        '_l2_mos_protect',
        '_l2_mos_recover',
        '_l2_current_protect',
        '_l2_current_recover',
        '_l2_voltage_protect',
        '_l2_voltage_recover',
    ]

    _fields_and_field_types = {
        'l1_mos_protect': 'int16',
        'l1_mos_recover': 'int16',
        'l1_current_protect': 'int16',
        'l1_current_recover': 'int16',
        'l1_voltage_protect': 'int16',
        'l1_voltage_recover': 'int16',
        'l2_mos_protect': 'int16',
        'l2_mos_recover': 'int16',
        'l2_current_protect': 'int16',
        'l2_current_recover': 'int16',
        'l2_voltage_protect': 'int16',
        'l2_voltage_recover': 'int16',
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
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.l1_mos_protect = kwargs.get('l1_mos_protect', int())
        self.l1_mos_recover = kwargs.get('l1_mos_recover', int())
        self.l1_current_protect = kwargs.get('l1_current_protect', int())
        self.l1_current_recover = kwargs.get('l1_current_recover', int())
        self.l1_voltage_protect = kwargs.get('l1_voltage_protect', int())
        self.l1_voltage_recover = kwargs.get('l1_voltage_recover', int())
        self.l2_mos_protect = kwargs.get('l2_mos_protect', int())
        self.l2_mos_recover = kwargs.get('l2_mos_recover', int())
        self.l2_current_protect = kwargs.get('l2_current_protect', int())
        self.l2_current_recover = kwargs.get('l2_current_recover', int())
        self.l2_voltage_protect = kwargs.get('l2_voltage_protect', int())
        self.l2_voltage_recover = kwargs.get('l2_voltage_recover', int())

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
        if self.l1_mos_protect != other.l1_mos_protect:
            return False
        if self.l1_mos_recover != other.l1_mos_recover:
            return False
        if self.l1_current_protect != other.l1_current_protect:
            return False
        if self.l1_current_recover != other.l1_current_recover:
            return False
        if self.l1_voltage_protect != other.l1_voltage_protect:
            return False
        if self.l1_voltage_recover != other.l1_voltage_recover:
            return False
        if self.l2_mos_protect != other.l2_mos_protect:
            return False
        if self.l2_mos_recover != other.l2_mos_recover:
            return False
        if self.l2_current_protect != other.l2_current_protect:
            return False
        if self.l2_current_recover != other.l2_current_recover:
            return False
        if self.l2_voltage_protect != other.l2_voltage_protect:
            return False
        if self.l2_voltage_recover != other.l2_voltage_recover:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def l1_mos_protect(self):
        """Message field 'l1_mos_protect'."""
        return self._l1_mos_protect

    @l1_mos_protect.setter
    def l1_mos_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_mos_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_mos_protect' field must be an integer in [-32768, 32767]"
        self._l1_mos_protect = value

    @builtins.property
    def l1_mos_recover(self):
        """Message field 'l1_mos_recover'."""
        return self._l1_mos_recover

    @l1_mos_recover.setter
    def l1_mos_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_mos_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_mos_recover' field must be an integer in [-32768, 32767]"
        self._l1_mos_recover = value

    @builtins.property
    def l1_current_protect(self):
        """Message field 'l1_current_protect'."""
        return self._l1_current_protect

    @l1_current_protect.setter
    def l1_current_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_current_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_current_protect' field must be an integer in [-32768, 32767]"
        self._l1_current_protect = value

    @builtins.property
    def l1_current_recover(self):
        """Message field 'l1_current_recover'."""
        return self._l1_current_recover

    @l1_current_recover.setter
    def l1_current_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_current_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_current_recover' field must be an integer in [-32768, 32767]"
        self._l1_current_recover = value

    @builtins.property
    def l1_voltage_protect(self):
        """Message field 'l1_voltage_protect'."""
        return self._l1_voltage_protect

    @l1_voltage_protect.setter
    def l1_voltage_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_voltage_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_voltage_protect' field must be an integer in [-32768, 32767]"
        self._l1_voltage_protect = value

    @builtins.property
    def l1_voltage_recover(self):
        """Message field 'l1_voltage_recover'."""
        return self._l1_voltage_recover

    @l1_voltage_recover.setter
    def l1_voltage_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l1_voltage_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l1_voltage_recover' field must be an integer in [-32768, 32767]"
        self._l1_voltage_recover = value

    @builtins.property
    def l2_mos_protect(self):
        """Message field 'l2_mos_protect'."""
        return self._l2_mos_protect

    @l2_mos_protect.setter
    def l2_mos_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_mos_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_mos_protect' field must be an integer in [-32768, 32767]"
        self._l2_mos_protect = value

    @builtins.property
    def l2_mos_recover(self):
        """Message field 'l2_mos_recover'."""
        return self._l2_mos_recover

    @l2_mos_recover.setter
    def l2_mos_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_mos_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_mos_recover' field must be an integer in [-32768, 32767]"
        self._l2_mos_recover = value

    @builtins.property
    def l2_current_protect(self):
        """Message field 'l2_current_protect'."""
        return self._l2_current_protect

    @l2_current_protect.setter
    def l2_current_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_current_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_current_protect' field must be an integer in [-32768, 32767]"
        self._l2_current_protect = value

    @builtins.property
    def l2_current_recover(self):
        """Message field 'l2_current_recover'."""
        return self._l2_current_recover

    @l2_current_recover.setter
    def l2_current_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_current_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_current_recover' field must be an integer in [-32768, 32767]"
        self._l2_current_recover = value

    @builtins.property
    def l2_voltage_protect(self):
        """Message field 'l2_voltage_protect'."""
        return self._l2_voltage_protect

    @l2_voltage_protect.setter
    def l2_voltage_protect(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_voltage_protect' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_voltage_protect' field must be an integer in [-32768, 32767]"
        self._l2_voltage_protect = value

    @builtins.property
    def l2_voltage_recover(self):
        """Message field 'l2_voltage_recover'."""
        return self._l2_voltage_recover

    @l2_voltage_recover.setter
    def l2_voltage_recover(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_voltage_recover' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'l2_voltage_recover' field must be an integer in [-32768, 32767]"
        self._l2_voltage_recover = value
