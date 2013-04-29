"""autogenerated by genpy from dynamixel_msgs/MotorState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MotorState(genpy.Message):
  _md5sum = "1cefdc3ff0c7d52e475886024476b74d"
  _type = "dynamixel_msgs/MotorState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 timestamp   # motor state is at this time
int32 id            # motor id
int32 goal          # commanded position (in encoder units)
int32 position      # current position (in encoder units)
int32 error         # difference between current and goal positions
int32 speed         # current speed (0.111 rpm per unit)
float64 load        # current load - ratio of applied torque over maximum torque
float64 voltage     # current voltage (V)
int32 temperature   # current temperature (degrees Celsius)
bool moving         # whether the motor is currently in motion

"""
  __slots__ = ['timestamp','id','goal','position','error','speed','load','voltage','temperature','moving']
  _slot_types = ['float64','int32','int32','int32','int32','int32','float64','float64','int32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       timestamp,id,goal,position,error,speed,load,voltage,temperature,moving

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MotorState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.timestamp is None:
        self.timestamp = 0.
      if self.id is None:
        self.id = 0
      if self.goal is None:
        self.goal = 0
      if self.position is None:
        self.position = 0
      if self.error is None:
        self.error = 0
      if self.speed is None:
        self.speed = 0
      if self.load is None:
        self.load = 0.
      if self.voltage is None:
        self.voltage = 0.
      if self.temperature is None:
        self.temperature = 0
      if self.moving is None:
        self.moving = False
    else:
      self.timestamp = 0.
      self.id = 0
      self.goal = 0
      self.position = 0
      self.error = 0
      self.speed = 0
      self.load = 0.
      self.voltage = 0.
      self.temperature = 0
      self.moving = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_d5i2diB.pack(_x.timestamp, _x.id, _x.goal, _x.position, _x.error, _x.speed, _x.load, _x.voltage, _x.temperature, _x.moving))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 49
      (_x.timestamp, _x.id, _x.goal, _x.position, _x.error, _x.speed, _x.load, _x.voltage, _x.temperature, _x.moving,) = _struct_d5i2diB.unpack(str[start:end])
      self.moving = bool(self.moving)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_d5i2diB.pack(_x.timestamp, _x.id, _x.goal, _x.position, _x.error, _x.speed, _x.load, _x.voltage, _x.temperature, _x.moving))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 49
      (_x.timestamp, _x.id, _x.goal, _x.position, _x.error, _x.speed, _x.load, _x.voltage, _x.temperature, _x.moving,) = _struct_d5i2diB.unpack(str[start:end])
      self.moving = bool(self.moving)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_d5i2diB = struct.Struct("<d5i2diB")
