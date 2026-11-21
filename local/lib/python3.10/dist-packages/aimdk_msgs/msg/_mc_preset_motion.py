# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McPresetMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McPresetMotion(type):
    """Metaclass of message 'McPresetMotion'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFAULT_POS': 0,
        'RIGHT_ARM_WAVE': 1001,
        'RIGHT_ARM_HANDSHAKE': 1002,
        'RIGHT_ARM_HANDSHAKE_FOR_1D5METER': 1003,
        'LEFT_ARM_WAVE': 1011,
        'LEFT_ARM_HANDSHAKE': 1012,
        'LEFT_ARM_HANDSHAKE_FOR_1D5METER': 1013,
        'BOTH_HANDS_MAKE_HEART': 2001,
        'BOTH_HANDS_ACTION_HAPPY': 2002,
        'BOTH_HANDS_ACTION_TALKING': 2003,
        'T1_TALK1': 2004,
        'T1_TALK2': 2005,
        'T1_TALK3': 2006,
        'T1_TALK4': 2007,
        'T1_TALK5': 2008,
        'T1_TALK6': 2009,
        'PHOTO_POSE_1': 2011,
        'PHOTO_POSE_2': 2012,
        'PHOTO_POSE_3': 2013,
        'PHOTO_POSE_4': 2014,
        'PHOTO_THREE_SHOT': 2020,
        'Q_BECKON': 3001,
        'Q_SHAKE_HANDS': 3002,
        'Q_BUMP_FISTS': 3003,
        'Q_WAVE_HAND': 3004,
        'Q_SHOW_HAPPINESS': 3005,
        'Q_MAKE_HEART': 3007,
        'Q_CHEER_ON': 3008,
        'Q_STRETCH': 3010,
        'Q_SPEAK_A': 3012,
        'Q_SPEAK_B': 3013,
        'Q_SPEAK_C': 3014,
        'Q_HUG': 3018,
        'Q_REFUSE': 3021,
        'Q_DANCE_A': 3046,
        'Q_DANCE_B': 3047,
        'Q_DANCE_C': 3048,
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
                'aimdk_msgs.msg.McPresetMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_preset_motion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_preset_motion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_preset_motion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_preset_motion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_preset_motion

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFAULT_POS': cls.__constants['DEFAULT_POS'],
            'RIGHT_ARM_WAVE': cls.__constants['RIGHT_ARM_WAVE'],
            'RIGHT_ARM_HANDSHAKE': cls.__constants['RIGHT_ARM_HANDSHAKE'],
            'RIGHT_ARM_HANDSHAKE_FOR_1D5METER': cls.__constants['RIGHT_ARM_HANDSHAKE_FOR_1D5METER'],
            'LEFT_ARM_WAVE': cls.__constants['LEFT_ARM_WAVE'],
            'LEFT_ARM_HANDSHAKE': cls.__constants['LEFT_ARM_HANDSHAKE'],
            'LEFT_ARM_HANDSHAKE_FOR_1D5METER': cls.__constants['LEFT_ARM_HANDSHAKE_FOR_1D5METER'],
            'BOTH_HANDS_MAKE_HEART': cls.__constants['BOTH_HANDS_MAKE_HEART'],
            'BOTH_HANDS_ACTION_HAPPY': cls.__constants['BOTH_HANDS_ACTION_HAPPY'],
            'BOTH_HANDS_ACTION_TALKING': cls.__constants['BOTH_HANDS_ACTION_TALKING'],
            'T1_TALK1': cls.__constants['T1_TALK1'],
            'T1_TALK2': cls.__constants['T1_TALK2'],
            'T1_TALK3': cls.__constants['T1_TALK3'],
            'T1_TALK4': cls.__constants['T1_TALK4'],
            'T1_TALK5': cls.__constants['T1_TALK5'],
            'T1_TALK6': cls.__constants['T1_TALK6'],
            'PHOTO_POSE_1': cls.__constants['PHOTO_POSE_1'],
            'PHOTO_POSE_2': cls.__constants['PHOTO_POSE_2'],
            'PHOTO_POSE_3': cls.__constants['PHOTO_POSE_3'],
            'PHOTO_POSE_4': cls.__constants['PHOTO_POSE_4'],
            'PHOTO_THREE_SHOT': cls.__constants['PHOTO_THREE_SHOT'],
            'Q_BECKON': cls.__constants['Q_BECKON'],
            'Q_SHAKE_HANDS': cls.__constants['Q_SHAKE_HANDS'],
            'Q_BUMP_FISTS': cls.__constants['Q_BUMP_FISTS'],
            'Q_WAVE_HAND': cls.__constants['Q_WAVE_HAND'],
            'Q_SHOW_HAPPINESS': cls.__constants['Q_SHOW_HAPPINESS'],
            'Q_MAKE_HEART': cls.__constants['Q_MAKE_HEART'],
            'Q_CHEER_ON': cls.__constants['Q_CHEER_ON'],
            'Q_STRETCH': cls.__constants['Q_STRETCH'],
            'Q_SPEAK_A': cls.__constants['Q_SPEAK_A'],
            'Q_SPEAK_B': cls.__constants['Q_SPEAK_B'],
            'Q_SPEAK_C': cls.__constants['Q_SPEAK_C'],
            'Q_HUG': cls.__constants['Q_HUG'],
            'Q_REFUSE': cls.__constants['Q_REFUSE'],
            'Q_DANCE_A': cls.__constants['Q_DANCE_A'],
            'Q_DANCE_B': cls.__constants['Q_DANCE_B'],
            'Q_DANCE_C': cls.__constants['Q_DANCE_C'],
        }

    @property
    def DEFAULT_POS(self):
        """Message constant 'DEFAULT_POS'."""
        return Metaclass_McPresetMotion.__constants['DEFAULT_POS']

    @property
    def RIGHT_ARM_WAVE(self):
        """Message constant 'RIGHT_ARM_WAVE'."""
        return Metaclass_McPresetMotion.__constants['RIGHT_ARM_WAVE']

    @property
    def RIGHT_ARM_HANDSHAKE(self):
        """Message constant 'RIGHT_ARM_HANDSHAKE'."""
        return Metaclass_McPresetMotion.__constants['RIGHT_ARM_HANDSHAKE']

    @property
    def RIGHT_ARM_HANDSHAKE_FOR_1D5METER(self):
        """Message constant 'RIGHT_ARM_HANDSHAKE_FOR_1D5METER'."""
        return Metaclass_McPresetMotion.__constants['RIGHT_ARM_HANDSHAKE_FOR_1D5METER']

    @property
    def LEFT_ARM_WAVE(self):
        """Message constant 'LEFT_ARM_WAVE'."""
        return Metaclass_McPresetMotion.__constants['LEFT_ARM_WAVE']

    @property
    def LEFT_ARM_HANDSHAKE(self):
        """Message constant 'LEFT_ARM_HANDSHAKE'."""
        return Metaclass_McPresetMotion.__constants['LEFT_ARM_HANDSHAKE']

    @property
    def LEFT_ARM_HANDSHAKE_FOR_1D5METER(self):
        """Message constant 'LEFT_ARM_HANDSHAKE_FOR_1D5METER'."""
        return Metaclass_McPresetMotion.__constants['LEFT_ARM_HANDSHAKE_FOR_1D5METER']

    @property
    def BOTH_HANDS_MAKE_HEART(self):
        """Message constant 'BOTH_HANDS_MAKE_HEART'."""
        return Metaclass_McPresetMotion.__constants['BOTH_HANDS_MAKE_HEART']

    @property
    def BOTH_HANDS_ACTION_HAPPY(self):
        """Message constant 'BOTH_HANDS_ACTION_HAPPY'."""
        return Metaclass_McPresetMotion.__constants['BOTH_HANDS_ACTION_HAPPY']

    @property
    def BOTH_HANDS_ACTION_TALKING(self):
        """Message constant 'BOTH_HANDS_ACTION_TALKING'."""
        return Metaclass_McPresetMotion.__constants['BOTH_HANDS_ACTION_TALKING']

    @property
    def T1_TALK1(self):
        """Message constant 'T1_TALK1'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK1']

    @property
    def T1_TALK2(self):
        """Message constant 'T1_TALK2'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK2']

    @property
    def T1_TALK3(self):
        """Message constant 'T1_TALK3'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK3']

    @property
    def T1_TALK4(self):
        """Message constant 'T1_TALK4'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK4']

    @property
    def T1_TALK5(self):
        """Message constant 'T1_TALK5'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK5']

    @property
    def T1_TALK6(self):
        """Message constant 'T1_TALK6'."""
        return Metaclass_McPresetMotion.__constants['T1_TALK6']

    @property
    def PHOTO_POSE_1(self):
        """Message constant 'PHOTO_POSE_1'."""
        return Metaclass_McPresetMotion.__constants['PHOTO_POSE_1']

    @property
    def PHOTO_POSE_2(self):
        """Message constant 'PHOTO_POSE_2'."""
        return Metaclass_McPresetMotion.__constants['PHOTO_POSE_2']

    @property
    def PHOTO_POSE_3(self):
        """Message constant 'PHOTO_POSE_3'."""
        return Metaclass_McPresetMotion.__constants['PHOTO_POSE_3']

    @property
    def PHOTO_POSE_4(self):
        """Message constant 'PHOTO_POSE_4'."""
        return Metaclass_McPresetMotion.__constants['PHOTO_POSE_4']

    @property
    def PHOTO_THREE_SHOT(self):
        """Message constant 'PHOTO_THREE_SHOT'."""
        return Metaclass_McPresetMotion.__constants['PHOTO_THREE_SHOT']

    @property
    def Q_BECKON(self):
        """Message constant 'Q_BECKON'."""
        return Metaclass_McPresetMotion.__constants['Q_BECKON']

    @property
    def Q_SHAKE_HANDS(self):
        """Message constant 'Q_SHAKE_HANDS'."""
        return Metaclass_McPresetMotion.__constants['Q_SHAKE_HANDS']

    @property
    def Q_BUMP_FISTS(self):
        """Message constant 'Q_BUMP_FISTS'."""
        return Metaclass_McPresetMotion.__constants['Q_BUMP_FISTS']

    @property
    def Q_WAVE_HAND(self):
        """Message constant 'Q_WAVE_HAND'."""
        return Metaclass_McPresetMotion.__constants['Q_WAVE_HAND']

    @property
    def Q_SHOW_HAPPINESS(self):
        """Message constant 'Q_SHOW_HAPPINESS'."""
        return Metaclass_McPresetMotion.__constants['Q_SHOW_HAPPINESS']

    @property
    def Q_MAKE_HEART(self):
        """Message constant 'Q_MAKE_HEART'."""
        return Metaclass_McPresetMotion.__constants['Q_MAKE_HEART']

    @property
    def Q_CHEER_ON(self):
        """Message constant 'Q_CHEER_ON'."""
        return Metaclass_McPresetMotion.__constants['Q_CHEER_ON']

    @property
    def Q_STRETCH(self):
        """Message constant 'Q_STRETCH'."""
        return Metaclass_McPresetMotion.__constants['Q_STRETCH']

    @property
    def Q_SPEAK_A(self):
        """Message constant 'Q_SPEAK_A'."""
        return Metaclass_McPresetMotion.__constants['Q_SPEAK_A']

    @property
    def Q_SPEAK_B(self):
        """Message constant 'Q_SPEAK_B'."""
        return Metaclass_McPresetMotion.__constants['Q_SPEAK_B']

    @property
    def Q_SPEAK_C(self):
        """Message constant 'Q_SPEAK_C'."""
        return Metaclass_McPresetMotion.__constants['Q_SPEAK_C']

    @property
    def Q_HUG(self):
        """Message constant 'Q_HUG'."""
        return Metaclass_McPresetMotion.__constants['Q_HUG']

    @property
    def Q_REFUSE(self):
        """Message constant 'Q_REFUSE'."""
        return Metaclass_McPresetMotion.__constants['Q_REFUSE']

    @property
    def Q_DANCE_A(self):
        """Message constant 'Q_DANCE_A'."""
        return Metaclass_McPresetMotion.__constants['Q_DANCE_A']

    @property
    def Q_DANCE_B(self):
        """Message constant 'Q_DANCE_B'."""
        return Metaclass_McPresetMotion.__constants['Q_DANCE_B']

    @property
    def Q_DANCE_C(self):
        """Message constant 'Q_DANCE_C'."""
        return Metaclass_McPresetMotion.__constants['Q_DANCE_C']


class McPresetMotion(metaclass=Metaclass_McPresetMotion):
    """
    Message class 'McPresetMotion'.

    Constants:
      DEFAULT_POS
      RIGHT_ARM_WAVE
      RIGHT_ARM_HANDSHAKE
      RIGHT_ARM_HANDSHAKE_FOR_1D5METER
      LEFT_ARM_WAVE
      LEFT_ARM_HANDSHAKE
      LEFT_ARM_HANDSHAKE_FOR_1D5METER
      BOTH_HANDS_MAKE_HEART
      BOTH_HANDS_ACTION_HAPPY
      BOTH_HANDS_ACTION_TALKING
      T1_TALK1
      T1_TALK2
      T1_TALK3
      T1_TALK4
      T1_TALK5
      T1_TALK6
      PHOTO_POSE_1
      PHOTO_POSE_2
      PHOTO_POSE_3
      PHOTO_POSE_4
      PHOTO_THREE_SHOT
      Q_BECKON
      Q_SHAKE_HANDS
      Q_BUMP_FISTS
      Q_WAVE_HAND
      Q_SHOW_HAPPINESS
      Q_MAKE_HEART
      Q_CHEER_ON
      Q_STRETCH
      Q_SPEAK_A
      Q_SPEAK_B
      Q_SPEAK_C
      Q_HUG
      Q_REFUSE
      Q_DANCE_A
      Q_DANCE_B
      Q_DANCE_C
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
