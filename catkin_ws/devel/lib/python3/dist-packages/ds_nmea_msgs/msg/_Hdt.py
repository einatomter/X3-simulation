# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_nmea_msgs/Hdt.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Hdt(genpy.Message):
  _md5sum = "7f03731cba1cd8647179210f5e2cf600"
  _type = "ds_nmea_msgs/Hdt"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# $HEHDT message
#
# .      1   2 3
#        |   | |
# $--HDT,x.x,T*hh
# 1) Heading Degrees, true
# 2) T = True
# 3) Checksum
#
float64 heading
bool is_true
uint8 checksum"""
  __slots__ = ['heading','is_true','checksum']
  _slot_types = ['float64','bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       heading,is_true,checksum

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Hdt, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.heading is None:
        self.heading = 0.
      if self.is_true is None:
        self.is_true = False
      if self.checksum is None:
        self.checksum = 0
    else:
      self.heading = 0.
      self.is_true = False
      self.checksum = 0

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
      buff.write(_get_struct_d2B().pack(_x.heading, _x.is_true, _x.checksum))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.heading, _x.is_true, _x.checksum,) = _get_struct_d2B().unpack(str[start:end])
      self.is_true = bool(self.is_true)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_d2B().pack(_x.heading, _x.is_true, _x.checksum))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.heading, _x.is_true, _x.checksum,) = _get_struct_d2B().unpack(str[start:end])
      self.is_true = bool(self.is_true)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_d2B = None
def _get_struct_d2B():
    global _struct_d2B
    if _struct_d2B is None:
        _struct_d2B = struct.Struct("<d2B")
    return _struct_d2B