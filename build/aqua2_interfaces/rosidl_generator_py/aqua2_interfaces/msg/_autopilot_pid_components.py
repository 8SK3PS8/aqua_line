# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:msg/AutopilotPIDComponents.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutopilotPIDComponents(type):
    """Metaclass of message 'AutopilotPIDComponents'."""

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
                'aqua2_interfaces.msg.AutopilotPIDComponents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autopilot_pid_components
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autopilot_pid_components
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autopilot_pid_components
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autopilot_pid_components
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autopilot_pid_components

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AutopilotPIDComponents(metaclass=Metaclass_AutopilotPIDComponents):
    """Message class 'AutopilotPIDComponents'."""

    __slots__ = [
        '_roll_kp_component',
        '_roll_ki_component',
        '_roll_kd_component',
        '_pitch_kp_component',
        '_pitch_ki_component',
        '_pitch_kd_component',
        '_yaw_kp_component',
        '_yaw_ki_component',
        '_yaw_kd_component',
    ]

    _fields_and_field_types = {
        'roll_kp_component': 'float',
        'roll_ki_component': 'float',
        'roll_kd_component': 'float',
        'pitch_kp_component': 'float',
        'pitch_ki_component': 'float',
        'pitch_kd_component': 'float',
        'yaw_kp_component': 'float',
        'yaw_ki_component': 'float',
        'yaw_kd_component': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.roll_kp_component = kwargs.get('roll_kp_component', float())
        self.roll_ki_component = kwargs.get('roll_ki_component', float())
        self.roll_kd_component = kwargs.get('roll_kd_component', float())
        self.pitch_kp_component = kwargs.get('pitch_kp_component', float())
        self.pitch_ki_component = kwargs.get('pitch_ki_component', float())
        self.pitch_kd_component = kwargs.get('pitch_kd_component', float())
        self.yaw_kp_component = kwargs.get('yaw_kp_component', float())
        self.yaw_ki_component = kwargs.get('yaw_ki_component', float())
        self.yaw_kd_component = kwargs.get('yaw_kd_component', float())

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
        if self.roll_kp_component != other.roll_kp_component:
            return False
        if self.roll_ki_component != other.roll_ki_component:
            return False
        if self.roll_kd_component != other.roll_kd_component:
            return False
        if self.pitch_kp_component != other.pitch_kp_component:
            return False
        if self.pitch_ki_component != other.pitch_ki_component:
            return False
        if self.pitch_kd_component != other.pitch_kd_component:
            return False
        if self.yaw_kp_component != other.yaw_kp_component:
            return False
        if self.yaw_ki_component != other.yaw_ki_component:
            return False
        if self.yaw_kd_component != other.yaw_kd_component:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roll_kp_component(self):
        """Message field 'roll_kp_component'."""
        return self._roll_kp_component

    @roll_kp_component.setter
    def roll_kp_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_kp_component' field must be of type 'float'"
        self._roll_kp_component = value

    @property
    def roll_ki_component(self):
        """Message field 'roll_ki_component'."""
        return self._roll_ki_component

    @roll_ki_component.setter
    def roll_ki_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_ki_component' field must be of type 'float'"
        self._roll_ki_component = value

    @property
    def roll_kd_component(self):
        """Message field 'roll_kd_component'."""
        return self._roll_kd_component

    @roll_kd_component.setter
    def roll_kd_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_kd_component' field must be of type 'float'"
        self._roll_kd_component = value

    @property
    def pitch_kp_component(self):
        """Message field 'pitch_kp_component'."""
        return self._pitch_kp_component

    @pitch_kp_component.setter
    def pitch_kp_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_kp_component' field must be of type 'float'"
        self._pitch_kp_component = value

    @property
    def pitch_ki_component(self):
        """Message field 'pitch_ki_component'."""
        return self._pitch_ki_component

    @pitch_ki_component.setter
    def pitch_ki_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_ki_component' field must be of type 'float'"
        self._pitch_ki_component = value

    @property
    def pitch_kd_component(self):
        """Message field 'pitch_kd_component'."""
        return self._pitch_kd_component

    @pitch_kd_component.setter
    def pitch_kd_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_kd_component' field must be of type 'float'"
        self._pitch_kd_component = value

    @property
    def yaw_kp_component(self):
        """Message field 'yaw_kp_component'."""
        return self._yaw_kp_component

    @yaw_kp_component.setter
    def yaw_kp_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_kp_component' field must be of type 'float'"
        self._yaw_kp_component = value

    @property
    def yaw_ki_component(self):
        """Message field 'yaw_ki_component'."""
        return self._yaw_ki_component

    @yaw_ki_component.setter
    def yaw_ki_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_ki_component' field must be of type 'float'"
        self._yaw_ki_component = value

    @property
    def yaw_kd_component(self):
        """Message field 'yaw_kd_component'."""
        return self._yaw_kd_component

    @yaw_kd_component.setter
    def yaw_kd_component(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_kd_component' field must be of type 'float'"
        self._yaw_kd_component = value
