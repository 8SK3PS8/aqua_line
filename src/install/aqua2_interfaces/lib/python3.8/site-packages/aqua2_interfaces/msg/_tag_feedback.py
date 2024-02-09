# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/TagFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'tag_corners_px'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TagFeedback(type):
    """Metaclass of message 'TagFeedback'."""

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
                'aqua2_interfaces.msg.TagFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tag_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tag_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tag_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tag_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tag_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TagFeedback(metaclass=Metaclass_TagFeedback):
    """Message class 'TagFeedback'."""

    __slots__ = [
        '_im_width_px',
        '_im_height_px',
        '_num_tags',
        '_tag_corners_px',
        '_msg',
    ]

    _fields_and_field_types = {
        'im_width_px': 'uint64',
        'im_height_px': 'uint64',
        'num_tags': 'uint64',
        'tag_corners_px': 'sequence<uint64>',
        'msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.im_width_px = kwargs.get('im_width_px', int())
        self.im_height_px = kwargs.get('im_height_px', int())
        self.num_tags = kwargs.get('num_tags', int())
        self.tag_corners_px = array.array('Q', kwargs.get('tag_corners_px', []))
        self.msg = kwargs.get('msg', str())

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
        if self.im_width_px != other.im_width_px:
            return False
        if self.im_height_px != other.im_height_px:
            return False
        if self.num_tags != other.num_tags:
            return False
        if self.tag_corners_px != other.tag_corners_px:
            return False
        if self.msg != other.msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def im_width_px(self):
        """Message field 'im_width_px'."""
        return self._im_width_px

    @im_width_px.setter
    def im_width_px(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'im_width_px' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'im_width_px' field must be an unsigned integer in [0, 18446744073709551615]"
        self._im_width_px = value

    @property
    def im_height_px(self):
        """Message field 'im_height_px'."""
        return self._im_height_px

    @im_height_px.setter
    def im_height_px(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'im_height_px' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'im_height_px' field must be an unsigned integer in [0, 18446744073709551615]"
        self._im_height_px = value

    @property
    def num_tags(self):
        """Message field 'num_tags'."""
        return self._num_tags

    @num_tags.setter
    def num_tags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_tags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'num_tags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._num_tags = value

    @property
    def tag_corners_px(self):
        """Message field 'tag_corners_px'."""
        return self._tag_corners_px

    @tag_corners_px.setter
    def tag_corners_px(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'tag_corners_px' array.array() must have the type code of 'Q'"
            self._tag_corners_px = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'tag_corners_px' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._tag_corners_px = array.array('Q', value)

    @property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value
