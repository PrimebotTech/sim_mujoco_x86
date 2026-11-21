# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/Pmu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pmu(type):
    """Metaclass of message 'Pmu'."""

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
                'aimdk_msgs.msg.Pmu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pmu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pmu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pmu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pmu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pmu

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


class Pmu(metaclass=Metaclass_Pmu):
    """Message class 'Pmu'."""

    __slots__ = [
        '_header',
        '_protocol_version',
        '_hardware_version',
        '_software_version',
        '_orin_hardware_version',
        '_status_word',
        '_status',
        '_vcc_3v3_voltage',
        '_vcc_1v8_voltage',
        '_vcc_1v2_voltage',
        '_nfc_5v_voltage',
        '_periph_5v_voltage',
        '_lcd_voltage',
        '_sys2_12v_voltage',
        '_soc0_5v_voltage',
        '_sys_5v_voltage',
        '_sys_12v_voltage',
        '_soc1_12v_voltage',
        '_ext_12v_voltage',
        '_ext_24v_voltage',
        '_arm_48v_voltage',
        '_leg_48v_voltage',
        '_soc0_5v_current',
        '_periph_5v_current',
        '_sys2_12v_current',
        '_sys_5v_current',
        '_sys_12v_current',
        '_soc1_12v_current',
        '_ext_12v_current',
        '_ext_24v_current',
        '_arm_48v_current',
        '_leg_48v_current',
        '_temp_48to12_orin_left',
        '_temp_48to12_orin_bottom',
        '_temp_12v_ext_mos',
        '_temp_12to5',
        '_temp_emmc',
        '_temp_soc',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'protocol_version': 'string',
        'hardware_version': 'string',
        'software_version': 'string',
        'orin_hardware_version': 'string',
        'status_word': 'uint16',
        'status': 'uint32',
        'vcc_3v3_voltage': 'float',
        'vcc_1v8_voltage': 'float',
        'vcc_1v2_voltage': 'float',
        'nfc_5v_voltage': 'float',
        'periph_5v_voltage': 'float',
        'lcd_voltage': 'float',
        'sys2_12v_voltage': 'float',
        'soc0_5v_voltage': 'float',
        'sys_5v_voltage': 'float',
        'sys_12v_voltage': 'float',
        'soc1_12v_voltage': 'float',
        'ext_12v_voltage': 'float',
        'ext_24v_voltage': 'float',
        'arm_48v_voltage': 'float',
        'leg_48v_voltage': 'float',
        'soc0_5v_current': 'float',
        'periph_5v_current': 'float',
        'sys2_12v_current': 'float',
        'sys_5v_current': 'float',
        'sys_12v_current': 'float',
        'soc1_12v_current': 'float',
        'ext_12v_current': 'float',
        'ext_24v_current': 'float',
        'arm_48v_current': 'float',
        'leg_48v_current': 'float',
        'temp_48to12_orin_left': 'float',
        'temp_48to12_orin_bottom': 'float',
        'temp_12v_ext_mos': 'float',
        'temp_12to5': 'float',
        'temp_emmc': 'float',
        'temp_soc': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.orin_hardware_version = kwargs.get('orin_hardware_version', str())
        self.status_word = kwargs.get('status_word', int())
        self.status = kwargs.get('status', int())
        self.vcc_3v3_voltage = kwargs.get('vcc_3v3_voltage', float())
        self.vcc_1v8_voltage = kwargs.get('vcc_1v8_voltage', float())
        self.vcc_1v2_voltage = kwargs.get('vcc_1v2_voltage', float())
        self.nfc_5v_voltage = kwargs.get('nfc_5v_voltage', float())
        self.periph_5v_voltage = kwargs.get('periph_5v_voltage', float())
        self.lcd_voltage = kwargs.get('lcd_voltage', float())
        self.sys2_12v_voltage = kwargs.get('sys2_12v_voltage', float())
        self.soc0_5v_voltage = kwargs.get('soc0_5v_voltage', float())
        self.sys_5v_voltage = kwargs.get('sys_5v_voltage', float())
        self.sys_12v_voltage = kwargs.get('sys_12v_voltage', float())
        self.soc1_12v_voltage = kwargs.get('soc1_12v_voltage', float())
        self.ext_12v_voltage = kwargs.get('ext_12v_voltage', float())
        self.ext_24v_voltage = kwargs.get('ext_24v_voltage', float())
        self.arm_48v_voltage = kwargs.get('arm_48v_voltage', float())
        self.leg_48v_voltage = kwargs.get('leg_48v_voltage', float())
        self.soc0_5v_current = kwargs.get('soc0_5v_current', float())
        self.periph_5v_current = kwargs.get('periph_5v_current', float())
        self.sys2_12v_current = kwargs.get('sys2_12v_current', float())
        self.sys_5v_current = kwargs.get('sys_5v_current', float())
        self.sys_12v_current = kwargs.get('sys_12v_current', float())
        self.soc1_12v_current = kwargs.get('soc1_12v_current', float())
        self.ext_12v_current = kwargs.get('ext_12v_current', float())
        self.ext_24v_current = kwargs.get('ext_24v_current', float())
        self.arm_48v_current = kwargs.get('arm_48v_current', float())
        self.leg_48v_current = kwargs.get('leg_48v_current', float())
        self.temp_48to12_orin_left = kwargs.get('temp_48to12_orin_left', float())
        self.temp_48to12_orin_bottom = kwargs.get('temp_48to12_orin_bottom', float())
        self.temp_12v_ext_mos = kwargs.get('temp_12v_ext_mos', float())
        self.temp_12to5 = kwargs.get('temp_12to5', float())
        self.temp_emmc = kwargs.get('temp_emmc', float())
        self.temp_soc = kwargs.get('temp_soc', float())

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
        if self.orin_hardware_version != other.orin_hardware_version:
            return False
        if self.status_word != other.status_word:
            return False
        if self.status != other.status:
            return False
        if self.vcc_3v3_voltage != other.vcc_3v3_voltage:
            return False
        if self.vcc_1v8_voltage != other.vcc_1v8_voltage:
            return False
        if self.vcc_1v2_voltage != other.vcc_1v2_voltage:
            return False
        if self.nfc_5v_voltage != other.nfc_5v_voltage:
            return False
        if self.periph_5v_voltage != other.periph_5v_voltage:
            return False
        if self.lcd_voltage != other.lcd_voltage:
            return False
        if self.sys2_12v_voltage != other.sys2_12v_voltage:
            return False
        if self.soc0_5v_voltage != other.soc0_5v_voltage:
            return False
        if self.sys_5v_voltage != other.sys_5v_voltage:
            return False
        if self.sys_12v_voltage != other.sys_12v_voltage:
            return False
        if self.soc1_12v_voltage != other.soc1_12v_voltage:
            return False
        if self.ext_12v_voltage != other.ext_12v_voltage:
            return False
        if self.ext_24v_voltage != other.ext_24v_voltage:
            return False
        if self.arm_48v_voltage != other.arm_48v_voltage:
            return False
        if self.leg_48v_voltage != other.leg_48v_voltage:
            return False
        if self.soc0_5v_current != other.soc0_5v_current:
            return False
        if self.periph_5v_current != other.periph_5v_current:
            return False
        if self.sys2_12v_current != other.sys2_12v_current:
            return False
        if self.sys_5v_current != other.sys_5v_current:
            return False
        if self.sys_12v_current != other.sys_12v_current:
            return False
        if self.soc1_12v_current != other.soc1_12v_current:
            return False
        if self.ext_12v_current != other.ext_12v_current:
            return False
        if self.ext_24v_current != other.ext_24v_current:
            return False
        if self.arm_48v_current != other.arm_48v_current:
            return False
        if self.leg_48v_current != other.leg_48v_current:
            return False
        if self.temp_48to12_orin_left != other.temp_48to12_orin_left:
            return False
        if self.temp_48to12_orin_bottom != other.temp_48to12_orin_bottom:
            return False
        if self.temp_12v_ext_mos != other.temp_12v_ext_mos:
            return False
        if self.temp_12to5 != other.temp_12to5:
            return False
        if self.temp_emmc != other.temp_emmc:
            return False
        if self.temp_soc != other.temp_soc:
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
    def orin_hardware_version(self):
        """Message field 'orin_hardware_version'."""
        return self._orin_hardware_version

    @orin_hardware_version.setter
    def orin_hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'orin_hardware_version' field must be of type 'str'"
        self._orin_hardware_version = value

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
    def vcc_3v3_voltage(self):
        """Message field 'vcc_3v3_voltage'."""
        return self._vcc_3v3_voltage

    @vcc_3v3_voltage.setter
    def vcc_3v3_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcc_3v3_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcc_3v3_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcc_3v3_voltage = value

    @builtins.property
    def vcc_1v8_voltage(self):
        """Message field 'vcc_1v8_voltage'."""
        return self._vcc_1v8_voltage

    @vcc_1v8_voltage.setter
    def vcc_1v8_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcc_1v8_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcc_1v8_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcc_1v8_voltage = value

    @builtins.property
    def vcc_1v2_voltage(self):
        """Message field 'vcc_1v2_voltage'."""
        return self._vcc_1v2_voltage

    @vcc_1v2_voltage.setter
    def vcc_1v2_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vcc_1v2_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vcc_1v2_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vcc_1v2_voltage = value

    @builtins.property
    def nfc_5v_voltage(self):
        """Message field 'nfc_5v_voltage'."""
        return self._nfc_5v_voltage

    @nfc_5v_voltage.setter
    def nfc_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nfc_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nfc_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nfc_5v_voltage = value

    @builtins.property
    def periph_5v_voltage(self):
        """Message field 'periph_5v_voltage'."""
        return self._periph_5v_voltage

    @periph_5v_voltage.setter
    def periph_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'periph_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'periph_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._periph_5v_voltage = value

    @builtins.property
    def lcd_voltage(self):
        """Message field 'lcd_voltage'."""
        return self._lcd_voltage

    @lcd_voltage.setter
    def lcd_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lcd_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lcd_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lcd_voltage = value

    @builtins.property
    def sys2_12v_voltage(self):
        """Message field 'sys2_12v_voltage'."""
        return self._sys2_12v_voltage

    @sys2_12v_voltage.setter
    def sys2_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys2_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys2_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys2_12v_voltage = value

    @builtins.property
    def soc0_5v_voltage(self):
        """Message field 'soc0_5v_voltage'."""
        return self._soc0_5v_voltage

    @soc0_5v_voltage.setter
    def soc0_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc0_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc0_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc0_5v_voltage = value

    @builtins.property
    def sys_5v_voltage(self):
        """Message field 'sys_5v_voltage'."""
        return self._sys_5v_voltage

    @sys_5v_voltage.setter
    def sys_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys_5v_voltage = value

    @builtins.property
    def sys_12v_voltage(self):
        """Message field 'sys_12v_voltage'."""
        return self._sys_12v_voltage

    @sys_12v_voltage.setter
    def sys_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys_12v_voltage = value

    @builtins.property
    def soc1_12v_voltage(self):
        """Message field 'soc1_12v_voltage'."""
        return self._soc1_12v_voltage

    @soc1_12v_voltage.setter
    def soc1_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc1_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc1_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc1_12v_voltage = value

    @builtins.property
    def ext_12v_voltage(self):
        """Message field 'ext_12v_voltage'."""
        return self._ext_12v_voltage

    @ext_12v_voltage.setter
    def ext_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext_12v_voltage = value

    @builtins.property
    def ext_24v_voltage(self):
        """Message field 'ext_24v_voltage'."""
        return self._ext_24v_voltage

    @ext_24v_voltage.setter
    def ext_24v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext_24v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext_24v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext_24v_voltage = value

    @builtins.property
    def arm_48v_voltage(self):
        """Message field 'arm_48v_voltage'."""
        return self._arm_48v_voltage

    @arm_48v_voltage.setter
    def arm_48v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_48v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_48v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_48v_voltage = value

    @builtins.property
    def leg_48v_voltage(self):
        """Message field 'leg_48v_voltage'."""
        return self._leg_48v_voltage

    @leg_48v_voltage.setter
    def leg_48v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_48v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_48v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_48v_voltage = value

    @builtins.property
    def soc0_5v_current(self):
        """Message field 'soc0_5v_current'."""
        return self._soc0_5v_current

    @soc0_5v_current.setter
    def soc0_5v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc0_5v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc0_5v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc0_5v_current = value

    @builtins.property
    def periph_5v_current(self):
        """Message field 'periph_5v_current'."""
        return self._periph_5v_current

    @periph_5v_current.setter
    def periph_5v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'periph_5v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'periph_5v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._periph_5v_current = value

    @builtins.property
    def sys2_12v_current(self):
        """Message field 'sys2_12v_current'."""
        return self._sys2_12v_current

    @sys2_12v_current.setter
    def sys2_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys2_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys2_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys2_12v_current = value

    @builtins.property
    def sys_5v_current(self):
        """Message field 'sys_5v_current'."""
        return self._sys_5v_current

    @sys_5v_current.setter
    def sys_5v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys_5v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys_5v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys_5v_current = value

    @builtins.property
    def sys_12v_current(self):
        """Message field 'sys_12v_current'."""
        return self._sys_12v_current

    @sys_12v_current.setter
    def sys_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sys_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sys_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sys_12v_current = value

    @builtins.property
    def soc1_12v_current(self):
        """Message field 'soc1_12v_current'."""
        return self._soc1_12v_current

    @soc1_12v_current.setter
    def soc1_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc1_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc1_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc1_12v_current = value

    @builtins.property
    def ext_12v_current(self):
        """Message field 'ext_12v_current'."""
        return self._ext_12v_current

    @ext_12v_current.setter
    def ext_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext_12v_current = value

    @builtins.property
    def ext_24v_current(self):
        """Message field 'ext_24v_current'."""
        return self._ext_24v_current

    @ext_24v_current.setter
    def ext_24v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext_24v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext_24v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext_24v_current = value

    @builtins.property
    def arm_48v_current(self):
        """Message field 'arm_48v_current'."""
        return self._arm_48v_current

    @arm_48v_current.setter
    def arm_48v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_48v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_48v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_48v_current = value

    @builtins.property
    def leg_48v_current(self):
        """Message field 'leg_48v_current'."""
        return self._leg_48v_current

    @leg_48v_current.setter
    def leg_48v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_48v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_48v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_48v_current = value

    @builtins.property
    def temp_48to12_orin_left(self):
        """Message field 'temp_48to12_orin_left'."""
        return self._temp_48to12_orin_left

    @temp_48to12_orin_left.setter
    def temp_48to12_orin_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_48to12_orin_left' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_48to12_orin_left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_48to12_orin_left = value

    @builtins.property
    def temp_48to12_orin_bottom(self):
        """Message field 'temp_48to12_orin_bottom'."""
        return self._temp_48to12_orin_bottom

    @temp_48to12_orin_bottom.setter
    def temp_48to12_orin_bottom(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_48to12_orin_bottom' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_48to12_orin_bottom' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_48to12_orin_bottom = value

    @builtins.property
    def temp_12v_ext_mos(self):
        """Message field 'temp_12v_ext_mos'."""
        return self._temp_12v_ext_mos

    @temp_12v_ext_mos.setter
    def temp_12v_ext_mos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_12v_ext_mos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_12v_ext_mos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_12v_ext_mos = value

    @builtins.property
    def temp_12to5(self):
        """Message field 'temp_12to5'."""
        return self._temp_12to5

    @temp_12to5.setter
    def temp_12to5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_12to5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_12to5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_12to5 = value

    @builtins.property
    def temp_emmc(self):
        """Message field 'temp_emmc'."""
        return self._temp_emmc

    @temp_emmc.setter
    def temp_emmc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_emmc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_emmc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_emmc = value

    @builtins.property
    def temp_soc(self):
        """Message field 'temp_soc'."""
        return self._temp_soc

    @temp_soc.setter
    def temp_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_soc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_soc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_soc = value
