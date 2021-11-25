// Generated by gencpp from file ds_core_msgs/ParamDescription.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_PARAMDESCRIPTION_H
#define DS_CORE_MSGS_MESSAGE_PARAMDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_core_msgs
{
template <class ContainerAllocator>
struct ParamDescription_
{
  typedef ParamDescription_<ContainerAllocator> Type;

  ParamDescription_()
    : yaml_payload()  {
    }
  ParamDescription_(const ContainerAllocator& _alloc)
    : yaml_payload(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _yaml_payload_type;
  _yaml_payload_type yaml_payload;





  typedef boost::shared_ptr< ::ds_core_msgs::ParamDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::ParamDescription_<ContainerAllocator> const> ConstPtr;

}; // struct ParamDescription_

typedef ::ds_core_msgs::ParamDescription_<std::allocator<void> > ParamDescription;

typedef boost::shared_ptr< ::ds_core_msgs::ParamDescription > ParamDescriptionPtr;
typedef boost::shared_ptr< ::ds_core_msgs::ParamDescription const> ParamDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::ParamDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::ParamDescription_<ContainerAllocator1> & lhs, const ::ds_core_msgs::ParamDescription_<ContainerAllocator2> & rhs)
{
  return lhs.yaml_payload == rhs.yaml_payload;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::ParamDescription_<ContainerAllocator1> & lhs, const ::ds_core_msgs::ParamDescription_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::ParamDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::ParamDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::ParamDescription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb993914298053026129698a8adb4243";
  }

  static const char* value(const ::ds_core_msgs::ParamDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb99391429805302ULL;
  static const uint64_t static_value2 = 0x6129698a8adb4243ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/ParamDescription";
  }

  static const char* value(const ::ds_core_msgs::ParamDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string yaml_payload\n"
;
  }

  static const char* value(const ::ds_core_msgs::ParamDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.yaml_payload);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParamDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::ParamDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::ParamDescription_<ContainerAllocator>& v)
  {
    s << indent << "yaml_payload: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.yaml_payload);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_PARAMDESCRIPTION_H