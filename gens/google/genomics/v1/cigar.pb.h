// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/cigar.proto

#ifndef PROTOBUF_google_2fgenomics_2fv1_2fcigar_2eproto__INCLUDED
#define PROTOBUF_google_2fgenomics_2fv1_2fcigar_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace genomics {
namespace v1 {
class CigarUnit;
class CigarUnitDefaultTypeInternal;
extern CigarUnitDefaultTypeInternal _CigarUnit_default_instance_;
}  // namespace v1
}  // namespace genomics
}  // namespace google

namespace google {
namespace genomics {
namespace v1 {

namespace protobuf_google_2fgenomics_2fv1_2fcigar_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2fgenomics_2fv1_2fcigar_2eproto

enum CigarUnit_Operation {
  CigarUnit_Operation_OPERATION_UNSPECIFIED = 0,
  CigarUnit_Operation_ALIGNMENT_MATCH = 1,
  CigarUnit_Operation_INSERT = 2,
  CigarUnit_Operation_DELETE = 3,
  CigarUnit_Operation_SKIP = 4,
  CigarUnit_Operation_CLIP_SOFT = 5,
  CigarUnit_Operation_CLIP_HARD = 6,
  CigarUnit_Operation_PAD = 7,
  CigarUnit_Operation_SEQUENCE_MATCH = 8,
  CigarUnit_Operation_SEQUENCE_MISMATCH = 9,
  CigarUnit_Operation_CigarUnit_Operation_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CigarUnit_Operation_CigarUnit_Operation_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CigarUnit_Operation_IsValid(int value);
const CigarUnit_Operation CigarUnit_Operation_Operation_MIN = CigarUnit_Operation_OPERATION_UNSPECIFIED;
const CigarUnit_Operation CigarUnit_Operation_Operation_MAX = CigarUnit_Operation_SEQUENCE_MISMATCH;
const int CigarUnit_Operation_Operation_ARRAYSIZE = CigarUnit_Operation_Operation_MAX + 1;

const ::google::protobuf::EnumDescriptor* CigarUnit_Operation_descriptor();
inline const ::std::string& CigarUnit_Operation_Name(CigarUnit_Operation value) {
  return ::google::protobuf::internal::NameOfEnum(
    CigarUnit_Operation_descriptor(), value);
}
inline bool CigarUnit_Operation_Parse(
    const ::std::string& name, CigarUnit_Operation* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CigarUnit_Operation>(
    CigarUnit_Operation_descriptor(), name, value);
}
// ===================================================================

class CigarUnit : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.genomics.v1.CigarUnit) */ {
 public:
  CigarUnit();
  virtual ~CigarUnit();

  CigarUnit(const CigarUnit& from);

  inline CigarUnit& operator=(const CigarUnit& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const CigarUnit& default_instance();

  static inline const CigarUnit* internal_default_instance() {
    return reinterpret_cast<const CigarUnit*>(
               &_CigarUnit_default_instance_);
  }

  void UnsafeArenaSwap(CigarUnit* other);
  void Swap(CigarUnit* other);

  // implements Message ----------------------------------------------

  inline CigarUnit* New() const PROTOBUF_FINAL { return New(NULL); }

  CigarUnit* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CigarUnit& from);
  void MergeFrom(const CigarUnit& from);
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
  void InternalSwap(CigarUnit* other);
  protected:
  explicit CigarUnit(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef CigarUnit_Operation Operation;
  static const Operation OPERATION_UNSPECIFIED =
    CigarUnit_Operation_OPERATION_UNSPECIFIED;
  static const Operation ALIGNMENT_MATCH =
    CigarUnit_Operation_ALIGNMENT_MATCH;
  static const Operation INSERT =
    CigarUnit_Operation_INSERT;
  static const Operation DELETE =
    CigarUnit_Operation_DELETE;
  static const Operation SKIP =
    CigarUnit_Operation_SKIP;
  static const Operation CLIP_SOFT =
    CigarUnit_Operation_CLIP_SOFT;
  static const Operation CLIP_HARD =
    CigarUnit_Operation_CLIP_HARD;
  static const Operation PAD =
    CigarUnit_Operation_PAD;
  static const Operation SEQUENCE_MATCH =
    CigarUnit_Operation_SEQUENCE_MATCH;
  static const Operation SEQUENCE_MISMATCH =
    CigarUnit_Operation_SEQUENCE_MISMATCH;
  static inline bool Operation_IsValid(int value) {
    return CigarUnit_Operation_IsValid(value);
  }
  static const Operation Operation_MIN =
    CigarUnit_Operation_Operation_MIN;
  static const Operation Operation_MAX =
    CigarUnit_Operation_Operation_MAX;
  static const int Operation_ARRAYSIZE =
    CigarUnit_Operation_Operation_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Operation_descriptor() {
    return CigarUnit_Operation_descriptor();
  }
  static inline const ::std::string& Operation_Name(Operation value) {
    return CigarUnit_Operation_Name(value);
  }
  static inline bool Operation_Parse(const ::std::string& name,
      Operation* value) {
    return CigarUnit_Operation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string reference_sequence = 3;
  void clear_reference_sequence();
  static const int kReferenceSequenceFieldNumber = 3;
  const ::std::string& reference_sequence() const;
  void set_reference_sequence(const ::std::string& value);
  void set_reference_sequence(const char* value);
  void set_reference_sequence(const char* value, size_t size);
  ::std::string* mutable_reference_sequence();
  ::std::string* release_reference_sequence();
  void set_allocated_reference_sequence(::std::string* reference_sequence);
  ::std::string* unsafe_arena_release_reference_sequence();
  void unsafe_arena_set_allocated_reference_sequence(
      ::std::string* reference_sequence);

  // int64 operation_length = 2;
  void clear_operation_length();
  static const int kOperationLengthFieldNumber = 2;
  ::google::protobuf::int64 operation_length() const;
  void set_operation_length(::google::protobuf::int64 value);

  // .google.genomics.v1.CigarUnit.Operation operation = 1;
  void clear_operation();
  static const int kOperationFieldNumber = 1;
  ::google::genomics::v1::CigarUnit_Operation operation() const;
  void set_operation(::google::genomics::v1::CigarUnit_Operation value);

  // @@protoc_insertion_point(class_scope:google.genomics.v1.CigarUnit)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr reference_sequence_;
  ::google::protobuf::int64 operation_length_;
  int operation_;
  mutable int _cached_size_;
  friend struct  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CigarUnit

// .google.genomics.v1.CigarUnit.Operation operation = 1;
inline void CigarUnit::clear_operation() {
  operation_ = 0;
}
inline ::google::genomics::v1::CigarUnit_Operation CigarUnit::operation() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.operation)
  return static_cast< ::google::genomics::v1::CigarUnit_Operation >(operation_);
}
inline void CigarUnit::set_operation(::google::genomics::v1::CigarUnit_Operation value) {
  
  operation_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.operation)
}

// int64 operation_length = 2;
inline void CigarUnit::clear_operation_length() {
  operation_length_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CigarUnit::operation_length() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.operation_length)
  return operation_length_;
}
inline void CigarUnit::set_operation_length(::google::protobuf::int64 value) {
  
  operation_length_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.operation_length)
}

// string reference_sequence = 3;
inline void CigarUnit::clear_reference_sequence() {
  reference_sequence_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& CigarUnit::reference_sequence() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.reference_sequence)
  return reference_sequence_.Get();
}
inline void CigarUnit::set_reference_sequence(const ::std::string& value) {
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.reference_sequence)
}
inline void CigarUnit::set_reference_sequence(const char* value) {
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.CigarUnit.reference_sequence)
}
inline void CigarUnit::set_reference_sequence(const char* value,
    size_t size) {
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.CigarUnit.reference_sequence)
}
inline ::std::string* CigarUnit::mutable_reference_sequence() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.CigarUnit.reference_sequence)
  return reference_sequence_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CigarUnit::release_reference_sequence() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.CigarUnit.reference_sequence)
  
  return reference_sequence_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CigarUnit::unsafe_arena_release_reference_sequence() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.CigarUnit.reference_sequence)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return reference_sequence_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CigarUnit::set_allocated_reference_sequence(::std::string* reference_sequence) {
  if (reference_sequence != NULL) {
    
  } else {
    
  }
  reference_sequence_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_sequence,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.CigarUnit.reference_sequence)
}
inline void CigarUnit::unsafe_arena_set_allocated_reference_sequence(
    ::std::string* reference_sequence) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (reference_sequence != NULL) {
    
  } else {
    
  }
  reference_sequence_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      reference_sequence, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.CigarUnit.reference_sequence)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace genomics
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::genomics::v1::CigarUnit_Operation> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::genomics::v1::CigarUnit_Operation>() {
  return ::google::genomics::v1::CigarUnit_Operation_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fgenomics_2fv1_2fcigar_2eproto__INCLUDED
