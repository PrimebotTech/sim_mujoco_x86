# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/JointInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointInfo(type):
    """Metaclass of message 'JointInfo'."""

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
                'aimdk_msgs.msg.JointInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_info

            from aimdk_msgs.msg import JointMitParams
            if JointMitParams.__class__._TYPE_SUPPORT is None:
                JointMitParams.__class__.__import_type_support__()

            from aimdk_msgs.msg import JointProtectConfig
            if JointProtectConfig.__class__._TYPE_SUPPORT is None:
                JointProtectConfig.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointInfo(metaclass=Metaclass_JointInfo):
    """Message class 'JointInfo'."""

    __slots__ = [
        '_name',
        '_hardware_version',
        '_software_version',
        '_mode',
        '_mit_params',
        '_protect_config',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'hardware_version': 'string',
        'software_version': 'string',
        'mode': 'uint8',
        'mit_params': 'aimdk_msgs/JointMitParams',
        'protect_config': 'aimdk_msgs/JointProtectConfig',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'JointMitParams'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'JointProtectConfig'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.hardware_version = kwargs.get('hardware_version', str())
        self.software_version = kwargs.get('software_version', str())
        self.mode = kwargs.get('mode', int())
        from aimdk_msgs.msg import JointMitParams
        self.mit_params = kwargs.get('mit_params', JointMitParams())
        from aimdk_msgs.msg import JointProtectConfig
        self.protect_config = kwargs.get('protect_config', JointProtectConfig())

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
        if self.name != other.name:
            return False
        if self.hardware_version != other.hardware_version:
            return False
        if self.software_version != other.software_version:
            return False
        if self.mode != other.mode:
            return False
        if self.mit_params != other.mit_params:
            return False
        if self.protect_config != other.protect_config:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def hardware_version(self):
        """Message field 'hardware_version'."""
        return self._hardware_version

    @hardware_version.setter
    def hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_version' field must be of type 'str'"
        self._hardware_version = value

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software_version' field must be of type 'str'"
        self._software_version = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def mit_params(self):
        """Message field 'mit_params'."""
        return self._mit_params

    @mit_params.setter
    def mit_params(self, value):
        if __debug__:
            from aimdk_msgs.msg import JointMitParams
            assert \
                isinstance(value, JointMitParams), \
                "The 'mit_params' field must be a sub message of type 'JointMitParams'"
        self._mit_params = value

    @builtins.property
    def protect_config(self):
        """Message field 'protect_config'."""
        return self._protect_config

    @protect_config.setter
    def protect_config(self, value):
        if __debug__:
            from aimdk_msgs.msg import JointProtectConfig
            assert \
                isinstance(value, JointProtectConfig), \
                "The 'protect_config' field must be a sub message of type 'JointProtectConfig'"
        self._protect_config = value
