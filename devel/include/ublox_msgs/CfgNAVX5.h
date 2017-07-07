// Generated by gencpp from file ublox_msgs/CfgNAVX5.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGNAVX5_H
#define UBLOX_MSGS_MESSAGE_CFGNAVX5_H


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
struct CfgNAVX5_
{
  typedef CfgNAVX5_<ContainerAllocator> Type;

  CfgNAVX5_()
    : version(0)
    , mask1(0)
    , reserved0(0)
    , reserved1(0)
    , reserved2(0)
    , minSVs(0)
    , maxSVs(0)
    , minCNO(0)
    , reserved5(0)
    , iniFix3D(0)
    , reserved6(0)
    , reserved7(0)
    , ackAiding(0)
    , wknRollover(0)
    , reserved8(0)
    , reserved9(0)
    , reserved10(0)
    , usePPP(0)
    , aopCfg(0)
    , reserved11(0)
    , reserved12(0)
    , aopOrbMaxErr(0)
    , reserved13(0)
    , reserved14(0)
    , reserved3(0)
    , reserved4(0)  {
    }
  CfgNAVX5_(const ContainerAllocator& _alloc)
    : version(0)
    , mask1(0)
    , reserved0(0)
    , reserved1(0)
    , reserved2(0)
    , minSVs(0)
    , maxSVs(0)
    , minCNO(0)
    , reserved5(0)
    , iniFix3D(0)
    , reserved6(0)
    , reserved7(0)
    , ackAiding(0)
    , wknRollover(0)
    , reserved8(0)
    , reserved9(0)
    , reserved10(0)
    , usePPP(0)
    , aopCfg(0)
    , reserved11(0)
    , reserved12(0)
    , aopOrbMaxErr(0)
    , reserved13(0)
    , reserved14(0)
    , reserved3(0)
    , reserved4(0)  {
  (void)_alloc;
    }



   typedef uint16_t _version_type;
  _version_type version;

   typedef uint16_t _mask1_type;
  _mask1_type mask1;

   typedef uint32_t _reserved0_type;
  _reserved0_type reserved0;

   typedef uint8_t _reserved1_type;
  _reserved1_type reserved1;

   typedef uint8_t _reserved2_type;
  _reserved2_type reserved2;

   typedef uint8_t _minSVs_type;
  _minSVs_type minSVs;

   typedef uint8_t _maxSVs_type;
  _maxSVs_type maxSVs;

   typedef uint8_t _minCNO_type;
  _minCNO_type minCNO;

   typedef uint8_t _reserved5_type;
  _reserved5_type reserved5;

   typedef uint8_t _iniFix3D_type;
  _iniFix3D_type iniFix3D;

   typedef uint8_t _reserved6_type;
  _reserved6_type reserved6;

   typedef uint8_t _reserved7_type;
  _reserved7_type reserved7;

   typedef uint8_t _ackAiding_type;
  _ackAiding_type ackAiding;

   typedef uint16_t _wknRollover_type;
  _wknRollover_type wknRollover;

   typedef uint32_t _reserved8_type;
  _reserved8_type reserved8;

   typedef uint8_t _reserved9_type;
  _reserved9_type reserved9;

   typedef uint8_t _reserved10_type;
  _reserved10_type reserved10;

   typedef uint8_t _usePPP_type;
  _usePPP_type usePPP;

   typedef uint8_t _aopCfg_type;
  _aopCfg_type aopCfg;

   typedef uint8_t _reserved11_type;
  _reserved11_type reserved11;

   typedef uint8_t _reserved12_type;
  _reserved12_type reserved12;

   typedef uint16_t _aopOrbMaxErr_type;
  _aopOrbMaxErr_type aopOrbMaxErr;

   typedef uint8_t _reserved13_type;
  _reserved13_type reserved13;

   typedef uint8_t _reserved14_type;
  _reserved14_type reserved14;

   typedef uint16_t _reserved3_type;
  _reserved3_type reserved3;

   typedef uint32_t _reserved4_type;
  _reserved4_type reserved4;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 35u };
     enum { MASK_MIN_MAX = 4u };
     enum { MASK_MIN_CNO = 8u };
     enum { MASK_INITIAL_FIX_3D = 64u };
     enum { MASK_WKN_ROLL = 512u };
     enum { MASK_PPP = 8192u };
     enum { MASK_AOP = 16384u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> const> ConstPtr;

}; // struct CfgNAVX5_

typedef ::ublox_msgs::CfgNAVX5_<std::allocator<void> > CfgNAVX5;

typedef boost::shared_ptr< ::ublox_msgs::CfgNAVX5 > CfgNAVX5Ptr;
typedef boost::shared_ptr< ::ublox_msgs::CfgNAVX5 const> CfgNAVX5ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgNAVX5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "51508a96b05799aa4924b225bcb10fb3";
  }

  static const char* value(const ::ublox_msgs::CfgNAVX5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x51508a96b05799aaULL;
  static const uint64_t static_value2 = 0x4924b225bcb10fb3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgNAVX5";
  }

  static const char* value(const ::ublox_msgs::CfgNAVX5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-NAVX5 (0x06 0x24)\n\
# Navigation Engine Expert Settings\n\
# Warning: Refer to u-blox protocol spec before changing these settings.\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 35\n\
\n\
uint16 version        # Message version (set to 0)\n\
\n\
uint16 mask1          # First parameters bitmask (possible values below)\n\
uint16 MASK_MIN_MAX        = 4\n\
uint16 MASK_MIN_CNO        = 8\n\
uint16 MASK_INITIAL_FIX_3D = 64\n\
uint16 MASK_WKN_ROLL       = 512\n\
uint16 MASK_PPP            = 8192\n\
uint16 MASK_AOP            = 16384\n\
\n\
uint32 reserved0      # Always set to zero\n\
uint8 reserved1       # Always set to zero\n\
uint8 reserved2       # Always set to zero\n\
\n\
uint8 minSVs          # Minimum number of satellites for navigation\n\
uint8 maxSVs          # Maximum number of satellites for navigation\n\
uint8 minCNO          # Minimum satellite signal level for navigation\n\
\n\
uint8 reserved5       # Always set to zero\n\
\n\
uint8 iniFix3D        # If set to 1, initial fix must be 3D\n\
\n\
uint8 reserved6       # Always set to zero\n\
uint8 reserved7       # Always set to zero\n\
\n\
uint8 ackAiding       # If set to 1, issue acknowledgements for assistance\n\
uint16 wknRollover    # GPS rollover number\n\
\n\
uint32 reserved8      # Always set to zero\n\
uint8 reserved9       # Always set to zero\n\
uint8 reserved10      # Always set to zero\n\
\n\
uint8 usePPP          # Enable/disable PPP (on supported units)\n\
uint8 aopCfg          # AssistNow Autonomous configuration\n\
\n\
uint8 reserved11      # Always set to zero\n\
uint8 reserved12      # Always set to zero\n\
\n\
uint16 aopOrbMaxErr   # Maximum acceptable (modelled) autonomous orbit error\n\
\n\
uint8 reserved13      # Always set to zero\n\
uint8 reserved14      # Always set to zero\n\
uint16 reserved3      # Always set to zero\n\
uint32 reserved4      # Always set to zero\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgNAVX5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.version);
      stream.next(m.mask1);
      stream.next(m.reserved0);
      stream.next(m.reserved1);
      stream.next(m.reserved2);
      stream.next(m.minSVs);
      stream.next(m.maxSVs);
      stream.next(m.minCNO);
      stream.next(m.reserved5);
      stream.next(m.iniFix3D);
      stream.next(m.reserved6);
      stream.next(m.reserved7);
      stream.next(m.ackAiding);
      stream.next(m.wknRollover);
      stream.next(m.reserved8);
      stream.next(m.reserved9);
      stream.next(m.reserved10);
      stream.next(m.usePPP);
      stream.next(m.aopCfg);
      stream.next(m.reserved11);
      stream.next(m.reserved12);
      stream.next(m.aopOrbMaxErr);
      stream.next(m.reserved13);
      stream.next(m.reserved14);
      stream.next(m.reserved3);
      stream.next(m.reserved4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgNAVX5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgNAVX5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgNAVX5_<ContainerAllocator>& v)
  {
    s << indent << "version: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.version);
    s << indent << "mask1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mask1);
    s << indent << "reserved0: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reserved0);
    s << indent << "reserved1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved1);
    s << indent << "reserved2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved2);
    s << indent << "minSVs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.minSVs);
    s << indent << "maxSVs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.maxSVs);
    s << indent << "minCNO: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.minCNO);
    s << indent << "reserved5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved5);
    s << indent << "iniFix3D: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.iniFix3D);
    s << indent << "reserved6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved6);
    s << indent << "reserved7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved7);
    s << indent << "ackAiding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ackAiding);
    s << indent << "wknRollover: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wknRollover);
    s << indent << "reserved8: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reserved8);
    s << indent << "reserved9: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved9);
    s << indent << "reserved10: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved10);
    s << indent << "usePPP: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.usePPP);
    s << indent << "aopCfg: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.aopCfg);
    s << indent << "reserved11: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved11);
    s << indent << "reserved12: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved12);
    s << indent << "aopOrbMaxErr: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.aopOrbMaxErr);
    s << indent << "reserved13: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved13);
    s << indent << "reserved14: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved14);
    s << indent << "reserved3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.reserved3);
    s << indent << "reserved4: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reserved4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGNAVX5_H
