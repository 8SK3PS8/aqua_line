# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/PeriodicLegCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'amplitudes'
# Member 'frequencies'
# Member 'phase_offsets'
# Member 'leg_offsets'
# Member 'leg_velocities'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PeriodicLegCommand(type):
    """Metaclass of message 'PeriodicLegCommand'."""

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
                'aqua2_interfaces.msg.PeriodicLegCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__periodic_leg_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__periodic_leg_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__periodic_leg_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__periodic_leg_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__periodic_leg_command

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


class PeriodicLegCommand(metaclass=Metaclass_PeriodicLegCommand):
    """Message class 'PeriodicLegCommand'."""

    __slots__ = [
        '_header',
        '_amplitudes',
        '_frequencies',
        '_phase_offsets',
        '_leg_offsets',
        '_leg_velocities',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'amplitudes': 'float[6]',
        'frequencies': 'float[6]',
        'phase_offsets': 'float[6]',
        'leg_offsets': 'float[6]',
        'leg_velocities': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        if 'amplitudes' not in kwargs:
            self.amplitudes = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.amplitudes = numpy.array(kwargs.get('amplitudes'), dtype=numpy.float32)
            assert self.amplitudes.shape == (6, )
        if 'frequencies' not in kwargs:
            self.frequencies = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.frequencies = numpy.array(kwargs.get('frequencies'), dtype=numpy.float32)
            assert self.frequencies.shape == (6, )
        if 'phase_offsets' not in kwargs:
            self.phase_offsets = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.phase_offsets = numpy.array(kwargs.get('phase_offsets'), dtype=numpy.float32)
            assert self.phase_offsets.shape == (6, )
        if 'leg_offsets' not in kwargs:
            self.leg_offsets = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_offsets = numpy.array(kwargs.get('leg_offsets'), dtype=numpy.float32)
            assert self.leg_offsets.shape == (6, )
        if 'leg_velocities' not in kwargs:
            self.leg_velocities = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_velocities = numpy.array(kwargs.get('leg_velocities'), dtype=numpy.float32)
            assert self.leg_velocities.shape == (6, )

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
        if all(self.amplitudes != other.amplitudes):
            return False
        if all(self.frequencies != other.frequencies):
            return False
        if all(self.phase_offsets != other.phase_offsets):
            return False
        if all(self.leg_offsets != other.leg_offsets):
            return False
        if all(self.leg_velocities != other.leg_velocities):
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
    def amplitudes(self):
        """Message field 'amplitudes'."""
        return self._amplitudes

    @amplitudes.setter
    def amplitudes(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'amplitudes' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'amplitudes' numpy.ndarray() must have a size of 6"
            self._amplitudes = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'amplitudes' field must be a set or sequence with length 6 and each value of type 'float'"
        self._amplitudes = numpy.array(value, dtype=numpy.float32)

    @property
    def frequencies(self):
        """Message field 'frequencies'."""
        return self._frequencies

    @frequencies.setter
    def frequencies(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'frequencies' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'frequencies' numpy.ndarray() must have a size of 6"
            self._frequencies = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'frequencies' field must be a set or sequence with length 6 and each value of type 'float'"
        self._frequencies = numpy.array(value, dtype=numpy.float32)

    @property
    def phase_offsets(self):
        """Message field 'phase_offsets'."""
        return self._phase_offsets

    @phase_offsets.setter
    def phase_offsets(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'phase_offsets' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'phase_offsets' numpy.ndarray() must have a size of 6"
            self._phase_offsets = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'phase_offsets' field must be a set or sequence with length 6 and each value of type 'float'"
        self._phase_offsets = numpy.array(value, dtype=numpy.float32)

    @property
    def leg_offsets(self):
        """Message field 'leg_offsets'."""
        return self._leg_offsets

    @leg_offsets.setter
    def leg_offsets(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_offsets' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_offsets' numpy.ndarray() must have a size of 6"
            self._leg_offsets = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'leg_offsets' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_offsets = numpy.array(value, dtype=numpy.float32)

    @property
    def leg_velocities(self):
        """Message field 'leg_velocities'."""
        return self._leg_velocities

    @leg_velocities.setter
    def leg_velocities(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_velocities' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_velocities' numpy.ndarray() must have a size of 6"
            self._leg_velocities = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'leg_velocities' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_velocities = numpy.array(value, dtype=numpy.float32)
