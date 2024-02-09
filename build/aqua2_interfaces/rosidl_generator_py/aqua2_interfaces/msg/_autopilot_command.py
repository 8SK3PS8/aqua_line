# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/AutopilotCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutopilotCommand(type):
    """Metaclass of message 'AutopilotCommand'."""

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
                'aqua2_interfaces.msg.AutopilotCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autopilot_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autopilot_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autopilot_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autopilot_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autopilot_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutopilotCommand(metaclass=Metaclass_AutopilotCommand):
    """Message class 'AutopilotCommand'."""

    __slots__ = [
        '_surge',
        '_heave',
        '_target_roll',
        '_target_pitch',
        '_target_yaw',
        '_target_depth',
    ]

    _fields_and_field_types = {
        'surge': 'float',
        'heave': 'float',
        'target_roll': 'float',
        'target_pitch': 'float',
        'target_yaw': 'float',
        'target_depth': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.surge = kwargs.get('surge', float())
        self.heave = kwargs.get('heave', float())
        self.target_roll = kwargs.get('target_roll', float())
        self.target_pitch = kwargs.get('target_pitch', float())
        self.target_yaw = kwargs.get('target_yaw', float())
        self.target_depth = kwargs.get('target_depth', float())

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
        if self.surge != other.surge:
            return False
        if self.heave != other.heave:
            return False
        if self.target_roll != other.target_roll:
            return False
        if self.target_pitch != other.target_pitch:
            return False
        if self.target_yaw != other.target_yaw:
            return False
        if self.target_depth != other.target_depth:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def surge(self):
        """Message field 'surge'."""
        return self._surge

    @surge.setter
    def surge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'surge' field must be of type 'float'"
        self._surge = value

    @property
    def heave(self):
        """Message field 'heave'."""
        return self._heave

    @heave.setter
    def heave(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heave' field must be of type 'float'"
        self._heave = value

    @property
    def target_roll(self):
        """Message field 'target_roll'."""
        return self._target_roll

    @target_roll.setter
    def target_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_roll' field must be of type 'float'"
        self._target_roll = value

    @property
    def target_pitch(self):
        """Message field 'target_pitch'."""
        return self._target_pitch

    @target_pitch.setter
    def target_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pitch' field must be of type 'float'"
        self._target_pitch = value

    @property
    def target_yaw(self):
        """Message field 'target_yaw'."""
        return self._target_yaw

    @target_yaw.setter
    def target_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_yaw' field must be of type 'float'"
        self._target_yaw = value

    @property
    def target_depth(self):
        """Message field 'target_depth'."""
        return self._target_depth

    @target_depth.setter
    def target_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_depth' field must be of type 'float'"
        self._target_depth = value
