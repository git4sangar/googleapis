// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/log.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/log.pb.h"

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
namespace api {
class LogDescriptorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LogDescriptor> {
} _LogDescriptor_default_instance_;

namespace protobuf_google_2fapi_2flog_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogDescriptor, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogDescriptor, labels_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogDescriptor, description_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LogDescriptor, display_name_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LogDescriptor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LogDescriptor_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/log.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _LogDescriptor_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2flabel_2eproto::InitDefaults();
  _LogDescriptor_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024google/api/log.proto\022\ngoogle.api\032\026goog"
      "le/api/label.proto\"u\n\rLogDescriptor\022\014\n\004n"
      "ame\030\001 \001(\t\022+\n\006labels\030\002 \003(\0132\033.google.api.L"
      "abelDescriptor\022\023\n\013description\030\003 \001(\t\022\024\n\014d"
      "isplay_name\030\004 \001(\tBj\n\016com.google.apiB\010Log"
      "ProtoP\001ZEgoogle.golang.org/genproto/goog"
      "leapis/api/serviceconfig;serviceconfig\242\002"
      "\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 293);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/log.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2flabel_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fapi_2flog_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogDescriptor::kNameFieldNumber;
const int LogDescriptor::kLabelsFieldNumber;
const int LogDescriptor::kDescriptionFieldNumber;
const int LogDescriptor::kDisplayNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogDescriptor::LogDescriptor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2flog_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.LogDescriptor)
}
LogDescriptor::LogDescriptor(const LogDescriptor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      labels_(from.labels_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.display_name().size() > 0) {
    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.LogDescriptor)
}

void LogDescriptor::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LogDescriptor::~LogDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.LogDescriptor)
  SharedDtor();
}

void LogDescriptor::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LogDescriptor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LogDescriptor::descriptor() {
  protobuf_google_2fapi_2flog_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flog_2eproto::file_level_metadata[0].descriptor;
}

const LogDescriptor& LogDescriptor::default_instance() {
  protobuf_google_2fapi_2flog_2eproto::InitDefaults();
  return *internal_default_instance();
}

LogDescriptor* LogDescriptor::New(::google::protobuf::Arena* arena) const {
  LogDescriptor* n = new LogDescriptor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LogDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.LogDescriptor)
  labels_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LogDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.LogDescriptor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.api.LabelDescriptor labels = 2;
      case 2: {
        if (tag == 18u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_labels()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // string description = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string display_name = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->display_name().data(), this->display_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.display_name"));
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
  // @@protoc_insertion_point(parse_success:google.api.LogDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.LogDescriptor)
  return false;
#undef DO_
}

void LogDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.LogDescriptor)
  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.api.LabelDescriptor labels = 2;
  for (unsigned int i = 0, n = this->labels_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->labels(i), output);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->description(), output);
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), this->display_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.display_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->display_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.LogDescriptor)
}

::google::protobuf::uint8* LogDescriptor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.LogDescriptor)
  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.api.LabelDescriptor labels = 2;
  for (unsigned int i = 0, n = this->labels_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->labels(i), false, target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->description(), target);
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), this->display_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.display_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->display_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.LogDescriptor)
  return target;
}

size_t LogDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.LogDescriptor)
  size_t total_size = 0;

  // repeated .google.api.LabelDescriptor labels = 2;
  {
    unsigned int count = this->labels_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->labels(i));
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->display_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LogDescriptor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.LogDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const LogDescriptor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogDescriptor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.LogDescriptor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.LogDescriptor)
    MergeFrom(*source);
  }
}

void LogDescriptor::MergeFrom(const LogDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.LogDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  labels_.MergeFrom(from.labels_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.display_name().size() > 0) {

    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
}

void LogDescriptor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.LogDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogDescriptor::CopyFrom(const LogDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.LogDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogDescriptor::IsInitialized() const {
  return true;
}

void LogDescriptor::Swap(LogDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogDescriptor::InternalSwap(LogDescriptor* other) {
  labels_.UnsafeArenaSwap(&other->labels_);
  name_.Swap(&other->name_);
  description_.Swap(&other->description_);
  display_name_.Swap(&other->display_name_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LogDescriptor::GetMetadata() const {
  protobuf_google_2fapi_2flog_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2flog_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LogDescriptor

// string name = 1;
void LogDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LogDescriptor::name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.name)
  return name_.GetNoArena();
}
void LogDescriptor::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.name)
}
#if LANG_CXX11
void LogDescriptor::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.name)
}
#endif
void LogDescriptor::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.name)
}
void LogDescriptor::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.name)
}
::std::string* LogDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LogDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LogDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.name)
}

// repeated .google.api.LabelDescriptor labels = 2;
int LogDescriptor::labels_size() const {
  return labels_.size();
}
void LogDescriptor::clear_labels() {
  labels_.Clear();
}
const ::google::api::LabelDescriptor& LogDescriptor::labels(int index) const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.labels)
  return labels_.Get(index);
}
::google::api::LabelDescriptor* LogDescriptor::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.labels)
  return labels_.Mutable(index);
}
::google::api::LabelDescriptor* LogDescriptor::add_labels() {
  // @@protoc_insertion_point(field_add:google.api.LogDescriptor.labels)
  return labels_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
LogDescriptor::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:google.api.LogDescriptor.labels)
  return &labels_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
LogDescriptor::labels() const {
  // @@protoc_insertion_point(field_list:google.api.LogDescriptor.labels)
  return labels_;
}

// string description = 3;
void LogDescriptor::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LogDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.description)
  return description_.GetNoArena();
}
void LogDescriptor::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.description)
}
#if LANG_CXX11
void LogDescriptor::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.description)
}
#endif
void LogDescriptor::set_description(const char* value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.description)
}
void LogDescriptor::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.description)
}
::std::string* LogDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LogDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LogDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.description)
}

// string display_name = 4;
void LogDescriptor::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LogDescriptor::display_name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.display_name)
  return display_name_.GetNoArena();
}
void LogDescriptor::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.display_name)
}
#if LANG_CXX11
void LogDescriptor::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.display_name)
}
#endif
void LogDescriptor::set_display_name(const char* value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.display_name)
}
void LogDescriptor::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.display_name)
}
::std::string* LogDescriptor::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LogDescriptor::release_display_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LogDescriptor::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.display_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
