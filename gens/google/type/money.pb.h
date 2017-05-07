// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/money.proto

#ifndef PROTOBUF_google_2ftype_2fmoney_2eproto__INCLUDED
#define PROTOBUF_google_2ftype_2fmoney_2eproto__INCLUDED

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
namespace type {
class Money;
class MoneyDefaultTypeInternal;
extern MoneyDefaultTypeInternal _Money_default_instance_;
}  // namespace type
}  // namespace google

namespace google {
namespace type {

namespace protobuf_google_2ftype_2fmoney_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2ftype_2fmoney_2eproto

// ===================================================================

class Money : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.type.Money) */ {
 public:
  Money();
  virtual ~Money();

  Money(const Money& from);

  inline Money& operator=(const Money& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Money& default_instance();

  static inline const Money* internal_default_instance() {
    return reinterpret_cast<const Money*>(
               &_Money_default_instance_);
  }

  void Swap(Money* other);

  // implements Message ----------------------------------------------

  inline Money* New() const PROTOBUF_FINAL { return New(NULL); }

  Money* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Money& from);
  void MergeFrom(const Money& from);
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
  void InternalSwap(Money* other);
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

  // string currency_code = 1;
  void clear_currency_code();
  static const int kCurrencyCodeFieldNumber = 1;
  const ::std::string& currency_code() const;
  void set_currency_code(const ::std::string& value);
  #if LANG_CXX11
  void set_currency_code(::std::string&& value);
  #endif
  void set_currency_code(const char* value);
  void set_currency_code(const char* value, size_t size);
  ::std::string* mutable_currency_code();
  ::std::string* release_currency_code();
  void set_allocated_currency_code(::std::string* currency_code);

  // int64 units = 2;
  void clear_units();
  static const int kUnitsFieldNumber = 2;
  ::google::protobuf::int64 units() const;
  void set_units(::google::protobuf::int64 value);

  // int32 nanos = 3;
  void clear_nanos();
  static const int kNanosFieldNumber = 3;
  ::google::protobuf::int32 nanos() const;
  void set_nanos(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:google.type.Money)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr currency_code_;
  ::google::protobuf::int64 units_;
  ::google::protobuf::int32 nanos_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2ftype_2fmoney_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Money

// string currency_code = 1;
inline void Money::clear_currency_code() {
  currency_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Money::currency_code() const {
  // @@protoc_insertion_point(field_get:google.type.Money.currency_code)
  return currency_code_.GetNoArena();
}
inline void Money::set_currency_code(const ::std::string& value) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.type.Money.currency_code)
}
#if LANG_CXX11
inline void Money::set_currency_code(::std::string&& value) {
  
  currency_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.type.Money.currency_code)
}
#endif
inline void Money::set_currency_code(const char* value) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.type.Money.currency_code)
}
inline void Money::set_currency_code(const char* value, size_t size) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.type.Money.currency_code)
}
inline ::std::string* Money::mutable_currency_code() {
  
  // @@protoc_insertion_point(field_mutable:google.type.Money.currency_code)
  return currency_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Money::release_currency_code() {
  // @@protoc_insertion_point(field_release:google.type.Money.currency_code)
  
  return currency_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Money::set_allocated_currency_code(::std::string* currency_code) {
  if (currency_code != NULL) {
    
  } else {
    
  }
  currency_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), currency_code);
  // @@protoc_insertion_point(field_set_allocated:google.type.Money.currency_code)
}

// int64 units = 2;
inline void Money::clear_units() {
  units_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Money::units() const {
  // @@protoc_insertion_point(field_get:google.type.Money.units)
  return units_;
}
inline void Money::set_units(::google::protobuf::int64 value) {
  
  units_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.units)
}

// int32 nanos = 3;
inline void Money::clear_nanos() {
  nanos_ = 0;
}
inline ::google::protobuf::int32 Money::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.Money.nanos)
  return nanos_;
}
inline void Money::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.nanos)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2ftype_2fmoney_2eproto__INCLUDED
