# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/CommonState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommonState(type):
    """Metaclass of message 'CommonState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'SUCCESS': 1,
        'FAILURE': 2,
        'ABORTED': 3,
        'TIMEOUT': 4,
        'INVALID': 5,
        'IN_MANUAL': 6,
        'NOT_READY': 100,
        'PENDING': 200,
        'CREATED': 300,
        'RUNNING': 400,
        'REASON_SUCCESS': 0,
        'REASON_OPENBOX': 1,
        'REASON_STARTUP_CHECK': 2,
        'REASON_SHUTDOWN': 3,
        'REASON_FROM': 4,
        'REASON_LOW_BATTERY': 5,
        'REASON_CHARGE': 6,
        'REASON_NO_WHITELIST': 7,
        'REASON_HDS': 8,
        'REASON_ACTION': 9,
        'REASON_OBSTACLE_FORWARD': 10,
        'REASON_OBSTACLE_BACK': 11,
        'REASON_OBSTACLE_LEFT': 12,
        'REASON_OBSTACLE_RIGHT': 13,
        'REASON_OBSTACLE_UP': 14,
        'REASON_TASK_RUNNING': 15,
        'REASON_TARGET_STATE': 16,
        'REASON_NOT_FOUND': 17,
        'REASON_NO_SKILL_LIST': 18,
        'REASON_FORM_MIS_MATCH': 19,
        'REASON_ACTION_NOT_MATCH': 20,
        'REASON_ACTION_BLACKLISTED': 21,
        'REASON_NO_TRANSFER_PATH': 22,
        'REASON_NO_ELIGIBLE_SKILL': 23,
        'REASON_INDOOR_WHOLE_BODY': 24,
        'REASON_ENGINE_NOT_READY': 25,
        'REASON_NOT_SUPPORTED': 26,
        'REASON_STAND_UP_IN_PROGRESS': 27,
        'REASON_NOT_INTERRUPTIBLE': 28,
        'REASON_INTERRUPT_INVALID': 29,
        'REASON_TRANSFORM_CONDITION': 30,
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
                'aimdk_msgs.msg.CommonState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__common_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__common_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__common_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__common_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__common_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
            'ABORTED': cls.__constants['ABORTED'],
            'TIMEOUT': cls.__constants['TIMEOUT'],
            'INVALID': cls.__constants['INVALID'],
            'IN_MANUAL': cls.__constants['IN_MANUAL'],
            'NOT_READY': cls.__constants['NOT_READY'],
            'PENDING': cls.__constants['PENDING'],
            'CREATED': cls.__constants['CREATED'],
            'RUNNING': cls.__constants['RUNNING'],
            'REASON_SUCCESS': cls.__constants['REASON_SUCCESS'],
            'REASON_OPENBOX': cls.__constants['REASON_OPENBOX'],
            'REASON_STARTUP_CHECK': cls.__constants['REASON_STARTUP_CHECK'],
            'REASON_SHUTDOWN': cls.__constants['REASON_SHUTDOWN'],
            'REASON_FROM': cls.__constants['REASON_FROM'],
            'REASON_LOW_BATTERY': cls.__constants['REASON_LOW_BATTERY'],
            'REASON_CHARGE': cls.__constants['REASON_CHARGE'],
            'REASON_NO_WHITELIST': cls.__constants['REASON_NO_WHITELIST'],
            'REASON_HDS': cls.__constants['REASON_HDS'],
            'REASON_ACTION': cls.__constants['REASON_ACTION'],
            'REASON_OBSTACLE_FORWARD': cls.__constants['REASON_OBSTACLE_FORWARD'],
            'REASON_OBSTACLE_BACK': cls.__constants['REASON_OBSTACLE_BACK'],
            'REASON_OBSTACLE_LEFT': cls.__constants['REASON_OBSTACLE_LEFT'],
            'REASON_OBSTACLE_RIGHT': cls.__constants['REASON_OBSTACLE_RIGHT'],
            'REASON_OBSTACLE_UP': cls.__constants['REASON_OBSTACLE_UP'],
            'REASON_TASK_RUNNING': cls.__constants['REASON_TASK_RUNNING'],
            'REASON_TARGET_STATE': cls.__constants['REASON_TARGET_STATE'],
            'REASON_NOT_FOUND': cls.__constants['REASON_NOT_FOUND'],
            'REASON_NO_SKILL_LIST': cls.__constants['REASON_NO_SKILL_LIST'],
            'REASON_FORM_MIS_MATCH': cls.__constants['REASON_FORM_MIS_MATCH'],
            'REASON_ACTION_NOT_MATCH': cls.__constants['REASON_ACTION_NOT_MATCH'],
            'REASON_ACTION_BLACKLISTED': cls.__constants['REASON_ACTION_BLACKLISTED'],
            'REASON_NO_TRANSFER_PATH': cls.__constants['REASON_NO_TRANSFER_PATH'],
            'REASON_NO_ELIGIBLE_SKILL': cls.__constants['REASON_NO_ELIGIBLE_SKILL'],
            'REASON_INDOOR_WHOLE_BODY': cls.__constants['REASON_INDOOR_WHOLE_BODY'],
            'REASON_ENGINE_NOT_READY': cls.__constants['REASON_ENGINE_NOT_READY'],
            'REASON_NOT_SUPPORTED': cls.__constants['REASON_NOT_SUPPORTED'],
            'REASON_STAND_UP_IN_PROGRESS': cls.__constants['REASON_STAND_UP_IN_PROGRESS'],
            'REASON_NOT_INTERRUPTIBLE': cls.__constants['REASON_NOT_INTERRUPTIBLE'],
            'REASON_INTERRUPT_INVALID': cls.__constants['REASON_INTERRUPT_INVALID'],
            'REASON_TRANSFORM_CONDITION': cls.__constants['REASON_TRANSFORM_CONDITION'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_CommonState.__constants['UNKNOWN']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_CommonState.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_CommonState.__constants['FAILURE']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_CommonState.__constants['ABORTED']

    @property
    def TIMEOUT(self):
        """Message constant 'TIMEOUT'."""
        return Metaclass_CommonState.__constants['TIMEOUT']

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_CommonState.__constants['INVALID']

    @property
    def IN_MANUAL(self):
        """Message constant 'IN_MANUAL'."""
        return Metaclass_CommonState.__constants['IN_MANUAL']

    @property
    def NOT_READY(self):
        """Message constant 'NOT_READY'."""
        return Metaclass_CommonState.__constants['NOT_READY']

    @property
    def PENDING(self):
        """Message constant 'PENDING'."""
        return Metaclass_CommonState.__constants['PENDING']

    @property
    def CREATED(self):
        """Message constant 'CREATED'."""
        return Metaclass_CommonState.__constants['CREATED']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_CommonState.__constants['RUNNING']

    @property
    def REASON_SUCCESS(self):
        """Message constant 'REASON_SUCCESS'."""
        return Metaclass_CommonState.__constants['REASON_SUCCESS']

    @property
    def REASON_OPENBOX(self):
        """Message constant 'REASON_OPENBOX'."""
        return Metaclass_CommonState.__constants['REASON_OPENBOX']

    @property
    def REASON_STARTUP_CHECK(self):
        """Message constant 'REASON_STARTUP_CHECK'."""
        return Metaclass_CommonState.__constants['REASON_STARTUP_CHECK']

    @property
    def REASON_SHUTDOWN(self):
        """Message constant 'REASON_SHUTDOWN'."""
        return Metaclass_CommonState.__constants['REASON_SHUTDOWN']

    @property
    def REASON_FROM(self):
        """Message constant 'REASON_FROM'."""
        return Metaclass_CommonState.__constants['REASON_FROM']

    @property
    def REASON_LOW_BATTERY(self):
        """Message constant 'REASON_LOW_BATTERY'."""
        return Metaclass_CommonState.__constants['REASON_LOW_BATTERY']

    @property
    def REASON_CHARGE(self):
        """Message constant 'REASON_CHARGE'."""
        return Metaclass_CommonState.__constants['REASON_CHARGE']

    @property
    def REASON_NO_WHITELIST(self):
        """Message constant 'REASON_NO_WHITELIST'."""
        return Metaclass_CommonState.__constants['REASON_NO_WHITELIST']

    @property
    def REASON_HDS(self):
        """Message constant 'REASON_HDS'."""
        return Metaclass_CommonState.__constants['REASON_HDS']

    @property
    def REASON_ACTION(self):
        """Message constant 'REASON_ACTION'."""
        return Metaclass_CommonState.__constants['REASON_ACTION']

    @property
    def REASON_OBSTACLE_FORWARD(self):
        """Message constant 'REASON_OBSTACLE_FORWARD'."""
        return Metaclass_CommonState.__constants['REASON_OBSTACLE_FORWARD']

    @property
    def REASON_OBSTACLE_BACK(self):
        """Message constant 'REASON_OBSTACLE_BACK'."""
        return Metaclass_CommonState.__constants['REASON_OBSTACLE_BACK']

    @property
    def REASON_OBSTACLE_LEFT(self):
        """Message constant 'REASON_OBSTACLE_LEFT'."""
        return Metaclass_CommonState.__constants['REASON_OBSTACLE_LEFT']

    @property
    def REASON_OBSTACLE_RIGHT(self):
        """Message constant 'REASON_OBSTACLE_RIGHT'."""
        return Metaclass_CommonState.__constants['REASON_OBSTACLE_RIGHT']

    @property
    def REASON_OBSTACLE_UP(self):
        """Message constant 'REASON_OBSTACLE_UP'."""
        return Metaclass_CommonState.__constants['REASON_OBSTACLE_UP']

    @property
    def REASON_TASK_RUNNING(self):
        """Message constant 'REASON_TASK_RUNNING'."""
        return Metaclass_CommonState.__constants['REASON_TASK_RUNNING']

    @property
    def REASON_TARGET_STATE(self):
        """Message constant 'REASON_TARGET_STATE'."""
        return Metaclass_CommonState.__constants['REASON_TARGET_STATE']

    @property
    def REASON_NOT_FOUND(self):
        """Message constant 'REASON_NOT_FOUND'."""
        return Metaclass_CommonState.__constants['REASON_NOT_FOUND']

    @property
    def REASON_NO_SKILL_LIST(self):
        """Message constant 'REASON_NO_SKILL_LIST'."""
        return Metaclass_CommonState.__constants['REASON_NO_SKILL_LIST']

    @property
    def REASON_FORM_MIS_MATCH(self):
        """Message constant 'REASON_FORM_MIS_MATCH'."""
        return Metaclass_CommonState.__constants['REASON_FORM_MIS_MATCH']

    @property
    def REASON_ACTION_NOT_MATCH(self):
        """Message constant 'REASON_ACTION_NOT_MATCH'."""
        return Metaclass_CommonState.__constants['REASON_ACTION_NOT_MATCH']

    @property
    def REASON_ACTION_BLACKLISTED(self):
        """Message constant 'REASON_ACTION_BLACKLISTED'."""
        return Metaclass_CommonState.__constants['REASON_ACTION_BLACKLISTED']

    @property
    def REASON_NO_TRANSFER_PATH(self):
        """Message constant 'REASON_NO_TRANSFER_PATH'."""
        return Metaclass_CommonState.__constants['REASON_NO_TRANSFER_PATH']

    @property
    def REASON_NO_ELIGIBLE_SKILL(self):
        """Message constant 'REASON_NO_ELIGIBLE_SKILL'."""
        return Metaclass_CommonState.__constants['REASON_NO_ELIGIBLE_SKILL']

    @property
    def REASON_INDOOR_WHOLE_BODY(self):
        """Message constant 'REASON_INDOOR_WHOLE_BODY'."""
        return Metaclass_CommonState.__constants['REASON_INDOOR_WHOLE_BODY']

    @property
    def REASON_ENGINE_NOT_READY(self):
        """Message constant 'REASON_ENGINE_NOT_READY'."""
        return Metaclass_CommonState.__constants['REASON_ENGINE_NOT_READY']

    @property
    def REASON_NOT_SUPPORTED(self):
        """Message constant 'REASON_NOT_SUPPORTED'."""
        return Metaclass_CommonState.__constants['REASON_NOT_SUPPORTED']

    @property
    def REASON_STAND_UP_IN_PROGRESS(self):
        """Message constant 'REASON_STAND_UP_IN_PROGRESS'."""
        return Metaclass_CommonState.__constants['REASON_STAND_UP_IN_PROGRESS']

    @property
    def REASON_NOT_INTERRUPTIBLE(self):
        """Message constant 'REASON_NOT_INTERRUPTIBLE'."""
        return Metaclass_CommonState.__constants['REASON_NOT_INTERRUPTIBLE']

    @property
    def REASON_INTERRUPT_INVALID(self):
        """Message constant 'REASON_INTERRUPT_INVALID'."""
        return Metaclass_CommonState.__constants['REASON_INTERRUPT_INVALID']

    @property
    def REASON_TRANSFORM_CONDITION(self):
        """Message constant 'REASON_TRANSFORM_CONDITION'."""
        return Metaclass_CommonState.__constants['REASON_TRANSFORM_CONDITION']


class CommonState(metaclass=Metaclass_CommonState):
    """
    Message class 'CommonState'.

    Constants:
      UNKNOWN
      SUCCESS
      FAILURE
      ABORTED
      TIMEOUT
      INVALID
      IN_MANUAL
      NOT_READY
      PENDING
      CREATED
      RUNNING
      REASON_SUCCESS
      REASON_OPENBOX
      REASON_STARTUP_CHECK
      REASON_SHUTDOWN
      REASON_FROM
      REASON_LOW_BATTERY
      REASON_CHARGE
      REASON_NO_WHITELIST
      REASON_HDS
      REASON_ACTION
      REASON_OBSTACLE_FORWARD
      REASON_OBSTACLE_BACK
      REASON_OBSTACLE_LEFT
      REASON_OBSTACLE_RIGHT
      REASON_OBSTACLE_UP
      REASON_TASK_RUNNING
      REASON_TARGET_STATE
      REASON_NOT_FOUND
      REASON_NO_SKILL_LIST
      REASON_FORM_MIS_MATCH
      REASON_ACTION_NOT_MATCH
      REASON_ACTION_BLACKLISTED
      REASON_NO_TRANSFER_PATH
      REASON_NO_ELIGIBLE_SKILL
      REASON_INDOOR_WHOLE_BODY
      REASON_ENGINE_NOT_READY
      REASON_NOT_SUPPORTED
      REASON_STAND_UP_IN_PROGRESS
      REASON_NOT_INTERRUPTIBLE
      REASON_INTERRUPT_INVALID
      REASON_TRANSFORM_CONDITION
    """

    __slots__ = [
        '_value',
        '_reason',
    ]

    _fields_and_field_types = {
        'value': 'int32',
        'reason': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())
        self.reason = kwargs.get('reason', int())

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
        if self.value != other.value:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value' field must be an integer in [-2147483648, 2147483647]"
        self._value = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reason' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reason' field must be an unsigned integer in [0, 4294967295]"
        self._reason = value
