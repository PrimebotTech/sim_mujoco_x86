# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/JpegImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JpegImage(type):
    """Metaclass of message 'JpegImage'."""

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
                'aimdk_msgs.msg.JpegImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__jpeg_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__jpeg_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__jpeg_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__jpeg_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__jpeg_image

            from sensor_msgs.msg import CompressedImage
            if CompressedImage.__class__._TYPE_SUPPORT is None:
                CompressedImage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JpegImage(metaclass=Metaclass_JpegImage):
    """Message class 'JpegImage'."""

    __slots__ = [
        '_camera_id',
        '_device',
        '_width',
        '_height',
        '_framerate',
        '_exposure',
        '_gain',
        '_image',
    ]

    _fields_and_field_types = {
        'camera_id': 'string',
        'device': 'string',
        'width': 'uint32',
        'height': 'uint32',
        'framerate': 'uint32',
        'exposure': 'uint32',
        'gain': 'uint32',
        'image': 'sensor_msgs/CompressedImage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CompressedImage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_id = kwargs.get('camera_id', str())
        self.device = kwargs.get('device', str())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.framerate = kwargs.get('framerate', int())
        self.exposure = kwargs.get('exposure', int())
        self.gain = kwargs.get('gain', int())
        from sensor_msgs.msg import CompressedImage
        self.image = kwargs.get('image', CompressedImage())

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
        if self.camera_id != other.camera_id:
            return False
        if self.device != other.device:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.framerate != other.framerate:
            return False
        if self.exposure != other.exposure:
            return False
        if self.gain != other.gain:
            return False
        if self.image != other.image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_id(self):
        """Message field 'camera_id'."""
        return self._camera_id

    @camera_id.setter
    def camera_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_id' field must be of type 'str'"
        self._camera_id = value

    @builtins.property
    def device(self):
        """Message field 'device'."""
        return self._device

    @device.setter
    def device(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device' field must be of type 'str'"
        self._device = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'height' field must be an unsigned integer in [0, 4294967295]"
        self._height = value

    @builtins.property
    def framerate(self):
        """Message field 'framerate'."""
        return self._framerate

    @framerate.setter
    def framerate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framerate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'framerate' field must be an unsigned integer in [0, 4294967295]"
        self._framerate = value

    @builtins.property
    def exposure(self):
        """Message field 'exposure'."""
        return self._exposure

    @exposure.setter
    def exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exposure' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'exposure' field must be an unsigned integer in [0, 4294967295]"
        self._exposure = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gain' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gain' field must be an unsigned integer in [0, 4294967295]"
        self._gain = value

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import CompressedImage
            assert \
                isinstance(value, CompressedImage), \
                "The 'image' field must be a sub message of type 'CompressedImage'"
        self._image = value
