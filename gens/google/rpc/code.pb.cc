// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/rpc/code.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/rpc/code.pb.h"

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
namespace rpc {

namespace protobuf_google_2frpc_2fcode_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/rpc/code.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\025google/rpc/code.proto\022\ngoogle.rpc*\267\002\n\004"
      "Code\022\006\n\002OK\020\000\022\r\n\tCANCELLED\020\001\022\013\n\007UNKNOWN\020\002"
      "\022\024\n\020INVALID_ARGUMENT\020\003\022\025\n\021DEADLINE_EXCEE"
      "DED\020\004\022\r\n\tNOT_FOUND\020\005\022\022\n\016ALREADY_EXISTS\020\006"
      "\022\025\n\021PERMISSION_DENIED\020\007\022\023\n\017UNAUTHENTICAT"
      "ED\020\020\022\026\n\022RESOURCE_EXHAUSTED\020\010\022\027\n\023FAILED_P"
      "RECONDITION\020\t\022\013\n\007ABORTED\020\n\022\020\n\014OUT_OF_RAN"
      "GE\020\013\022\021\n\rUNIMPLEMENTED\020\014\022\014\n\010INTERNAL\020\r\022\017\n"
      "\013UNAVAILABLE\020\016\022\r\n\tDATA_LOSS\020\017BX\n\016com.goo"
      "gle.rpcB\tCodeProtoP\001Z3google.golang.org/"
      "genproto/googleapis/rpc/code;code\242\002\003RPCb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 447);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/rpc/code.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2frpc_2fcode_2eproto

const ::google::protobuf::EnumDescriptor* Code_descriptor() {
  protobuf_google_2frpc_2fcode_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2frpc_2fcode_2eproto::file_level_enum_descriptors[0];
}
bool Code_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace google

// @@protoc_insertion_point(global_scope)
