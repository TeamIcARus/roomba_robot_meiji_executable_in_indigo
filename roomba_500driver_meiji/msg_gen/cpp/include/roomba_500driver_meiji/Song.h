/* Auto-generated by genmsg_cpp for file /home/kendemu/catkin_ws/src/roomba_robot_meiji/roomba_500driver_meiji/msg/Song.msg */
#ifndef ROOMBA_500DRIVER_MEIJI_MESSAGE_SONG_H
#define ROOMBA_500DRIVER_MEIJI_MESSAGE_SONG_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace roomba_500driver_meiji
{
template <class ContainerAllocator>
struct Song_ {
  typedef Song_<ContainerAllocator> Type;

  Song_()
  : number(0)
  , playing(0)
  {
  }

  Song_(const ContainerAllocator& _alloc)
  : number(0)
  , playing(0)
  {
  }

  typedef int8_t _number_type;
  int8_t number;

  typedef int8_t _playing_type;
  int8_t playing;


  typedef boost::shared_ptr< ::roomba_500driver_meiji::Song_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roomba_500driver_meiji::Song_<ContainerAllocator>  const> ConstPtr;
}; // struct Song
typedef  ::roomba_500driver_meiji::Song_<std::allocator<void> > Song;

typedef boost::shared_ptr< ::roomba_500driver_meiji::Song> SongPtr;
typedef boost::shared_ptr< ::roomba_500driver_meiji::Song const> SongConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::roomba_500driver_meiji::Song_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::roomba_500driver_meiji::Song_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace roomba_500driver_meiji

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::roomba_500driver_meiji::Song_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::roomba_500driver_meiji::Song_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::roomba_500driver_meiji::Song_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3b56b8fd73a5276f06b0002a572c3554";
  }

  static const char* value(const  ::roomba_500driver_meiji::Song_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3b56b8fd73a5276fULL;
  static const uint64_t static_value2 = 0x06b0002a572c3554ULL;
};

template<class ContainerAllocator>
struct DataType< ::roomba_500driver_meiji::Song_<ContainerAllocator> > {
  static const char* value() 
  {
    return "roomba_500driver_meiji/Song";
  }

  static const char* value(const  ::roomba_500driver_meiji::Song_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::roomba_500driver_meiji::Song_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 number\n\
int8 playing\n\
\n\
\n\
";
  }

  static const char* value(const  ::roomba_500driver_meiji::Song_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::roomba_500driver_meiji::Song_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::roomba_500driver_meiji::Song_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.number);
    stream.next(m.playing);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Song_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roomba_500driver_meiji::Song_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::roomba_500driver_meiji::Song_<ContainerAllocator> & v) 
  {
    s << indent << "number: ";
    Printer<int8_t>::stream(s, indent + "  ", v.number);
    s << indent << "playing: ";
    Printer<int8_t>::stream(s, indent + "  ", v.playing);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROOMBA_500DRIVER_MEIJI_MESSAGE_SONG_H

