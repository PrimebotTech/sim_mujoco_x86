# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/ModuleResourceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModuleResourceInfo(type):
    """Metaclass of message 'ModuleResourceInfo'."""

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
                'aimdk_msgs.msg.ModuleResourceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__module_resource_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__module_resource_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__module_resource_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__module_resource_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__module_resource_info

            from aimdk_msgs.msg import ModuleChannelInfo
            if ModuleChannelInfo.__class__._TYPE_SUPPORT is None:
                ModuleChannelInfo.__class__.__import_type_support__()

            from aimdk_msgs.msg import ModuleRpcInfo
            if ModuleRpcInfo.__class__._TYPE_SUPPORT is None:
                ModuleRpcInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModuleResourceInfo(metaclass=Metaclass_ModuleResourceInfo):
    """Message class 'ModuleResourceInfo'."""

    __slots__ = [
        '_module_name',
        '_rpc_clients',
        '_rpc_services',
        '_pub_channels',
        '_sub_channels',
    ]

    _fields_and_field_types = {
        'module_name': 'string',
        'rpc_clients': 'sequence<aimdk_msgs/ModuleRpcInfo>',
        'rpc_services': 'sequence<aimdk_msgs/ModuleRpcInfo>',
        'pub_channels': 'sequence<aimdk_msgs/ModuleChannelInfo>',
        'sub_channels': 'sequence<aimdk_msgs/ModuleChannelInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ModuleRpcInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ModuleRpcInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ModuleChannelInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ModuleChannelInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module_name = kwargs.get('module_name', str())
        self.rpc_clients = kwargs.get('rpc_clients', [])
        self.rpc_services = kwargs.get('rpc_services', [])
        self.pub_channels = kwargs.get('pub_channels', [])
        self.sub_channels = kwargs.get('sub_channels', [])

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
        if self.module_name != other.module_name:
            return False
        if self.rpc_clients != other.rpc_clients:
            return False
        if self.rpc_services != other.rpc_services:
            return False
        if self.pub_channels != other.pub_channels:
            return False
        if self.sub_channels != other.sub_channels:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def module_name(self):
        """Message field 'module_name'."""
        return self._module_name

    @module_name.setter
    def module_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module_name' field must be of type 'str'"
        self._module_name = value

    @builtins.property
    def rpc_clients(self):
        """Message field 'rpc_clients'."""
        return self._rpc_clients

    @rpc_clients.setter
    def rpc_clients(self, value):
        if __debug__:
            from aimdk_msgs.msg import ModuleRpcInfo
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
                 all(isinstance(v, ModuleRpcInfo) for v in value) and
                 True), \
                "The 'rpc_clients' field must be a set or sequence and each value of type 'ModuleRpcInfo'"
        self._rpc_clients = value

    @builtins.property
    def rpc_services(self):
        """Message field 'rpc_services'."""
        return self._rpc_services

    @rpc_services.setter
    def rpc_services(self, value):
        if __debug__:
            from aimdk_msgs.msg import ModuleRpcInfo
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
                 all(isinstance(v, ModuleRpcInfo) for v in value) and
                 True), \
                "The 'rpc_services' field must be a set or sequence and each value of type 'ModuleRpcInfo'"
        self._rpc_services = value

    @builtins.property
    def pub_channels(self):
        """Message field 'pub_channels'."""
        return self._pub_channels

    @pub_channels.setter
    def pub_channels(self, value):
        if __debug__:
            from aimdk_msgs.msg import ModuleChannelInfo
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
                 all(isinstance(v, ModuleChannelInfo) for v in value) and
                 True), \
                "The 'pub_channels' field must be a set or sequence and each value of type 'ModuleChannelInfo'"
        self._pub_channels = value

    @builtins.property
    def sub_channels(self):
        """Message field 'sub_channels'."""
        return self._sub_channels

    @sub_channels.setter
    def sub_channels(self, value):
        if __debug__:
            from aimdk_msgs.msg import ModuleChannelInfo
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
                 all(isinstance(v, ModuleChannelInfo) for v in value) and
                 True), \
                "The 'sub_channels' field must be a set or sequence and each value of type 'ModuleChannelInfo'"
        self._sub_channels = value
