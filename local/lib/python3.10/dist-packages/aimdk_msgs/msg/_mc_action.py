# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McAction(type):
    """Metaclass of message 'McAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PASSIVE_DEFAULT': 1,
        'DAMPING_DEFAULT': 2,
        'QUAD_LIE_DOWN': 3,
        'QUADRUPED_TO_BIPED': 10,
        'QUADRUPED_TO_BIPED_ROTATE': 11,
        'QUADRUPED_TO_BIPED_FRONTFLIP': 12,
        'BIPED_TO_QUADRUPED': 20,
        'BIPED_TO_QUADRUPED_ROTATE': 21,
        'BIPED_TO_QUADRUPED_FRONTFLIP': 22,
        'QUADRUPED_RECOVERY': 100,
        'QUADRUPED_STAND_DEFAULT': 101,
        'QUADRUPED_LOCOMOTION_DEFAULT': 102,
        'QUADRUPED_LOCOMOTION_RUN': 112,
        'QUADRUPED_LOCOMOTION_TERRAIN': 103,
        'QUADRUPED_LOCOMOTION_BIONIC': 104,
        'QUADRUPED_LOCOMOTION_FRONTFLIP': 105,
        'QUADRUPED_LOCOMOTION_BACKFLIP': 106,
        'QUADRUPED_LOCOMOTION_HANDSHAKE': 107,
        'QUADRUPED_LOCOMOTION_SIT': 108,
        'QUADRUPED_LOCOMOTION_DANCE': 109,
        'QUADRUPED_GET_DOWN_DEFAULT': 110,
        'QUADRUPED_SIT_DOWN_DEFAULT': 111,
        'QUADRUPED_LOCOMOTION_PRIDE': 113,
        'QUADRUPED_LOCOMOTION_PLEASURE': 114,
        'QUADRUPED_READY_STAND_DEFAULT': 115,
        'QUADRUPED_LOCOMOTION_JUMP': 116,
        'QUADRUPED_LOCOMOTION_STRETCH': 117,
        'QUADRUPED_PUSH_UP': 118,
        'QUADRUPED_MIMIC': 119,
        'QUADRUPED_CROUCH_DEFAULT': 120,
        'QUADRUPED_LOCOMOTION_STEP': 121,
        'QUADRUPED_STAND_REVERSE_DEFAULT': 122,
        'QUADRUPED_LOCOMOTION_REVERSE_DEFAULT': 123,
        'QUADRUPED_BODY_ADJUST_DEFAULT': 124,
        'QUADRUPED_LOCOMOTION_STAIRS': 125,
        'BIPED_RECOVERY': 200,
        'BIPED_STAND_DEFAULT': 201,
        'BIPED_LOCOMOTION_DEFAULT': 202,
        'BIPED_LOCOMOTION_TERRAIN': 203,
        'BIPED_LOCOMOTION_MOONWALK': 206,
        'BIPED_LOCOMOTION_RUN': 207,
        'BIPED_MIMIC': 208,
        'BIPED_LOCOMOTION_WBC': 300,
        'BIPED_LOCOMOTION_ANIMATION': 301,
        'BIPED_RECORD_UPPER': 302,
        'BIPED_GIMBAL': 303,
        'BIPED_NPZ_MIMIC': 304,
        'BIPED_LOCOMOTION_WBCDANCE': 305,
        'STORE_DEFAULT': 1001,
        'BIPED_WALK_RUN': 1002,
        'MIMIC': 1003,
        'MIMIC_LINKCRAFT': 1004,
        'BIPED_WHOLE_BODY_CTRL': 1005,
        'MIMIC_OPENSOURCE': 1006,
        'STAND_UP': 1007,
        'LYING_DEFAULT': 1008,
        'LIE_FACE_DOWN': 1009,
        'LIE_FACE_UP': 1010,
        'BIPED_QUIET_WALK': 1011,
        'BIPED_BLIND_TERRAIN': 1012,
        'BIPED_SIT_DOWN': 1013,
        'BIPED_CUSTOM_UPPER': 1014,
        'BIPED_RUN': 1015,
        'BIPED_TAKE_SEAT': 1016,
        'BIPED_LEAVE_SEAT': 1017,
        'MIMIC_V2': 1018,
        'MIMIC_OPENSOURCE_V2': 1019,
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
                'aimdk_msgs.msg.McAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PASSIVE_DEFAULT': cls.__constants['PASSIVE_DEFAULT'],
            'DAMPING_DEFAULT': cls.__constants['DAMPING_DEFAULT'],
            'QUAD_LIE_DOWN': cls.__constants['QUAD_LIE_DOWN'],
            'QUADRUPED_TO_BIPED': cls.__constants['QUADRUPED_TO_BIPED'],
            'QUADRUPED_TO_BIPED_ROTATE': cls.__constants['QUADRUPED_TO_BIPED_ROTATE'],
            'QUADRUPED_TO_BIPED_FRONTFLIP': cls.__constants['QUADRUPED_TO_BIPED_FRONTFLIP'],
            'BIPED_TO_QUADRUPED': cls.__constants['BIPED_TO_QUADRUPED'],
            'BIPED_TO_QUADRUPED_ROTATE': cls.__constants['BIPED_TO_QUADRUPED_ROTATE'],
            'BIPED_TO_QUADRUPED_FRONTFLIP': cls.__constants['BIPED_TO_QUADRUPED_FRONTFLIP'],
            'QUADRUPED_RECOVERY': cls.__constants['QUADRUPED_RECOVERY'],
            'QUADRUPED_STAND_DEFAULT': cls.__constants['QUADRUPED_STAND_DEFAULT'],
            'QUADRUPED_LOCOMOTION_DEFAULT': cls.__constants['QUADRUPED_LOCOMOTION_DEFAULT'],
            'QUADRUPED_LOCOMOTION_RUN': cls.__constants['QUADRUPED_LOCOMOTION_RUN'],
            'QUADRUPED_LOCOMOTION_TERRAIN': cls.__constants['QUADRUPED_LOCOMOTION_TERRAIN'],
            'QUADRUPED_LOCOMOTION_BIONIC': cls.__constants['QUADRUPED_LOCOMOTION_BIONIC'],
            'QUADRUPED_LOCOMOTION_FRONTFLIP': cls.__constants['QUADRUPED_LOCOMOTION_FRONTFLIP'],
            'QUADRUPED_LOCOMOTION_BACKFLIP': cls.__constants['QUADRUPED_LOCOMOTION_BACKFLIP'],
            'QUADRUPED_LOCOMOTION_HANDSHAKE': cls.__constants['QUADRUPED_LOCOMOTION_HANDSHAKE'],
            'QUADRUPED_LOCOMOTION_SIT': cls.__constants['QUADRUPED_LOCOMOTION_SIT'],
            'QUADRUPED_LOCOMOTION_DANCE': cls.__constants['QUADRUPED_LOCOMOTION_DANCE'],
            'QUADRUPED_GET_DOWN_DEFAULT': cls.__constants['QUADRUPED_GET_DOWN_DEFAULT'],
            'QUADRUPED_SIT_DOWN_DEFAULT': cls.__constants['QUADRUPED_SIT_DOWN_DEFAULT'],
            'QUADRUPED_LOCOMOTION_PRIDE': cls.__constants['QUADRUPED_LOCOMOTION_PRIDE'],
            'QUADRUPED_LOCOMOTION_PLEASURE': cls.__constants['QUADRUPED_LOCOMOTION_PLEASURE'],
            'QUADRUPED_READY_STAND_DEFAULT': cls.__constants['QUADRUPED_READY_STAND_DEFAULT'],
            'QUADRUPED_LOCOMOTION_JUMP': cls.__constants['QUADRUPED_LOCOMOTION_JUMP'],
            'QUADRUPED_LOCOMOTION_STRETCH': cls.__constants['QUADRUPED_LOCOMOTION_STRETCH'],
            'QUADRUPED_PUSH_UP': cls.__constants['QUADRUPED_PUSH_UP'],
            'QUADRUPED_MIMIC': cls.__constants['QUADRUPED_MIMIC'],
            'QUADRUPED_CROUCH_DEFAULT': cls.__constants['QUADRUPED_CROUCH_DEFAULT'],
            'QUADRUPED_LOCOMOTION_STEP': cls.__constants['QUADRUPED_LOCOMOTION_STEP'],
            'QUADRUPED_STAND_REVERSE_DEFAULT': cls.__constants['QUADRUPED_STAND_REVERSE_DEFAULT'],
            'QUADRUPED_LOCOMOTION_REVERSE_DEFAULT': cls.__constants['QUADRUPED_LOCOMOTION_REVERSE_DEFAULT'],
            'QUADRUPED_BODY_ADJUST_DEFAULT': cls.__constants['QUADRUPED_BODY_ADJUST_DEFAULT'],
            'QUADRUPED_LOCOMOTION_STAIRS': cls.__constants['QUADRUPED_LOCOMOTION_STAIRS'],
            'BIPED_RECOVERY': cls.__constants['BIPED_RECOVERY'],
            'BIPED_STAND_DEFAULT': cls.__constants['BIPED_STAND_DEFAULT'],
            'BIPED_LOCOMOTION_DEFAULT': cls.__constants['BIPED_LOCOMOTION_DEFAULT'],
            'BIPED_LOCOMOTION_TERRAIN': cls.__constants['BIPED_LOCOMOTION_TERRAIN'],
            'BIPED_LOCOMOTION_MOONWALK': cls.__constants['BIPED_LOCOMOTION_MOONWALK'],
            'BIPED_LOCOMOTION_RUN': cls.__constants['BIPED_LOCOMOTION_RUN'],
            'BIPED_MIMIC': cls.__constants['BIPED_MIMIC'],
            'BIPED_LOCOMOTION_WBC': cls.__constants['BIPED_LOCOMOTION_WBC'],
            'BIPED_LOCOMOTION_ANIMATION': cls.__constants['BIPED_LOCOMOTION_ANIMATION'],
            'BIPED_RECORD_UPPER': cls.__constants['BIPED_RECORD_UPPER'],
            'BIPED_GIMBAL': cls.__constants['BIPED_GIMBAL'],
            'BIPED_NPZ_MIMIC': cls.__constants['BIPED_NPZ_MIMIC'],
            'BIPED_LOCOMOTION_WBCDANCE': cls.__constants['BIPED_LOCOMOTION_WBCDANCE'],
            'STORE_DEFAULT': cls.__constants['STORE_DEFAULT'],
            'BIPED_WALK_RUN': cls.__constants['BIPED_WALK_RUN'],
            'MIMIC': cls.__constants['MIMIC'],
            'MIMIC_LINKCRAFT': cls.__constants['MIMIC_LINKCRAFT'],
            'BIPED_WHOLE_BODY_CTRL': cls.__constants['BIPED_WHOLE_BODY_CTRL'],
            'MIMIC_OPENSOURCE': cls.__constants['MIMIC_OPENSOURCE'],
            'STAND_UP': cls.__constants['STAND_UP'],
            'LYING_DEFAULT': cls.__constants['LYING_DEFAULT'],
            'LIE_FACE_DOWN': cls.__constants['LIE_FACE_DOWN'],
            'LIE_FACE_UP': cls.__constants['LIE_FACE_UP'],
            'BIPED_QUIET_WALK': cls.__constants['BIPED_QUIET_WALK'],
            'BIPED_BLIND_TERRAIN': cls.__constants['BIPED_BLIND_TERRAIN'],
            'BIPED_SIT_DOWN': cls.__constants['BIPED_SIT_DOWN'],
            'BIPED_CUSTOM_UPPER': cls.__constants['BIPED_CUSTOM_UPPER'],
            'BIPED_RUN': cls.__constants['BIPED_RUN'],
            'BIPED_TAKE_SEAT': cls.__constants['BIPED_TAKE_SEAT'],
            'BIPED_LEAVE_SEAT': cls.__constants['BIPED_LEAVE_SEAT'],
            'MIMIC_V2': cls.__constants['MIMIC_V2'],
            'MIMIC_OPENSOURCE_V2': cls.__constants['MIMIC_OPENSOURCE_V2'],
        }

    @property
    def PASSIVE_DEFAULT(self):
        """Message constant 'PASSIVE_DEFAULT'."""
        return Metaclass_McAction.__constants['PASSIVE_DEFAULT']

    @property
    def DAMPING_DEFAULT(self):
        """Message constant 'DAMPING_DEFAULT'."""
        return Metaclass_McAction.__constants['DAMPING_DEFAULT']

    @property
    def QUAD_LIE_DOWN(self):
        """Message constant 'QUAD_LIE_DOWN'."""
        return Metaclass_McAction.__constants['QUAD_LIE_DOWN']

    @property
    def QUADRUPED_TO_BIPED(self):
        """Message constant 'QUADRUPED_TO_BIPED'."""
        return Metaclass_McAction.__constants['QUADRUPED_TO_BIPED']

    @property
    def QUADRUPED_TO_BIPED_ROTATE(self):
        """Message constant 'QUADRUPED_TO_BIPED_ROTATE'."""
        return Metaclass_McAction.__constants['QUADRUPED_TO_BIPED_ROTATE']

    @property
    def QUADRUPED_TO_BIPED_FRONTFLIP(self):
        """Message constant 'QUADRUPED_TO_BIPED_FRONTFLIP'."""
        return Metaclass_McAction.__constants['QUADRUPED_TO_BIPED_FRONTFLIP']

    @property
    def BIPED_TO_QUADRUPED(self):
        """Message constant 'BIPED_TO_QUADRUPED'."""
        return Metaclass_McAction.__constants['BIPED_TO_QUADRUPED']

    @property
    def BIPED_TO_QUADRUPED_ROTATE(self):
        """Message constant 'BIPED_TO_QUADRUPED_ROTATE'."""
        return Metaclass_McAction.__constants['BIPED_TO_QUADRUPED_ROTATE']

    @property
    def BIPED_TO_QUADRUPED_FRONTFLIP(self):
        """Message constant 'BIPED_TO_QUADRUPED_FRONTFLIP'."""
        return Metaclass_McAction.__constants['BIPED_TO_QUADRUPED_FRONTFLIP']

    @property
    def QUADRUPED_RECOVERY(self):
        """Message constant 'QUADRUPED_RECOVERY'."""
        return Metaclass_McAction.__constants['QUADRUPED_RECOVERY']

    @property
    def QUADRUPED_STAND_DEFAULT(self):
        """Message constant 'QUADRUPED_STAND_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_STAND_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_DEFAULT(self):
        """Message constant 'QUADRUPED_LOCOMOTION_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_RUN(self):
        """Message constant 'QUADRUPED_LOCOMOTION_RUN'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_RUN']

    @property
    def QUADRUPED_LOCOMOTION_TERRAIN(self):
        """Message constant 'QUADRUPED_LOCOMOTION_TERRAIN'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_TERRAIN']

    @property
    def QUADRUPED_LOCOMOTION_BIONIC(self):
        """Message constant 'QUADRUPED_LOCOMOTION_BIONIC'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_BIONIC']

    @property
    def QUADRUPED_LOCOMOTION_FRONTFLIP(self):
        """Message constant 'QUADRUPED_LOCOMOTION_FRONTFLIP'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_FRONTFLIP']

    @property
    def QUADRUPED_LOCOMOTION_BACKFLIP(self):
        """Message constant 'QUADRUPED_LOCOMOTION_BACKFLIP'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_BACKFLIP']

    @property
    def QUADRUPED_LOCOMOTION_HANDSHAKE(self):
        """Message constant 'QUADRUPED_LOCOMOTION_HANDSHAKE'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_HANDSHAKE']

    @property
    def QUADRUPED_LOCOMOTION_SIT(self):
        """Message constant 'QUADRUPED_LOCOMOTION_SIT'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_SIT']

    @property
    def QUADRUPED_LOCOMOTION_DANCE(self):
        """Message constant 'QUADRUPED_LOCOMOTION_DANCE'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_DANCE']

    @property
    def QUADRUPED_GET_DOWN_DEFAULT(self):
        """Message constant 'QUADRUPED_GET_DOWN_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_GET_DOWN_DEFAULT']

    @property
    def QUADRUPED_SIT_DOWN_DEFAULT(self):
        """Message constant 'QUADRUPED_SIT_DOWN_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_SIT_DOWN_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_PRIDE(self):
        """Message constant 'QUADRUPED_LOCOMOTION_PRIDE'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_PRIDE']

    @property
    def QUADRUPED_LOCOMOTION_PLEASURE(self):
        """Message constant 'QUADRUPED_LOCOMOTION_PLEASURE'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_PLEASURE']

    @property
    def QUADRUPED_READY_STAND_DEFAULT(self):
        """Message constant 'QUADRUPED_READY_STAND_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_READY_STAND_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_JUMP(self):
        """Message constant 'QUADRUPED_LOCOMOTION_JUMP'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_JUMP']

    @property
    def QUADRUPED_LOCOMOTION_STRETCH(self):
        """Message constant 'QUADRUPED_LOCOMOTION_STRETCH'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_STRETCH']

    @property
    def QUADRUPED_PUSH_UP(self):
        """Message constant 'QUADRUPED_PUSH_UP'."""
        return Metaclass_McAction.__constants['QUADRUPED_PUSH_UP']

    @property
    def QUADRUPED_MIMIC(self):
        """Message constant 'QUADRUPED_MIMIC'."""
        return Metaclass_McAction.__constants['QUADRUPED_MIMIC']

    @property
    def QUADRUPED_CROUCH_DEFAULT(self):
        """Message constant 'QUADRUPED_CROUCH_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_CROUCH_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_STEP(self):
        """Message constant 'QUADRUPED_LOCOMOTION_STEP'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_STEP']

    @property
    def QUADRUPED_STAND_REVERSE_DEFAULT(self):
        """Message constant 'QUADRUPED_STAND_REVERSE_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_STAND_REVERSE_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_REVERSE_DEFAULT(self):
        """Message constant 'QUADRUPED_LOCOMOTION_REVERSE_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_REVERSE_DEFAULT']

    @property
    def QUADRUPED_BODY_ADJUST_DEFAULT(self):
        """Message constant 'QUADRUPED_BODY_ADJUST_DEFAULT'."""
        return Metaclass_McAction.__constants['QUADRUPED_BODY_ADJUST_DEFAULT']

    @property
    def QUADRUPED_LOCOMOTION_STAIRS(self):
        """Message constant 'QUADRUPED_LOCOMOTION_STAIRS'."""
        return Metaclass_McAction.__constants['QUADRUPED_LOCOMOTION_STAIRS']

    @property
    def BIPED_RECOVERY(self):
        """Message constant 'BIPED_RECOVERY'."""
        return Metaclass_McAction.__constants['BIPED_RECOVERY']

    @property
    def BIPED_STAND_DEFAULT(self):
        """Message constant 'BIPED_STAND_DEFAULT'."""
        return Metaclass_McAction.__constants['BIPED_STAND_DEFAULT']

    @property
    def BIPED_LOCOMOTION_DEFAULT(self):
        """Message constant 'BIPED_LOCOMOTION_DEFAULT'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_DEFAULT']

    @property
    def BIPED_LOCOMOTION_TERRAIN(self):
        """Message constant 'BIPED_LOCOMOTION_TERRAIN'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_TERRAIN']

    @property
    def BIPED_LOCOMOTION_MOONWALK(self):
        """Message constant 'BIPED_LOCOMOTION_MOONWALK'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_MOONWALK']

    @property
    def BIPED_LOCOMOTION_RUN(self):
        """Message constant 'BIPED_LOCOMOTION_RUN'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_RUN']

    @property
    def BIPED_MIMIC(self):
        """Message constant 'BIPED_MIMIC'."""
        return Metaclass_McAction.__constants['BIPED_MIMIC']

    @property
    def BIPED_LOCOMOTION_WBC(self):
        """Message constant 'BIPED_LOCOMOTION_WBC'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_WBC']

    @property
    def BIPED_LOCOMOTION_ANIMATION(self):
        """Message constant 'BIPED_LOCOMOTION_ANIMATION'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_ANIMATION']

    @property
    def BIPED_RECORD_UPPER(self):
        """Message constant 'BIPED_RECORD_UPPER'."""
        return Metaclass_McAction.__constants['BIPED_RECORD_UPPER']

    @property
    def BIPED_GIMBAL(self):
        """Message constant 'BIPED_GIMBAL'."""
        return Metaclass_McAction.__constants['BIPED_GIMBAL']

    @property
    def BIPED_NPZ_MIMIC(self):
        """Message constant 'BIPED_NPZ_MIMIC'."""
        return Metaclass_McAction.__constants['BIPED_NPZ_MIMIC']

    @property
    def BIPED_LOCOMOTION_WBCDANCE(self):
        """Message constant 'BIPED_LOCOMOTION_WBCDANCE'."""
        return Metaclass_McAction.__constants['BIPED_LOCOMOTION_WBCDANCE']

    @property
    def STORE_DEFAULT(self):
        """Message constant 'STORE_DEFAULT'."""
        return Metaclass_McAction.__constants['STORE_DEFAULT']

    @property
    def BIPED_WALK_RUN(self):
        """Message constant 'BIPED_WALK_RUN'."""
        return Metaclass_McAction.__constants['BIPED_WALK_RUN']

    @property
    def MIMIC(self):
        """Message constant 'MIMIC'."""
        return Metaclass_McAction.__constants['MIMIC']

    @property
    def MIMIC_LINKCRAFT(self):
        """Message constant 'MIMIC_LINKCRAFT'."""
        return Metaclass_McAction.__constants['MIMIC_LINKCRAFT']

    @property
    def BIPED_WHOLE_BODY_CTRL(self):
        """Message constant 'BIPED_WHOLE_BODY_CTRL'."""
        return Metaclass_McAction.__constants['BIPED_WHOLE_BODY_CTRL']

    @property
    def MIMIC_OPENSOURCE(self):
        """Message constant 'MIMIC_OPENSOURCE'."""
        return Metaclass_McAction.__constants['MIMIC_OPENSOURCE']

    @property
    def STAND_UP(self):
        """Message constant 'STAND_UP'."""
        return Metaclass_McAction.__constants['STAND_UP']

    @property
    def LYING_DEFAULT(self):
        """Message constant 'LYING_DEFAULT'."""
        return Metaclass_McAction.__constants['LYING_DEFAULT']

    @property
    def LIE_FACE_DOWN(self):
        """Message constant 'LIE_FACE_DOWN'."""
        return Metaclass_McAction.__constants['LIE_FACE_DOWN']

    @property
    def LIE_FACE_UP(self):
        """Message constant 'LIE_FACE_UP'."""
        return Metaclass_McAction.__constants['LIE_FACE_UP']

    @property
    def BIPED_QUIET_WALK(self):
        """Message constant 'BIPED_QUIET_WALK'."""
        return Metaclass_McAction.__constants['BIPED_QUIET_WALK']

    @property
    def BIPED_BLIND_TERRAIN(self):
        """Message constant 'BIPED_BLIND_TERRAIN'."""
        return Metaclass_McAction.__constants['BIPED_BLIND_TERRAIN']

    @property
    def BIPED_SIT_DOWN(self):
        """Message constant 'BIPED_SIT_DOWN'."""
        return Metaclass_McAction.__constants['BIPED_SIT_DOWN']

    @property
    def BIPED_CUSTOM_UPPER(self):
        """Message constant 'BIPED_CUSTOM_UPPER'."""
        return Metaclass_McAction.__constants['BIPED_CUSTOM_UPPER']

    @property
    def BIPED_RUN(self):
        """Message constant 'BIPED_RUN'."""
        return Metaclass_McAction.__constants['BIPED_RUN']

    @property
    def BIPED_TAKE_SEAT(self):
        """Message constant 'BIPED_TAKE_SEAT'."""
        return Metaclass_McAction.__constants['BIPED_TAKE_SEAT']

    @property
    def BIPED_LEAVE_SEAT(self):
        """Message constant 'BIPED_LEAVE_SEAT'."""
        return Metaclass_McAction.__constants['BIPED_LEAVE_SEAT']

    @property
    def MIMIC_V2(self):
        """Message constant 'MIMIC_V2'."""
        return Metaclass_McAction.__constants['MIMIC_V2']

    @property
    def MIMIC_OPENSOURCE_V2(self):
        """Message constant 'MIMIC_OPENSOURCE_V2'."""
        return Metaclass_McAction.__constants['MIMIC_OPENSOURCE_V2']


class McAction(metaclass=Metaclass_McAction):
    """
    Message class 'McAction'.

    Constants:
      PASSIVE_DEFAULT
      DAMPING_DEFAULT
      QUAD_LIE_DOWN
      QUADRUPED_TO_BIPED
      QUADRUPED_TO_BIPED_ROTATE
      QUADRUPED_TO_BIPED_FRONTFLIP
      BIPED_TO_QUADRUPED
      BIPED_TO_QUADRUPED_ROTATE
      BIPED_TO_QUADRUPED_FRONTFLIP
      QUADRUPED_RECOVERY
      QUADRUPED_STAND_DEFAULT
      QUADRUPED_LOCOMOTION_DEFAULT
      QUADRUPED_LOCOMOTION_RUN
      QUADRUPED_LOCOMOTION_TERRAIN
      QUADRUPED_LOCOMOTION_BIONIC
      QUADRUPED_LOCOMOTION_FRONTFLIP
      QUADRUPED_LOCOMOTION_BACKFLIP
      QUADRUPED_LOCOMOTION_HANDSHAKE
      QUADRUPED_LOCOMOTION_SIT
      QUADRUPED_LOCOMOTION_DANCE
      QUADRUPED_GET_DOWN_DEFAULT
      QUADRUPED_SIT_DOWN_DEFAULT
      QUADRUPED_LOCOMOTION_PRIDE
      QUADRUPED_LOCOMOTION_PLEASURE
      QUADRUPED_READY_STAND_DEFAULT
      QUADRUPED_LOCOMOTION_JUMP
      QUADRUPED_LOCOMOTION_STRETCH
      QUADRUPED_PUSH_UP
      QUADRUPED_MIMIC
      QUADRUPED_CROUCH_DEFAULT
      QUADRUPED_LOCOMOTION_STEP
      QUADRUPED_STAND_REVERSE_DEFAULT
      QUADRUPED_LOCOMOTION_REVERSE_DEFAULT
      QUADRUPED_BODY_ADJUST_DEFAULT
      QUADRUPED_LOCOMOTION_STAIRS
      BIPED_RECOVERY
      BIPED_STAND_DEFAULT
      BIPED_LOCOMOTION_DEFAULT
      BIPED_LOCOMOTION_TERRAIN
      BIPED_LOCOMOTION_MOONWALK
      BIPED_LOCOMOTION_RUN
      BIPED_MIMIC
      BIPED_LOCOMOTION_WBC
      BIPED_LOCOMOTION_ANIMATION
      BIPED_RECORD_UPPER
      BIPED_GIMBAL
      BIPED_NPZ_MIMIC
      BIPED_LOCOMOTION_WBCDANCE
      STORE_DEFAULT
      BIPED_WALK_RUN
      MIMIC
      MIMIC_LINKCRAFT
      BIPED_WHOLE_BODY_CTRL
      MIMIC_OPENSOURCE
      STAND_UP
      LYING_DEFAULT
      LIE_FACE_DOWN
      LIE_FACE_UP
      BIPED_QUIET_WALK
      BIPED_BLIND_TERRAIN
      BIPED_SIT_DOWN
      BIPED_CUSTOM_UPPER
      BIPED_RUN
      BIPED_TAKE_SEAT
      BIPED_LEAVE_SEAT
      MIMIC_V2
      MIMIC_OPENSOURCE_V2
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
