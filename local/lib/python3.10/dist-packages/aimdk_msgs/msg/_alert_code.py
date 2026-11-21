# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/AlertCode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlertCode(type):
    """Metaclass of message 'AlertCode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AUDIO_STRATEGY_NONE': 0,
        'AUDIO_STRATEGY_ONCE': 1,
        'AUDIO_STRATEGY_REPEAT': 2,
        'AUDIO_STRATEGY_ACTIVATION': 3,
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
                'aimdk_msgs.msg.AlertCode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__alert_code
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__alert_code
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__alert_code
            cls._TYPE_SUPPORT = module.type_support_msg__msg__alert_code
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__alert_code

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AUDIO_STRATEGY_NONE': cls.__constants['AUDIO_STRATEGY_NONE'],
            'AUDIO_STRATEGY_ONCE': cls.__constants['AUDIO_STRATEGY_ONCE'],
            'AUDIO_STRATEGY_REPEAT': cls.__constants['AUDIO_STRATEGY_REPEAT'],
            'AUDIO_STRATEGY_ACTIVATION': cls.__constants['AUDIO_STRATEGY_ACTIVATION'],
        }

    @property
    def AUDIO_STRATEGY_NONE(self):
        """Message constant 'AUDIO_STRATEGY_NONE'."""
        return Metaclass_AlertCode.__constants['AUDIO_STRATEGY_NONE']

    @property
    def AUDIO_STRATEGY_ONCE(self):
        """Message constant 'AUDIO_STRATEGY_ONCE'."""
        return Metaclass_AlertCode.__constants['AUDIO_STRATEGY_ONCE']

    @property
    def AUDIO_STRATEGY_REPEAT(self):
        """Message constant 'AUDIO_STRATEGY_REPEAT'."""
        return Metaclass_AlertCode.__constants['AUDIO_STRATEGY_REPEAT']

    @property
    def AUDIO_STRATEGY_ACTIVATION(self):
        """Message constant 'AUDIO_STRATEGY_ACTIVATION'."""
        return Metaclass_AlertCode.__constants['AUDIO_STRATEGY_ACTIVATION']


class AlertCode(metaclass=Metaclass_AlertCode):
    """
    Message class 'AlertCode'.

    Constants:
      AUDIO_STRATEGY_NONE
      AUDIO_STRATEGY_ONCE
      AUDIO_STRATEGY_REPEAT
      AUDIO_STRATEGY_ACTIVATION
    """

    __slots__ = [
        '_uuid',
        '_timestamp',
        '_appeared_timestamp',
        '_code',
        '_alert_event_type',
        '_level',
        '_text',
        '_is_audio_cycle',
        '_light_msg',
        '_emotion_id',
        '_post_process',
        '_app_show_id',
        '_breakdown_msg',
        '_capability_limit',
        '_diag_name',
        '_audio_strategy',
        '_disabled_capabilities',
        '_nlg_scene_id',
    ]

    _fields_and_field_types = {
        'uuid': 'uint64',
        'timestamp': 'uint64',
        'appeared_timestamp': 'uint64',
        'code': 'string',
        'alert_event_type': 'uint8',
        'level': 'uint8',
        'text': 'string',
        'is_audio_cycle': 'boolean',
        'light_msg': 'string',
        'emotion_id': 'uint32',
        'post_process': 'uint32',
        'app_show_id': 'string',
        'breakdown_msg': 'string',
        'capability_limit': 'string',
        'diag_name': 'string',
        'audio_strategy': 'uint8',
        'disabled_capabilities': 'sequence<string>',
        'nlg_scene_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uuid = kwargs.get('uuid', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.appeared_timestamp = kwargs.get('appeared_timestamp', int())
        self.code = kwargs.get('code', str())
        self.alert_event_type = kwargs.get('alert_event_type', int())
        self.level = kwargs.get('level', int())
        self.text = kwargs.get('text', str())
        self.is_audio_cycle = kwargs.get('is_audio_cycle', bool())
        self.light_msg = kwargs.get('light_msg', str())
        self.emotion_id = kwargs.get('emotion_id', int())
        self.post_process = kwargs.get('post_process', int())
        self.app_show_id = kwargs.get('app_show_id', str())
        self.breakdown_msg = kwargs.get('breakdown_msg', str())
        self.capability_limit = kwargs.get('capability_limit', str())
        self.diag_name = kwargs.get('diag_name', str())
        self.audio_strategy = kwargs.get('audio_strategy', int())
        self.disabled_capabilities = kwargs.get('disabled_capabilities', [])
        self.nlg_scene_id = kwargs.get('nlg_scene_id', str())

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
        if self.uuid != other.uuid:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.appeared_timestamp != other.appeared_timestamp:
            return False
        if self.code != other.code:
            return False
        if self.alert_event_type != other.alert_event_type:
            return False
        if self.level != other.level:
            return False
        if self.text != other.text:
            return False
        if self.is_audio_cycle != other.is_audio_cycle:
            return False
        if self.light_msg != other.light_msg:
            return False
        if self.emotion_id != other.emotion_id:
            return False
        if self.post_process != other.post_process:
            return False
        if self.app_show_id != other.app_show_id:
            return False
        if self.breakdown_msg != other.breakdown_msg:
            return False
        if self.capability_limit != other.capability_limit:
            return False
        if self.diag_name != other.diag_name:
            return False
        if self.audio_strategy != other.audio_strategy:
            return False
        if self.disabled_capabilities != other.disabled_capabilities:
            return False
        if self.nlg_scene_id != other.nlg_scene_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uuid' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uuid' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uuid = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def appeared_timestamp(self):
        """Message field 'appeared_timestamp'."""
        return self._appeared_timestamp

    @appeared_timestamp.setter
    def appeared_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'appeared_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'appeared_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._appeared_timestamp = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'code' field must be of type 'str'"
        self._code = value

    @builtins.property
    def alert_event_type(self):
        """Message field 'alert_event_type'."""
        return self._alert_event_type

    @alert_event_type.setter
    def alert_event_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alert_event_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alert_event_type' field must be an unsigned integer in [0, 255]"
        self._alert_event_type = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'level' field must be an unsigned integer in [0, 255]"
        self._level = value

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @builtins.property
    def is_audio_cycle(self):
        """Message field 'is_audio_cycle'."""
        return self._is_audio_cycle

    @is_audio_cycle.setter
    def is_audio_cycle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_audio_cycle' field must be of type 'bool'"
        self._is_audio_cycle = value

    @builtins.property
    def light_msg(self):
        """Message field 'light_msg'."""
        return self._light_msg

    @light_msg.setter
    def light_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'light_msg' field must be of type 'str'"
        self._light_msg = value

    @builtins.property
    def emotion_id(self):
        """Message field 'emotion_id'."""
        return self._emotion_id

    @emotion_id.setter
    def emotion_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emotion_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'emotion_id' field must be an unsigned integer in [0, 4294967295]"
        self._emotion_id = value

    @builtins.property
    def post_process(self):
        """Message field 'post_process'."""
        return self._post_process

    @post_process.setter
    def post_process(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'post_process' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'post_process' field must be an unsigned integer in [0, 4294967295]"
        self._post_process = value

    @builtins.property
    def app_show_id(self):
        """Message field 'app_show_id'."""
        return self._app_show_id

    @app_show_id.setter
    def app_show_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'app_show_id' field must be of type 'str'"
        self._app_show_id = value

    @builtins.property
    def breakdown_msg(self):
        """Message field 'breakdown_msg'."""
        return self._breakdown_msg

    @breakdown_msg.setter
    def breakdown_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'breakdown_msg' field must be of type 'str'"
        self._breakdown_msg = value

    @builtins.property
    def capability_limit(self):
        """Message field 'capability_limit'."""
        return self._capability_limit

    @capability_limit.setter
    def capability_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'capability_limit' field must be of type 'str'"
        self._capability_limit = value

    @builtins.property
    def diag_name(self):
        """Message field 'diag_name'."""
        return self._diag_name

    @diag_name.setter
    def diag_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'diag_name' field must be of type 'str'"
        self._diag_name = value

    @builtins.property
    def audio_strategy(self):
        """Message field 'audio_strategy'."""
        return self._audio_strategy

    @audio_strategy.setter
    def audio_strategy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'audio_strategy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'audio_strategy' field must be an unsigned integer in [0, 255]"
        self._audio_strategy = value

    @builtins.property
    def disabled_capabilities(self):
        """Message field 'disabled_capabilities'."""
        return self._disabled_capabilities

    @disabled_capabilities.setter
    def disabled_capabilities(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'disabled_capabilities' field must be a set or sequence and each value of type 'str'"
        self._disabled_capabilities = value

    @builtins.property
    def nlg_scene_id(self):
        """Message field 'nlg_scene_id'."""
        return self._nlg_scene_id

    @nlg_scene_id.setter
    def nlg_scene_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nlg_scene_id' field must be of type 'str'"
        self._nlg_scene_id = value
