/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-dynamixel-motor-0.2.3/debian/ros-groovy-dynamixel-motor/opt/ros/groovy/stacks/dynamixel_motor/dynamixel_controllers/srv/RestartController.srv */
#ifndef DYNAMIXEL_CONTROLLERS_SERVICE_RESTARTCONTROLLER_H
#define DYNAMIXEL_CONTROLLERS_SERVICE_RESTARTCONTROLLER_H
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
struct RestartControllerRequest_ {
  typedef RestartControllerRequest_<ContainerAllocator> Type;

  RestartControllerRequest_()
  : port_name()
  , package_path()
  , module_name()
  , class_name()
  , controller_name()
  , dependencies()
  {
  }

  RestartControllerRequest_(const ContainerAllocator& _alloc)
  : port_name(_alloc)
  , package_path(_alloc)
  , module_name(_alloc)
  , class_name(_alloc)
  , controller_name(_alloc)
  , dependencies(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _port_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  port_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _package_path_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  package_path;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _module_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  module_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _class_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  class_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _controller_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  controller_name;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _dependencies_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  dependencies;


  typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RestartControllerRequest
typedef  ::dynamixel_controllers::RestartControllerRequest_<std::allocator<void> > RestartControllerRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerRequest> RestartControllerRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerRequest const> RestartControllerRequestConstPtr;


template <class ContainerAllocator>
struct RestartControllerResponse_ {
  typedef RestartControllerResponse_<ContainerAllocator> Type;

  RestartControllerResponse_()
  : success(false)
  , reason()
  {
  }

  RestartControllerResponse_(const ContainerAllocator& _alloc)
  : success(false)
  , reason(_alloc)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  reason;


  typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RestartControllerResponse
typedef  ::dynamixel_controllers::RestartControllerResponse_<std::allocator<void> > RestartControllerResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerResponse> RestartControllerResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::RestartControllerResponse const> RestartControllerResponseConstPtr;

struct RestartController
{

typedef RestartControllerRequest Request;
typedef RestartControllerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct RestartController
} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7785d708c83a180befd2fe3450dd9d41";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7785d708c83a180bULL;
  static const uint64_t static_value2 = 0xefd2fe3450dd9d41ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/RestartControllerRequest";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string port_name\n\
string package_path\n\
string module_name\n\
string class_name\n\
string controller_name\n\
string[] dependencies\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a4d50a34d34f18de48e2436ff1472594";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa4d50a34d34f18deULL;
  static const uint64_t static_value2 = 0x48e2436ff1472594ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/RestartControllerResponse";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
string reason\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.port_name);
    stream.next(m.package_path);
    stream.next(m.module_name);
    stream.next(m.class_name);
    stream.next(m.controller_name);
    stream.next(m.dependencies);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RestartControllerRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
    stream.next(m.reason);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RestartControllerResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<dynamixel_controllers::RestartController> {
  static const char* value() 
  {
    return "94c76c2df56346fcaa2611bdac54f434";
  }

  static const char* value(const dynamixel_controllers::RestartController&) { return value(); } 
};

template<>
struct DataType<dynamixel_controllers::RestartController> {
  static const char* value() 
  {
    return "dynamixel_controllers/RestartController";
  }

  static const char* value(const dynamixel_controllers::RestartController&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "94c76c2df56346fcaa2611bdac54f434";
  }

  static const char* value(const dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/RestartController";
  }

  static const char* value(const dynamixel_controllers::RestartControllerRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "94c76c2df56346fcaa2611bdac54f434";
  }

  static const char* value(const dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/RestartController";
  }

  static const char* value(const dynamixel_controllers::RestartControllerResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_SERVICE_RESTARTCONTROLLER_H

