// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/position.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/genomics/v1/position.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace genomics {
namespace v1 {
class PositionDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Position> {
} _Position_default_instance_;

namespace protobuf_google_2fgenomics_2fv1_2fposition_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, reference_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Position, reverse_strand_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Position)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Position_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/genomics/v1/position.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _Position_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  _Position_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n!google/genomics/v1/position.proto\022\022goo"
      "gle.genomics.v1\032\034google/api/annotations."
      "proto\"L\n\010Position\022\026\n\016reference_name\030\001 \001("
      "\t\022\020\n\010position\030\002 \001(\003\022\026\n\016reverse_strand\030\003 "
      "\001(\010Bh\n\026com.google.genomics.v1B\rPositionP"
      "rotoP\001Z:google.golang.org/genproto/googl"
      "eapis/genomics/v1;genomics\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 277);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/genomics/v1/position.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fgenomics_2fv1_2fposition_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Position::kReferenceNameFieldNumber;
const int Position::kPositionFieldNumber;
const int Position::kReverseStrandFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Position::Position()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fgenomics_2fv1_2fposition_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.genomics.v1.Position)
}
Position::Position(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_google_2fgenomics_2fv1_2fposition_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.genomics.v1.Position)
}
Position::Position(const Position& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  reference_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.reference_name().size() > 0) {
    reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reference_name(),
      GetArenaNoVirtual());
  }
  ::memcpy(&position_, &from.position_,
    reinterpret_cast<char*>(&reverse_strand_) -
    reinterpret_cast<char*>(&position_) + sizeof(reverse_strand_));
  // @@protoc_insertion_point(copy_constructor:google.genomics.v1.Position)
}

void Position::SharedCtor() {
  reference_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&position_, 0, reinterpret_cast<char*>(&reverse_strand_) -
    reinterpret_cast<char*>(&position_) + sizeof(reverse_strand_));
  _cached_size_ = 0;
}

Position::~Position() {
  // @@protoc_insertion_point(destructor:google.genomics.v1.Position)
  SharedDtor();
}

void Position::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  reference_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void Position::ArenaDtor(void* object) {
  Position* _this = reinterpret_cast< Position* >(object);
  (void)_this;
}
void Position::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Position::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Position::descriptor() {
  protobuf_google_2fgenomics_2fv1_2fposition_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fgenomics_2fv1_2fposition_2eproto::file_level_metadata[0].descriptor;
}

const Position& Position::default_instance() {
  protobuf_google_2fgenomics_2fv1_2fposition_2eproto::InitDefaults();
  return *internal_default_instance();
}

Position* Position::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Position>(arena);
}

void Position::Clear() {
// @@protoc_insertion_point(message_clear_start:google.genomics.v1.Position)
  reference_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&position_, 0, reinterpret_cast<char*>(&reverse_strand_) -
    reinterpret_cast<char*>(&position_) + sizeof(reverse_strand_));
}

bool Position::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.genomics.v1.Position)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string reference_name = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reference_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->reference_name().data(), this->reference_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.genomics.v1.Position.reference_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 position = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &position_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool reverse_strand = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &reverse_strand_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.genomics.v1.Position)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.genomics.v1.Position)
  return false;
#undef DO_
}

void Position::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.genomics.v1.Position)
  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_name().data(), this->reference_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.Position.reference_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->reference_name(), output);
  }

  // int64 position = 2;
  if (this->position() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->position(), output);
  }

  // bool reverse_strand = 3;
  if (this->reverse_strand() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->reverse_strand(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.genomics.v1.Position)
}

::google::protobuf::uint8* Position::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.genomics.v1.Position)
  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_name().data(), this->reference_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.Position.reference_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->reference_name(), target);
  }

  // int64 position = 2;
  if (this->position() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->position(), target);
  }

  // bool reverse_strand = 3;
  if (this->reverse_strand() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->reverse_strand(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.genomics.v1.Position)
  return target;
}

size_t Position::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.genomics.v1.Position)
  size_t total_size = 0;

  // string reference_name = 1;
  if (this->reference_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->reference_name());
  }

  // int64 position = 2;
  if (this->position() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->position());
  }

  // bool reverse_strand = 3;
  if (this->reverse_strand() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Position::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.genomics.v1.Position)
  GOOGLE_DCHECK_NE(&from, this);
  const Position* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Position>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.genomics.v1.Position)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.genomics.v1.Position)
    MergeFrom(*source);
  }
}

void Position::MergeFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.genomics.v1.Position)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.reference_name().size() > 0) {
    set_reference_name(from.reference_name());
  }
  if (from.position() != 0) {
    set_position(from.position());
  }
  if (from.reverse_strand() != 0) {
    set_reverse_strand(from.reverse_strand());
  }
}

void Position::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.genomics.v1.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Position::CopyFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.genomics.v1.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Position::IsInitialized() const {
  return true;
}

void Position::Swap(Position* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Position* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Position::UnsafeArenaSwap(Position* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Position::InternalSwap(Position* other) {
  reference_name_.Swap(&other->reference_name_);
  std::swap(position_, other->position_);
  std::swap(reverse_strand_, other->reverse_strand_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Position::GetMetadata() const {
  protobuf_google_2fgenomics_2fv1_2fposition_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fgenomics_2fv1_2fposition_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Position

// string reference_name = 1;
void Position::clear_reference_name() {
  reference_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& Position::reference_name() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.reference_name)
  return reference_name_.Get();
}
void Position::set_reference_name(const ::std::string& value) {
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.reference_name)
}
void Position::set_reference_name(const char* value) {
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.Position.reference_name)
}
void Position::set_reference_name(const char* value,
    size_t size) {
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.Position.reference_name)
}
::std::string* Position::mutable_reference_name() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.Position.reference_name)
  return reference_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* Position::release_reference_name() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.Position.reference_name)
  
  return reference_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* Position::unsafe_arena_release_reference_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.Position.reference_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return reference_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void Position::set_allocated_reference_name(::std::string* reference_name) {
  if (reference_name != NULL) {
    
  } else {
    
  }
  reference_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.Position.reference_name)
}
void Position::unsafe_arena_set_allocated_reference_name(
    ::std::string* reference_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (reference_name != NULL) {
    
  } else {
    
  }
  reference_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      reference_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.Position.reference_name)
}

// int64 position = 2;
void Position::clear_position() {
  position_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Position::position() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.position)
  return position_;
}
void Position::set_position(::google::protobuf::int64 value) {
  
  position_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.position)
}

// bool reverse_strand = 3;
void Position::clear_reverse_strand() {
  reverse_strand_ = false;
}
bool Position::reverse_strand() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.reverse_strand)
  return reverse_strand_;
}
void Position::set_reverse_strand(bool value) {
  
  reverse_strand_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.reverse_strand)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace genomics
}  // namespace google

// @@protoc_insertion_point(global_scope)
