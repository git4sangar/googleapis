// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/context.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/context.pb.h"

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
class ContextDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Context> {
} _Context_default_instance_;
class ContextRuleDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ContextRule> {
} _ContextRule_default_instance_;

namespace protobuf_google_2fapi_2fcontext_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Context, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Context, rules_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ContextRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ContextRule, selector_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ContextRule, requested_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ContextRule, provided_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Context)},
  { 5, -1, sizeof(ContextRule)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Context_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ContextRule_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/context.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Context_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _ContextRule_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Context_default_instance_.DefaultConstruct();
  _ContextRule_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\030google/api/context.proto\022\ngoogle.api\"1"
      "\n\007Context\022&\n\005rules\030\001 \003(\0132\027.google.api.Co"
      "ntextRule\"D\n\013ContextRule\022\020\n\010selector\030\001 \001"
      "(\t\022\021\n\trequested\030\002 \003(\t\022\020\n\010provided\030\003 \003(\tB"
      "n\n\016com.google.apiB\014ContextProtoP\001ZEgoogl"
      "e.golang.org/genproto/googleapis/api/ser"
      "viceconfig;serviceconfig\242\002\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 279);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/context.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2fapi_2fcontext_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Context::kRulesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Context::Context()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fcontext_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Context)
}
Context::Context(const Context& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      rules_(from.rules_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Context)
}

void Context::SharedCtor() {
  _cached_size_ = 0;
}

Context::~Context() {
  // @@protoc_insertion_point(destructor:google.api.Context)
  SharedDtor();
}

void Context::SharedDtor() {
}

void Context::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Context::descriptor() {
  protobuf_google_2fapi_2fcontext_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontext_2eproto::file_level_metadata[0].descriptor;
}

const Context& Context::default_instance() {
  protobuf_google_2fapi_2fcontext_2eproto::InitDefaults();
  return *internal_default_instance();
}

Context* Context::New(::google::protobuf::Arena* arena) const {
  Context* n = new Context;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Context::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Context)
  rules_.Clear();
}

bool Context::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Context)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.api.ContextRule rules = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_rules()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:google.api.Context)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Context)
  return false;
#undef DO_
}

void Context::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Context)
  // repeated .google.api.ContextRule rules = 1;
  for (unsigned int i = 0, n = this->rules_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->rules(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.Context)
}

::google::protobuf::uint8* Context::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Context)
  // repeated .google.api.ContextRule rules = 1;
  for (unsigned int i = 0, n = this->rules_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->rules(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.Context)
  return target;
}

size_t Context::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Context)
  size_t total_size = 0;

  // repeated .google.api.ContextRule rules = 1;
  {
    unsigned int count = this->rules_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rules(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Context::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Context)
  GOOGLE_DCHECK_NE(&from, this);
  const Context* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Context>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Context)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Context)
    MergeFrom(*source);
  }
}

void Context::MergeFrom(const Context& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Context)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  rules_.MergeFrom(from.rules_);
}

void Context::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Context)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Context::CopyFrom(const Context& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Context)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Context::IsInitialized() const {
  return true;
}

void Context::Swap(Context* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Context::InternalSwap(Context* other) {
  rules_.UnsafeArenaSwap(&other->rules_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Context::GetMetadata() const {
  protobuf_google_2fapi_2fcontext_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontext_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Context

// repeated .google.api.ContextRule rules = 1;
int Context::rules_size() const {
  return rules_.size();
}
void Context::clear_rules() {
  rules_.Clear();
}
const ::google::api::ContextRule& Context::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Context.rules)
  return rules_.Get(index);
}
::google::api::ContextRule* Context::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Context.rules)
  return rules_.Mutable(index);
}
::google::api::ContextRule* Context::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.Context.rules)
  return rules_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::ContextRule >*
Context::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Context.rules)
  return &rules_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::ContextRule >&
Context::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Context.rules)
  return rules_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ContextRule::kSelectorFieldNumber;
const int ContextRule::kRequestedFieldNumber;
const int ContextRule::kProvidedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ContextRule::ContextRule()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fcontext_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.ContextRule)
}
ContextRule::ContextRule(const ContextRule& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      requested_(from.requested_),
      provided_(from.provided_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  selector_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.selector().size() > 0) {
    selector_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.ContextRule)
}

void ContextRule::SharedCtor() {
  selector_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

ContextRule::~ContextRule() {
  // @@protoc_insertion_point(destructor:google.api.ContextRule)
  SharedDtor();
}

void ContextRule::SharedDtor() {
  selector_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ContextRule::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ContextRule::descriptor() {
  protobuf_google_2fapi_2fcontext_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontext_2eproto::file_level_metadata[1].descriptor;
}

const ContextRule& ContextRule::default_instance() {
  protobuf_google_2fapi_2fcontext_2eproto::InitDefaults();
  return *internal_default_instance();
}

ContextRule* ContextRule::New(::google::protobuf::Arena* arena) const {
  ContextRule* n = new ContextRule;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ContextRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ContextRule)
  requested_.Clear();
  provided_.Clear();
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ContextRule::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.ContextRule)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string selector = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_selector()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->selector().data(), this->selector().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.ContextRule.selector"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string requested = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_requested()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->requested(this->requested_size() - 1).data(),
            this->requested(this->requested_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.ContextRule.requested"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string provided = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_provided()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->provided(this->provided_size() - 1).data(),
            this->provided(this->provided_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.ContextRule.provided"));
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
  // @@protoc_insertion_point(parse_success:google.api.ContextRule)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.ContextRule)
  return false;
#undef DO_
}

void ContextRule::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.ContextRule)
  // string selector = 1;
  if (this->selector().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->selector().data(), this->selector().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.selector");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->selector(), output);
  }

  // repeated string requested = 2;
  for (int i = 0; i < this->requested_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->requested(i).data(), this->requested(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.requested");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->requested(i), output);
  }

  // repeated string provided = 3;
  for (int i = 0; i < this->provided_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provided(i).data(), this->provided(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.provided");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->provided(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.ContextRule)
}

::google::protobuf::uint8* ContextRule::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ContextRule)
  // string selector = 1;
  if (this->selector().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->selector().data(), this->selector().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.selector");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->selector(), target);
  }

  // repeated string requested = 2;
  for (int i = 0; i < this->requested_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->requested(i).data(), this->requested(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.requested");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->requested(i), target);
  }

  // repeated string provided = 3;
  for (int i = 0; i < this->provided_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provided(i).data(), this->provided(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.ContextRule.provided");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->provided(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.ContextRule)
  return target;
}

size_t ContextRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ContextRule)
  size_t total_size = 0;

  // repeated string requested = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->requested_size());
  for (int i = 0; i < this->requested_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->requested(i));
  }

  // repeated string provided = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->provided_size());
  for (int i = 0; i < this->provided_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->provided(i));
  }

  // string selector = 1;
  if (this->selector().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->selector());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ContextRule::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.ContextRule)
  GOOGLE_DCHECK_NE(&from, this);
  const ContextRule* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ContextRule>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.ContextRule)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.ContextRule)
    MergeFrom(*source);
  }
}

void ContextRule::MergeFrom(const ContextRule& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ContextRule)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  requested_.MergeFrom(from.requested_);
  provided_.MergeFrom(from.provided_);
  if (from.selector().size() > 0) {

    selector_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.selector_);
  }
}

void ContextRule::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.ContextRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ContextRule::CopyFrom(const ContextRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ContextRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContextRule::IsInitialized() const {
  return true;
}

void ContextRule::Swap(ContextRule* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ContextRule::InternalSwap(ContextRule* other) {
  requested_.UnsafeArenaSwap(&other->requested_);
  provided_.UnsafeArenaSwap(&other->provided_);
  selector_.Swap(&other->selector_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ContextRule::GetMetadata() const {
  protobuf_google_2fapi_2fcontext_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fcontext_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ContextRule

// string selector = 1;
void ContextRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& ContextRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.selector)
  return selector_.GetNoArena();
}
void ContextRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.ContextRule.selector)
}
#if LANG_CXX11
void ContextRule::set_selector(::std::string&& value) {
  
  selector_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.ContextRule.selector)
}
#endif
void ContextRule::set_selector(const char* value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.selector)
}
void ContextRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.selector)
}
::std::string* ContextRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ContextRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.ContextRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ContextRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.ContextRule.selector)
}

// repeated string requested = 2;
int ContextRule::requested_size() const {
  return requested_.size();
}
void ContextRule::clear_requested() {
  requested_.Clear();
}
const ::std::string& ContextRule::requested(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.requested)
  return requested_.Get(index);
}
::std::string* ContextRule::mutable_requested(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.requested)
  return requested_.Mutable(index);
}
void ContextRule::set_requested(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.ContextRule.requested)
  requested_.Mutable(index)->assign(value);
}
void ContextRule::set_requested(int index, const char* value) {
  requested_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.requested)
}
void ContextRule::set_requested(int index, const char* value, size_t size) {
  requested_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.requested)
}
::std::string* ContextRule::add_requested() {
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.requested)
  return requested_.Add();
}
void ContextRule::add_requested(const ::std::string& value) {
  requested_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.requested)
}
void ContextRule::add_requested(const char* value) {
  requested_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.requested)
}
void ContextRule::add_requested(const char* value, size_t size) {
  requested_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.requested)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
ContextRule::requested() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.requested)
  return requested_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
ContextRule::mutable_requested() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.requested)
  return &requested_;
}

// repeated string provided = 3;
int ContextRule::provided_size() const {
  return provided_.size();
}
void ContextRule::clear_provided() {
  provided_.Clear();
}
const ::std::string& ContextRule::provided(int index) const {
  // @@protoc_insertion_point(field_get:google.api.ContextRule.provided)
  return provided_.Get(index);
}
::std::string* ContextRule::mutable_provided(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.ContextRule.provided)
  return provided_.Mutable(index);
}
void ContextRule::set_provided(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.ContextRule.provided)
  provided_.Mutable(index)->assign(value);
}
void ContextRule::set_provided(int index, const char* value) {
  provided_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.ContextRule.provided)
}
void ContextRule::set_provided(int index, const char* value, size_t size) {
  provided_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.ContextRule.provided)
}
::std::string* ContextRule::add_provided() {
  // @@protoc_insertion_point(field_add_mutable:google.api.ContextRule.provided)
  return provided_.Add();
}
void ContextRule::add_provided(const ::std::string& value) {
  provided_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.ContextRule.provided)
}
void ContextRule::add_provided(const char* value) {
  provided_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.ContextRule.provided)
}
void ContextRule::add_provided(const char* value, size_t size) {
  provided_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.ContextRule.provided)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
ContextRule::provided() const {
  // @@protoc_insertion_point(field_list:google.api.ContextRule.provided)
  return provided_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
ContextRule::mutable_provided() {
  // @@protoc_insertion_point(field_mutable_list:google.api.ContextRule.provided)
  return &provided_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
