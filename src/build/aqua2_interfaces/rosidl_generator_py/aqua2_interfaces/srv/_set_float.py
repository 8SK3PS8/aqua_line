# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aqua2_interfaces:srv/SetFloat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetFloat_Request(type):
    """Metaclass of message 'SetFloat_Request'."""

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
                'aqua2_interfaces.srv.SetFloat_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_float__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_float__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_float__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_float__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_float__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFloat_Request(metaclass=Metaclass_SetFloat_Request):
    """Message class 'SetFloat_Request'."""

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', float())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
        self._value = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFloat_Response(type):
    """Metaclass of message 'SetFloat_Response'."""

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
                'aqua2_interfaces.srv.SetFloat_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_float__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_float__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_float__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_float__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_float__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFloat_Response(metaclass=Metaclass_SetFloat_Response):
    """Message class 'SetFloat_Response'."""

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


class Metaclass_SetFloat(type):
    """Metaclass of service 'SetFloat'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aqua2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aqua2_interfaces.srv.SetFloat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_float

            from aqua2_interfaces.srv import _set_float
            if _set_float.Metaclass_SetFloat_Request._TYPE_SUPPORT is None:
                _set_float.Metaclass_SetFloat_Request.__import_type_support__()
            if _set_float.Metaclass_SetFloat_Response._TYPE_SUPPORT is None:
                _set_float.Metaclass_SetFloat_Response.__import_type_support__()


class SetFloat(metaclass=Metaclass_SetFloat):
    from aqua2_interfaces.srv._set_float import SetFloat_Request as Request
    from aqua2_interfaces.srv._set_float import SetFloat_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
