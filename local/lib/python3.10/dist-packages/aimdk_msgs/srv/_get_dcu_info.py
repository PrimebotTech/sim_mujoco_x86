# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/GetDcuInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetDcuInfo_Request(type):
    """Metaclass of message 'GetDcuInfo_Request'."""

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
                'aimdk_msgs.srv.GetDcuInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dcu_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dcu_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dcu_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dcu_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dcu_info__request

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


class GetDcuInfo_Request(metaclass=Metaclass_GetDcuInfo_Request):
    """Message class 'GetDcuInfo_Request'."""

    __slots__ = [
        '_request',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetDcuInfo_Response(type):
    """Metaclass of message 'GetDcuInfo_Response'."""

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
                'aimdk_msgs.srv.GetDcuInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dcu_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dcu_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dcu_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dcu_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dcu_info__response

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


class GetDcuInfo_Response(metaclass=Metaclass_GetDcuInfo_Response):
    """Message class 'GetDcuInfo_Response'."""

    __slots__ = [
        '_response',
        '_udcu_fw_ver',
        '_udcu_hw_ver',
        '_udcu_build_time',
        '_ddcu_fw_ver',
        '_ddcu_hw_ver',
        '_ddcu_build_time',
        '_safedcu_fw_ver',
        '_safedcu_hw_ver',
        '_safedcu_build_time',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'udcu_fw_ver': 'string',
        'udcu_hw_ver': 'string',
        'udcu_build_time': 'string',
        'ddcu_fw_ver': 'string',
        'ddcu_hw_ver': 'string',
        'ddcu_build_time': 'string',
        'safedcu_fw_ver': 'string',
        'safedcu_hw_ver': 'string',
        'safedcu_build_time': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.udcu_fw_ver = kwargs.get('udcu_fw_ver', str())
        self.udcu_hw_ver = kwargs.get('udcu_hw_ver', str())
        self.udcu_build_time = kwargs.get('udcu_build_time', str())
        self.ddcu_fw_ver = kwargs.get('ddcu_fw_ver', str())
        self.ddcu_hw_ver = kwargs.get('ddcu_hw_ver', str())
        self.ddcu_build_time = kwargs.get('ddcu_build_time', str())
        self.safedcu_fw_ver = kwargs.get('safedcu_fw_ver', str())
        self.safedcu_hw_ver = kwargs.get('safedcu_hw_ver', str())
        self.safedcu_build_time = kwargs.get('safedcu_build_time', str())

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
        if self.udcu_fw_ver != other.udcu_fw_ver:
            return False
        if self.udcu_hw_ver != other.udcu_hw_ver:
            return False
        if self.udcu_build_time != other.udcu_build_time:
            return False
        if self.ddcu_fw_ver != other.ddcu_fw_ver:
            return False
        if self.ddcu_hw_ver != other.ddcu_hw_ver:
            return False
        if self.ddcu_build_time != other.ddcu_build_time:
            return False
        if self.safedcu_fw_ver != other.safedcu_fw_ver:
            return False
        if self.safedcu_hw_ver != other.safedcu_hw_ver:
            return False
        if self.safedcu_build_time != other.safedcu_build_time:
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
    def udcu_fw_ver(self):
        """Message field 'udcu_fw_ver'."""
        return self._udcu_fw_ver

    @udcu_fw_ver.setter
    def udcu_fw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'udcu_fw_ver' field must be of type 'str'"
        self._udcu_fw_ver = value

    @builtins.property
    def udcu_hw_ver(self):
        """Message field 'udcu_hw_ver'."""
        return self._udcu_hw_ver

    @udcu_hw_ver.setter
    def udcu_hw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'udcu_hw_ver' field must be of type 'str'"
        self._udcu_hw_ver = value

    @builtins.property
    def udcu_build_time(self):
        """Message field 'udcu_build_time'."""
        return self._udcu_build_time

    @udcu_build_time.setter
    def udcu_build_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'udcu_build_time' field must be of type 'str'"
        self._udcu_build_time = value

    @builtins.property
    def ddcu_fw_ver(self):
        """Message field 'ddcu_fw_ver'."""
        return self._ddcu_fw_ver

    @ddcu_fw_ver.setter
    def ddcu_fw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ddcu_fw_ver' field must be of type 'str'"
        self._ddcu_fw_ver = value

    @builtins.property
    def ddcu_hw_ver(self):
        """Message field 'ddcu_hw_ver'."""
        return self._ddcu_hw_ver

    @ddcu_hw_ver.setter
    def ddcu_hw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ddcu_hw_ver' field must be of type 'str'"
        self._ddcu_hw_ver = value

    @builtins.property
    def ddcu_build_time(self):
        """Message field 'ddcu_build_time'."""
        return self._ddcu_build_time

    @ddcu_build_time.setter
    def ddcu_build_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ddcu_build_time' field must be of type 'str'"
        self._ddcu_build_time = value

    @builtins.property
    def safedcu_fw_ver(self):
        """Message field 'safedcu_fw_ver'."""
        return self._safedcu_fw_ver

    @safedcu_fw_ver.setter
    def safedcu_fw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'safedcu_fw_ver' field must be of type 'str'"
        self._safedcu_fw_ver = value

    @builtins.property
    def safedcu_hw_ver(self):
        """Message field 'safedcu_hw_ver'."""
        return self._safedcu_hw_ver

    @safedcu_hw_ver.setter
    def safedcu_hw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'safedcu_hw_ver' field must be of type 'str'"
        self._safedcu_hw_ver = value

    @builtins.property
    def safedcu_build_time(self):
        """Message field 'safedcu_build_time'."""
        return self._safedcu_build_time

    @safedcu_build_time.setter
    def safedcu_build_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'safedcu_build_time' field must be of type 'str'"
        self._safedcu_build_time = value


class Metaclass_GetDcuInfo(type):
    """Metaclass of service 'GetDcuInfo'."""

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
                'aimdk_msgs.srv.GetDcuInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_dcu_info

            from aimdk_msgs.srv import _get_dcu_info
            if _get_dcu_info.Metaclass_GetDcuInfo_Request._TYPE_SUPPORT is None:
                _get_dcu_info.Metaclass_GetDcuInfo_Request.__import_type_support__()
            if _get_dcu_info.Metaclass_GetDcuInfo_Response._TYPE_SUPPORT is None:
                _get_dcu_info.Metaclass_GetDcuInfo_Response.__import_type_support__()


class GetDcuInfo(metaclass=Metaclass_GetDcuInfo):
    from aimdk_msgs.srv._get_dcu_info import GetDcuInfo_Request as Request
    from aimdk_msgs.srv._get_dcu_info import GetDcuInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
