# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/Health.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'leg_temps'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Health(type):
    """Metaclass of message 'Health'."""

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
                'aqua2_interfaces.msg.Health')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__health
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__health
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__health
            cls._TYPE_SUPPORT = module.type_support_msg__msg__health
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__health

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


class Health(metaclass=Metaclass_Health):
    """Message class 'Health'."""

    __slots__ = [
        '_header',
        '_voltage',
        '_current',
        '_avgvoltage',
        '_avgcurrent',
        '_avgpower',
        '_battery_dod',
        '_mdbtemp',
        '_leg_temps',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'voltage': 'float',
        'current': 'float',
        'avgvoltage': 'float',
        'avgcurrent': 'float',
        'avgpower': 'float',
        'battery_dod': 'float',
        'mdbtemp': 'float',
        'leg_temps': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.voltage = kwargs.get('voltage', float())
        self.current = kwargs.get('current', float())
        self.avgvoltage = kwargs.get('avgvoltage', float())
        self.avgcurrent = kwargs.get('avgcurrent', float())
        self.avgpower = kwargs.get('avgpower', float())
        self.battery_dod = kwargs.get('battery_dod', float())
        self.mdbtemp = kwargs.get('mdbtemp', float())
        if 'leg_temps' not in kwargs:
            self.leg_temps = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.leg_temps = numpy.array(kwargs.get('leg_temps'), dtype=numpy.float32)
            assert self.leg_temps.shape == (6, )

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
        if self.voltage != other.voltage:
            return False
        if self.current != other.current:
            return False
        if self.avgvoltage != other.avgvoltage:
            return False
        if self.avgcurrent != other.avgcurrent:
            return False
        if self.avgpower != other.avgpower:
            return False
        if self.battery_dod != other.battery_dod:
            return False
        if self.mdbtemp != other.mdbtemp:
            return False
        if all(self.leg_temps != other.leg_temps):
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
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
        self._voltage = value

    @property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
        self._current = value

    @property
    def avgvoltage(self):
        """Message field 'avgvoltage'."""
        return self._avgvoltage

    @avgvoltage.setter
    def avgvoltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avgvoltage' field must be of type 'float'"
        self._avgvoltage = value

    @property
    def avgcurrent(self):
        """Message field 'avgcurrent'."""
        return self._avgcurrent

    @avgcurrent.setter
    def avgcurrent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avgcurrent' field must be of type 'float'"
        self._avgcurrent = value

    @property
    def avgpower(self):
        """Message field 'avgpower'."""
        return self._avgpower

    @avgpower.setter
    def avgpower(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'avgpower' field must be of type 'float'"
        self._avgpower = value

    @property
    def battery_dod(self):
        """Message field 'battery_dod'."""
        return self._battery_dod

    @battery_dod.setter
    def battery_dod(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_dod' field must be of type 'float'"
        self._battery_dod = value

    @property
    def mdbtemp(self):
        """Message field 'mdbtemp'."""
        return self._mdbtemp

    @mdbtemp.setter
    def mdbtemp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mdbtemp' field must be of type 'float'"
        self._mdbtemp = value

    @property
    def leg_temps(self):
        """Message field 'leg_temps'."""
        return self._leg_temps

    @leg_temps.setter
    def leg_temps(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'leg_temps' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'leg_temps' numpy.ndarray() must have a size of 6"
            self._leg_temps = value
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
                "The 'leg_temps' field must be a set or sequence with length 6 and each value of type 'float'"
        self._leg_temps = numpy.array(value, dtype=numpy.float32)
