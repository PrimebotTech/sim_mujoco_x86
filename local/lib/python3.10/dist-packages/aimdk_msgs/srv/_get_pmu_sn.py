# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/GetPmuSN.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPmuSN_Request(type):
    """Metaclass of message 'GetPmuSN_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PMU_SN': 0,
        'LORA_SN': 1,
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
                'aimdk_msgs.srv.GetPmuSN_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pmu_sn__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pmu_sn__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pmu_sn__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pmu_sn__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pmu_sn__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PMU_SN': cls.__constants['PMU_SN'],
            'LORA_SN': cls.__constants['LORA_SN'],
        }

    @property
    def PMU_SN(self):
        """Message constant 'PMU_SN'."""
        return Metaclass_GetPmuSN_Request.__constants['PMU_SN']

    @property
    def LORA_SN(self):
        """Message constant 'LORA_SN'."""
        return Metaclass_GetPmuSN_Request.__constants['LORA_SN']


class GetPmuSN_Request(metaclass=Metaclass_GetPmuSN_Request):
    """
    Message class 'GetPmuSN_Request'.

    Constants:
      PMU_SN
      LORA_SN
    """

    __slots__ = [
        '_request',
        '_device',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'device': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.device = kwargs.get('device', int())

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
        if self.request != other.request:
            return False
        if self.device != other.device:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonRequest
            assert \
                isinstance(value, CommonRequest), \
                "The 'request' field must be a sub message of type 'CommonRequest'"
        self._request = value

    @builtins.property
    def device(self):
        """Message field 'device'."""
        return self._device

    @device.setter
    def device(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device' field must be an unsigned integer in [0, 255]"
        self._device = value


# Import statements for member types

# already imported above
# import builtins

# Member 'serial_number'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPmuSN_Response(type):
    """Metaclass of message 'GetPmuSN_Response'."""

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
                'aimdk_msgs.srv.GetPmuSN_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pmu_sn__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pmu_sn__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pmu_sn__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pmu_sn__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pmu_sn__response

            from aimdk_msgs.msg import CommonResponse
            if CommonResponse.__class__._TYPE_SUPPORT is None:
                CommonResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPmuSN_Response(metaclass=Metaclass_GetPmuSN_Response):
    """Message class 'GetPmuSN_Response'."""

    __slots__ = [
        '_response',
        '_result',
        '_serial_number',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'result': 'uint16',
        'serial_number': 'uint8[19]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 19),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.result = kwargs.get('result', int())
        if 'serial_number' not in kwargs:
            self.serial_number = numpy.zeros(19, dtype=numpy.uint8)
        else:
            self.serial_number = kwargs.get('serial_number')

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
        if self.response != other.response:
            return False
        if self.result != other.result:
            return False
        if any(self.serial_number != other.serial_number):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonResponse
            assert \
                isinstance(value, CommonResponse), \
                "The 'response' field must be a sub message of type 'CommonResponse'"
        self._response = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'result' field must be an unsigned integer in [0, 65535]"
        self._result = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'serial_number' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 19, \
                "The 'serial_number' numpy.ndarray() must have a size of 19"
            self._serial_number = value
            return
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
                 len(value) == 19 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'serial_number' field must be a set or sequence with length 19 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._serial_number = numpy.array(value, dtype=numpy.uint8)


class Metaclass_GetPmuSN(type):
    """Metaclass of service 'GetPmuSN'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.srv.GetPmuSN')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_pmu_sn

            from aimdk_msgs.srv import _get_pmu_sn
            if _get_pmu_sn.Metaclass_GetPmuSN_Request._TYPE_SUPPORT is None:
                _get_pmu_sn.Metaclass_GetPmuSN_Request.__import_type_support__()
            if _get_pmu_sn.Metaclass_GetPmuSN_Response._TYPE_SUPPORT is None:
                _get_pmu_sn.Metaclass_GetPmuSN_Response.__import_type_support__()


class GetPmuSN(metaclass=Metaclass_GetPmuSN):
    from aimdk_msgs.srv._get_pmu_sn import GetPmuSN_Request as Request
    from aimdk_msgs.srv._get_pmu_sn import GetPmuSN_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
