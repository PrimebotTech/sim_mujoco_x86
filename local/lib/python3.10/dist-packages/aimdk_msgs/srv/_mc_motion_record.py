# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/McMotionRecord.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McMotionRecord_Request(type):
    """Metaclass of message 'McMotionRecord_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RECORD_UPPER': 1,
        'RECORD_LOWER': 2,
        'RECORD_ALL': 3,
        'OPER_START': 1,
        'OPER_STOP': 2,
        'OPER_PAUSE': 3,
        'OPER_RESUME': 4,
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
                'aimdk_msgs.srv.McMotionRecord_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mc_motion_record__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mc_motion_record__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mc_motion_record__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mc_motion_record__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mc_motion_record__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RECORD_UPPER': cls.__constants['RECORD_UPPER'],
            'RECORD_LOWER': cls.__constants['RECORD_LOWER'],
            'RECORD_ALL': cls.__constants['RECORD_ALL'],
            'OPER_START': cls.__constants['OPER_START'],
            'OPER_STOP': cls.__constants['OPER_STOP'],
            'OPER_PAUSE': cls.__constants['OPER_PAUSE'],
            'OPER_RESUME': cls.__constants['OPER_RESUME'],
        }

    @property
    def RECORD_UPPER(self):
        """Message constant 'RECORD_UPPER'."""
        return Metaclass_McMotionRecord_Request.__constants['RECORD_UPPER']

    @property
    def RECORD_LOWER(self):
        """Message constant 'RECORD_LOWER'."""
        return Metaclass_McMotionRecord_Request.__constants['RECORD_LOWER']

    @property
    def RECORD_ALL(self):
        """Message constant 'RECORD_ALL'."""
        return Metaclass_McMotionRecord_Request.__constants['RECORD_ALL']

    @property
    def OPER_START(self):
        """Message constant 'OPER_START'."""
        return Metaclass_McMotionRecord_Request.__constants['OPER_START']

    @property
    def OPER_STOP(self):
        """Message constant 'OPER_STOP'."""
        return Metaclass_McMotionRecord_Request.__constants['OPER_STOP']

    @property
    def OPER_PAUSE(self):
        """Message constant 'OPER_PAUSE'."""
        return Metaclass_McMotionRecord_Request.__constants['OPER_PAUSE']

    @property
    def OPER_RESUME(self):
        """Message constant 'OPER_RESUME'."""
        return Metaclass_McMotionRecord_Request.__constants['OPER_RESUME']


class McMotionRecord_Request(metaclass=Metaclass_McMotionRecord_Request):
    """
    Message class 'McMotionRecord_Request'.

    Constants:
      RECORD_UPPER
      RECORD_LOWER
      RECORD_ALL
      OPER_START
      OPER_STOP
      OPER_PAUSE
      OPER_RESUME
    """

    __slots__ = [
        '_request',
        '_record_area',
        '_operation_type',
        '_max_duration',
        '_folder_path',
        '_file_name',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'record_area': 'int32',
        'operation_type': 'int32',
        'max_duration': 'int32',
        'folder_path': 'string',
        'file_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.record_area = kwargs.get('record_area', int())
        self.operation_type = kwargs.get('operation_type', int())
        self.max_duration = kwargs.get('max_duration', int())
        self.folder_path = kwargs.get('folder_path', str())
        self.file_name = kwargs.get('file_name', str())

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
        if self.record_area != other.record_area:
            return False
        if self.operation_type != other.operation_type:
            return False
        if self.max_duration != other.max_duration:
            return False
        if self.folder_path != other.folder_path:
            return False
        if self.file_name != other.file_name:
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
    def record_area(self):
        """Message field 'record_area'."""
        return self._record_area

    @record_area.setter
    def record_area(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'record_area' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'record_area' field must be an integer in [-2147483648, 2147483647]"
        self._record_area = value

    @builtins.property
    def operation_type(self):
        """Message field 'operation_type'."""
        return self._operation_type

    @operation_type.setter
    def operation_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operation_type' field must be an integer in [-2147483648, 2147483647]"
        self._operation_type = value

    @builtins.property
    def max_duration(self):
        """Message field 'max_duration'."""
        return self._max_duration

    @max_duration.setter
    def max_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_duration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_duration' field must be an integer in [-2147483648, 2147483647]"
        self._max_duration = value

    @builtins.property
    def folder_path(self):
        """Message field 'folder_path'."""
        return self._folder_path

    @folder_path.setter
    def folder_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'folder_path' field must be of type 'str'"
        self._folder_path = value

    @builtins.property
    def file_name(self):
        """Message field 'file_name'."""
        return self._file_name

    @file_name.setter
    def file_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_name' field must be of type 'str'"
        self._file_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_McMotionRecord_Response(type):
    """Metaclass of message 'McMotionRecord_Response'."""

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
                'aimdk_msgs.srv.McMotionRecord_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mc_motion_record__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mc_motion_record__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mc_motion_record__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mc_motion_record__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mc_motion_record__response

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


class McMotionRecord_Response(metaclass=Metaclass_McMotionRecord_Response):
    """Message class 'McMotionRecord_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())

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


class Metaclass_McMotionRecord(type):
    """Metaclass of service 'McMotionRecord'."""

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
                'aimdk_msgs.srv.McMotionRecord')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mc_motion_record

            from aimdk_msgs.srv import _mc_motion_record
            if _mc_motion_record.Metaclass_McMotionRecord_Request._TYPE_SUPPORT is None:
                _mc_motion_record.Metaclass_McMotionRecord_Request.__import_type_support__()
            if _mc_motion_record.Metaclass_McMotionRecord_Response._TYPE_SUPPORT is None:
                _mc_motion_record.Metaclass_McMotionRecord_Response.__import_type_support__()


class McMotionRecord(metaclass=Metaclass_McMotionRecord):
    from aimdk_msgs.srv._mc_motion_record import McMotionRecord_Request as Request
    from aimdk_msgs.srv._mc_motion_record import McMotionRecord_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
