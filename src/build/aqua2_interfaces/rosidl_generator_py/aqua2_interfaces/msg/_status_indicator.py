# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/StatusIndicator.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'text_color'
# Member 'bg_color'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusIndicator(type):
    """Metaclass of message 'StatusIndicator'."""

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
                'aqua2_interfaces.msg.StatusIndicator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status_indicator
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status_indicator
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status_indicator
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status_indicator
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status_indicator

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


class StatusIndicator(metaclass=Metaclass_StatusIndicator):
    """Message class 'StatusIndicator'."""

    __slots__ = [
        '_header',
        '_text',
        '_text_color',
        '_bg_color',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'text': 'string',
        'text_color': 'float[3]',
        'bg_color': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.text = kwargs.get('text', str())
        if 'text_color' not in kwargs:
            self.text_color = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.text_color = numpy.array(kwargs.get('text_color'), dtype=numpy.float32)
            assert self.text_color.shape == (3, )
        if 'bg_color' not in kwargs:
            self.bg_color = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.bg_color = numpy.array(kwargs.get('bg_color'), dtype=numpy.float32)
            assert self.bg_color.shape == (3, )

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
        if self.text != other.text:
            return False
        if all(self.text_color != other.text_color):
            return False
        if all(self.bg_color != other.bg_color):
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
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @property
    def text_color(self):
        """Message field 'text_color'."""
        return self._text_color

    @text_color.setter
    def text_color(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'text_color' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'text_color' numpy.ndarray() must have a size of 3"
            self._text_color = value
            return
        if __debug__:
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'text_color' field must be a set or sequence with length 3 and each value of type 'float'"
        self._text_color = numpy.array(value, dtype=numpy.float32)

    @property
    def bg_color(self):
        """Message field 'bg_color'."""
        return self._bg_color

    @bg_color.setter
    def bg_color(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'bg_color' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'bg_color' numpy.ndarray() must have a size of 3"
            self._bg_color = value
            return
        if __debug__:
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'bg_color' field must be a set or sequence with length 3 and each value of type 'float'"
        self._bg_color = numpy.array(value, dtype=numpy.float32)