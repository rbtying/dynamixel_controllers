/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-dynamixel-motor-0.2.3/debian/ros-groovy-dynamixel-motor/opt/ros/groovy/stacks/dynamixel_motor/dynamixel_controllers/srv/TorqueEnable.srv */
#ifndef DYNAMIXEL_CONTROLLERS_SERVICE_TORQUEENABLE_H
#define DYNAMIXEL_CONTROLLERS_SERVICE_TORQUEENABLE_H
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

#include "ros/service_traits.h"




namespace dynamixel_controllers
{
template <class ContainerAllocator>
struct TorqueEnableRequest_ {
  typedef TorqueEnableRequest_<ContainerAllocator> Type;

  TorqueEnableRequest_()
  : torque_enable(false)
  {
  }

  TorqueEnableRequest_(const ContainerAllocator& _alloc)
  : torque_enable(false)
  {
  }

  typedef uint8_t _torque_enable_type;
  uint8_t torque_enable;


  typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TorqueEnableRequest
typedef  ::dynamixel_controllers::TorqueEnableRequest_<std::allocator<void> > TorqueEnableRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableRequest> TorqueEnableRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableRequest const> TorqueEnableRequestConstPtr;


template <class ContainerAllocator>
struct TorqueEnableResponse_ {
  typedef TorqueEnableResponse_<ContainerAllocator> Type;

  TorqueEnableResponse_()
  {
  }

  TorqueEnableResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TorqueEnableResponse
typedef  ::dynamixel_controllers::TorqueEnableResponse_<std::allocator<void> > TorqueEnableResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableResponse> TorqueEnableResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::TorqueEnableResponse const> TorqueEnableResponseConstPtr;

struct TorqueEnable
{

typedef TorqueEnableRequest Request;
typedef TorqueEnableResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct TorqueEnable
} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e44dc96db32bd58b5a896c2c5bf316d0";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe44dc96db32bd58bULL;
  static const uint64_t static_value2 = 0x5a896c2c5bf316d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/TorqueEnableRequest";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool torque_enable\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/TorqueEnableResponse";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.torque_enable);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TorqueEnableRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TorqueEnableResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<dynamixel_controllers::TorqueEnable> {
  static const char* value() 
  {
    return "e44dc96db32bd58b5a896c2c5bf316d0";
  }

  static const char* value(const dynamixel_controllers::TorqueEnable&) { return value(); } 
};

template<>
struct DataType<dynamixel_controllers::TorqueEnable> {
  static const char* value() 
  {
    return "dynamixel_controllers/TorqueEnable";
  }

  static const char* value(const dynamixel_controllers::TorqueEnable&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e44dc96db32bd58b5a896c2c5bf316d0";
  }

  static const char* value(const dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/TorqueEnable";
  }

  static const char* value(const dynamixel_controllers::TorqueEnableRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e44dc96db32bd58b5a896c2c5bf316d0";
  }

  static const char* value(const dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/TorqueEnable";
  }

  static const char* value(const dynamixel_controllers::TorqueEnableResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_SERVICE_TORQUEENABLE_H

