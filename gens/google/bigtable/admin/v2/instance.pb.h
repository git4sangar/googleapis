// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/v2/instance.proto

#ifndef PROTOBUF_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto__INCLUDED
#define PROTOBUF_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/bigtable/admin/v2/common.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace bigtable {
namespace admin {
namespace v2 {
class Cluster;
class ClusterDefaultTypeInternal;
extern ClusterDefaultTypeInternal _Cluster_default_instance_;
class Instance;
class InstanceDefaultTypeInternal;
extern InstanceDefaultTypeInternal _Instance_default_instance_;
}  // namespace v2
}  // namespace admin
}  // namespace bigtable
}  // namespace google

namespace google {
namespace bigtable {
namespace admin {
namespace v2 {

namespace protobuf_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto

enum Instance_State {
  Instance_State_STATE_NOT_KNOWN = 0,
  Instance_State_READY = 1,
  Instance_State_CREATING = 2,
  Instance_State_Instance_State_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Instance_State_Instance_State_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Instance_State_IsValid(int value);
const Instance_State Instance_State_State_MIN = Instance_State_STATE_NOT_KNOWN;
const Instance_State Instance_State_State_MAX = Instance_State_CREATING;
const int Instance_State_State_ARRAYSIZE = Instance_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* Instance_State_descriptor();
inline const ::std::string& Instance_State_Name(Instance_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    Instance_State_descriptor(), value);
}
inline bool Instance_State_Parse(
    const ::std::string& name, Instance_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Instance_State>(
    Instance_State_descriptor(), name, value);
}
enum Instance_Type {
  Instance_Type_TYPE_UNSPECIFIED = 0,
  Instance_Type_PRODUCTION = 1,
  Instance_Type_Instance_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Instance_Type_Instance_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Instance_Type_IsValid(int value);
const Instance_Type Instance_Type_Type_MIN = Instance_Type_TYPE_UNSPECIFIED;
const Instance_Type Instance_Type_Type_MAX = Instance_Type_PRODUCTION;
const int Instance_Type_Type_ARRAYSIZE = Instance_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Instance_Type_descriptor();
inline const ::std::string& Instance_Type_Name(Instance_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Instance_Type_descriptor(), value);
}
inline bool Instance_Type_Parse(
    const ::std::string& name, Instance_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Instance_Type>(
    Instance_Type_descriptor(), name, value);
}
enum Cluster_State {
  Cluster_State_STATE_NOT_KNOWN = 0,
  Cluster_State_READY = 1,
  Cluster_State_CREATING = 2,
  Cluster_State_RESIZING = 3,
  Cluster_State_DISABLED = 4,
  Cluster_State_Cluster_State_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Cluster_State_Cluster_State_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Cluster_State_IsValid(int value);
const Cluster_State Cluster_State_State_MIN = Cluster_State_STATE_NOT_KNOWN;
const Cluster_State Cluster_State_State_MAX = Cluster_State_DISABLED;
const int Cluster_State_State_ARRAYSIZE = Cluster_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* Cluster_State_descriptor();
inline const ::std::string& Cluster_State_Name(Cluster_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    Cluster_State_descriptor(), value);
}
inline bool Cluster_State_Parse(
    const ::std::string& name, Cluster_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Cluster_State>(
    Cluster_State_descriptor(), name, value);
}
// ===================================================================

class Instance : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.bigtable.admin.v2.Instance) */ {
 public:
  Instance();
  virtual ~Instance();

  Instance(const Instance& from);

  inline Instance& operator=(const Instance& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Instance& default_instance();

  static inline const Instance* internal_default_instance() {
    return reinterpret_cast<const Instance*>(
               &_Instance_default_instance_);
  }

  void Swap(Instance* other);

  // implements Message ----------------------------------------------

  inline Instance* New() const PROTOBUF_FINAL { return New(NULL); }

  Instance* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Instance& from);
  void MergeFrom(const Instance& from);
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
  void InternalSwap(Instance* other);
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

  typedef Instance_State State;
  static const State STATE_NOT_KNOWN =
    Instance_State_STATE_NOT_KNOWN;
  static const State READY =
    Instance_State_READY;
  static const State CREATING =
    Instance_State_CREATING;
  static inline bool State_IsValid(int value) {
    return Instance_State_IsValid(value);
  }
  static const State State_MIN =
    Instance_State_State_MIN;
  static const State State_MAX =
    Instance_State_State_MAX;
  static const int State_ARRAYSIZE =
    Instance_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return Instance_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return Instance_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return Instance_State_Parse(name, value);
  }

  typedef Instance_Type Type;
  static const Type TYPE_UNSPECIFIED =
    Instance_Type_TYPE_UNSPECIFIED;
  static const Type PRODUCTION =
    Instance_Type_PRODUCTION;
  static inline bool Type_IsValid(int value) {
    return Instance_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Instance_Type_Type_MIN;
  static const Type Type_MAX =
    Instance_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Instance_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Instance_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Instance_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Instance_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string display_name = 2;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 2;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // .google.bigtable.admin.v2.Instance.State state = 3;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::google::bigtable::admin::v2::Instance_State state() const;
  void set_state(::google::bigtable::admin::v2::Instance_State value);

  // .google.bigtable.admin.v2.Instance.Type type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::google::bigtable::admin::v2::Instance_Type type() const;
  void set_type(::google::bigtable::admin::v2::Instance_Type value);

  // @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.Instance)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  int state_;
  int type_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Cluster : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.bigtable.admin.v2.Cluster) */ {
 public:
  Cluster();
  virtual ~Cluster();

  Cluster(const Cluster& from);

  inline Cluster& operator=(const Cluster& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cluster& default_instance();

  static inline const Cluster* internal_default_instance() {
    return reinterpret_cast<const Cluster*>(
               &_Cluster_default_instance_);
  }

  void Swap(Cluster* other);

  // implements Message ----------------------------------------------

  inline Cluster* New() const PROTOBUF_FINAL { return New(NULL); }

  Cluster* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Cluster& from);
  void MergeFrom(const Cluster& from);
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
  void InternalSwap(Cluster* other);
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

  typedef Cluster_State State;
  static const State STATE_NOT_KNOWN =
    Cluster_State_STATE_NOT_KNOWN;
  static const State READY =
    Cluster_State_READY;
  static const State CREATING =
    Cluster_State_CREATING;
  static const State RESIZING =
    Cluster_State_RESIZING;
  static const State DISABLED =
    Cluster_State_DISABLED;
  static inline bool State_IsValid(int value) {
    return Cluster_State_IsValid(value);
  }
  static const State State_MIN =
    Cluster_State_State_MIN;
  static const State State_MAX =
    Cluster_State_State_MAX;
  static const int State_ARRAYSIZE =
    Cluster_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return Cluster_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return Cluster_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return Cluster_State_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string location = 2;
  void clear_location();
  static const int kLocationFieldNumber = 2;
  const ::std::string& location() const;
  void set_location(const ::std::string& value);
  #if LANG_CXX11
  void set_location(::std::string&& value);
  #endif
  void set_location(const char* value);
  void set_location(const char* value, size_t size);
  ::std::string* mutable_location();
  ::std::string* release_location();
  void set_allocated_location(::std::string* location);

  // .google.bigtable.admin.v2.Cluster.State state = 3;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::google::bigtable::admin::v2::Cluster_State state() const;
  void set_state(::google::bigtable::admin::v2::Cluster_State value);

  // int32 serve_nodes = 4;
  void clear_serve_nodes();
  static const int kServeNodesFieldNumber = 4;
  ::google::protobuf::int32 serve_nodes() const;
  void set_serve_nodes(::google::protobuf::int32 value);

  // .google.bigtable.admin.v2.StorageType default_storage_type = 5;
  void clear_default_storage_type();
  static const int kDefaultStorageTypeFieldNumber = 5;
  ::google::bigtable::admin::v2::StorageType default_storage_type() const;
  void set_default_storage_type(::google::bigtable::admin::v2::StorageType value);

  // @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.Cluster)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr location_;
  int state_;
  ::google::protobuf::int32 serve_nodes_;
  int default_storage_type_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Instance

// string name = 1;
inline void Instance::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Instance.name)
  return name_.GetNoArena();
}
inline void Instance::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Instance.name)
}
#if LANG_CXX11
inline void Instance::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.v2.Instance.name)
}
#endif
inline void Instance::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.v2.Instance.name)
}
inline void Instance::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.v2.Instance.name)
}
inline ::std::string* Instance::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.v2.Instance.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.v2.Instance.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.v2.Instance.name)
}

// string display_name = 2;
inline void Instance::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Instance::display_name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Instance.display_name)
  return display_name_.GetNoArena();
}
inline void Instance::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Instance.display_name)
}
#if LANG_CXX11
inline void Instance::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.v2.Instance.display_name)
}
#endif
inline void Instance::set_display_name(const char* value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.v2.Instance.display_name)
}
inline void Instance::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.v2.Instance.display_name)
}
inline ::std::string* Instance::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.v2.Instance.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Instance::release_display_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.v2.Instance.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Instance::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.v2.Instance.display_name)
}

// .google.bigtable.admin.v2.Instance.State state = 3;
inline void Instance::clear_state() {
  state_ = 0;
}
inline ::google::bigtable::admin::v2::Instance_State Instance::state() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Instance.state)
  return static_cast< ::google::bigtable::admin::v2::Instance_State >(state_);
}
inline void Instance::set_state(::google::bigtable::admin::v2::Instance_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Instance.state)
}

// .google.bigtable.admin.v2.Instance.Type type = 4;
inline void Instance::clear_type() {
  type_ = 0;
}
inline ::google::bigtable::admin::v2::Instance_Type Instance::type() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Instance.type)
  return static_cast< ::google::bigtable::admin::v2::Instance_Type >(type_);
}
inline void Instance::set_type(::google::bigtable::admin::v2::Instance_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Instance.type)
}

// -------------------------------------------------------------------

// Cluster

// string name = 1;
inline void Cluster::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Cluster::name() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Cluster.name)
  return name_.GetNoArena();
}
inline void Cluster::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Cluster.name)
}
#if LANG_CXX11
inline void Cluster::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.v2.Cluster.name)
}
#endif
inline void Cluster::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.v2.Cluster.name)
}
inline void Cluster::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.v2.Cluster.name)
}
inline ::std::string* Cluster::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.v2.Cluster.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Cluster::release_name() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.v2.Cluster.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Cluster::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.v2.Cluster.name)
}

// string location = 2;
inline void Cluster::clear_location() {
  location_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Cluster::location() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Cluster.location)
  return location_.GetNoArena();
}
inline void Cluster::set_location(const ::std::string& value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Cluster.location)
}
#if LANG_CXX11
inline void Cluster::set_location(::std::string&& value) {
  
  location_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.bigtable.admin.v2.Cluster.location)
}
#endif
inline void Cluster::set_location(const char* value) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.bigtable.admin.v2.Cluster.location)
}
inline void Cluster::set_location(const char* value, size_t size) {
  
  location_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.bigtable.admin.v2.Cluster.location)
}
inline ::std::string* Cluster::mutable_location() {
  
  // @@protoc_insertion_point(field_mutable:google.bigtable.admin.v2.Cluster.location)
  return location_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Cluster::release_location() {
  // @@protoc_insertion_point(field_release:google.bigtable.admin.v2.Cluster.location)
  
  return location_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Cluster::set_allocated_location(::std::string* location) {
  if (location != NULL) {
    
  } else {
    
  }
  location_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), location);
  // @@protoc_insertion_point(field_set_allocated:google.bigtable.admin.v2.Cluster.location)
}

// .google.bigtable.admin.v2.Cluster.State state = 3;
inline void Cluster::clear_state() {
  state_ = 0;
}
inline ::google::bigtable::admin::v2::Cluster_State Cluster::state() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Cluster.state)
  return static_cast< ::google::bigtable::admin::v2::Cluster_State >(state_);
}
inline void Cluster::set_state(::google::bigtable::admin::v2::Cluster_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Cluster.state)
}

// int32 serve_nodes = 4;
inline void Cluster::clear_serve_nodes() {
  serve_nodes_ = 0;
}
inline ::google::protobuf::int32 Cluster::serve_nodes() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Cluster.serve_nodes)
  return serve_nodes_;
}
inline void Cluster::set_serve_nodes(::google::protobuf::int32 value) {
  
  serve_nodes_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Cluster.serve_nodes)
}

// .google.bigtable.admin.v2.StorageType default_storage_type = 5;
inline void Cluster::clear_default_storage_type() {
  default_storage_type_ = 0;
}
inline ::google::bigtable::admin::v2::StorageType Cluster::default_storage_type() const {
  // @@protoc_insertion_point(field_get:google.bigtable.admin.v2.Cluster.default_storage_type)
  return static_cast< ::google::bigtable::admin::v2::StorageType >(default_storage_type_);
}
inline void Cluster::set_default_storage_type(::google::bigtable::admin::v2::StorageType value) {
  
  default_storage_type_ = value;
  // @@protoc_insertion_point(field_set:google.bigtable.admin.v2.Cluster.default_storage_type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v2
}  // namespace admin
}  // namespace bigtable
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::bigtable::admin::v2::Instance_State> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::v2::Instance_State>() {
  return ::google::bigtable::admin::v2::Instance_State_descriptor();
}
template <> struct is_proto_enum< ::google::bigtable::admin::v2::Instance_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::v2::Instance_Type>() {
  return ::google::bigtable::admin::v2::Instance_Type_descriptor();
}
template <> struct is_proto_enum< ::google::bigtable::admin::v2::Cluster_State> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::v2::Cluster_State>() {
  return ::google::bigtable::admin::v2::Cluster_State_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fbigtable_2fadmin_2fv2_2finstance_2eproto__INCLUDED
