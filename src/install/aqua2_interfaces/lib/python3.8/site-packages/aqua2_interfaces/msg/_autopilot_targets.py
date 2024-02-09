# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/AutopilotTargets.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutopilotTargets(type):
    """Metaclass of message 'AutopilotTargets'."""

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
                'aqua2_interfaces.msg.AutopilotTargets')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autopilot_targets
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autopilot_targets
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autopilot_targets
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autopilot_targets
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autopilot_targets

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutopilotTargets(metaclass=Metaclass_AutopilotTargets):
    """Message class 'AutopilotTargets'."""

    __slots__ = [
        '_depth_target',
        '_roll_target_angle',
        '_pitch_target_angle',
        '_yaw_target_angle',
    ]

    _fields_and_field_types = {
        'depth_target': 'float',
        'roll_target_angle': 'float',
        'pitch_target_angle': 'float',
        'yaw_target_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.depth_target = kwargs.get('depth_target', float())
        self.roll_target_angle = kwargs.get('roll_target_angle', float())
        self.pitch_target_angle = kwargs.get('pitch_target_angle', float())
        self.yaw_target_angle = kwargs.get('yaw_target_angle', float())

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
        if self.depth_target != other.depth_target:
            return False
        if self.roll_target_angle != other.roll_target_angle:
            return False
        if self.pitch_target_angle != other.pitch_target_angle:
            return False
        if self.yaw_target_angle != other.yaw_target_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def depth_target(self):
        """Message field 'depth_target'."""
        return self._depth_target

    @depth_target.setter
    def depth_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth_target' field must be of type 'float'"
        self._depth_target = value

    @property
    def roll_target_angle(self):
        """Message field 'roll_target_angle'."""
        return self._roll_target_angle

    @roll_target_angle.setter
    def roll_target_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_target_angle' field must be of type 'float'"
        self._roll_target_angle = value

    @property
    def pitch_target_angle(self):
        """Message field 'pitch_target_angle'."""
        return self._pitch_target_angle

    @pitch_target_angle.setter
    def pitch_target_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_target_angle' field must be of type 'float'"
        self._pitch_target_angle = value

    @property
    def yaw_target_angle(self):
        """Message field 'yaw_target_angle'."""
        return self._yaw_target_angle

    @yaw_target_angle.setter
    def yaw_target_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_target_angle' field must be of type 'float'"
        self._yaw_target_angle = value
