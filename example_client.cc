/*************************************************************************
	> File Name: example_client.cc
	> Author: Zhaohb
	> Mail: zhaohongbo@inspur.com
	> Created Time: Tue 26 Feb 2019 01:59:53 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <iostream>
#include <memory>
#include <string>

#include <grpc++/grpc++.h>
#include <grpc/support/log.h>

#include "example.grpc.pb.h"

using grpc::Channel;
using grpc::ClientAsyncResponseReader;
using grpc::ClientContext;
using grpc::CompletionQueue;
using grpc::Status;


class ExampleClient {
    public:
    explicit ExampleClient(std::shared_ptr<Channel> channel)
    : stub_(SearchService::NewStub(channel)) {}

    std::string Search(const std::string& user) {
        SearchRequest request;
        request.set_request(user);
        SearchResponse reply;

        // Context for the client. It could be used to convey extra information to
        // the server and/or tweak certain RPC behaviors.
        ClientContext context;

        // The producer-consumer queue we use to communicate asynchronously with the
        // gRPC runtime.
        CompletionQueue cq;
        // Storage for the status of the RPC upon completion.
        Status status;

        // 调用stub_->AsyncSayHello异步接口向服务器发送请求
        std::unique_ptr<ClientAsyncResponseReader<SearchResponse> > rpc(
            stub_->AsyncSearch(&context, request, &cq));

        // 设置rpc完成时动作，结果参数，状态，和tag
        rpc->Finish(&reply, &status, (void*)1);
        void* got_tag;
        bool ok = false;

        // CompletionQueue的next会阻塞到有一个结果为止，got_tag会设置成前面的tag，而ok会设置成代码是否成功的拿到了响应
        GPR_ASSERT(cq.Next(&got_tag, &ok));
        // 通过tag区分不同的响应对应的请求
        GPR_ASSERT(got_tag == (void*)1);
        GPR_ASSERT(ok);

        // 最终返回值
        if (status.ok()) {
            return reply.response();
        } else {
            return "RPC failed";
        }
    }

    private:
    std::unique_ptr<SearchService::Stub> stub_;
};

int main(int argc, char** argv) {
    ExampleClient client(grpc::CreateChannel(
        "localhost:50051", grpc::InsecureChannelCredentials()));
    std::string user("world");
    std::string reply = client.Search(user);  // The actual RPC call!
    std::cout << "client received: " << reply << std::endl;

    return 0;
}
