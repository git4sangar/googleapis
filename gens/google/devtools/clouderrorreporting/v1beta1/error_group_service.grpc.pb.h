// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/clouderrorreporting/v1beta1/error_group_service.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED
#define GRPC_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED

#include "google/devtools/clouderrorreporting/v1beta1/error_group_service.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {

// Service for retrieving and updating individual error groups.
class ErrorGroupService final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Get the specified group.
    virtual ::grpc::Status GetGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>> AsyncGetGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>>(AsyncGetGroupRaw(context, request, cq));
    }
    // Replace the data for the specified group.
    // Fails if the group does not exist.
    virtual ::grpc::Status UpdateGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>> AsyncUpdateGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>>(AsyncUpdateGroupRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* AsyncGetGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* AsyncUpdateGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>> AsyncGetGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>>(AsyncGetGroupRaw(context, request, cq));
    }
    ::grpc::Status UpdateGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>> AsyncUpdateGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>>(AsyncUpdateGroupRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* AsyncGetGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* AsyncUpdateGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_GetGroup_;
    const ::grpc::RpcMethod rpcmethod_UpdateGroup_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Get the specified group.
    virtual ::grpc::Status GetGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response);
    // Replace the data for the specified group.
    // Fails if the group does not exist.
    virtual ::grpc::Status UpdateGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetGroup() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetGroup(::grpc::ServerContext* context, ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateGroup() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_UpdateGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateGroup(::grpc::ServerContext* context, ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetGroup<WithAsyncMethod_UpdateGroup<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetGroup() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateGroup() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_UpdateGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetGroup() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>(std::bind(&WithStreamedUnaryMethod_GetGroup<BaseClass>::StreamedGetGroup, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetGroup(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest,::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UpdateGroup : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_UpdateGroup() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>(std::bind(&WithStreamedUnaryMethod_UpdateGroup<BaseClass>::StreamedUpdateGroup, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_UpdateGroup() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UpdateGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUpdateGroup(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest,::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetGroup<WithStreamedUnaryMethod_UpdateGroup<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetGroup<WithStreamedUnaryMethod_UpdateGroup<Service > > StreamedService;
};

}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google


#endif  // GRPC_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED
