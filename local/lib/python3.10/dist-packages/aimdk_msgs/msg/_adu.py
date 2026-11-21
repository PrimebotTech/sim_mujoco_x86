# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/Adu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Adu(type):
    """Metaclass of message 'Adu'."""

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
                'aimdk_msgs.msg.Adu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adu

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


class Adu(metaclass=Metaclass_Adu):
    """Message class 'Adu'."""

    __slots__ = [
        '_header',
        '_protocol_version',
        '_hardware_version',
        '_software_version',
        '_status_word',
        '_error_code',
        '_board_12v_voltage',
        '_board_5v_voltage',
        '_board_3v3_voltage',
        '_board_1v2_voltage',
        '_board_1v8_voltage',
        '_board_3v8_voltage',
        '_system_12v_current',
        '_board_temperature_voltage',
        '_board_hardware_voltage',
        '_ntc_temperature',
        '_fan1_target_speed',
        '_fan1_feedback_speed',
        '_fan2_target_speed',
        '_fan2_feedback_speed',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'protocol_version': 'string',
        'hardware_version': 'string',
        'software_version': 'string',
        'status_word': 'uint16',
        'error_code': 'uint32',
        'board_12v_voltage': 'float',
        'board_5v_voltage': 'float',
        'board_3v3_voltage': 'float',
        'board_1v2_voltage': 'float',
        'board_1v8_voltage': 'float',
        'board_3v8_voltage': 'float',
        'system_12v_current': 'float',
        'board_temperature_voltage': 'float',
        'board_hardware_voltage': 'float',
        'ntc_temperature': 'float',
        'fan1_target_speed': 'uint32',
        'fan1_feedback_speed': 'uint32',
        'fan2_target_speed': 'uint32',
        'fan2_feedback_speed': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.protocol_version = kwargs.get('protocol_version', str())
        self.hardware_version = kwargs.get('hardware_version', str())
        self.software_version = kwargs.get('software_version', str())
        self.status_word = kwargs.get('status_word', int())
        self.error_code = kwargs.get('error_code', int())
        self.board_12v_voltage = kwargs.get('board_12v_voltage', float())
        self.board_5v_voltage = kwargs.get('board_5v_voltage', float())
        self.board_3v3_voltage = kwargs.get('board_3v3_voltage', float())
        self.board_1v2_voltage = kwargs.get('board_1v2_voltage', float())
        self.board_1v8_voltage = kwargs.get('board_1v8_voltage', float())
        self.board_3v8_voltage = kwargs.get('board_3v8_voltage', float())
        self.system_12v_current = kwargs.get('system_12v_current', float())
        self.board_temperature_voltage = kwargs.get('board_temperature_voltage', float())
        self.board_hardware_voltage = kwargs.get('board_hardware_voltage', float())
        self.ntc_temperature = kwargs.get('ntc_temperature', float())
        self.fan1_target_speed = kwargs.get('fan1_target_speed', int())
        self.fan1_feedback_speed = kwargs.get('fan1_feedback_speed', int())
        self.fan2_target_speed = kwargs.get('fan2_target_speed', int())
        self.fan2_feedback_speed = kwargs.get('fan2_feedback_speed', int())

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
        if self.protocol_version != other.protocol_version:
            return False
        if self.hardware_version != other.hardware_version:
            return False
        if self.software_version != other.software_version:
            return False
        if self.status_word != other.status_word:
            return False
        if self.error_code != other.error_code:
            return False
        if self.board_12v_voltage != other.board_12v_voltage:
            return False
        if self.board_5v_voltage != other.board_5v_voltage:
            return False
        if self.board_3v3_voltage != other.board_3v3_voltage:
            return False
        if self.board_1v2_voltage != other.board_1v2_voltage:
            return False
        if self.board_1v8_voltage != other.board_1v8_voltage:
            return False
        if self.board_3v8_voltage != other.board_3v8_voltage:
            return False
        if self.system_12v_current != other.system_12v_current:
            return False
        if self.board_temperature_voltage != other.board_temperature_voltage:
            return False
        if self.board_hardware_voltage != other.board_hardware_voltage:
            return False
        if self.ntc_temperature != other.ntc_temperature:
            return False
        if self.fan1_target_speed != other.fan1_target_speed:
            return False
        if self.fan1_feedback_speed != other.fan1_feedback_speed:
            return False
        if self.fan2_target_speed != other.fan2_target_speed:
            return False
        if self.fan2_feedback_speed != other.fan2_feedback_speed:
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
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'protocol_version' field must be of type 'str'"
        self._protocol_version = value

    @builtins.property
    def hardware_version(self):
        """Message field 'hardware_version'."""
        return self._hardware_version

    @hardware_version.setter
    def hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_version' field must be of type 'str'"
        self._hardware_version = value

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software_version' field must be of type 'str'"
        self._software_version = value

    @builtins.property
    def status_word(self):
        """Message field 'status_word'."""
        return self._status_word

    @status_word.setter
    def status_word(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_word' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status_word' field must be an unsigned integer in [0, 65535]"
        self._status_word = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_code' field must be an unsigned integer in [0, 4294967295]"
        self._error_code = value

    @builtins.property
    def board_12v_voltage(self):
        """Message field 'board_12v_voltage'."""
        return self._board_12v_voltage

    @board_12v_voltage.setter
    def board_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_12v_voltage = value

    @builtins.property
    def board_5v_voltage(self):
        """Message field 'board_5v_voltage'."""
        return self._board_5v_voltage

    @board_5v_voltage.setter
    def board_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_5v_voltage = value

    @builtins.property
    def board_3v3_voltage(self):
        """Message field 'board_3v3_voltage'."""
        return self._board_3v3_voltage

    @board_3v3_voltage.setter
    def board_3v3_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_3v3_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_3v3_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_3v3_voltage = value

    @builtins.property
    def board_1v2_voltage(self):
        """Message field 'board_1v2_voltage'."""
        return self._board_1v2_voltage

    @board_1v2_voltage.setter
    def board_1v2_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_1v2_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_1v2_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_1v2_voltage = value

    @builtins.property
    def board_1v8_voltage(self):
        """Message field 'board_1v8_voltage'."""
        return self._board_1v8_voltage

    @board_1v8_voltage.setter
    def board_1v8_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_1v8_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_1v8_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_1v8_voltage = value

    @builtins.property
    def board_3v8_voltage(self):
        """Message field 'board_3v8_voltage'."""
        return self._board_3v8_voltage

    @board_3v8_voltage.setter
    def board_3v8_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_3v8_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_3v8_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_3v8_voltage = value

    @builtins.property
    def system_12v_current(self):
        """Message field 'system_12v_current'."""
        return self._system_12v_current

    @system_12v_current.setter
    def system_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'system_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._system_12v_current = value

    @builtins.property
    def board_temperature_voltage(self):
        """Message field 'board_temperature_voltage'."""
        return self._board_temperature_voltage

    @board_temperature_voltage.setter
    def board_temperature_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_temperature_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_temperature_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_temperature_voltage = value

    @builtins.property
    def board_hardware_voltage(self):
        """Message field 'board_hardware_voltage'."""
        return self._board_hardware_voltage

    @board_hardware_voltage.setter
    def board_hardware_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'board_hardware_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'board_hardware_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._board_hardware_voltage = value

    @builtins.property
    def ntc_temperature(self):
        """Message field 'ntc_temperature'."""
        return self._ntc_temperature

    @ntc_temperature.setter
    def ntc_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ntc_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ntc_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ntc_temperature = value

    @builtins.property
    def fan1_target_speed(self):
        """Message field 'fan1_target_speed'."""
        return self._fan1_target_speed

    @fan1_target_speed.setter
    def fan1_target_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan1_target_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fan1_target_speed' field must be an unsigned integer in [0, 4294967295]"
        self._fan1_target_speed = value

    @builtins.property
    def fan1_feedback_speed(self):
        """Message field 'fan1_feedback_speed'."""
        return self._fan1_feedback_speed

    @fan1_feedback_speed.setter
    def fan1_feedback_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan1_feedback_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fan1_feedback_speed' field must be an unsigned integer in [0, 4294967295]"
        self._fan1_feedback_speed = value

    @builtins.property
    def fan2_target_speed(self):
        """Message field 'fan2_target_speed'."""
        return self._fan2_target_speed

    @fan2_target_speed.setter
    def fan2_target_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan2_target_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fan2_target_speed' field must be an unsigned integer in [0, 4294967295]"
        self._fan2_target_speed = value

    @builtins.property
    def fan2_feedback_speed(self):
        """Message field 'fan2_feedback_speed'."""
        return self._fan2_feedback_speed

    @fan2_feedback_speed.setter
    def fan2_feedback_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan2_feedback_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fan2_feedback_speed' field must be an unsigned integer in [0, 4294967295]"
        self._fan2_feedback_speed = value
