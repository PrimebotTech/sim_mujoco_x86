# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/MusicState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MusicState(type):
    """Metaclass of message 'MusicState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PLAYBACK_STATE_IDLE': 0,
        'PLAYBACK_STATE_PLAYING': 1,
        'PLAYBACK_STATE_PAUSED': 2,
        'PLAYBACK_STATE_STOPED': 4,
        'PLAYBACK_STATE_ERROR': 5,
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
                'aimdk_msgs.msg.MusicState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__music_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__music_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__music_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__music_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__music_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PLAYBACK_STATE_IDLE': cls.__constants['PLAYBACK_STATE_IDLE'],
            'PLAYBACK_STATE_PLAYING': cls.__constants['PLAYBACK_STATE_PLAYING'],
            'PLAYBACK_STATE_PAUSED': cls.__constants['PLAYBACK_STATE_PAUSED'],
            'PLAYBACK_STATE_STOPED': cls.__constants['PLAYBACK_STATE_STOPED'],
            'PLAYBACK_STATE_ERROR': cls.__constants['PLAYBACK_STATE_ERROR'],
        }

    @property
    def PLAYBACK_STATE_IDLE(self):
        """Message constant 'PLAYBACK_STATE_IDLE'."""
        return Metaclass_MusicState.__constants['PLAYBACK_STATE_IDLE']

    @property
    def PLAYBACK_STATE_PLAYING(self):
        """Message constant 'PLAYBACK_STATE_PLAYING'."""
        return Metaclass_MusicState.__constants['PLAYBACK_STATE_PLAYING']

    @property
    def PLAYBACK_STATE_PAUSED(self):
        """Message constant 'PLAYBACK_STATE_PAUSED'."""
        return Metaclass_MusicState.__constants['PLAYBACK_STATE_PAUSED']

    @property
    def PLAYBACK_STATE_STOPED(self):
        """Message constant 'PLAYBACK_STATE_STOPED'."""
        return Metaclass_MusicState.__constants['PLAYBACK_STATE_STOPED']

    @property
    def PLAYBACK_STATE_ERROR(self):
        """Message constant 'PLAYBACK_STATE_ERROR'."""
        return Metaclass_MusicState.__constants['PLAYBACK_STATE_ERROR']


class MusicState(metaclass=Metaclass_MusicState):
    """
    Message class 'MusicState'.

    Constants:
      PLAYBACK_STATE_IDLE
      PLAYBACK_STATE_PLAYING
      PLAYBACK_STATE_PAUSED
      PLAYBACK_STATE_STOPED
      PLAYBACK_STATE_ERROR
    """

    __slots__ = [
        '_control_command_id',
        '_playback_state',
        '_song_name',
        '_artist',
        '_total_duration',
        '_current_time',
        '_vip_song',
        '_trail',
        '_playable_code',
        '_qualities',
        '_quality_index',
        '_search_command_id',
        '_song_list_name',
        '_song_list_size',
        '_playback_index',
        '_sp',
        '_search_resp_status',
        '_search_resp_tts_text',
        '_search_resp_code',
        '_url_resp_warning',
    ]

    _fields_and_field_types = {
        'control_command_id': 'uint64',
        'playback_state': 'int32',
        'song_name': 'string',
        'artist': 'sequence<string>',
        'total_duration': 'double',
        'current_time': 'double',
        'vip_song': 'boolean',
        'trail': 'boolean',
        'playable_code': 'int32',
        'qualities': 'sequence<string>',
        'quality_index': 'int32',
        'search_command_id': 'uint64',
        'song_list_name': 'string',
        'song_list_size': 'int32',
        'playback_index': 'int32',
        'sp': 'int32',
        'search_resp_status': 'int32',
        'search_resp_tts_text': 'string',
        'search_resp_code': 'string',
        'url_resp_warning': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.control_command_id = kwargs.get('control_command_id', int())
        self.playback_state = kwargs.get('playback_state', int())
        self.song_name = kwargs.get('song_name', str())
        self.artist = kwargs.get('artist', [])
        self.total_duration = kwargs.get('total_duration', float())
        self.current_time = kwargs.get('current_time', float())
        self.vip_song = kwargs.get('vip_song', bool())
        self.trail = kwargs.get('trail', bool())
        self.playable_code = kwargs.get('playable_code', int())
        self.qualities = kwargs.get('qualities', [])
        self.quality_index = kwargs.get('quality_index', int())
        self.search_command_id = kwargs.get('search_command_id', int())
        self.song_list_name = kwargs.get('song_list_name', str())
        self.song_list_size = kwargs.get('song_list_size', int())
        self.playback_index = kwargs.get('playback_index', int())
        self.sp = kwargs.get('sp', int())
        self.search_resp_status = kwargs.get('search_resp_status', int())
        self.search_resp_tts_text = kwargs.get('search_resp_tts_text', str())
        self.search_resp_code = kwargs.get('search_resp_code', str())
        self.url_resp_warning = kwargs.get('url_resp_warning', str())

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
        if self.control_command_id != other.control_command_id:
            return False
        if self.playback_state != other.playback_state:
            return False
        if self.song_name != other.song_name:
            return False
        if self.artist != other.artist:
            return False
        if self.total_duration != other.total_duration:
            return False
        if self.current_time != other.current_time:
            return False
        if self.vip_song != other.vip_song:
            return False
        if self.trail != other.trail:
            return False
        if self.playable_code != other.playable_code:
            return False
        if self.qualities != other.qualities:
            return False
        if self.quality_index != other.quality_index:
            return False
        if self.search_command_id != other.search_command_id:
            return False
        if self.song_list_name != other.song_list_name:
            return False
        if self.song_list_size != other.song_list_size:
            return False
        if self.playback_index != other.playback_index:
            return False
        if self.sp != other.sp:
            return False
        if self.search_resp_status != other.search_resp_status:
            return False
        if self.search_resp_tts_text != other.search_resp_tts_text:
            return False
        if self.search_resp_code != other.search_resp_code:
            return False
        if self.url_resp_warning != other.url_resp_warning:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def control_command_id(self):
        """Message field 'control_command_id'."""
        return self._control_command_id

    @control_command_id.setter
    def control_command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_command_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'control_command_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._control_command_id = value

    @builtins.property
    def playback_state(self):
        """Message field 'playback_state'."""
        return self._playback_state

    @playback_state.setter
    def playback_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'playback_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'playback_state' field must be an integer in [-2147483648, 2147483647]"
        self._playback_state = value

    @builtins.property
    def song_name(self):
        """Message field 'song_name'."""
        return self._song_name

    @song_name.setter
    def song_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'song_name' field must be of type 'str'"
        self._song_name = value

    @builtins.property
    def artist(self):
        """Message field 'artist'."""
        return self._artist

    @artist.setter
    def artist(self, value):
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
                "The 'artist' field must be a set or sequence and each value of type 'str'"
        self._artist = value

    @builtins.property
    def total_duration(self):
        """Message field 'total_duration'."""
        return self._total_duration

    @total_duration.setter
    def total_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_duration = value

    @builtins.property
    def current_time(self):
        """Message field 'current_time'."""
        return self._current_time

    @current_time.setter
    def current_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_time = value

    @builtins.property
    def vip_song(self):
        """Message field 'vip_song'."""
        return self._vip_song

    @vip_song.setter
    def vip_song(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vip_song' field must be of type 'bool'"
        self._vip_song = value

    @builtins.property
    def trail(self):
        """Message field 'trail'."""
        return self._trail

    @trail.setter
    def trail(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trail' field must be of type 'bool'"
        self._trail = value

    @builtins.property
    def playable_code(self):
        """Message field 'playable_code'."""
        return self._playable_code

    @playable_code.setter
    def playable_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'playable_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'playable_code' field must be an integer in [-2147483648, 2147483647]"
        self._playable_code = value

    @builtins.property
    def qualities(self):
        """Message field 'qualities'."""
        return self._qualities

    @qualities.setter
    def qualities(self, value):
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
                "The 'qualities' field must be a set or sequence and each value of type 'str'"
        self._qualities = value

    @builtins.property
    def quality_index(self):
        """Message field 'quality_index'."""
        return self._quality_index

    @quality_index.setter
    def quality_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'quality_index' field must be an integer in [-2147483648, 2147483647]"
        self._quality_index = value

    @builtins.property
    def search_command_id(self):
        """Message field 'search_command_id'."""
        return self._search_command_id

    @search_command_id.setter
    def search_command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'search_command_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'search_command_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._search_command_id = value

    @builtins.property
    def song_list_name(self):
        """Message field 'song_list_name'."""
        return self._song_list_name

    @song_list_name.setter
    def song_list_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'song_list_name' field must be of type 'str'"
        self._song_list_name = value

    @builtins.property
    def song_list_size(self):
        """Message field 'song_list_size'."""
        return self._song_list_size

    @song_list_size.setter
    def song_list_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'song_list_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'song_list_size' field must be an integer in [-2147483648, 2147483647]"
        self._song_list_size = value

    @builtins.property
    def playback_index(self):
        """Message field 'playback_index'."""
        return self._playback_index

    @playback_index.setter
    def playback_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'playback_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'playback_index' field must be an integer in [-2147483648, 2147483647]"
        self._playback_index = value

    @builtins.property
    def sp(self):
        """Message field 'sp'."""
        return self._sp

    @sp.setter
    def sp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sp' field must be an integer in [-2147483648, 2147483647]"
        self._sp = value

    @builtins.property
    def search_resp_status(self):
        """Message field 'search_resp_status'."""
        return self._search_resp_status

    @search_resp_status.setter
    def search_resp_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'search_resp_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'search_resp_status' field must be an integer in [-2147483648, 2147483647]"
        self._search_resp_status = value

    @builtins.property
    def search_resp_tts_text(self):
        """Message field 'search_resp_tts_text'."""
        return self._search_resp_tts_text

    @search_resp_tts_text.setter
    def search_resp_tts_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'search_resp_tts_text' field must be of type 'str'"
        self._search_resp_tts_text = value

    @builtins.property
    def search_resp_code(self):
        """Message field 'search_resp_code'."""
        return self._search_resp_code

    @search_resp_code.setter
    def search_resp_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'search_resp_code' field must be of type 'str'"
        self._search_resp_code = value

    @builtins.property
    def url_resp_warning(self):
        """Message field 'url_resp_warning'."""
        return self._url_resp_warning

    @url_resp_warning.setter
    def url_resp_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'url_resp_warning' field must be of type 'str'"
        self._url_resp_warning = value
