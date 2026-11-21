# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/Bms.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bms(type):
    """Metaclass of message 'Bms'."""

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
                'aimdk_msgs.msg.Bms')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms

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


class Bms(metaclass=Metaclass_Bms):
    """Message class 'Bms'."""

    __slots__ = [
        '_header',
        '_manufacturer',
        '_serial_number',
        '_protocol_version',
        '_hardware_version',
        '_software_version',
        '_power_request',
        '_status',
        '_balance_line_resistance',
        '_voltage',
        '_current',
        '_power',
        '_temperature',
        '_remaining_capacity',
        '_remaining_capacity_percentage',
        '_cycle_count',
        '_cycle_total_capacity',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'manufacturer': 'string',
        'serial_number': 'string',
        'protocol_version': 'string',
        'hardware_version': 'string',
        'software_version': 'string',
        'power_request': 'uint16',
        'status': 'uint32',
        'balance_line_resistance': 'uint16',
        'voltage': 'uint32',
        'current': 'int32',
        'power': 'int32',
        'temperature': 'float',
        'remaining_capacity': 'uint32',
        'remaining_capacity_percentage': 'uint8',
        'cycle_count': 'uint16',
        'cycle_total_capacity': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.manufacturer = kwargs.get('manufacturer', str())
        self.serial_number = kwargs.get('serial_number', str())
        self.protocol_version = kwargs.get('protocol_version', str())
        self.hardware_version = kwargs.get('hardware_version', str())
        self.software_version = kwargs.get('software_version', str())
        self.power_request = kwargs.get('power_request', int())
        self.status = kwargs.get('status', int())
        self.balance_line_resistance = kwargs.get('balance_line_resistance', int())
        self.voltage = kwargs.get('voltage', int())
        self.current = kwargs.get('current', int())
        self.power = kwargs.get('power', int())
        self.temperature = kwargs.get('temperature', float())
        self.remaining_capacity = kwargs.get('remaining_capacity', int())
        self.remaining_capacity_percentage = kwargs.get('remaining_capacity_percentage', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.cycle_total_capacity = kwargs.get('cycle_total_capacity', int())

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
        if self.manufacturer != other.manufacturer:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.protocol_version != other.protocol_version:
            return False
        if self.hardware_version != other.hardware_version:
            return False
        if self.software_version != other.software_version:
            return False
        if self.power_request != other.power_request:
            return False
        if self.status != other.status:
            return False
        if self.balance_line_resistance != other.balance_line_resistance:
            return False
        if self.voltage != other.voltage:
            return False
        if self.current != other.current:
            return False
        if self.power != other.power:
            return False
        if self.temperature != other.temperature:
            return False
        if self.remaining_capacity != other.remaining_capacity:
            return False
        if self.remaining_capacity_percentage != other.remaining_capacity_percentage:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.cycle_total_capacity != other.cycle_total_capacity:
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
    def manufacturer(self):
        """Message field 'manufacturer'."""
        return self._manufacturer

    @manufacturer.setter
    def manufacturer(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'manufacturer' field must be of type 'str'"
        self._manufacturer = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_number' field must be of type 'str'"
        self._serial_number = value

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
    def power_request(self):
        """Message field 'power_request'."""
        return self._power_request

    @power_request.setter
    def power_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_request' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'power_request' field must be an unsigned integer in [0, 65535]"
        self._power_request = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status' field must be an unsigned integer in [0, 4294967295]"
        self._status = value

    @builtins.property
    def balance_line_resistance(self):
        """Message field 'balance_line_resistance'."""
        return self._balance_line_resistance

    @balance_line_resistance.setter
    def balance_line_resistance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'balance_line_resistance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'balance_line_resistance' field must be an unsigned integer in [0, 65535]"
        self._balance_line_resistance = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'voltage' field must be an unsigned integer in [0, 4294967295]"
        self._voltage = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current' field must be an integer in [-2147483648, 2147483647]"
        self._current = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'power' field must be an integer in [-2147483648, 2147483647]"
        self._power = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def remaining_capacity(self):
        """Message field 'remaining_capacity'."""
        return self._remaining_capacity

    @remaining_capacity.setter
    def remaining_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'remaining_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._remaining_capacity = value

    @builtins.property
    def remaining_capacity_percentage(self):
        """Message field 'remaining_capacity_percentage'."""
        return self._remaining_capacity_percentage

    @remaining_capacity_percentage.setter
    def remaining_capacity_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_capacity_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remaining_capacity_percentage' field must be an unsigned integer in [0, 255]"
        self._remaining_capacity_percentage = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cycle_count' field must be an unsigned integer in [0, 65535]"
        self._cycle_count = value

    @builtins.property
    def cycle_total_capacity(self):
        """Message field 'cycle_total_capacity'."""
        return self._cycle_total_capacity

    @cycle_total_capacity.setter
    def cycle_total_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_total_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cycle_total_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._cycle_total_capacity = value
