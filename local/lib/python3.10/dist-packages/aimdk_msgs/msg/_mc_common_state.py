# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McCommonState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McCommonState(type):
    """Metaclass of message 'McCommonState'."""

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
                'aimdk_msgs.msg.McCommonState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_common_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_common_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_common_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_common_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_common_state

            from aimdk_msgs.msg import McActionInfo
            if McActionInfo.__class__._TYPE_SUPPORT is None:
                McActionInfo.__class__.__import_type_support__()

            from aimdk_msgs.msg import McFormState
            if McFormState.__class__._TYPE_SUPPORT is None:
                McFormState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McFsmState
            if McFsmState.__class__._TYPE_SUPPORT is None:
                McFsmState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McHandHeldState
            if McHandHeldState.__class__._TYPE_SUPPORT is None:
                McHandHeldState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McInputSource
            if McInputSource.__class__._TYPE_SUPPORT is None:
                McInputSource.__class__.__import_type_support__()

            from aimdk_msgs.msg import McLiftState
            if McLiftState.__class__._TYPE_SUPPORT is None:
                McLiftState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMotionStatus
            if McMotionStatus.__class__._TYPE_SUPPORT is None:
                McMotionStatus.__class__.__import_type_support__()

            from aimdk_msgs.msg import McPosture
            if McPosture.__class__._TYPE_SUPPORT is None:
                McPosture.__class__.__import_type_support__()

            from aimdk_msgs.msg import McPostureState
            if McPostureState.__class__._TYPE_SUPPORT is None:
                McPostureState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McRuntimeModel
            if McRuntimeModel.__class__._TYPE_SUPPORT is None:
                McRuntimeModel.__class__.__import_type_support__()

            from aimdk_msgs.msg import McTaskInfo
            if McTaskInfo.__class__._TYPE_SUPPORT is None:
                McTaskInfo.__class__.__import_type_support__()

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class McCommonState(metaclass=Metaclass_McCommonState):
    """Message class 'McCommonState'."""

    __slots__ = [
        '_header',
        '_input_source',
        '_action_info',
        '_runtime_model',
        '_motion_status',
        '_fsm_state',
        '_form_state',
        '_posture',
        '_is_moving',
        '_is_fallen',
        '_lift_state',
        '_task_info',
        '_held_state',
        '_posture_state',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'input_source': 'aimdk_msgs/McInputSource',
        'action_info': 'aimdk_msgs/McActionInfo',
        'runtime_model': 'aimdk_msgs/McRuntimeModel',
        'motion_status': 'aimdk_msgs/McMotionStatus',
        'fsm_state': 'aimdk_msgs/McFsmState',
        'form_state': 'aimdk_msgs/McFormState',
        'posture': 'aimdk_msgs/McPosture',
        'is_moving': 'boolean',
        'is_fallen': 'boolean',
        'lift_state': 'aimdk_msgs/McLiftState',
        'task_info': 'aimdk_msgs/McTaskInfo',
        'held_state': 'aimdk_msgs/McHandHeldState',
        'posture_state': 'aimdk_msgs/McPostureState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McInputSource'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McActionInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McRuntimeModel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMotionStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McFsmState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McFormState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McPosture'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLiftState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McTaskInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McHandHeldState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McPostureState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        from aimdk_msgs.msg import McInputSource
        self.input_source = kwargs.get('input_source', McInputSource())
        from aimdk_msgs.msg import McActionInfo
        self.action_info = kwargs.get('action_info', McActionInfo())
        from aimdk_msgs.msg import McRuntimeModel
        self.runtime_model = kwargs.get('runtime_model', McRuntimeModel())
        from aimdk_msgs.msg import McMotionStatus
        self.motion_status = kwargs.get('motion_status', McMotionStatus())
        from aimdk_msgs.msg import McFsmState
        self.fsm_state = kwargs.get('fsm_state', McFsmState())
        from aimdk_msgs.msg import McFormState
        self.form_state = kwargs.get('form_state', McFormState())
        from aimdk_msgs.msg import McPosture
        self.posture = kwargs.get('posture', McPosture())
        self.is_moving = kwargs.get('is_moving', bool())
        self.is_fallen = kwargs.get('is_fallen', bool())
        from aimdk_msgs.msg import McLiftState
        self.lift_state = kwargs.get('lift_state', McLiftState())
        from aimdk_msgs.msg import McTaskInfo
        self.task_info = kwargs.get('task_info', McTaskInfo())
        from aimdk_msgs.msg import McHandHeldState
        self.held_state = kwargs.get('held_state', McHandHeldState())
        from aimdk_msgs.msg import McPostureState
        self.posture_state = kwargs.get('posture_state', McPostureState())

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
        if self.input_source != other.input_source:
            return False
        if self.action_info != other.action_info:
            return False
        if self.runtime_model != other.runtime_model:
            return False
        if self.motion_status != other.motion_status:
            return False
        if self.fsm_state != other.fsm_state:
            return False
        if self.form_state != other.form_state:
            return False
        if self.posture != other.posture:
            return False
        if self.is_moving != other.is_moving:
            return False
        if self.is_fallen != other.is_fallen:
            return False
        if self.lift_state != other.lift_state:
            return False
        if self.task_info != other.task_info:
            return False
        if self.held_state != other.held_state:
            return False
        if self.posture_state != other.posture_state:
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
            from aimdk_msgs.msg import MessageHeader
            assert \
                isinstance(value, MessageHeader), \
                "The 'header' field must be a sub message of type 'MessageHeader'"
        self._header = value

    @builtins.property
    def input_source(self):
        """Message field 'input_source'."""
        return self._input_source

    @input_source.setter
    def input_source(self, value):
        if __debug__:
            from aimdk_msgs.msg import McInputSource
            assert \
                isinstance(value, McInputSource), \
                "The 'input_source' field must be a sub message of type 'McInputSource'"
        self._input_source = value

    @builtins.property
    def action_info(self):
        """Message field 'action_info'."""
        return self._action_info

    @action_info.setter
    def action_info(self, value):
        if __debug__:
            from aimdk_msgs.msg import McActionInfo
            assert \
                isinstance(value, McActionInfo), \
                "The 'action_info' field must be a sub message of type 'McActionInfo'"
        self._action_info = value

    @builtins.property
    def runtime_model(self):
        """Message field 'runtime_model'."""
        return self._runtime_model

    @runtime_model.setter
    def runtime_model(self, value):
        if __debug__:
            from aimdk_msgs.msg import McRuntimeModel
            assert \
                isinstance(value, McRuntimeModel), \
                "The 'runtime_model' field must be a sub message of type 'McRuntimeModel'"
        self._runtime_model = value

    @builtins.property
    def motion_status(self):
        """Message field 'motion_status'."""
        return self._motion_status

    @motion_status.setter
    def motion_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McMotionStatus
            assert \
                isinstance(value, McMotionStatus), \
                "The 'motion_status' field must be a sub message of type 'McMotionStatus'"
        self._motion_status = value

    @builtins.property
    def fsm_state(self):
        """Message field 'fsm_state'."""
        return self._fsm_state

    @fsm_state.setter
    def fsm_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McFsmState
            assert \
                isinstance(value, McFsmState), \
                "The 'fsm_state' field must be a sub message of type 'McFsmState'"
        self._fsm_state = value

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

    @builtins.property
    def posture(self):
        """Message field 'posture'."""
        return self._posture

    @posture.setter
    def posture(self, value):
        if __debug__:
            from aimdk_msgs.msg import McPosture
            assert \
                isinstance(value, McPosture), \
                "The 'posture' field must be a sub message of type 'McPosture'"
        self._posture = value

    @builtins.property
    def is_moving(self):
        """Message field 'is_moving'."""
        return self._is_moving

    @is_moving.setter
    def is_moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_moving' field must be of type 'bool'"
        self._is_moving = value

    @builtins.property
    def is_fallen(self):
        """Message field 'is_fallen'."""
        return self._is_fallen

    @is_fallen.setter
    def is_fallen(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_fallen' field must be of type 'bool'"
        self._is_fallen = value

    @builtins.property
    def lift_state(self):
        """Message field 'lift_state'."""
        return self._lift_state

    @lift_state.setter
    def lift_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLiftState
            assert \
                isinstance(value, McLiftState), \
                "The 'lift_state' field must be a sub message of type 'McLiftState'"
        self._lift_state = value

    @builtins.property
    def task_info(self):
        """Message field 'task_info'."""
        return self._task_info

    @task_info.setter
    def task_info(self, value):
        if __debug__:
            from aimdk_msgs.msg import McTaskInfo
            assert \
                isinstance(value, McTaskInfo), \
                "The 'task_info' field must be a sub message of type 'McTaskInfo'"
        self._task_info = value

    @builtins.property
    def held_state(self):
        """Message field 'held_state'."""
        return self._held_state

    @held_state.setter
    def held_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McHandHeldState
            assert \
                isinstance(value, McHandHeldState), \
                "The 'held_state' field must be a sub message of type 'McHandHeldState'"
        self._held_state = value

    @builtins.property
    def posture_state(self):
        """Message field 'posture_state'."""
        return self._posture_state

    @posture_state.setter
    def posture_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McPostureState
            assert \
                isinstance(value, McPostureState), \
                "The 'posture_state' field must be a sub message of type 'McPostureState'"
        self._posture_state = value
