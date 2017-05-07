// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/httpbody.proto

#ifndef PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class HttpBody;
class HttpBodyDefaultTypeInternal;
extern HttpBodyDefaultTypeInternal _HttpBody_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2fhttpbody_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fapi_2fhttpbody_2eproto

// ===================================================================

class HttpBody : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.HttpBody) */ {
 public:
  HttpBody();
  virtual ~HttpBody();

  HttpBody(const HttpBody& from);

  inline HttpBody& operator=(const HttpBody& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HttpBody& default_instance();

  static inline const HttpBody* internal_default_instance() {
    return reinterpret_cast<const HttpBody*>(
               &_HttpBody_default_instance_);
  }

  void Swap(HttpBody* other);

  // implements Message ----------------------------------------------

  inline HttpBody* New() const PROTOBUF_FINAL { return New(NULL); }

  HttpBody* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const HttpBody& from);
  void MergeFrom(const HttpBody& from);
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
  void InternalSwap(HttpBody* other);
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

  // string content_type = 1;
  void clear_content_type();
  static const int kContentTypeFieldNumber = 1;
  const ::std::string& content_type() const;
  void set_content_type(const ::std::string& value);
  #if LANG_CXX11
  void set_content_type(::std::string&& value);
  #endif
  void set_content_type(const char* value);
  void set_content_type(const char* value, size_t size);
  ::std::string* mutable_content_type();
  ::std::string* release_content_type();
  void set_allocated_content_type(::std::string* content_type);

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:google.api.HttpBody)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr content_type_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fapi_2fhttpbody_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HttpBody

// string content_type = 1;
inline void HttpBody::clear_content_type() {
  content_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpBody::content_type() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.content_type)
  return content_type_.GetNoArena();
}
inline void HttpBody::set_content_type(const ::std::string& value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.HttpBody.content_type)
}
#if LANG_CXX11
inline void HttpBody::set_content_type(::std::string&& value) {
  
  content_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.HttpBody.content_type)
}
#endif
inline void HttpBody::set_content_type(const char* value) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.HttpBody.content_type)
}
inline void HttpBody::set_content_type(const char* value, size_t size) {
  
  content_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.HttpBody.content_type)
}
inline ::std::string* HttpBody::mutable_content_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.content_type)
  return content_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpBody::release_content_type() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.content_type)
  
  return content_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_allocated_content_type(::std::string* content_type) {
  if (content_type != NULL) {
    
  } else {
    
  }
  content_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content_type);
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.content_type)
}

// bytes data = 2;
inline void HttpBody::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HttpBody::data() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.data)
  return data_.GetNoArena();
}
inline void HttpBody::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.HttpBody.data)
}
#if LANG_CXX11
inline void HttpBody::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.HttpBody.data)
}
#endif
inline void HttpBody::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.HttpBody.data)
}
inline void HttpBody::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.HttpBody.data)
}
inline ::std::string* HttpBody::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HttpBody::release_data() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HttpBody::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fhttpbody_2eproto__INCLUDED
