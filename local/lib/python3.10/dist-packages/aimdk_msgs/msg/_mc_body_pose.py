# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McBodyPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McBodyPose(type):
    """Metaclass of message 'McBodyPose'."""

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
                'aimdk_msgs.msg.McBodyPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_body_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_body_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_body_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_body_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_body_pose

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class McBodyPose(metaclass=Metaclass_McBodyPose):
    """Message class 'McBodyPose'."""

    __slots__ = [
        '_header',
        '_source',
        '_stand_height',
        '_bend_forward',
        '_bend_sideways',
        '_twist_waist',
        '_raise_head',
        '_turn_head',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'source': 'string',
        'stand_height': 'double',
        'bend_forward': 'double',
        'bend_sideways': 'double',
        'twist_waist': 'double',
        'raise_head': 'double',
        'turn_head': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.source = kwargs.get('source', str())
        self.stand_height = kwargs.get('stand_height', float())
        self.bend_forward = kwargs.get('bend_forward', float())
        self.bend_sideways = kwargs.get('bend_sideways', float())
        self.twist_waist = kwargs.get('twist_waist', float())
        self.raise_head = kwargs.get('raise_head', float())
        self.turn_head = kwargs.get('turn_head', float())

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
        if self.header != other.header:
            return False
        if self.source != other.source:
            return False
        if self.stand_height != other.stand_height:
            return False
        if self.bend_forward != other.bend_forward:
            return False
        if self.bend_sideways != other.bend_sideways:
            return False
        if self.twist_waist != other.twist_waist:
            return False
        if self.raise_head != other.raise_head:
            return False
        if self.turn_head != other.turn_head:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from aimdk_msgs.msg import MessageHeader
            assert \
                isinstance(value, MessageHeader), \
                "The 'header' field must be a sub message of type 'MessageHeader'"
        self._header = value

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
    def stand_height(self):
        """Message field 'stand_height'."""
        return self._stand_height

    @stand_height.setter
    def stand_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stand_height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stand_height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stand_height = value

    @builtins.property
    def bend_forward(self):
        """Message field 'bend_forward'."""
        return self._bend_forward

    @bend_forward.setter
    def bend_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bend_forward' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bend_forward' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bend_forward = value

    @builtins.property
    def bend_sideways(self):
        """Message field 'bend_sideways'."""
        return self._bend_sideways

    @bend_sideways.setter
    def bend_sideways(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bend_sideways' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bend_sideways' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bend_sideways = value

    @builtins.property
    def twist_waist(self):
        """Message field 'twist_waist'."""
        return self._twist_waist

    @twist_waist.setter
    def twist_waist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'twist_waist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'twist_waist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._twist_waist = value

    @builtins.property
    def raise_head(self):
        """Message field 'raise_head'."""
        return self._raise_head

    @raise_head.setter
    def raise_head(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'raise_head' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'raise_head' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._raise_head = value

    @builtins.property
    def turn_head(self):
        """Message field 'turn_head'."""
        return self._turn_head

    @turn_head.setter
    def turn_head(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_head' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turn_head' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turn_head = value
