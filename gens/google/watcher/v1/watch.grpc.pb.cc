// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/watcher/v1/watch.proto

#include "google/watcher/v1/watch.pb.h"
#include "google/watcher/v1/watch.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace watcher {
namespace v1 {

static const char* Watcher_method_names[] = {
  "/google.watcher.v1.Watcher/Watch",
};

std::unique_ptr< Watcher::Stub> Watcher::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Watcher::Stub> stub(new Watcher::Stub(channel));
  return stub;
}

Watcher::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Watch_(Watcher_method_names[0], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::google::watcher::v1::ChangeBatch>* Watcher::Stub::WatchRaw(::grpc::ClientContext* context, const ::google::watcher::v1::Request& request) {
  return new ::grpc::ClientReader< ::google::watcher::v1::ChangeBatch>(channel_.get(), rpcmethod_Watch_, context, request);
}

::grpc::ClientAsyncReader< ::google::watcher::v1::ChangeBatch>* Watcher::Stub::AsyncWatchRaw(::grpc::ClientContext* context, const ::google::watcher::v1::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReader< ::google::watcher::v1::ChangeBatch>(channel_.get(), cq, rpcmethod_Watch_, context, request, tag);
}

Watcher::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Watcher_method_names[0],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< Watcher::Service, ::google::watcher::v1::Request, ::google::watcher::v1::ChangeBatch>(
          std::mem_fn(&Watcher::Service::Watch), this)));
}

Watcher::Service::~Service() {
}

::grpc::Status Watcher::Service::Watch(::grpc::ServerContext* context, const ::google::watcher::v1::Request* request, ::grpc::ServerWriter< ::google::watcher::v1::ChangeBatch>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace watcher
}  // namespace v1

