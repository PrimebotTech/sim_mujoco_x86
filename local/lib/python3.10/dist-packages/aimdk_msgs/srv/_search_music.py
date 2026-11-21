# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SearchMusic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SearchMusic_Request(type):
    """Metaclass of message 'SearchMusic_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SP_TYPE_QM': 0,
        'SP_TYPE_XM': 1,
        'LIBRARY_MODE_DEFAULT': 1,
        'LIBRARY_MODE_CHILDREN': 2,
        'SIZE_DEFAULT': 30,
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
                'aimdk_msgs.srv.SearchMusic_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__search_music__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__search_music__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__search_music__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__search_music__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__search_music__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SP_TYPE_QM': cls.__constants['SP_TYPE_QM'],
            'SP_TYPE_XM': cls.__constants['SP_TYPE_XM'],
            'LIBRARY_MODE_DEFAULT': cls.__constants['LIBRARY_MODE_DEFAULT'],
            'LIBRARY_MODE_CHILDREN': cls.__constants['LIBRARY_MODE_CHILDREN'],
            'SIZE_DEFAULT': cls.__constants['SIZE_DEFAULT'],
        }

    @property
    def SP_TYPE_QM(self):
        """Message constant 'SP_TYPE_QM'."""
        return Metaclass_SearchMusic_Request.__constants['SP_TYPE_QM']

    @property
    def SP_TYPE_XM(self):
        """Message constant 'SP_TYPE_XM'."""
        return Metaclass_SearchMusic_Request.__constants['SP_TYPE_XM']

    @property
    def LIBRARY_MODE_DEFAULT(self):
        """Message constant 'LIBRARY_MODE_DEFAULT'."""
        return Metaclass_SearchMusic_Request.__constants['LIBRARY_MODE_DEFAULT']

    @property
    def LIBRARY_MODE_CHILDREN(self):
        """Message constant 'LIBRARY_MODE_CHILDREN'."""
        return Metaclass_SearchMusic_Request.__constants['LIBRARY_MODE_CHILDREN']

    @property
    def SIZE_DEFAULT(self):
        """Message constant 'SIZE_DEFAULT'."""
        return Metaclass_SearchMusic_Request.__constants['SIZE_DEFAULT']


class SearchMusic_Request(metaclass=Metaclass_SearchMusic_Request):
    """
    Message class 'SearchMusic_Request'.

    Constants:
      SP_TYPE_QM
      SP_TYPE_XM
      LIBRARY_MODE_DEFAULT
      LIBRARY_MODE_CHILDREN
      SIZE_DEFAULT
    """

    __slots__ = [
        '_request',
        '_query',
        '_sp',
        '_size',
        '_library_mode',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
        'query': 'string',
        'sp': 'int32',
        'size': 'int32',
        'library_mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())
        self.query = kwargs.get('query', str())
        self.sp = kwargs.get('sp', int())
        self.size = kwargs.get('size', int())
        self.library_mode = kwargs.get('library_mode', int())

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
        if self.query != other.query:
            return False
        if self.sp != other.sp:
            return False
        if self.size != other.size:
            return False
        if self.library_mode != other.library_mode:
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
    def query(self):
        """Message field 'query'."""
        return self._query

    @query.setter
    def query(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'query' field must be of type 'str'"
        self._query = value

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
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'size' field must be an integer in [-2147483648, 2147483647]"
        self._size = value

    @builtins.property
    def library_mode(self):
        """Message field 'library_mode'."""
        return self._library_mode

    @library_mode.setter
    def library_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'library_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'library_mode' field must be an integer in [-2147483648, 2147483647]"
        self._library_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SearchMusic_Response(type):
    """Metaclass of message 'SearchMusic_Response'."""

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
                'aimdk_msgs.srv.SearchMusic_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__search_music__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__search_music__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__search_music__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__search_music__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__search_music__response

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


class SearchMusic_Response(metaclass=Metaclass_SearchMusic_Response):
    """Message class 'SearchMusic_Response'."""

    __slots__ = [
        '_response',
        '_search_command_id',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonResponse',
        'search_command_id': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonResponse'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonResponse
        self.response = kwargs.get('response', CommonResponse())
        self.search_command_id = kwargs.get('search_command_id', int())

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
        if self.search_command_id != other.search_command_id:
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


class Metaclass_SearchMusic(type):
    """Metaclass of service 'SearchMusic'."""

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
                'aimdk_msgs.srv.SearchMusic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__search_music

            from aimdk_msgs.srv import _search_music
            if _search_music.Metaclass_SearchMusic_Request._TYPE_SUPPORT is None:
                _search_music.Metaclass_SearchMusic_Request.__import_type_support__()
            if _search_music.Metaclass_SearchMusic_Response._TYPE_SUPPORT is None:
                _search_music.Metaclass_SearchMusic_Response.__import_type_support__()


class SearchMusic(metaclass=Metaclass_SearchMusic):
    from aimdk_msgs.srv._search_music import SearchMusic_Request as Request
    from aimdk_msgs.srv._search_music import SearchMusic_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
