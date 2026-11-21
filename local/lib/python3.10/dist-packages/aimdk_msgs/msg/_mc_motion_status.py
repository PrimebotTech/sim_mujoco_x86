# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McMotionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McMotionStatus(type):
    """Metaclass of message 'McMotionStatus'."""

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
                'aimdk_msgs.msg.McMotionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_motion_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_motion_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_motion_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_motion_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_motion_status

            from aimdk_msgs.msg import McControlArea
            if McControlArea.__class__._TYPE_SUPPORT is None:
                McControlArea.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMimicGravityState
            if McMimicGravityState.__class__._TYPE_SUPPORT is None:
                McMimicGravityState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMotionIntrInfo
            if McMotionIntrInfo.__class__._TYPE_SUPPORT is None:
                McMotionIntrInfo.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMotionType
            if McMotionType.__class__._TYPE_SUPPORT is None:
                McMotionType.__class__.__import_type_support__()

            from aimdk_msgs.msg import McPlayerState
            if McPlayerState.__class__._TYPE_SUPPORT is None:
                McPlayerState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class McMotionStatus(metaclass=Metaclass_McMotionStatus):
    """Message class 'McMotionStatus'."""

    __slots__ = [
        '_player_state',
        '_control_area',
        '_motion',
        '_type',
        '_intr_info',
        '_current_steps',
        '_gravity_state',
    ]

    _fields_and_field_types = {
        'player_state': 'aimdk_msgs/McPlayerState',
        'control_area': 'aimdk_msgs/McControlArea',
        'motion': 'string',
        'type': 'aimdk_msgs/McMotionType',
        'intr_info': 'aimdk_msgs/McMotionIntrInfo',
        'current_steps': 'int32',
        'gravity_state': 'aimdk_msgs/McMimicGravityState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McPlayerState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McControlArea'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMotionType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMotionIntrInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMimicGravityState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import McPlayerState
        self.player_state = kwargs.get('player_state', McPlayerState())
        from aimdk_msgs.msg import McControlArea
        self.control_area = kwargs.get('control_area', McControlArea())
        self.motion = kwargs.get('motion', str())
        from aimdk_msgs.msg import McMotionType
        self.type = kwargs.get('type', McMotionType())
        from aimdk_msgs.msg import McMotionIntrInfo
        self.intr_info = kwargs.get('intr_info', McMotionIntrInfo())
        self.current_steps = kwargs.get('current_steps', int())
        from aimdk_msgs.msg import McMimicGravityState
        self.gravity_state = kwargs.get('gravity_state', McMimicGravityState())

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
        if self.player_state != other.player_state:
            return False
        if self.control_area != other.control_area:
            return False
        if self.motion != other.motion:
            return False
        if self.type != other.type:
            return False
        if self.intr_info != other.intr_info:
            return False
        if self.current_steps != other.current_steps:
            return False
        if self.gravity_state != other.gravity_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def player_state(self):
        """Message field 'player_state'."""
        return self._player_state

    @player_state.setter
    def player_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McPlayerState
            assert \
                isinstance(value, McPlayerState), \
                "The 'player_state' field must be a sub message of type 'McPlayerState'"
        self._player_state = value

    @builtins.property
    def control_area(self):
        """Message field 'control_area'."""
        return self._control_area

    @control_area.setter
    def control_area(self, value):
        if __debug__:
            from aimdk_msgs.msg import McControlArea
            assert \
                isinstance(value, McControlArea), \
                "The 'control_area' field must be a sub message of type 'McControlArea'"
        self._control_area = value

    @builtins.property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motion' field must be of type 'str'"
        self._motion = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            from aimdk_msgs.msg import McMotionType
            assert \
                isinstance(value, McMotionType), \
                "The 'type' field must be a sub message of type 'McMotionType'"
        self._type = value

    @builtins.property
    def intr_info(self):
        """Message field 'intr_info'."""
        return self._intr_info

    @intr_info.setter
    def intr_info(self, value):
        if __debug__:
            from aimdk_msgs.msg import McMotionIntrInfo
            assert \
                isinstance(value, McMotionIntrInfo), \
                "The 'intr_info' field must be a sub message of type 'McMotionIntrInfo'"
        self._intr_info = value

    @builtins.property
    def current_steps(self):
        """Message field 'current_steps'."""
        return self._current_steps

    @current_steps.setter
    def current_steps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_steps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_steps' field must be an integer in [-2147483648, 2147483647]"
        self._current_steps = value

    @builtins.property
    def gravity_state(self):
        """Message field 'gravity_state'."""
        return self._gravity_state

    @gravity_state.setter
    def gravity_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McMimicGravityState
            assert \
                isinstance(value, McMimicGravityState), \
                "The 'gravity_state' field must be a sub message of type 'McMimicGravityState'"
        self._gravity_state = value
