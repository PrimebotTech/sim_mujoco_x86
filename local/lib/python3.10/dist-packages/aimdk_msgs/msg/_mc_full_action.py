# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McFullAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McFullAction(type):
    """Metaclass of message 'McFullAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PASSIVE_DEFAULT': 1,
        'QUADRUPED_TO_BIPED': 2,
        'BIPED_TO_QUADRUPED': 3,
        'QUADRUPED_RECOVERY': 100,
        'QUADRUPED_STAND_DEFAULT': 101,
        'QUADRUPED_LOCOMOTION_DEFAULT': 102,
        'QUADRUPED_LOCOMOTION_TERRAIN': 103,
        'BIPED_RECOVERY': 200,
        'BIPED_STAND_DEFAULT': 201,
        'BIPED_LOCOMOTION_DEFAULT': 202,
        'BIPED_LOCOMOTION_TERRAIN': 203,
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
                'aimdk_msgs.msg.McFullAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_full_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_full_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_full_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_full_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_full_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PASSIVE_DEFAULT': cls.__constants['PASSIVE_DEFAULT'],
            'QUADRUPED_TO_BIPED': cls.__constants['QUADRUPED_TO_BIPED'],
            'BIPED_TO_QUADRUPED': cls.__constants['BIPED_TO_QUADRUPED'],
            'QUADRUPED_RECOVERY': cls.__constants['QUADRUPED_RECOVERY'],
            'QUADRUPED_STAND_DEFAULT': cls.__constants['QUADRUPED_STAND_DEFAULT'],
            'QUADRUPED_LOCOMOTION_DEFAULT': cls.__constants['QUADRUPED_LOCOMOTION_DEFAULT'],
            'QUADRUPED_LOCOMOTION_TERRAIN': cls.__constants['QUADRUPED_LOCOMOTION_TERRAIN'],
            'BIPED_RECOVERY': cls.__constants['BIPED_RECOVERY'],
            'BIPED_STAND_DEFAULT': cls.__constants['BIPED_STAND_DEFAULT'],
            'BIPED_LOCOMOTION_DEFAULT': cls.__constants['BIPED_LOCOMOTION_DEFAULT'],
            'BIPED_LOCOMOTION_TERRAIN': cls.__constants['BIPED_LOCOMOTION_TERRAIN'],
        }

    @property
    def PASSIVE_DEFAULT(self):
        """Message constant 'PASSIVE_DEFAULT'."""
        return Metaclass_McFullAction.__constants['PASSIVE_DEFAULT']

    @property
    def QUADRUPED_TO_BIPED(self):
        """Message constant 'QUADRUPED_TO_BIPED'."""
        return Metaclass_McFullAction.__constants['QUADRUPED_TO_BIPED']

    @property
    def BIPED_TO_QUADRUPED(self):
        """Message constant 'BIPED_TO_QUADRUPED'."""
        return Metaclass_McFullAction.__constants['BIPED_TO_QUADRUPED']

    @property
    def QUADRUPED_RECOVERY(self):
        """Message constant 'QUADRUPED_RECOVERY'."""
        return Metaclass_McFullAction.__constants['QUADRUPED_RECOVERY']

    @property
    def QUADRUPED_STAND_DEFAULT(self):
        """Message constant 'QUADRUPED_STAND_DEFAULT'."""
        return Metaclass_McFullAction.__constants['QUADRUPED_STAND_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_DEFAULT(self):
        """Message constant 'QUADRUPED_LOCOMOTION_DEFAULT'."""
        return Metaclass_McFullAction.__constants['QUADRUPED_LOCOMOTION_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_TERRAIN(self):
        """Message constant 'QUADRUPED_LOCOMOTION_TERRAIN'."""
        return Metaclass_McFullAction.__constants['QUADRUPED_LOCOMOTION_TERRAIN']

    @property
    def BIPED_RECOVERY(self):
        """Message constant 'BIPED_RECOVERY'."""
        return Metaclass_McFullAction.__constants['BIPED_RECOVERY']

    @property
    def BIPED_STAND_DEFAULT(self):
        """Message constant 'BIPED_STAND_DEFAULT'."""
        return Metaclass_McFullAction.__constants['BIPED_STAND_DEFAULT']

    @property
    def BIPED_LOCOMOTION_DEFAULT(self):
        """Message constant 'BIPED_LOCOMOTION_DEFAULT'."""
        return Metaclass_McFullAction.__constants['BIPED_LOCOMOTION_DEFAULT']

    @property
    def BIPED_LOCOMOTION_TERRAIN(self):
        """Message constant 'BIPED_LOCOMOTION_TERRAIN'."""
        return Metaclass_McFullAction.__constants['BIPED_LOCOMOTION_TERRAIN']


class McFullAction(metaclass=Metaclass_McFullAction):
    """
    Message class 'McFullAction'.

    Constants:
      PASSIVE_DEFAULT
      QUADRUPED_TO_BIPED
      BIPED_TO_QUADRUPED
      QUADRUPED_RECOVERY
      QUADRUPED_STAND_DEFAULT
      QUADRUPED_LOCOMOTION_DEFAULT
      QUADRUPED_LOCOMOTION_TERRAIN
      BIPED_RECOVERY
      BIPED_STAND_DEFAULT
      BIPED_LOCOMOTION_DEFAULT
      BIPED_LOCOMOTION_TERRAIN
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value
