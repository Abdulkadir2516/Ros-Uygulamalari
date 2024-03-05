// Generated by gencpp from file ogretici_paket/GecenZamanResponse.msg
// DO NOT EDIT!


#ifndef OGRETICI_PAKET_MESSAGE_GECENZAMANRESPONSE_H
#define OGRETICI_PAKET_MESSAGE_GECENZAMANRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ogretici_paket
{
template <class ContainerAllocator>
struct GecenZamanResponse_
{
  typedef GecenZamanResponse_<ContainerAllocator> Type;

  GecenZamanResponse_()
    : gecen_sure(0.0)  {
    }
  GecenZamanResponse_(const ContainerAllocator& _alloc)
    : gecen_sure(0.0)  {
  (void)_alloc;
    }



   typedef double _gecen_sure_type;
  _gecen_sure_type gecen_sure;





  typedef boost::shared_ptr< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GecenZamanResponse_

typedef ::ogretici_paket::GecenZamanResponse_<std::allocator<void> > GecenZamanResponse;

typedef boost::shared_ptr< ::ogretici_paket::GecenZamanResponse > GecenZamanResponsePtr;
typedef boost::shared_ptr< ::ogretici_paket::GecenZamanResponse const> GecenZamanResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator1> & lhs, const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator2> & rhs)
{
  return lhs.gecen_sure == rhs.gecen_sure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator1> & lhs, const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ogretici_paket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fc3e0f4d7e25e21dd2c6eae38526dccd";
  }

  static const char* value(const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfc3e0f4d7e25e21dULL;
  static const uint64_t static_value2 = 0xd2c6eae38526dccdULL;
};

template<class ContainerAllocator>
struct DataType< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ogretici_paket/GecenZamanResponse";
  }

  static const char* value(const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 gecen_sure\n"
"\n"
;
  }

  static const char* value(const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gecen_sure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GecenZamanResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ogretici_paket::GecenZamanResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ogretici_paket::GecenZamanResponse_<ContainerAllocator>& v)
  {
    s << indent << "gecen_sure: ";
    Printer<double>::stream(s, indent + "  ", v.gecen_sure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OGRETICI_PAKET_MESSAGE_GECENZAMANRESPONSE_H
