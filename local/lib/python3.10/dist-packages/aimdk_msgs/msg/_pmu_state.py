# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/PmuState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PmuState(type):
    """Metaclass of message 'PmuState'."""

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
                'aimdk_msgs.msg.PmuState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pmu_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pmu_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pmu_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pmu_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pmu_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PmuState(metaclass=Metaclass_PmuState):
    """Message class 'PmuState'."""

    __slots__ = [
        '_pmu_protocol_version',
        '_pmu_hardware_version',
        '_pmu_software_version',
        '_power_status',
        '_pmu_bool_status',
        '_vcc_3v3_voltage',
        '_vcc_1v8_voltage',
        '_vcc_1v2_voltage',
        '_nfc_5v_voltage',
        '_soc_5v_voltage',
        '_sys_5v_voltage',
        '_sys_12v_voltage',
        '_orin_12v_voltage',
        '_ext_12v_voltage',
        '_ext_24v_voltage',
        '_arm_48v_voltage',
        '_leg_48v_voltage',
        '_soc_5v_current',
        '_sys_5v_current',
        '_sys_12v_current',
        '_orin_12v_current',
        '_ext_12v_current',
        '_ext_24v_current',
        '_arm_48v_current',
        '_leg_48v_current',
        '_bms_manufacturer',
        '_bms_serial_number',
        '_bms_protocol_version',
        '_bms_hardware_version',
        '_bms_software_version',
        '_bms_status',
        '_bms_balance_line_resistance',
        '_bms_voltage',
        '_bms_current',
        '_bms_power',
        '_bms_temperature',
        '_bms_remaining_capacity',
        '_bms_remaining_capacity_percentage',
        '_bms_cycle_count',
        '_bms_cycle_total_capacity',
    ]

    _fields_and_field_types = {
        'pmu_protocol_version': 'string',
        'pmu_hardware_version': 'string',
        'pmu_software_version': 'string',
        'power_status': 'uint16',
        'pmu_bool_status': 'uint32',
        'vcc_3v3_voltage': 'float',
        'vcc_1v8_voltage': 'float',
        'vcc_1v2_voltage': 'float',
        'nfc_5v_voltage': 'float',
        'soc_5v_voltage': 'float',
        'sys_5v_voltage': 'float',
        'sys_12v_voltage': 'float',
        'orin_12v_voltage': 'float',
        'ext_12v_voltage': 'float',
        'ext_24v_voltage': 'float',
        'arm_48v_voltage': 'float',
        'leg_48v_voltage': 'float',
        'soc_5v_current': 'float',
        'sys_5v_current': 'float',
        'sys_12v_current': 'float',
        'orin_12v_current': 'float',
        'ext_12v_current': 'float',
        'ext_24v_current': 'float',
        'arm_48v_current': 'float',
        'leg_48v_current': 'float',
        'bms_manufacturer': 'string',
        'bms_serial_number': 'string',
        'bms_protocol_version': 'string',
        'bms_hardware_version': 'string',
        'bms_software_version': 'string',
        'bms_status': 'uint32',
        'bms_balance_line_resistance': 'uint16',
        'bms_voltage': 'uint32',
        'bms_current': 'int32',
        'bms_power': 'int32',
        'bms_temperature': 'uint32',
        'bms_remaining_capacity': 'uint32',
        'bms_remaining_capacity_percentage': 'uint8',
        'bms_cycle_count': 'uint16',
        'bms_cycle_total_capacity': 'uint32',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pmu_protocol_version = kwargs.get('pmu_protocol_version', str())
        self.pmu_hardware_version = kwargs.get('pmu_hardware_version', str())
        self.pmu_software_version = kwargs.get('pmu_software_version', str())
        self.power_status = kwargs.get('power_status', int())
        self.pmu_bool_status = kwargs.get('pmu_bool_status', int())
        self.vcc_3v3_voltage = kwargs.get('vcc_3v3_voltage', float())
        self.vcc_1v8_voltage = kwargs.get('vcc_1v8_voltage', float())
        self.vcc_1v2_voltage = kwargs.get('vcc_1v2_voltage', float())
        self.nfc_5v_voltage = kwargs.get('nfc_5v_voltage', float())
        self.soc_5v_voltage = kwargs.get('soc_5v_voltage', float())
        self.sys_5v_voltage = kwargs.get('sys_5v_voltage', float())
        self.sys_12v_voltage = kwargs.get('sys_12v_voltage', float())
        self.orin_12v_voltage = kwargs.get('orin_12v_voltage', float())
        self.ext_12v_voltage = kwargs.get('ext_12v_voltage', float())
        self.ext_24v_voltage = kwargs.get('ext_24v_voltage', float())
        self.arm_48v_voltage = kwargs.get('arm_48v_voltage', float())
        self.leg_48v_voltage = kwargs.get('leg_48v_voltage', float())
        self.soc_5v_current = kwargs.get('soc_5v_current', float())
        self.sys_5v_current = kwargs.get('sys_5v_current', float())
        self.sys_12v_current = kwargs.get('sys_12v_current', float())
        self.orin_12v_current = kwargs.get('orin_12v_current', float())
        self.ext_12v_current = kwargs.get('ext_12v_current', float())
        self.ext_24v_current = kwargs.get('ext_24v_current', float())
        self.arm_48v_current = kwargs.get('arm_48v_current', float())
        self.leg_48v_current = kwargs.get('leg_48v_current', float())
        self.bms_manufacturer = kwargs.get('bms_manufacturer', str())
        self.bms_serial_number = kwargs.get('bms_serial_number', str())
        self.bms_protocol_version = kwargs.get('bms_protocol_version', str())
        self.bms_hardware_version = kwargs.get('bms_hardware_version', str())
        self.bms_software_version = kwargs.get('bms_software_version', str())
        self.bms_status = kwargs.get('bms_status', int())
        self.bms_balance_line_resistance = kwargs.get('bms_balance_line_resistance', int())
        self.bms_voltage = kwargs.get('bms_voltage', int())
        self.bms_current = kwargs.get('bms_current', int())
        self.bms_power = kwargs.get('bms_power', int())
        self.bms_temperature = kwargs.get('bms_temperature', int())
        self.bms_remaining_capacity = kwargs.get('bms_remaining_capacity', int())
        self.bms_remaining_capacity_percentage = kwargs.get('bms_remaining_capacity_percentage', int())
        self.bms_cycle_count = kwargs.get('bms_cycle_count', int())
        self.bms_cycle_total_capacity = kwargs.get('bms_cycle_total_capacity', int())

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
        if self.pmu_protocol_version != other.pmu_protocol_version:
            return False
        if self.pmu_hardware_version != other.pmu_hardware_version:
            return False
        if self.pmu_software_version != other.pmu_software_version:
            return False
        if self.power_status != other.power_status:
            return False
        if self.pmu_bool_status != other.pmu_bool_status:
            return False
        if self.vcc_3v3_voltage != other.vcc_3v3_voltage:
            return False
        if self.vcc_1v8_voltage != other.vcc_1v8_voltage:
            return False
        if self.vcc_1v2_voltage != other.vcc_1v2_voltage:
            return False
        if self.nfc_5v_voltage != other.nfc_5v_voltage:
            return False
        if self.soc_5v_voltage != other.soc_5v_voltage:
            return False
        if self.sys_5v_voltage != other.sys_5v_voltage:
            return False
        if self.sys_12v_voltage != other.sys_12v_voltage:
            return False
        if self.orin_12v_voltage != other.orin_12v_voltage:
            return False
        if self.ext_12v_voltage != other.ext_12v_voltage:
            return False
        if self.ext_24v_voltage != other.ext_24v_voltage:
            return False
        if self.arm_48v_voltage != other.arm_48v_voltage:
            return False
        if self.leg_48v_voltage != other.leg_48v_voltage:
            return False
        if self.soc_5v_current != other.soc_5v_current:
            return False
        if self.sys_5v_current != other.sys_5v_current:
            return False
        if self.sys_12v_current != other.sys_12v_current:
            return False
        if self.orin_12v_current != other.orin_12v_current:
            return False
        if self.ext_12v_current != other.ext_12v_current:
            return False
        if self.ext_24v_current != other.ext_24v_current:
            return False
        if self.arm_48v_current != other.arm_48v_current:
            return False
        if self.leg_48v_current != other.leg_48v_current:
            return False
        if self.bms_manufacturer != other.bms_manufacturer:
            return False
        if self.bms_serial_number != other.bms_serial_number:
            return False
        if self.bms_protocol_version != other.bms_protocol_version:
            return False
        if self.bms_hardware_version != other.bms_hardware_version:
            return False
        if self.bms_software_version != other.bms_software_version:
            return False
        if self.bms_status != other.bms_status:
            return False
        if self.bms_balance_line_resistance != other.bms_balance_line_resistance:
            return False
        if self.bms_voltage != other.bms_voltage:
            return False
        if self.bms_current != other.bms_current:
            return False
        if self.bms_power != other.bms_power:
            return False
        if self.bms_temperature != other.bms_temperature:
            return False
        if self.bms_remaining_capacity != other.bms_remaining_capacity:
            return False
        if self.bms_remaining_capacity_percentage != other.bms_remaining_capacity_percentage:
            return False
        if self.bms_cycle_count != other.bms_cycle_count:
            return False
        if self.bms_cycle_total_capacity != other.bms_cycle_total_capacity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pmu_protocol_version(self):
        """Message field 'pmu_protocol_version'."""
        return self._pmu_protocol_version

    @pmu_protocol_version.setter
    def pmu_protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pmu_protocol_version' field must be of type 'str'"
        self._pmu_protocol_version = value

    @builtins.property
    def pmu_hardware_version(self):
        """Message field 'pmu_hardware_version'."""
        return self._pmu_hardware_version

    @pmu_hardware_version.setter
    def pmu_hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pmu_hardware_version' field must be of type 'str'"
        self._pmu_hardware_version = value

    @builtins.property
    def pmu_software_version(self):
        """Message field 'pmu_software_version'."""
        return self._pmu_software_version

    @pmu_software_version.setter
    def pmu_software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pmu_software_version' field must be of type 'str'"
        self._pmu_software_version = value

    @builtins.property
    def power_status(self):
        """Message field 'power_status'."""
        return self._power_status

    @power_status.setter
    def power_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'power_status' field must be an unsigned integer in [0, 65535]"
        self._power_status = value

    @builtins.property
    def pmu_bool_status(self):
        """Message field 'pmu_bool_status'."""
        return self._pmu_bool_status

    @pmu_bool_status.setter
    def pmu_bool_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pmu_bool_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pmu_bool_status' field must be an unsigned integer in [0, 4294967295]"
        self._pmu_bool_status = value

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
    def soc_5v_voltage(self):
        """Message field 'soc_5v_voltage'."""
        return self._soc_5v_voltage

    @soc_5v_voltage.setter
    def soc_5v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc_5v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc_5v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc_5v_voltage = value

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
    def orin_12v_voltage(self):
        """Message field 'orin_12v_voltage'."""
        return self._orin_12v_voltage

    @orin_12v_voltage.setter
    def orin_12v_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orin_12v_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orin_12v_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orin_12v_voltage = value

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
    def soc_5v_current(self):
        """Message field 'soc_5v_current'."""
        return self._soc_5v_current

    @soc_5v_current.setter
    def soc_5v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc_5v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'soc_5v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._soc_5v_current = value

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
    def orin_12v_current(self):
        """Message field 'orin_12v_current'."""
        return self._orin_12v_current

    @orin_12v_current.setter
    def orin_12v_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orin_12v_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orin_12v_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orin_12v_current = value

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
    def bms_manufacturer(self):
        """Message field 'bms_manufacturer'."""
        return self._bms_manufacturer

    @bms_manufacturer.setter
    def bms_manufacturer(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bms_manufacturer' field must be of type 'str'"
        self._bms_manufacturer = value

    @builtins.property
    def bms_serial_number(self):
        """Message field 'bms_serial_number'."""
        return self._bms_serial_number

    @bms_serial_number.setter
    def bms_serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bms_serial_number' field must be of type 'str'"
        self._bms_serial_number = value

    @builtins.property
    def bms_protocol_version(self):
        """Message field 'bms_protocol_version'."""
        return self._bms_protocol_version

    @bms_protocol_version.setter
    def bms_protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bms_protocol_version' field must be of type 'str'"
        self._bms_protocol_version = value

    @builtins.property
    def bms_hardware_version(self):
        """Message field 'bms_hardware_version'."""
        return self._bms_hardware_version

    @bms_hardware_version.setter
    def bms_hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bms_hardware_version' field must be of type 'str'"
        self._bms_hardware_version = value

    @builtins.property
    def bms_software_version(self):
        """Message field 'bms_software_version'."""
        return self._bms_software_version

    @bms_software_version.setter
    def bms_software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bms_software_version' field must be of type 'str'"
        self._bms_software_version = value

    @builtins.property
    def bms_status(self):
        """Message field 'bms_status'."""
        return self._bms_status

    @bms_status.setter
    def bms_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_status' field must be an unsigned integer in [0, 4294967295]"
        self._bms_status = value

    @builtins.property
    def bms_balance_line_resistance(self):
        """Message field 'bms_balance_line_resistance'."""
        return self._bms_balance_line_resistance

    @bms_balance_line_resistance.setter
    def bms_balance_line_resistance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_balance_line_resistance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bms_balance_line_resistance' field must be an unsigned integer in [0, 65535]"
        self._bms_balance_line_resistance = value

    @builtins.property
    def bms_voltage(self):
        """Message field 'bms_voltage'."""
        return self._bms_voltage

    @bms_voltage.setter
    def bms_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._bms_voltage = value

    @builtins.property
    def bms_current(self):
        """Message field 'bms_current'."""
        return self._bms_current

    @bms_current.setter
    def bms_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bms_current' field must be an integer in [-2147483648, 2147483647]"
        self._bms_current = value

    @builtins.property
    def bms_power(self):
        """Message field 'bms_power'."""
        return self._bms_power

    @bms_power.setter
    def bms_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_power' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bms_power' field must be an integer in [-2147483648, 2147483647]"
        self._bms_power = value

    @builtins.property
    def bms_temperature(self):
        """Message field 'bms_temperature'."""
        return self._bms_temperature

    @bms_temperature.setter
    def bms_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_temperature' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_temperature' field must be an unsigned integer in [0, 4294967295]"
        self._bms_temperature = value

    @builtins.property
    def bms_remaining_capacity(self):
        """Message field 'bms_remaining_capacity'."""
        return self._bms_remaining_capacity

    @bms_remaining_capacity.setter
    def bms_remaining_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_remaining_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_remaining_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._bms_remaining_capacity = value

    @builtins.property
    def bms_remaining_capacity_percentage(self):
        """Message field 'bms_remaining_capacity_percentage'."""
        return self._bms_remaining_capacity_percentage

    @bms_remaining_capacity_percentage.setter
    def bms_remaining_capacity_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_remaining_capacity_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bms_remaining_capacity_percentage' field must be an unsigned integer in [0, 255]"
        self._bms_remaining_capacity_percentage = value

    @builtins.property
    def bms_cycle_count(self):
        """Message field 'bms_cycle_count'."""
        return self._bms_cycle_count

    @bms_cycle_count.setter
    def bms_cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bms_cycle_count' field must be an unsigned integer in [0, 65535]"
        self._bms_cycle_count = value

    @builtins.property
    def bms_cycle_total_capacity(self):
        """Message field 'bms_cycle_total_capacity'."""
        return self._bms_cycle_total_capacity

    @bms_cycle_total_capacity.setter
    def bms_cycle_total_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_cycle_total_capacity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_cycle_total_capacity' field must be an unsigned integer in [0, 4294967295]"
        self._bms_cycle_total_capacity = value
