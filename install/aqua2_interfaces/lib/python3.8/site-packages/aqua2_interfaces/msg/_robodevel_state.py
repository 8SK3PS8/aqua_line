# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/RobodevelState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobodevelState(type):
    """Metaclass of message 'RobodevelState'."""

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
                'aqua2_interfaces.msg.RobodevelState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robodevel_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robodevel_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robodevel_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robodevel_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robodevel_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobodevelState(metaclass=Metaclass_RobodevelState):
    """Message class 'RobodevelState'."""

    __slots__ = [
        '_calibrated',
        '_reverse',
        '_mode',
        '_ap_mode',
    ]

    _fields_and_field_types = {
        'calibrated': 'boolean',
        'reverse': 'boolean',
        'mode': 'int32',
        'ap_mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.calibrated = kwargs.get('calibrated', bool())
        self.reverse = kwargs.get('reverse', bool())
        self.mode = kwargs.get('mode', int())
        self.ap_mode = kwargs.get('ap_mode', int())

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
        if self.calibrated != other.calibrated:
            return False
        if self.reverse != other.reverse:
            return False
        if self.mode != other.mode:
            return False
        if self.ap_mode != other.ap_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def calibrated(self):
        """Message field 'calibrated'."""
        return self._calibrated

    @calibrated.setter
    def calibrated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibrated' field must be of type 'bool'"
        self._calibrated = value

    @property
    def reverse(self):
        """Message field 'reverse'."""
        return self._reverse

    @reverse.setter
    def reverse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse' field must be of type 'bool'"
        self._reverse = value

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @property
    def ap_mode(self):
        """Message field 'ap_mode'."""
        return self._ap_mode

    @ap_mode.setter
    def ap_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ap_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ap_mode' field must be an integer in [-2147483648, 2147483647]"
        self._ap_mode = value
