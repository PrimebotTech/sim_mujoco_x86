# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/MotorTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'request_payload'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorTest_Request(type):
    """Metaclass of message 'MotorTest_Request'."""

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
                'aimdk_msgs.srv.MotorTest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_test__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_test__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_test__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_test__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_test__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorTest_Request(metaclass=Metaclass_MotorTest_Request):
    """Message class 'MotorTest_Request'."""

    __slots__ = [
        '_request',
        '_dcu_type',
        '_can_channel',
        '_can_id',
        '_payload_len',
        '_request_payload',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'dcu_type': 'uint8',
        'can_channel': 'uint8',
        'can_id': 'uint8',
        'payload_len': 'uint8',
        'request_payload': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.dcu_type = kwargs.get('dcu_type', int())
        self.can_channel = kwargs.get('can_channel', int())
        self.can_id = kwargs.get('can_id', int())
        self.payload_len = kwargs.get('payload_len', int())
        self.request_payload = array.array('B', kwargs.get('request_payload', []))

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
        if self.dcu_type != other.dcu_type:
            return False
        if self.can_channel != other.can_channel:
            return False
        if self.can_id != other.can_id:
            return False
        if self.payload_len != other.payload_len:
            return False
        if self.request_payload != other.request_payload:
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
    def dcu_type(self):
        """Message field 'dcu_type'."""
        return self._dcu_type

    @dcu_type.setter
    def dcu_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcu_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dcu_type' field must be an unsigned integer in [0, 255]"
        self._dcu_type = value

    @builtins.property
    def can_channel(self):
        """Message field 'can_channel'."""
        return self._can_channel

    @can_channel.setter
    def can_channel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_channel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_channel' field must be an unsigned integer in [0, 255]"
        self._can_channel = value

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_id' field must be an unsigned integer in [0, 255]"
        self._can_id = value

    @builtins.property
    def payload_len(self):
        """Message field 'payload_len'."""
        return self._payload_len

    @payload_len.setter
    def payload_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'payload_len' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'payload_len' field must be an unsigned integer in [0, 255]"
        self._payload_len = value

    @builtins.property
    def request_payload(self):
        """Message field 'request_payload'."""
        return self._request_payload

    @request_payload.setter
    def request_payload(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'request_payload' array.array() must have the type code of 'B'"
            self._request_payload = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'request_payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._request_payload = array.array('B', value)


# Import statements for member types

# Member 'response_payload'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorTest_Response(type):
    """Metaclass of message 'MotorTest_Response'."""

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
                'aimdk_msgs.srv.MotorTest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_test__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_test__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_test__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_test__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_test__response

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


class MotorTest_Response(metaclass=Metaclass_MotorTest_Response):
    """Message class 'MotorTest_Response'."""

    __slots__ = [
        '_response',
        '_dcu_type',
        '_can_channel',
        '_can_id',
        '_payload_len',
        '_response_payload',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'dcu_type': 'uint8',
        'can_channel': 'uint8',
        'can_id': 'uint8',
        'payload_len': 'uint8',
        'response_payload': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.dcu_type = kwargs.get('dcu_type', int())
        self.can_channel = kwargs.get('can_channel', int())
        self.can_id = kwargs.get('can_id', int())
        self.payload_len = kwargs.get('payload_len', int())
        self.response_payload = array.array('B', kwargs.get('response_payload', []))

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
        if self.dcu_type != other.dcu_type:
            return False
        if self.can_channel != other.can_channel:
            return False
        if self.can_id != other.can_id:
            return False
        if self.payload_len != other.payload_len:
            return False
        if self.response_payload != other.response_payload:
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
    def dcu_type(self):
        """Message field 'dcu_type'."""
        return self._dcu_type

    @dcu_type.setter
    def dcu_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dcu_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dcu_type' field must be an unsigned integer in [0, 255]"
        self._dcu_type = value

    @builtins.property
    def can_channel(self):
        """Message field 'can_channel'."""
        return self._can_channel

    @can_channel.setter
    def can_channel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_channel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_channel' field must be an unsigned integer in [0, 255]"
        self._can_channel = value

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_id' field must be an unsigned integer in [0, 255]"
        self._can_id = value

    @builtins.property
    def payload_len(self):
        """Message field 'payload_len'."""
        return self._payload_len

    @payload_len.setter
    def payload_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'payload_len' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'payload_len' field must be an unsigned integer in [0, 255]"
        self._payload_len = value

    @builtins.property
    def response_payload(self):
        """Message field 'response_payload'."""
        return self._response_payload

    @response_payload.setter
    def response_payload(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'response_payload' array.array() must have the type code of 'B'"
            self._response_payload = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'response_payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._response_payload = array.array('B', value)


class Metaclass_MotorTest(type):
    """Metaclass of service 'MotorTest'."""

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
                'aimdk_msgs.srv.MotorTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_test

            from aimdk_msgs.srv import _motor_test
            if _motor_test.Metaclass_MotorTest_Request._TYPE_SUPPORT is None:
                _motor_test.Metaclass_MotorTest_Request.__import_type_support__()
            if _motor_test.Metaclass_MotorTest_Response._TYPE_SUPPORT is None:
                _motor_test.Metaclass_MotorTest_Response.__import_type_support__()


class MotorTest(metaclass=Metaclass_MotorTest):
    from aimdk_msgs.srv._motor_test import MotorTest_Request as Request
    from aimdk_msgs.srv._motor_test import MotorTest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
