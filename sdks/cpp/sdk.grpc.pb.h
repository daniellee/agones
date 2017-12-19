// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: sdk.proto
// Original file comments:
// Copyright 2017 Google Inc. All Rights Reserved.
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
#ifndef GRPC_sdk_2eproto__INCLUDED
#define GRPC_sdk_2eproto__INCLUDED

#include "sdk.pb.h"

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
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace stable {
namespace agon {
namespace io {
namespace sdk {

// SDK service to be used in the GameServer SDK to the Pod Sidecar
class SDK final {
 public:
  static constexpr char const* service_full_name() {
    return "stable.agon.io.sdk.SDK";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Call when the GameServer is ready
    virtual ::grpc::Status Ready(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::stable::agon::io::sdk::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>> AsyncReady(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>>(AsyncReadyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>> PrepareAsyncReady(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>>(PrepareAsyncReadyRaw(context, request, cq));
    }
    // Call when the GmaeServer is shutting down
    virtual ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::stable::agon::io::sdk::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>> AsyncShutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>* AsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>* PrepareAsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agon::io::sdk::Empty>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Ready(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::stable::agon::io::sdk::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>> AsyncReady(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>>(AsyncReadyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>> PrepareAsyncReady(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>>(PrepareAsyncReadyRaw(context, request, cq));
    }
    ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::stable::agon::io::sdk::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>> AsyncShutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>>(PrepareAsyncShutdownRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>* AsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>* PrepareAsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agon::io::sdk::Empty>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agon::io::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Ready_;
    const ::grpc::internal::RpcMethod rpcmethod_Shutdown_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Call when the GameServer is ready
    virtual ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response);
    // Call when the GmaeServer is shutting down
    virtual ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Ready() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReady(::grpc::ServerContext* context, ::stable::agon::io::sdk::Empty* request, ::grpc::ServerAsyncResponseWriter< ::stable::agon::io::sdk::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Shutdown() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::stable::agon::io::sdk::Empty* request, ::grpc::ServerAsyncResponseWriter< ::stable::agon::io::sdk::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Ready<WithAsyncMethod_Shutdown<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Ready() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Shutdown() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Ready() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::stable::agon::io::sdk::Empty, ::stable::agon::io::sdk::Empty>(std::bind(&WithStreamedUnaryMethod_Ready<BaseClass>::StreamedReady, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedReady(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::stable::agon::io::sdk::Empty,::stable::agon::io::sdk::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Shutdown() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::stable::agon::io::sdk::Empty, ::stable::agon::io::sdk::Empty>(std::bind(&WithStreamedUnaryMethod_Shutdown<BaseClass>::StreamedShutdown, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agon::io::sdk::Empty* request, ::stable::agon::io::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedShutdown(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::stable::agon::io::sdk::Empty,::stable::agon::io::sdk::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Ready<WithStreamedUnaryMethod_Shutdown<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Ready<WithStreamedUnaryMethod_Shutdown<Service > > StreamedService;
};

}  // namespace sdk
}  // namespace io
}  // namespace agon
}  // namespace stable


#endif  // GRPC_sdk_2eproto__INCLUDED
