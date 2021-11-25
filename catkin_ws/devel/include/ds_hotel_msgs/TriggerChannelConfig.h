// Generated by gencpp from file ds_hotel_msgs/TriggerChannelConfig.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_TRIGGERCHANNELCONFIG_H
#define DS_HOTEL_MSGS_MESSAGE_TRIGGERCHANNELCONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ds_core_msgs/KeyString.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct TriggerChannelConfig_
{
  typedef TriggerChannelConfig_<ContainerAllocator> Type;

  TriggerChannelConfig_()
    : name()
    , specified_params()  {
    }
  TriggerChannelConfig_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , specified_params(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector< ::ds_core_msgs::KeyString_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ds_core_msgs::KeyString_<ContainerAllocator> >::other >  _specified_params_type;
  _specified_params_type specified_params;





  typedef boost::shared_ptr< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> const> ConstPtr;

}; // struct TriggerChannelConfig_

typedef ::ds_hotel_msgs::TriggerChannelConfig_<std::allocator<void> > TriggerChannelConfig;

typedef boost::shared_ptr< ::ds_hotel_msgs::TriggerChannelConfig > TriggerChannelConfigPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::TriggerChannelConfig const> TriggerChannelConfigConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.specified_params == rhs.specified_params;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5194d606a3bc97154c301349d42c946";
  }

  static const char* value(const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5194d606a3bc971ULL;
  static const uint64_t static_value2 = 0x54c301349d42c946ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/TriggerChannelConfig";
  }

  static const char* value(const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"ds_core_msgs/KeyString[] specified_params\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/KeyString\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.specified_params);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TriggerChannelConfig_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::TriggerChannelConfig_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "specified_params[]" << std::endl;
    for (size_t i = 0; i < v.specified_params.size(); ++i)
    {
      s << indent << "  specified_params[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_core_msgs::KeyString_<ContainerAllocator> >::stream(s, indent + "    ", v.specified_params[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_TRIGGERCHANNELCONFIG_H