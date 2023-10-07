// Generated by gencpp from file dynamixel_current_2port/Select_Motion.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CURRENT_2PORT_MESSAGE_SELECT_MOTION_H
#define DYNAMIXEL_CURRENT_2PORT_MESSAGE_SELECT_MOTION_H

#include <ros/service_traits.h>


#include <dynamixel_current_2port/Select_MotionRequest.h>
#include <dynamixel_current_2port/Select_MotionResponse.h>


namespace dynamixel_current_2port
{

struct Select_Motion
{

typedef Select_MotionRequest Request;
typedef Select_MotionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Select_Motion
} // namespace dynamixel_current_2port


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_current_2port::Select_Motion > {
  static const char* value()
  {
    return "d51f1f90cb25facd79c884f5f7a758e6";
  }

  static const char* value(const ::dynamixel_current_2port::Select_Motion&) { return value(); }
};

template<>
struct DataType< ::dynamixel_current_2port::Select_Motion > {
  static const char* value()
  {
    return "dynamixel_current_2port/Select_Motion";
  }

  static const char* value(const ::dynamixel_current_2port::Select_Motion&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_current_2port::Select_MotionRequest> should match
// service_traits::MD5Sum< ::dynamixel_current_2port::Select_Motion >
template<>
struct MD5Sum< ::dynamixel_current_2port::Select_MotionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_current_2port::Select_Motion >::value();
  }
  static const char* value(const ::dynamixel_current_2port::Select_MotionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_current_2port::Select_MotionRequest> should match
// service_traits::DataType< ::dynamixel_current_2port::Select_Motion >
template<>
struct DataType< ::dynamixel_current_2port::Select_MotionRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_current_2port::Select_Motion >::value();
  }
  static const char* value(const ::dynamixel_current_2port::Select_MotionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_current_2port::Select_MotionResponse> should match
// service_traits::MD5Sum< ::dynamixel_current_2port::Select_Motion >
template<>
struct MD5Sum< ::dynamixel_current_2port::Select_MotionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_current_2port::Select_Motion >::value();
  }
  static const char* value(const ::dynamixel_current_2port::Select_MotionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_current_2port::Select_MotionResponse> should match
// service_traits::DataType< ::dynamixel_current_2port::Select_Motion >
template<>
struct DataType< ::dynamixel_current_2port::Select_MotionResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_current_2port::Select_Motion >::value();
  }
  static const char* value(const ::dynamixel_current_2port::Select_MotionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CURRENT_2PORT_MESSAGE_SELECT_MOTION_H
