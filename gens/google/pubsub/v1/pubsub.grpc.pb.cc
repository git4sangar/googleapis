// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/pubsub/v1/pubsub.proto

#include "google/pubsub/v1/pubsub.pb.h"
#include "google/pubsub/v1/pubsub.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace pubsub {
namespace v1 {

static const char* Subscriber_method_names[] = {
  "/google.pubsub.v1.Subscriber/CreateSubscription",
  "/google.pubsub.v1.Subscriber/GetSubscription",
  "/google.pubsub.v1.Subscriber/UpdateSubscription",
  "/google.pubsub.v1.Subscriber/ListSubscriptions",
  "/google.pubsub.v1.Subscriber/DeleteSubscription",
  "/google.pubsub.v1.Subscriber/ModifyAckDeadline",
  "/google.pubsub.v1.Subscriber/Acknowledge",
  "/google.pubsub.v1.Subscriber/Pull",
  "/google.pubsub.v1.Subscriber/StreamingPull",
  "/google.pubsub.v1.Subscriber/ModifyPushConfig",
  "/google.pubsub.v1.Subscriber/ListSnapshots",
  "/google.pubsub.v1.Subscriber/CreateSnapshot",
  "/google.pubsub.v1.Subscriber/DeleteSnapshot",
  "/google.pubsub.v1.Subscriber/Seek",
};

std::unique_ptr< Subscriber::Stub> Subscriber::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Subscriber::Stub> stub(new Subscriber::Stub(channel));
  return stub;
}

Subscriber::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateSubscription_(Subscriber_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetSubscription_(Subscriber_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateSubscription_(Subscriber_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListSubscriptions_(Subscriber_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteSubscription_(Subscriber_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ModifyAckDeadline_(Subscriber_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Acknowledge_(Subscriber_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Pull_(Subscriber_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamingPull_(Subscriber_method_names[8], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_ModifyPushConfig_(Subscriber_method_names[9], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListSnapshots_(Subscriber_method_names[10], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateSnapshot_(Subscriber_method_names[11], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteSnapshot_(Subscriber_method_names[12], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Seek_(Subscriber_method_names[13], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Subscriber::Stub::CreateSubscription(::grpc::ClientContext* context, const ::google::pubsub::v1::Subscription& request, ::google::pubsub::v1::Subscription* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateSubscription_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>* Subscriber::Stub::AsyncCreateSubscriptionRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::Subscription& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>(channel_.get(), cq, rpcmethod_CreateSubscription_, context, request);
}

::grpc::Status Subscriber::Stub::GetSubscription(::grpc::ClientContext* context, const ::google::pubsub::v1::GetSubscriptionRequest& request, ::google::pubsub::v1::Subscription* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetSubscription_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>* Subscriber::Stub::AsyncGetSubscriptionRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::GetSubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>(channel_.get(), cq, rpcmethod_GetSubscription_, context, request);
}

::grpc::Status Subscriber::Stub::UpdateSubscription(::grpc::ClientContext* context, const ::google::pubsub::v1::UpdateSubscriptionRequest& request, ::google::pubsub::v1::Subscription* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateSubscription_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>* Subscriber::Stub::AsyncUpdateSubscriptionRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::UpdateSubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Subscription>(channel_.get(), cq, rpcmethod_UpdateSubscription_, context, request);
}

::grpc::Status Subscriber::Stub::ListSubscriptions(::grpc::ClientContext* context, const ::google::pubsub::v1::ListSubscriptionsRequest& request, ::google::pubsub::v1::ListSubscriptionsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListSubscriptions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListSubscriptionsResponse>* Subscriber::Stub::AsyncListSubscriptionsRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ListSubscriptionsRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListSubscriptionsResponse>(channel_.get(), cq, rpcmethod_ListSubscriptions_, context, request);
}

::grpc::Status Subscriber::Stub::DeleteSubscription(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteSubscriptionRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteSubscription_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Subscriber::Stub::AsyncDeleteSubscriptionRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteSubscriptionRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_DeleteSubscription_, context, request);
}

::grpc::Status Subscriber::Stub::ModifyAckDeadline(::grpc::ClientContext* context, const ::google::pubsub::v1::ModifyAckDeadlineRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ModifyAckDeadline_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Subscriber::Stub::AsyncModifyAckDeadlineRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ModifyAckDeadlineRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_ModifyAckDeadline_, context, request);
}

::grpc::Status Subscriber::Stub::Acknowledge(::grpc::ClientContext* context, const ::google::pubsub::v1::AcknowledgeRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Acknowledge_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Subscriber::Stub::AsyncAcknowledgeRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::AcknowledgeRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_Acknowledge_, context, request);
}

::grpc::Status Subscriber::Stub::Pull(::grpc::ClientContext* context, const ::google::pubsub::v1::PullRequest& request, ::google::pubsub::v1::PullResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Pull_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::PullResponse>* Subscriber::Stub::AsyncPullRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::PullRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::PullResponse>(channel_.get(), cq, rpcmethod_Pull_, context, request);
}

::grpc::ClientReaderWriter< ::google::pubsub::v1::StreamingPullRequest, ::google::pubsub::v1::StreamingPullResponse>* Subscriber::Stub::StreamingPullRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::google::pubsub::v1::StreamingPullRequest, ::google::pubsub::v1::StreamingPullResponse>(channel_.get(), rpcmethod_StreamingPull_, context);
}

::grpc::ClientAsyncReaderWriter< ::google::pubsub::v1::StreamingPullRequest, ::google::pubsub::v1::StreamingPullResponse>* Subscriber::Stub::AsyncStreamingPullRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::google::pubsub::v1::StreamingPullRequest, ::google::pubsub::v1::StreamingPullResponse>(channel_.get(), cq, rpcmethod_StreamingPull_, context, tag);
}

::grpc::Status Subscriber::Stub::ModifyPushConfig(::grpc::ClientContext* context, const ::google::pubsub::v1::ModifyPushConfigRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ModifyPushConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Subscriber::Stub::AsyncModifyPushConfigRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ModifyPushConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_ModifyPushConfig_, context, request);
}

::grpc::Status Subscriber::Stub::ListSnapshots(::grpc::ClientContext* context, const ::google::pubsub::v1::ListSnapshotsRequest& request, ::google::pubsub::v1::ListSnapshotsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListSnapshots_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListSnapshotsResponse>* Subscriber::Stub::AsyncListSnapshotsRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ListSnapshotsRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListSnapshotsResponse>(channel_.get(), cq, rpcmethod_ListSnapshots_, context, request);
}

::grpc::Status Subscriber::Stub::CreateSnapshot(::grpc::ClientContext* context, const ::google::pubsub::v1::CreateSnapshotRequest& request, ::google::pubsub::v1::Snapshot* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateSnapshot_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Snapshot>* Subscriber::Stub::AsyncCreateSnapshotRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::CreateSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Snapshot>(channel_.get(), cq, rpcmethod_CreateSnapshot_, context, request);
}

::grpc::Status Subscriber::Stub::DeleteSnapshot(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteSnapshotRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteSnapshot_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Subscriber::Stub::AsyncDeleteSnapshotRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteSnapshotRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_DeleteSnapshot_, context, request);
}

::grpc::Status Subscriber::Stub::Seek(::grpc::ClientContext* context, const ::google::pubsub::v1::SeekRequest& request, ::google::pubsub::v1::SeekResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Seek_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::SeekResponse>* Subscriber::Stub::AsyncSeekRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::SeekRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::SeekResponse>(channel_.get(), cq, rpcmethod_Seek_, context, request);
}

Subscriber::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::Subscription, ::google::pubsub::v1::Subscription>(
          std::mem_fn(&Subscriber::Service::CreateSubscription), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::GetSubscriptionRequest, ::google::pubsub::v1::Subscription>(
          std::mem_fn(&Subscriber::Service::GetSubscription), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::UpdateSubscriptionRequest, ::google::pubsub::v1::Subscription>(
          std::mem_fn(&Subscriber::Service::UpdateSubscription), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::ListSubscriptionsRequest, ::google::pubsub::v1::ListSubscriptionsResponse>(
          std::mem_fn(&Subscriber::Service::ListSubscriptions), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::DeleteSubscriptionRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Subscriber::Service::DeleteSubscription), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::ModifyAckDeadlineRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Subscriber::Service::ModifyAckDeadline), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::AcknowledgeRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Subscriber::Service::Acknowledge), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::PullRequest, ::google::pubsub::v1::PullResponse>(
          std::mem_fn(&Subscriber::Service::Pull), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[8],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< Subscriber::Service, ::google::pubsub::v1::StreamingPullRequest, ::google::pubsub::v1::StreamingPullResponse>(
          std::mem_fn(&Subscriber::Service::StreamingPull), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[9],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::ModifyPushConfigRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Subscriber::Service::ModifyPushConfig), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[10],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::ListSnapshotsRequest, ::google::pubsub::v1::ListSnapshotsResponse>(
          std::mem_fn(&Subscriber::Service::ListSnapshots), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[11],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::CreateSnapshotRequest, ::google::pubsub::v1::Snapshot>(
          std::mem_fn(&Subscriber::Service::CreateSnapshot), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[12],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::DeleteSnapshotRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Subscriber::Service::DeleteSnapshot), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Subscriber_method_names[13],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Subscriber::Service, ::google::pubsub::v1::SeekRequest, ::google::pubsub::v1::SeekResponse>(
          std::mem_fn(&Subscriber::Service::Seek), this)));
}

Subscriber::Service::~Service() {
}

::grpc::Status Subscriber::Service::CreateSubscription(::grpc::ServerContext* context, const ::google::pubsub::v1::Subscription* request, ::google::pubsub::v1::Subscription* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::GetSubscription(::grpc::ServerContext* context, const ::google::pubsub::v1::GetSubscriptionRequest* request, ::google::pubsub::v1::Subscription* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::UpdateSubscription(::grpc::ServerContext* context, const ::google::pubsub::v1::UpdateSubscriptionRequest* request, ::google::pubsub::v1::Subscription* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::ListSubscriptions(::grpc::ServerContext* context, const ::google::pubsub::v1::ListSubscriptionsRequest* request, ::google::pubsub::v1::ListSubscriptionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::DeleteSubscription(::grpc::ServerContext* context, const ::google::pubsub::v1::DeleteSubscriptionRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::ModifyAckDeadline(::grpc::ServerContext* context, const ::google::pubsub::v1::ModifyAckDeadlineRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::Acknowledge(::grpc::ServerContext* context, const ::google::pubsub::v1::AcknowledgeRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::Pull(::grpc::ServerContext* context, const ::google::pubsub::v1::PullRequest* request, ::google::pubsub::v1::PullResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::StreamingPull(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::pubsub::v1::StreamingPullResponse, ::google::pubsub::v1::StreamingPullRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::ModifyPushConfig(::grpc::ServerContext* context, const ::google::pubsub::v1::ModifyPushConfigRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::ListSnapshots(::grpc::ServerContext* context, const ::google::pubsub::v1::ListSnapshotsRequest* request, ::google::pubsub::v1::ListSnapshotsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::CreateSnapshot(::grpc::ServerContext* context, const ::google::pubsub::v1::CreateSnapshotRequest* request, ::google::pubsub::v1::Snapshot* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::DeleteSnapshot(::grpc::ServerContext* context, const ::google::pubsub::v1::DeleteSnapshotRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Subscriber::Service::Seek(::grpc::ServerContext* context, const ::google::pubsub::v1::SeekRequest* request, ::google::pubsub::v1::SeekResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


static const char* Publisher_method_names[] = {
  "/google.pubsub.v1.Publisher/CreateTopic",
  "/google.pubsub.v1.Publisher/Publish",
  "/google.pubsub.v1.Publisher/GetTopic",
  "/google.pubsub.v1.Publisher/ListTopics",
  "/google.pubsub.v1.Publisher/ListTopicSubscriptions",
  "/google.pubsub.v1.Publisher/DeleteTopic",
};

std::unique_ptr< Publisher::Stub> Publisher::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Publisher::Stub> stub(new Publisher::Stub(channel));
  return stub;
}

Publisher::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateTopic_(Publisher_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Publish_(Publisher_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTopic_(Publisher_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTopics_(Publisher_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListTopicSubscriptions_(Publisher_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteTopic_(Publisher_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Publisher::Stub::CreateTopic(::grpc::ClientContext* context, const ::google::pubsub::v1::Topic& request, ::google::pubsub::v1::Topic* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateTopic_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Topic>* Publisher::Stub::AsyncCreateTopicRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::Topic& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Topic>(channel_.get(), cq, rpcmethod_CreateTopic_, context, request);
}

::grpc::Status Publisher::Stub::Publish(::grpc::ClientContext* context, const ::google::pubsub::v1::PublishRequest& request, ::google::pubsub::v1::PublishResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Publish_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::PublishResponse>* Publisher::Stub::AsyncPublishRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::PublishRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::PublishResponse>(channel_.get(), cq, rpcmethod_Publish_, context, request);
}

::grpc::Status Publisher::Stub::GetTopic(::grpc::ClientContext* context, const ::google::pubsub::v1::GetTopicRequest& request, ::google::pubsub::v1::Topic* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetTopic_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Topic>* Publisher::Stub::AsyncGetTopicRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::GetTopicRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::Topic>(channel_.get(), cq, rpcmethod_GetTopic_, context, request);
}

::grpc::Status Publisher::Stub::ListTopics(::grpc::ClientContext* context, const ::google::pubsub::v1::ListTopicsRequest& request, ::google::pubsub::v1::ListTopicsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListTopics_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListTopicsResponse>* Publisher::Stub::AsyncListTopicsRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ListTopicsRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListTopicsResponse>(channel_.get(), cq, rpcmethod_ListTopics_, context, request);
}

::grpc::Status Publisher::Stub::ListTopicSubscriptions(::grpc::ClientContext* context, const ::google::pubsub::v1::ListTopicSubscriptionsRequest& request, ::google::pubsub::v1::ListTopicSubscriptionsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListTopicSubscriptions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListTopicSubscriptionsResponse>* Publisher::Stub::AsyncListTopicSubscriptionsRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::ListTopicSubscriptionsRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::pubsub::v1::ListTopicSubscriptionsResponse>(channel_.get(), cq, rpcmethod_ListTopicSubscriptions_, context, request);
}

::grpc::Status Publisher::Stub::DeleteTopic(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteTopicRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteTopic_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Publisher::Stub::AsyncDeleteTopicRaw(::grpc::ClientContext* context, const ::google::pubsub::v1::DeleteTopicRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>(channel_.get(), cq, rpcmethod_DeleteTopic_, context, request);
}

Publisher::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::Topic, ::google::pubsub::v1::Topic>(
          std::mem_fn(&Publisher::Service::CreateTopic), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::PublishRequest, ::google::pubsub::v1::PublishResponse>(
          std::mem_fn(&Publisher::Service::Publish), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::GetTopicRequest, ::google::pubsub::v1::Topic>(
          std::mem_fn(&Publisher::Service::GetTopic), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::ListTopicsRequest, ::google::pubsub::v1::ListTopicsResponse>(
          std::mem_fn(&Publisher::Service::ListTopics), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::ListTopicSubscriptionsRequest, ::google::pubsub::v1::ListTopicSubscriptionsResponse>(
          std::mem_fn(&Publisher::Service::ListTopicSubscriptions), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Publisher_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Publisher::Service, ::google::pubsub::v1::DeleteTopicRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Publisher::Service::DeleteTopic), this)));
}

Publisher::Service::~Service() {
}

::grpc::Status Publisher::Service::CreateTopic(::grpc::ServerContext* context, const ::google::pubsub::v1::Topic* request, ::google::pubsub::v1::Topic* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Publisher::Service::Publish(::grpc::ServerContext* context, const ::google::pubsub::v1::PublishRequest* request, ::google::pubsub::v1::PublishResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Publisher::Service::GetTopic(::grpc::ServerContext* context, const ::google::pubsub::v1::GetTopicRequest* request, ::google::pubsub::v1::Topic* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Publisher::Service::ListTopics(::grpc::ServerContext* context, const ::google::pubsub::v1::ListTopicsRequest* request, ::google::pubsub::v1::ListTopicsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Publisher::Service::ListTopicSubscriptions(::grpc::ServerContext* context, const ::google::pubsub::v1::ListTopicSubscriptionsRequest* request, ::google::pubsub::v1::ListTopicSubscriptionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Publisher::Service::DeleteTopic(::grpc::ServerContext* context, const ::google::pubsub::v1::DeleteTopicRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace pubsub
}  // namespace v1

