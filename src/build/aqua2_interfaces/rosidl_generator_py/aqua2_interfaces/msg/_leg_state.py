# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/LegState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'leg_positions'
# Member 'leg_targets'
# Member 'leg_speeds'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LegState(type):
    """Metaclass of message 'LegState'."""

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
                'aqua2_interfaces.msg.LegState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__leg_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__leg_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__leg_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__leg_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__leg_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LegState(metaclass=Metaclass_LegState):
    """Message class 'LegState'."""

    __slots__ = [
        '_leg_positions',
        '_leg_targets',
        '_leg_speeds',
    ]

    _fields_and_field_types = {
        'leg_positions': 'float[6]',
        'leg_targets': 'float[6]',
        'leg_speeds': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'leg_positions' not in kwargs:
            self.leg_positions = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_positions = numpy.array(kwargs.get('leg_positions'), dtype=numpy.float32)
            assert self.leg_positions.shape == (6, )
        if 'leg_targets' not in kwargs:
            self.leg_targets = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_targets = numpy.array(kwargs.get('leg_targets'), dtype=numpy.float32)
            assert self.leg_targets.shape == (6, )
        if 'leg_speeds' not in kwargs:
            self.leg_speeds = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_speeds = numpy.array(kwargs.get('leg_speeds'), dtype=numpy.float32)
            assert self.leg_speeds.shape == (6, )

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
        if all(self.leg_positions != other.leg_positions):
            return False
        if all(self.leg_targets != other.leg_targets):
            return False
        if all(self.leg_speeds != other.leg_speeds):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def leg_positions(self):
        """Message field 'leg_positions'."""
        return self._leg_positions

    @leg_positions.setter
    def leg_positions(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_positions' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_positions' numpy.ndarray() must have a size of 6"
            self._leg_positions = value
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
                "The 'leg_positions' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_positions = numpy.array(value, dtype=numpy.float32)

    @property
    def leg_targets(self):
        """Message field 'leg_targets'."""
        return self._leg_targets

    @leg_targets.setter
    def leg_targets(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_targets' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_targets' numpy.ndarray() must have a size of 6"
            self._leg_targets = value
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
                "The 'leg_targets' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_targets = numpy.array(value, dtype=numpy.float32)

    @property
    def leg_speeds(self):
        """Message field 'leg_speeds'."""
        return self._leg_speeds

    @leg_speeds.setter
    def leg_speeds(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_speeds' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_speeds' numpy.ndarray() must have a size of 6"
            self._leg_speeds = value
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
                "The 'leg_speeds' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_speeds = numpy.array(value, dtype=numpy.float32)
