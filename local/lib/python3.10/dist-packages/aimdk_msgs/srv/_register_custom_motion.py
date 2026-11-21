# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/RegisterCustomMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterCustomMotion_Request(type):
    """Metaclass of message 'RegisterCustomMotion_Request'."""

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
                'aimdk_msgs.srv.RegisterCustomMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_custom_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_custom_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_custom_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_custom_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_custom_motion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterCustomMotion_Request(metaclass=Metaclass_RegisterCustomMotion_Request):
    """Message class 'RegisterCustomMotion_Request'."""

    __slots__ = [
        '_motion',
        '_res_path',
        '_write_to_disk',
    ]

    _fields_and_field_types = {
        'motion': 'string',
        'res_path': 'string',
        'write_to_disk': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion = kwargs.get('motion', str())
        self.res_path = kwargs.get('res_path', str())
        self.write_to_disk = kwargs.get('write_to_disk', bool())

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
        if self.motion != other.motion:
            return False
        if self.res_path != other.res_path:
            return False
        if self.write_to_disk != other.write_to_disk:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motion' field must be of type 'str'"
        self._motion = value

    @builtins.property
    def res_path(self):
        """Message field 'res_path'."""
        return self._res_path

    @res_path.setter
    def res_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'res_path' field must be of type 'str'"
        self._res_path = value

    @builtins.property
    def write_to_disk(self):
        """Message field 'write_to_disk'."""
        return self._write_to_disk

    @write_to_disk.setter
    def write_to_disk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'write_to_disk' field must be of type 'bool'"
        self._write_to_disk = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterCustomMotion_Response(type):
    """Metaclass of message 'RegisterCustomMotion_Response'."""

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
                'aimdk_msgs.srv.RegisterCustomMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_custom_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_custom_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_custom_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_custom_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_custom_motion__response

            from aimdk_msgs.msg import CommonTaskResponse
            if CommonTaskResponse.__class__._TYPE_SUPPORT is None:
                CommonTaskResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterCustomMotion_Response(metaclass=Metaclass_RegisterCustomMotion_Response):
    """Message class 'RegisterCustomMotion_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonTaskResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonTaskResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonTaskResponse
        self.response = kwargs.get('response', CommonTaskResponse())

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
            from aimdk_msgs.msg import CommonTaskResponse
            assert \
                isinstance(value, CommonTaskResponse), \
                "The 'response' field must be a sub message of type 'CommonTaskResponse'"
        self._response = value


class Metaclass_RegisterCustomMotion(type):
    """Metaclass of service 'RegisterCustomMotion'."""

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
                'aimdk_msgs.srv.RegisterCustomMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__register_custom_motion

            from aimdk_msgs.srv import _register_custom_motion
            if _register_custom_motion.Metaclass_RegisterCustomMotion_Request._TYPE_SUPPORT is None:
                _register_custom_motion.Metaclass_RegisterCustomMotion_Request.__import_type_support__()
            if _register_custom_motion.Metaclass_RegisterCustomMotion_Response._TYPE_SUPPORT is None:
                _register_custom_motion.Metaclass_RegisterCustomMotion_Response.__import_type_support__()


class RegisterCustomMotion(metaclass=Metaclass_RegisterCustomMotion):
    from aimdk_msgs.srv._register_custom_motion import RegisterCustomMotion_Request as Request
    from aimdk_msgs.srv._register_custom_motion import RegisterCustomMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
