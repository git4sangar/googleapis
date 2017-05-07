// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/metric.proto

#ifndef PROTOBUF_google_2fmonitoring_2fv3_2fmetric_2eproto__INCLUDED
#define PROTOBUF_google_2fmonitoring_2fv3_2fmetric_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/metric.pb.h"
#include "google/api/monitored_resource.pb.h"
#include "google/monitoring/v3/common.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class Metric;
class MetricDefaultTypeInternal;
extern MetricDefaultTypeInternal _Metric_default_instance_;
class MetricDescriptor;
class MetricDescriptorDefaultTypeInternal;
extern MetricDescriptorDefaultTypeInternal _MetricDescriptor_default_instance_;
class MonitoredResource;
class MonitoredResourceDefaultTypeInternal;
extern MonitoredResourceDefaultTypeInternal _MonitoredResource_default_instance_;
class MonitoredResourceDescriptor;
class MonitoredResourceDescriptorDefaultTypeInternal;
extern MonitoredResourceDescriptorDefaultTypeInternal _MonitoredResourceDescriptor_default_instance_;
}  // namespace api
namespace monitoring {
namespace v3 {
class Aggregation;
class AggregationDefaultTypeInternal;
extern AggregationDefaultTypeInternal _Aggregation_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class TimeInterval;
class TimeIntervalDefaultTypeInternal;
extern TimeIntervalDefaultTypeInternal _TimeInterval_default_instance_;
class TimeSeries;
class TimeSeriesDefaultTypeInternal;
extern TimeSeriesDefaultTypeInternal _TimeSeries_default_instance_;
class TypedValue;
class TypedValueDefaultTypeInternal;
extern TypedValueDefaultTypeInternal _TypedValue_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google

namespace google {
namespace monitoring {
namespace v3 {

namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto

// ===================================================================

class Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.monitoring.v3.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point& default_instance();

  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }

  void Swap(Point* other);

  // implements Message ----------------------------------------------

  inline Point* New() const PROTOBUF_FINAL { return New(NULL); }

  Point* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Point* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.monitoring.v3.TimeInterval interval = 1;
  bool has_interval() const;
  void clear_interval();
  static const int kIntervalFieldNumber = 1;
  const ::google::monitoring::v3::TimeInterval& interval() const;
  ::google::monitoring::v3::TimeInterval* mutable_interval();
  ::google::monitoring::v3::TimeInterval* release_interval();
  void set_allocated_interval(::google::monitoring::v3::TimeInterval* interval);

  // .google.monitoring.v3.TypedValue value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::google::monitoring::v3::TypedValue& value() const;
  ::google::monitoring::v3::TypedValue* mutable_value();
  ::google::monitoring::v3::TypedValue* release_value();
  void set_allocated_value(::google::monitoring::v3::TypedValue* value);

  // @@protoc_insertion_point(class_scope:google.monitoring.v3.Point)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::monitoring::v3::TimeInterval* interval_;
  ::google::monitoring::v3::TypedValue* value_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TimeSeries : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.monitoring.v3.TimeSeries) */ {
 public:
  TimeSeries();
  virtual ~TimeSeries();

  TimeSeries(const TimeSeries& from);

  inline TimeSeries& operator=(const TimeSeries& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TimeSeries& default_instance();

  static inline const TimeSeries* internal_default_instance() {
    return reinterpret_cast<const TimeSeries*>(
               &_TimeSeries_default_instance_);
  }

  void Swap(TimeSeries* other);

  // implements Message ----------------------------------------------

  inline TimeSeries* New() const PROTOBUF_FINAL { return New(NULL); }

  TimeSeries* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TimeSeries& from);
  void MergeFrom(const TimeSeries& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TimeSeries* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.monitoring.v3.Point points = 5;
  int points_size() const;
  void clear_points();
  static const int kPointsFieldNumber = 5;
  const ::google::monitoring::v3::Point& points(int index) const;
  ::google::monitoring::v3::Point* mutable_points(int index);
  ::google::monitoring::v3::Point* add_points();
  ::google::protobuf::RepeatedPtrField< ::google::monitoring::v3::Point >*
      mutable_points();
  const ::google::protobuf::RepeatedPtrField< ::google::monitoring::v3::Point >&
      points() const;

  // .google.api.Metric metric = 1;
  bool has_metric() const;
  void clear_metric();
  static const int kMetricFieldNumber = 1;
  const ::google::api::Metric& metric() const;
  ::google::api::Metric* mutable_metric();
  ::google::api::Metric* release_metric();
  void set_allocated_metric(::google::api::Metric* metric);

  // .google.api.MonitoredResource resource = 2;
  bool has_resource() const;
  void clear_resource();
  static const int kResourceFieldNumber = 2;
  const ::google::api::MonitoredResource& resource() const;
  ::google::api::MonitoredResource* mutable_resource();
  ::google::api::MonitoredResource* release_resource();
  void set_allocated_resource(::google::api::MonitoredResource* resource);

  // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
  void clear_metric_kind();
  static const int kMetricKindFieldNumber = 3;
  ::google::api::MetricDescriptor_MetricKind metric_kind() const;
  void set_metric_kind(::google::api::MetricDescriptor_MetricKind value);

  // .google.api.MetricDescriptor.ValueType value_type = 4;
  void clear_value_type();
  static const int kValueTypeFieldNumber = 4;
  ::google::api::MetricDescriptor_ValueType value_type() const;
  void set_value_type(::google::api::MetricDescriptor_ValueType value);

  // @@protoc_insertion_point(class_scope:google.monitoring.v3.TimeSeries)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::monitoring::v3::Point > points_;
  ::google::api::Metric* metric_;
  ::google::api::MonitoredResource* resource_;
  int metric_kind_;
  int value_type_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Point

// .google.monitoring.v3.TimeInterval interval = 1;
inline bool Point::has_interval() const {
  return this != internal_default_instance() && interval_ != NULL;
}
inline void Point::clear_interval() {
  if (GetArenaNoVirtual() == NULL && interval_ != NULL) delete interval_;
  interval_ = NULL;
}
inline const ::google::monitoring::v3::TimeInterval& Point::interval() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Point.interval)
  return interval_ != NULL ? *interval_
                         : *::google::monitoring::v3::TimeInterval::internal_default_instance();
}
inline ::google::monitoring::v3::TimeInterval* Point::mutable_interval() {
  
  if (interval_ == NULL) {
    interval_ = new ::google::monitoring::v3::TimeInterval;
  }
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Point.interval)
  return interval_;
}
inline ::google::monitoring::v3::TimeInterval* Point::release_interval() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Point.interval)
  
  ::google::monitoring::v3::TimeInterval* temp = interval_;
  interval_ = NULL;
  return temp;
}
inline void Point::set_allocated_interval(::google::monitoring::v3::TimeInterval* interval) {
  delete interval_;
  interval_ = interval;
  if (interval) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Point.interval)
}

// .google.monitoring.v3.TypedValue value = 2;
inline bool Point::has_value() const {
  return this != internal_default_instance() && value_ != NULL;
}
inline void Point::clear_value() {
  if (GetArenaNoVirtual() == NULL && value_ != NULL) delete value_;
  value_ = NULL;
}
inline const ::google::monitoring::v3::TypedValue& Point::value() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.Point.value)
  return value_ != NULL ? *value_
                         : *::google::monitoring::v3::TypedValue::internal_default_instance();
}
inline ::google::monitoring::v3::TypedValue* Point::mutable_value() {
  
  if (value_ == NULL) {
    value_ = new ::google::monitoring::v3::TypedValue;
  }
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.Point.value)
  return value_;
}
inline ::google::monitoring::v3::TypedValue* Point::release_value() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.Point.value)
  
  ::google::monitoring::v3::TypedValue* temp = value_;
  value_ = NULL;
  return temp;
}
inline void Point::set_allocated_value(::google::monitoring::v3::TypedValue* value) {
  delete value_;
  value_ = value;
  if (value) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.Point.value)
}

// -------------------------------------------------------------------

// TimeSeries

// .google.api.Metric metric = 1;
inline bool TimeSeries::has_metric() const {
  return this != internal_default_instance() && metric_ != NULL;
}
inline void TimeSeries::clear_metric() {
  if (GetArenaNoVirtual() == NULL && metric_ != NULL) delete metric_;
  metric_ = NULL;
}
inline const ::google::api::Metric& TimeSeries::metric() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.TimeSeries.metric)
  return metric_ != NULL ? *metric_
                         : *::google::api::Metric::internal_default_instance();
}
inline ::google::api::Metric* TimeSeries::mutable_metric() {
  
  if (metric_ == NULL) {
    metric_ = new ::google::api::Metric;
  }
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.TimeSeries.metric)
  return metric_;
}
inline ::google::api::Metric* TimeSeries::release_metric() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.TimeSeries.metric)
  
  ::google::api::Metric* temp = metric_;
  metric_ = NULL;
  return temp;
}
inline void TimeSeries::set_allocated_metric(::google::api::Metric* metric) {
  delete metric_;
  metric_ = metric;
  if (metric) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.TimeSeries.metric)
}

// .google.api.MonitoredResource resource = 2;
inline bool TimeSeries::has_resource() const {
  return this != internal_default_instance() && resource_ != NULL;
}
inline void TimeSeries::clear_resource() {
  if (GetArenaNoVirtual() == NULL && resource_ != NULL) delete resource_;
  resource_ = NULL;
}
inline const ::google::api::MonitoredResource& TimeSeries::resource() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.TimeSeries.resource)
  return resource_ != NULL ? *resource_
                         : *::google::api::MonitoredResource::internal_default_instance();
}
inline ::google::api::MonitoredResource* TimeSeries::mutable_resource() {
  
  if (resource_ == NULL) {
    resource_ = new ::google::api::MonitoredResource;
  }
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.TimeSeries.resource)
  return resource_;
}
inline ::google::api::MonitoredResource* TimeSeries::release_resource() {
  // @@protoc_insertion_point(field_release:google.monitoring.v3.TimeSeries.resource)
  
  ::google::api::MonitoredResource* temp = resource_;
  resource_ = NULL;
  return temp;
}
inline void TimeSeries::set_allocated_resource(::google::api::MonitoredResource* resource) {
  delete resource_;
  if (resource != NULL && resource->GetArena() != NULL) {
    ::google::api::MonitoredResource* new_resource = new ::google::api::MonitoredResource;
    new_resource->CopyFrom(*resource);
    resource = new_resource;
  }
  resource_ = resource;
  if (resource) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.monitoring.v3.TimeSeries.resource)
}

// .google.api.MetricDescriptor.MetricKind metric_kind = 3;
inline void TimeSeries::clear_metric_kind() {
  metric_kind_ = 0;
}
inline ::google::api::MetricDescriptor_MetricKind TimeSeries::metric_kind() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.TimeSeries.metric_kind)
  return static_cast< ::google::api::MetricDescriptor_MetricKind >(metric_kind_);
}
inline void TimeSeries::set_metric_kind(::google::api::MetricDescriptor_MetricKind value) {
  
  metric_kind_ = value;
  // @@protoc_insertion_point(field_set:google.monitoring.v3.TimeSeries.metric_kind)
}

// .google.api.MetricDescriptor.ValueType value_type = 4;
inline void TimeSeries::clear_value_type() {
  value_type_ = 0;
}
inline ::google::api::MetricDescriptor_ValueType TimeSeries::value_type() const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.TimeSeries.value_type)
  return static_cast< ::google::api::MetricDescriptor_ValueType >(value_type_);
}
inline void TimeSeries::set_value_type(::google::api::MetricDescriptor_ValueType value) {
  
  value_type_ = value;
  // @@protoc_insertion_point(field_set:google.monitoring.v3.TimeSeries.value_type)
}

// repeated .google.monitoring.v3.Point points = 5;
inline int TimeSeries::points_size() const {
  return points_.size();
}
inline void TimeSeries::clear_points() {
  points_.Clear();
}
inline const ::google::monitoring::v3::Point& TimeSeries::points(int index) const {
  // @@protoc_insertion_point(field_get:google.monitoring.v3.TimeSeries.points)
  return points_.Get(index);
}
inline ::google::monitoring::v3::Point* TimeSeries::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:google.monitoring.v3.TimeSeries.points)
  return points_.Mutable(index);
}
inline ::google::monitoring::v3::Point* TimeSeries::add_points() {
  // @@protoc_insertion_point(field_add:google.monitoring.v3.TimeSeries.points)
  return points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::monitoring::v3::Point >*
TimeSeries::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:google.monitoring.v3.TimeSeries.points)
  return &points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::monitoring::v3::Point >&
TimeSeries::points() const {
  // @@protoc_insertion_point(field_list:google.monitoring.v3.TimeSeries.points)
  return points_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v3
}  // namespace monitoring
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fmonitoring_2fv3_2fmetric_2eproto__INCLUDED
