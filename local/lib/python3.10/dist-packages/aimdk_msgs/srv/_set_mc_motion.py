# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/SetMcMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMcMotion_Request(type):
    """Metaclass of message 'SetMcMotion_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MIMIC_QY': 1,
        'MIMIC_LC': 2,
        'PRELOAD': 1,
        'EXECUTION': 2,
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
                'aimdk_msgs.srv.SetMcMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mc_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mc_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mc_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mc_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mc_motion__request

            from aimdk_msgs.msg import RequestHeader
            if RequestHeader.__class__._TYPE_SUPPORT is None:
                RequestHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MIMIC_QY': cls.__constants['MIMIC_QY'],
            'MIMIC_LC': cls.__constants['MIMIC_LC'],
            'PRELOAD': cls.__constants['PRELOAD'],
            'EXECUTION': cls.__constants['EXECUTION'],
        }

    @property
    def MIMIC_QY(self):
        """Message constant 'MIMIC_QY'."""
        return Metaclass_SetMcMotion_Request.__constants['MIMIC_QY']

    @property
    def MIMIC_LC(self):
        """Message constant 'MIMIC_LC'."""
        return Metaclass_SetMcMotion_Request.__constants['MIMIC_LC']

    @property
    def PRELOAD(self):
        """Message constant 'PRELOAD'."""
        return Metaclass_SetMcMotion_Request.__constants['PRELOAD']

    @property
    def EXECUTION(self):
        """Message constant 'EXECUTION'."""
        return Metaclass_SetMcMotion_Request.__constants['EXECUTION']


class SetMcMotion_Request(metaclass=Metaclass_SetMcMotion_Request):
    """
    Message class 'SetMcMotion_Request'.

    Constants:
      MIMIC_QY
      MIMIC_LC
      PRELOAD
      EXECUTION
    """

    __slots__ = [
        '_header',
        '_source',
        '_type',
        '_motion',
        '_model',
        '_resource',
        '_interrupt',
        '_operation',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/RequestHeader',
        'source': 'string',
        'type': 'int32',
        'motion': 'string',
        'model': 'string',
        'resource': 'string',
        'interrupt': 'boolean',
        'operation': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'RequestHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import RequestHeader
        self.header = kwargs.get('header', RequestHeader())
        self.source = kwargs.get('source', str())
        self.type = kwargs.get('type', int())
        self.motion = kwargs.get('motion', str())
        self.model = kwargs.get('model', str())
        self.resource = kwargs.get('resource', str())
        self.interrupt = kwargs.get('interrupt', bool())
        self.operation = kwargs.get('operation', int())

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
        if self.source != other.source:
            return False
        if self.type != other.type:
            return False
        if self.motion != other.motion:
            return False
        if self.model != other.model:
            return False
        if self.resource != other.resource:
            return False
        if self.interrupt != other.interrupt:
            return False
        if self.operation != other.operation:
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
            from aimdk_msgs.msg import RequestHeader
            assert \
                isinstance(value, RequestHeader), \
                "The 'header' field must be a sub message of type 'RequestHeader'"
        self._header = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

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
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def resource(self):
        """Message field 'resource'."""
        return self._resource

    @resource.setter
    def resource(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'resource' field must be of type 'str'"
        self._resource = value

    @builtins.property
    def interrupt(self):
        """Message field 'interrupt'."""
        return self._interrupt

    @interrupt.setter
    def interrupt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'interrupt' field must be of type 'bool'"
        self._interrupt = value

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operation' field must be an integer in [-2147483648, 2147483647]"
        self._operation = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMcMotion_Response(type):
    """Metaclass of message 'SetMcMotion_Response'."""

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
                'aimdk_msgs.srv.SetMcMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mc_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mc_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mc_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mc_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mc_motion__response

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


class SetMcMotion_Response(metaclass=Metaclass_SetMcMotion_Response):
    """Message class 'SetMcMotion_Response'."""

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


class Metaclass_SetMcMotion(type):
    """Metaclass of service 'SetMcMotion'."""

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
                'aimdk_msgs.srv.SetMcMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_mc_motion

            from aimdk_msgs.srv import _set_mc_motion
            if _set_mc_motion.Metaclass_SetMcMotion_Request._TYPE_SUPPORT is None:
                _set_mc_motion.Metaclass_SetMcMotion_Request.__import_type_support__()
            if _set_mc_motion.Metaclass_SetMcMotion_Response._TYPE_SUPPORT is None:
                _set_mc_motion.Metaclass_SetMcMotion_Response.__import_type_support__()


class SetMcMotion(metaclass=Metaclass_SetMcMotion):
    from aimdk_msgs.srv._set_mc_motion import SetMcMotion_Request as Request
    from aimdk_msgs.srv._set_mc_motion import SetMcMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
