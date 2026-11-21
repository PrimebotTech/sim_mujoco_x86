# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McFormState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McFormState(type):
    """Metaclass of message 'McFormState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'QUADRUPEDAL': 1,
        'BIPEDAL': 2,
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
                'aimdk_msgs.msg.McFormState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_form_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_form_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_form_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_form_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_form_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'QUADRUPEDAL': cls.__constants['QUADRUPEDAL'],
            'BIPEDAL': cls.__constants['BIPEDAL'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_McFormState.__constants['UNKNOWN']

    @property
    def QUADRUPEDAL(self):
        """Message constant 'QUADRUPEDAL'."""
        return Metaclass_McFormState.__constants['QUADRUPEDAL']

    @property
    def BIPEDAL(self):
        """Message constant 'BIPEDAL'."""
        return Metaclass_McFormState.__constants['BIPEDAL']


class McFormState(metaclass=Metaclass_McFormState):
    """
    Message class 'McFormState'.

    Constants:
      UNKNOWN
      QUADRUPEDAL
      BIPEDAL
    """

    __slots__ = [
        '_current_form',
    ]

    _fields_and_field_types = {
        'current_form': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_form = kwargs.get('current_form', int())

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
        if self.current_form != other.current_form:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_form(self):
        """Message field 'current_form'."""
        return self._current_form

    @current_form.setter
    def current_form(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_form' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_form' field must be an unsigned integer in [0, 255]"
        self._current_form = value
