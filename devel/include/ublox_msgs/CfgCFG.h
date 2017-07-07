// Generated by gencpp from file ublox_msgs/CfgCFG.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGCFG_H
#define UBLOX_MSGS_MESSAGE_CFGCFG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgCFG_
{
  typedef CfgCFG_<ContainerAllocator> Type;

  CfgCFG_()
    : clearMask(0)
    , saveMask(0)
    , loadMask(0)
    , deviceMask(0)  {
    }
  CfgCFG_(const ContainerAllocator& _alloc)
    : clearMask(0)
    , saveMask(0)
    , loadMask(0)
    , deviceMask(0)  {
  (void)_alloc;
    }



   typedef uint32_t _clearMask_type;
  _clearMask_type clearMask;

   typedef uint32_t _saveMask_type;
  _saveMask_type saveMask;

   typedef uint32_t _loadMask_type;
  _loadMask_type loadMask;

   typedef uint8_t _deviceMask_type;
  _deviceMask_type deviceMask;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 9u };
     enum { MASK_IO_PORT = 1u };
     enum { MASK_MSG_CONF = 2u };
     enum { MASK_INF_MSG = 4u };
     enum { MASK_NAV_CONF = 8u };
     enum { MASK_RXM_CONF = 16u };
     enum { MASK_RINV_CONF = 512u };
     enum { MASK_ANT_CONF = 1024u };
     enum { DEV_BBR = 1u };
     enum { DEV_FLASH = 2u };
     enum { DEV_EEPROM = 4u };
     enum { DEV_SPI_FLASH = 16u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgCFG_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgCFG_<ContainerAllocator> const> ConstPtr;

}; // struct CfgCFG_

typedef ::ublox_msgs::CfgCFG_<std::allocator<void> > CfgCFG;

typedef boost::shared_ptr< ::ublox_msgs::CfgCFG > CfgCFGPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgCFG const> CfgCFGConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgCFG_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgCFG_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/swarmie/rover_workspace/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgCFG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgCFG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgCFG_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13fb5dc245f45e15f71ae45386c6e5b8";
  }

  static const char* value(const ::ublox_msgs::CfgCFG_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13fb5dc245f45e15ULL;
  static const uint64_t static_value2 = 0xf71ae45386c6e5b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgCFG";
  }

  static const char* value(const ::ublox_msgs::CfgCFG_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-CFG (0x06 0x09)\n\
# Antenna Control Settings\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 9\n\
\n\
uint32 clearMask          # Mask with configuration sub-sections to Clear\n\
                          # (=Load Default Configurations to Permanent\n\
                          # Configurations in non-volatile memory)\n\
uint32 saveMask           # Mask with configuration sub-section to Save\n\
                          # (=Save Current Configuration to Non-volatile\n\
                          # Memory)\n\
uint32 loadMask           # Mask with configuration sub-sections to Load\n\
                          # (=Load Permanent Configurations from\n\
                          # Non-volatile Memory to Current Configurations)\n\
\n\
uint32 MASK_IO_PORT = 1       # Port Settings\n\
uint32 MASK_MSG_CONF = 2      # Message Configuration\n\
uint32 MASK_INF_MSG = 4       # INF Message Configuration\n\
uint32 MASK_NAV_CONF = 8      # Navigation Configuration\n\
uint32 MASK_RXM_CONF = 16     # Receiver Manager Configuration\n\
uint32 MASK_RINV_CONF = 512   # Remote Inventory Configuration\n\
uint32 MASK_ANT_CONF = 1024   # Antenna Configuration\n\
\n\
uint8 deviceMask          # Mask which selects the devices for this command\n\
uint8 DEV_BBR = 1             # device battery backed RAM\n\
uint8 DEV_FLASH = 2           # device Flash\n\
uint8 DEV_EEPROM = 4          # device EEPROM\n\
uint8 DEV_SPI_FLASH = 16      # device SPI Flash\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgCFG_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.clearMask);
      stream.next(m.saveMask);
      stream.next(m.loadMask);
      stream.next(m.deviceMask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgCFG_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgCFG_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgCFG_<ContainerAllocator>& v)
  {
    s << indent << "clearMask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.clearMask);
    s << indent << "saveMask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.saveMask);
    s << indent << "loadMask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.loadMask);
    s << indent << "deviceMask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.deviceMask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGCFG_H
