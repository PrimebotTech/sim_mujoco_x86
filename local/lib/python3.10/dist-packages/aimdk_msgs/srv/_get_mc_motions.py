# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/GetMcMotions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMcMotions_Request(type):
    """Metaclass of message 'GetMcMotions_Request'."""

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
                'aimdk_msgs.srv.GetMcMotions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_mc_motions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_mc_motions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_mc_motions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_mc_motions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_mc_motions__request

            from aimdk_msgs.msg import McFormState
            if McFormState.__class__._TYPE_SUPPORT is None:
                McFormState.__class__.__import_type_support__()

            from aimdk_msgs.msg import RequestHeader
            if RequestHeader.__class__._TYPE_SUPPORT is None:
                RequestHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMcMotions_Request(metaclass=Metaclass_GetMcMotions_Request):
    """Message class 'GetMcMotions_Request'."""

    __slots__ = [
        '_header',
        '_form_state',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/RequestHeader',
        'form_state': 'aimdk_msgs/McFormState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'RequestHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McFormState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import RequestHeader
        self.header = kwargs.get('header', RequestHeader())
        from aimdk_msgs.msg import McFormState
        self.form_state = kwargs.get('form_state', McFormState())

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
        if self.form_state != other.form_state:
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
    def form_state(self):
        """Message field 'form_state'."""
        return self._form_state

    @form_state.setter
    def form_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McFormState
            assert \
                isinstance(value, McFormState), \
                "The 'form_state' field must be a sub message of type 'McFormState'"
        self._form_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMcMotions_Response(type):
    """Metaclass of message 'GetMcMotions_Response'."""

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
                'aimdk_msgs.srv.GetMcMotions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_mc_motions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_mc_motions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_mc_motions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_mc_motions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_mc_motions__response

            from aimdk_msgs.msg import CommonTaskResponse
            if CommonTaskResponse.__class__._TYPE_SUPPORT is None:
                CommonTaskResponse.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMotion
            if McMotion.__class__._TYPE_SUPPORT is None:
                McMotion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMcMotions_Response(metaclass=Metaclass_GetMcMotions_Response):
    """Message class 'GetMcMotions_Response'."""

    __slots__ = [
        '_response',
        '_motion',
    ]

    _fields_and_field_types = {
        'response': 'aimdk_msgs/CommonTaskResponse',
        'motion': 'sequence<aimdk_msgs/McMotion>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonTaskResponse'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMotion')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonTaskResponse
        self.response = kwargs.get('response', CommonTaskResponse())
        self.motion = kwargs.get('motion', [])

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
        if self.motion != other.motion:
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

    @builtins.property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if __debug__:
            from aimdk_msgs.msg import McMotion
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
                 all(isinstance(v, McMotion) for v in value) and
                 True), \
                "The 'motion' field must be a set or sequence and each value of type 'McMotion'"
        self._motion = value


class Metaclass_GetMcMotions(type):
    """Metaclass of service 'GetMcMotions'."""

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
                'aimdk_msgs.srv.GetMcMotions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_mc_motions

            from aimdk_msgs.srv import _get_mc_motions
            if _get_mc_motions.Metaclass_GetMcMotions_Request._TYPE_SUPPORT is None:
                _get_mc_motions.Metaclass_GetMcMotions_Request.__import_type_support__()
            if _get_mc_motions.Metaclass_GetMcMotions_Response._TYPE_SUPPORT is None:
                _get_mc_motions.Metaclass_GetMcMotions_Response.__import_type_support__()


class GetMcMotions(metaclass=Metaclass_GetMcMotions):
    from aimdk_msgs.srv._get_mc_motions import GetMcMotions_Request as Request
    from aimdk_msgs.srv._get_mc_motions import GetMcMotions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
