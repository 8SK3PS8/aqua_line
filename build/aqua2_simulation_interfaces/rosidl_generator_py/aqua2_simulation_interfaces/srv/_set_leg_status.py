# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_simulation_interfaces:srv/SetLegStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLegStatus_Request(type):
    """Metaclass of message 'SetLegStatus_Request'."""

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
            module = import_type_support('aqua2_simulation_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aqua2_simulation_interfaces.srv.SetLegStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_leg_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_leg_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_leg_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_leg_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_leg_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLegStatus_Request(metaclass=Metaclass_SetLegStatus_Request):
    """Message class 'SetLegStatus_Request'."""

    __slots__ = [
        '_index',
        '_status',
    ]

    _fields_and_field_types = {
        'index': 'int32',
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', int())
        self.status = kwargs.get('status', int())

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
        if self.index != other.index:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'index' field must be an integer in [-2147483648, 2147483647]"
        self._index = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLegStatus_Response(type):
    """Metaclass of message 'SetLegStatus_Response'."""

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
            module = import_type_support('aqua2_simulation_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aqua2_simulation_interfaces.srv.SetLegStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_leg_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_leg_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_leg_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_leg_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_leg_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLegStatus_Response(metaclass=Metaclass_SetLegStatus_Response):
    """Message class 'SetLegStatus_Response'."""

    __slots__ = [
        '_msg',
    ]

    _fields_and_field_types = {
        'msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.msg != other.msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_SetLegStatus(type):
    """Metaclass of service 'SetLegStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aqua2_simulation_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aqua2_simulation_interfaces.srv.SetLegStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_leg_status

            from aqua2_simulation_interfaces.srv import _set_leg_status
            if _set_leg_status.Metaclass_SetLegStatus_Request._TYPE_SUPPORT is None:
                _set_leg_status.Metaclass_SetLegStatus_Request.__import_type_support__()
            if _set_leg_status.Metaclass_SetLegStatus_Response._TYPE_SUPPORT is None:
                _set_leg_status.Metaclass_SetLegStatus_Response.__import_type_support__()


class SetLegStatus(metaclass=Metaclass_SetLegStatus):
    from aqua2_simulation_interfaces.srv._set_leg_status import SetLegStatus_Request as Request
    from aqua2_simulation_interfaces.srv._set_leg_status import SetLegStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
