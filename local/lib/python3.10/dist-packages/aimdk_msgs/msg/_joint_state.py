# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/JointState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointState(type):
    """Metaclass of message 'JointState'."""

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
                'aimdk_msgs.msg.JointState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointState(metaclass=Metaclass_JointState):
    """Message class 'JointState'."""

    __slots__ = [
        '_name',
        '_position',
        '_velocity',
        '_effort',
        '_coil_temp',
        '_motor_temp',
        '_motor_vol',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'position': 'double',
        'velocity': 'double',
        'effort': 'double',
        'coil_temp': 'int16',
        'motor_temp': 'int16',
        'motor_vol': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.effort = kwargs.get('effort', float())
        self.coil_temp = kwargs.get('coil_temp', int())
        self.motor_temp = kwargs.get('motor_temp', int())
        self.motor_vol = kwargs.get('motor_vol', int())

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
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.effort != other.effort:
            return False
        if self.coil_temp != other.coil_temp:
            return False
        if self.motor_temp != other.motor_temp:
            return False
        if self.motor_vol != other.motor_vol:
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

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def effort(self):
        """Message field 'effort'."""
        return self._effort

    @effort.setter
    def effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'effort' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'effort' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._effort = value

    @builtins.property
    def coil_temp(self):
        """Message field 'coil_temp'."""
        return self._coil_temp

    @coil_temp.setter
    def coil_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coil_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'coil_temp' field must be an integer in [-32768, 32767]"
        self._coil_temp = value

    @builtins.property
    def motor_temp(self):
        """Message field 'motor_temp'."""
        return self._motor_temp

    @motor_temp.setter
    def motor_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motor_temp' field must be an integer in [-32768, 32767]"
        self._motor_temp = value

    @builtins.property
    def motor_vol(self):
        """Message field 'motor_vol'."""
        return self._motor_vol

    @motor_vol.setter
    def motor_vol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_vol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_vol' field must be an unsigned integer in [0, 255]"
        self._motor_vol = value
