# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/BBox.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BBox(type):
    """Metaclass of message 'BBox'."""

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
            module = import_type_support('aqua2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aqua2_interfaces.msg.BBox')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__b_box
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__b_box
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__b_box
            cls._TYPE_SUPPORT = module.type_support_msg__msg__b_box
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__b_box

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BBox(metaclass=Metaclass_BBox):
    """Message class 'BBox'."""

    __slots__ = [
        '_header',
        '_valid',
        '_top_left_x',
        '_top_left_y',
        '_width',
        '_height',
        '_image_width',
        '_image_height',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'valid': 'boolean',
        'top_left_x': 'float',
        'top_left_y': 'float',
        'width': 'float',
        'height': 'float',
        'image_width': 'int32',
        'image_height': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.valid = kwargs.get('valid', bool())
        self.top_left_x = kwargs.get('top_left_x', float())
        self.top_left_y = kwargs.get('top_left_y', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.image_width = kwargs.get('image_width', int())
        self.image_height = kwargs.get('image_height', int())

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
        if self.valid != other.valid:
            return False
        if self.top_left_x != other.top_left_x:
            return False
        if self.top_left_y != other.top_left_y:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.image_width != other.image_width:
            return False
        if self.image_height != other.image_height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @property
    def top_left_x(self):
        """Message field 'top_left_x'."""
        return self._top_left_x

    @top_left_x.setter
    def top_left_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'top_left_x' field must be of type 'float'"
        self._top_left_x = value

    @property
    def top_left_y(self):
        """Message field 'top_left_y'."""
        return self._top_left_y

    @top_left_y.setter
    def top_left_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'top_left_y' field must be of type 'float'"
        self._top_left_y = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
        self._width = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
        self._height = value

    @property
    def image_width(self):
        """Message field 'image_width'."""
        return self._image_width

    @image_width.setter
    def image_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'image_width' field must be an integer in [-2147483648, 2147483647]"
        self._image_width = value

    @property
    def image_height(self):
        """Message field 'image_height'."""
        return self._image_height

    @image_height.setter
    def image_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'image_height' field must be an integer in [-2147483648, 2147483647]"
        self._image_height = value
