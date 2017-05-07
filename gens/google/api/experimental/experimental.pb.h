// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/experimental.proto

#ifndef PROTOBUF_google_2fapi_2fexperimental_2fexperimental_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fexperimental_2fexperimental_2eproto__INCLUDED

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
#include "google/api/annotations.pb.h"
#include "google/api/experimental/authorization_config.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class AuthorizationConfig;
class AuthorizationConfigDefaultTypeInternal;
extern AuthorizationConfigDefaultTypeInternal _AuthorizationConfig_default_instance_;
class Experimental;
class ExperimentalDefaultTypeInternal;
extern ExperimentalDefaultTypeInternal _Experimental_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2fexperimental_2fexperimental_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fapi_2fexperimental_2fexperimental_2eproto

// ===================================================================

class Experimental : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Experimental) */ {
 public:
  Experimental();
  virtual ~Experimental();

  Experimental(const Experimental& from);

  inline Experimental& operator=(const Experimental& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Experimental& default_instance();

  static inline const Experimental* internal_default_instance() {
    return reinterpret_cast<const Experimental*>(
               &_Experimental_default_instance_);
  }

  void Swap(Experimental* other);

  // implements Message ----------------------------------------------

  inline Experimental* New() const PROTOBUF_FINAL { return New(NULL); }

  Experimental* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Experimental& from);
  void MergeFrom(const Experimental& from);
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
  void InternalSwap(Experimental* other);
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

  // .google.api.AuthorizationConfig authorization = 8;
  bool has_authorization() const;
  void clear_authorization();
  static const int kAuthorizationFieldNumber = 8;
  const ::google::api::AuthorizationConfig& authorization() const;
  ::google::api::AuthorizationConfig* mutable_authorization();
  ::google::api::AuthorizationConfig* release_authorization();
  void set_allocated_authorization(::google::api::AuthorizationConfig* authorization);

  // @@protoc_insertion_point(class_scope:google.api.Experimental)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::api::AuthorizationConfig* authorization_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fapi_2fexperimental_2fexperimental_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Experimental

// .google.api.AuthorizationConfig authorization = 8;
inline bool Experimental::has_authorization() const {
  return this != internal_default_instance() && authorization_ != NULL;
}
inline void Experimental::clear_authorization() {
  if (GetArenaNoVirtual() == NULL && authorization_ != NULL) delete authorization_;
  authorization_ = NULL;
}
inline const ::google::api::AuthorizationConfig& Experimental::authorization() const {
  // @@protoc_insertion_point(field_get:google.api.Experimental.authorization)
  return authorization_ != NULL ? *authorization_
                         : *::google::api::AuthorizationConfig::internal_default_instance();
}
inline ::google::api::AuthorizationConfig* Experimental::mutable_authorization() {
  
  if (authorization_ == NULL) {
    authorization_ = new ::google::api::AuthorizationConfig;
  }
  // @@protoc_insertion_point(field_mutable:google.api.Experimental.authorization)
  return authorization_;
}
inline ::google::api::AuthorizationConfig* Experimental::release_authorization() {
  // @@protoc_insertion_point(field_release:google.api.Experimental.authorization)
  
  ::google::api::AuthorizationConfig* temp = authorization_;
  authorization_ = NULL;
  return temp;
}
inline void Experimental::set_allocated_authorization(::google::api::AuthorizationConfig* authorization) {
  delete authorization_;
  authorization_ = authorization;
  if (authorization) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.Experimental.authorization)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fexperimental_2fexperimental_2eproto__INCLUDED
