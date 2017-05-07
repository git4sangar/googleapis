// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/bigtable/admin/v2/bigtable_table_admin.pb.h"
#include "google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace bigtable {
namespace admin {
namespace v2 {

static const char* BigtableTableAdmin_method_names[] = {
  "/google.bigtable.admin.v2.BigtableTableAdmin/CreateTable",
  "/google.bigtable.admin.v2.BigtableTableAdmin/ListTables",
  "/google.bigtable.admin.v2.BigtableTableAdmin/GetTable",
  "/google.bigtable.admin.v2.BigtableTableAdmin/DeleteTable",
  "/google.bigtable.admin.v2.BigtableTableAdmin/ModifyColumnFamilies",
  "/google.bigtable.admin.v2.BigtableTableAdmin/DropRowRange",
};

std::unique_ptr< BigtableTableAdmin::Stub> BigtableTableAdmin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< BigtableTableAdmin::Stub> stub(new BigtableTableAdmin::Stub(channel));
  return stub;
}

BigtableTableAdmin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateTable_(BigtableTableAdmin_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTables_(BigtableTableAdmin_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTable_(BigtableTableAdmin_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteTable_(BigtableTableAdmin_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ModifyColumnFamilies_(BigtableTableAdmin_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DropRowRange_(BigtableTableAdmin_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BigtableTableAdmin::Stub::CreateTable(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateTableRequest& request, ::google::bigtable::admin::v2::Table* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateTable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>* BigtableTableAdmin::Stub::AsyncCreateTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::CreateTableRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>(channel_.get(), cq, rpcmethod_CreateTable_, context, request);
}

::grpc::Status BigtableTableAdmin::Stub::ListTables(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListTablesRequest& request, ::google::bigtable::admin::v2::ListTablesResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListTables_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListTablesResponse>* BigtableTableAdmin::Stub::AsyncListTablesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ListTablesRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::ListTablesResponse>(channel_.get(), cq, rpcmethod_ListTables_, context, request);
}

::grpc::Status BigtableTableAdmin::Stub::GetTable(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetTableRequest& request, ::google::bigtable::admin::v2::Table* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetTable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>* BigtableTableAdmin::Stub::AsyncGetTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::GetTableRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>(channel_.get(), cq, rpcmethod_GetTable_, context, request);
}

::grpc::Status BigtableTableAdmin::Stub::DeleteTable(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteTableRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteTable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableTableAdmin::Stub::AsyncDeleteTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DeleteTableRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_DeleteTable_, context, request);
}

::grpc::Status BigtableTableAdmin::Stub::ModifyColumnFamilies(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ModifyColumnFamiliesRequest& request, ::google::bigtable::admin::v2::Table* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ModifyColumnFamilies_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>* BigtableTableAdmin::Stub::AsyncModifyColumnFamiliesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::ModifyColumnFamiliesRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::v2::Table>(channel_.get(), cq, rpcmethod_ModifyColumnFamilies_, context, request);
}

::grpc::Status BigtableTableAdmin::Stub::DropRowRange(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DropRowRangeRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DropRowRange_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* BigtableTableAdmin::Stub::AsyncDropRowRangeRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::v2::DropRowRangeRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_DropRowRange_, context, request);
}

BigtableTableAdmin::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::CreateTableRequest, ::google::bigtable::admin::v2::Table>(
          std::mem_fn(&BigtableTableAdmin::Service::CreateTable), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::ListTablesRequest, ::google::bigtable::admin::v2::ListTablesResponse>(
          std::mem_fn(&BigtableTableAdmin::Service::ListTables), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::GetTableRequest, ::google::bigtable::admin::v2::Table>(
          std::mem_fn(&BigtableTableAdmin::Service::GetTable), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::DeleteTableRequest, ::google::protobuf::Empty>(
          std::mem_fn(&BigtableTableAdmin::Service::DeleteTable), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::ModifyColumnFamiliesRequest, ::google::bigtable::admin::v2::Table>(
          std::mem_fn(&BigtableTableAdmin::Service::ModifyColumnFamilies), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BigtableTableAdmin_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BigtableTableAdmin::Service, ::google::bigtable::admin::v2::DropRowRangeRequest, ::google::protobuf::Empty>(
          std::mem_fn(&BigtableTableAdmin::Service::DropRowRange), this)));
}

BigtableTableAdmin::Service::~Service() {
}

::grpc::Status BigtableTableAdmin::Service::CreateTable(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::CreateTableRequest* request, ::google::bigtable::admin::v2::Table* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableTableAdmin::Service::ListTables(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::ListTablesRequest* request, ::google::bigtable::admin::v2::ListTablesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableTableAdmin::Service::GetTable(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::GetTableRequest* request, ::google::bigtable::admin::v2::Table* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableTableAdmin::Service::DeleteTable(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::DeleteTableRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableTableAdmin::Service::ModifyColumnFamilies(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::ModifyColumnFamiliesRequest* request, ::google::bigtable::admin::v2::Table* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BigtableTableAdmin::Service::DropRowRange(::grpc::ServerContext* context, const ::google::bigtable::admin::v2::DropRowRangeRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace bigtable
}  // namespace admin
}  // namespace v2

