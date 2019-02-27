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
#include <grpc/grpc.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>

#include "example.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

class SearchRequestImpl final : public SearchService::Service {
    Status Search(ServerContext* context, const SearchRequest* request,
                  SearchResponse* reply) override {
                      std::string prefix("Hello ");
                      reply->set_response(prefix + request->request());
                      return Status::OK;
                  }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    SearchRequestImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();

    return 0;
}
