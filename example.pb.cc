// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: example.proto

#include "example.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class SearchRequestDefaultTypeInternal {
    public:
    ::google::protobuf::internal::ExplicitlyConstructed<SearchRequest>
    _instance;
} _SearchRequest_default_instance_;
class SearchResponseDefaultTypeInternal {
    public:
    ::google::protobuf::internal::ExplicitlyConstructed<SearchResponse>
    _instance;
} _SearchResponse_default_instance_;
namespace protobuf_example_2eproto {
    static void InitDefaultsSearchRequest() {
        GOOGLE_PROTOBUF_VERIFY_VERSION;

        {
            void* ptr = &::_SearchRequest_default_instance_;
            new (ptr) ::SearchRequest();
            ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
        }
        ::SearchRequest::InitAsDefaultInstance();
    }

    ::google::protobuf::internal::SCCInfo<0> scc_info_SearchRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSearchRequest}, {}};

    static void InitDefaultsSearchResponse() {
        GOOGLE_PROTOBUF_VERIFY_VERSION;

        {
            void* ptr = &::_SearchResponse_default_instance_;
            new (ptr) ::SearchResponse();
            ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
        }
        ::SearchResponse::InitAsDefaultInstance();
    }

    ::google::protobuf::internal::SCCInfo<0> scc_info_SearchResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSearchResponse}, {}};

    void InitDefaults() {
        ::google::protobuf::internal::InitSCC(&scc_info_SearchRequest.base);
        ::google::protobuf::internal::InitSCC(&scc_info_SearchResponse.base);
    }

    ::google::protobuf::Metadata file_level_metadata[2];

    const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        ~0u,  // no _has_bits_
        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SearchRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SearchRequest, request_),
        ~0u,  // no _has_bits_
        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SearchResponse, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SearchResponse, response_),
    };
    static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, sizeof(::SearchRequest)},
        { 6, -1, sizeof(::SearchResponse)},
    };

static ::google::protobuf::Message const * const file_default_instances[] = {
    reinterpret_cast<const ::google::protobuf::Message*>(&::_SearchRequest_default_instance_),
    reinterpret_cast<const ::google::protobuf::Message*>(&::_SearchResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
    AddDescriptors();
    AssignDescriptors(
        "example.proto", schemas, file_default_instances, TableStruct::offsets,
        file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
    static ::google::protobuf::internal::once_flag once;
    ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
    protobuf_AssignDescriptorsOnce();
    ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
    InitDefaults();
    static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        "\n\rexample.proto\" \n\rSearchRequest\022\017\n\007Requ"
        "est\030\001 \001(\t\"\"\n\016SearchResponse\022\020\n\010Response\030"
        "\002 \001(\t2:\n\rSearchService\022)\n\006Search\022\016.Searc"
        "hRequest\032\017.SearchResponseb\006proto3"
    };
    ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
        descriptor, 153);
    ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
        "example.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
    static ::google::protobuf::internal::once_flag once;
    ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
    StaticDescriptorInitializer() {
        AddDescriptors();
    }
} static_descriptor_initializer;
}  // namespace protobuf_example_2eproto

// ===================================================================

void SearchRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SearchRequest::kRequestFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SearchRequest::SearchRequest()
: ::google::protobuf::Message(), _internal_metadata_(NULL) {
    ::google::protobuf::internal::InitSCC(
        &protobuf_example_2eproto::scc_info_SearchRequest.base);
    SharedCtor();
    // @@protoc_insertion_point(constructor:SearchRequest)
}
SearchRequest::SearchRequest(const SearchRequest& from)
: ::google::protobuf::Message(),
_internal_metadata_(NULL) {
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    request_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    if (from.request().size() > 0) {
        request_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_);
    }
    // @@protoc_insertion_point(copy_constructor:SearchRequest)
}

void SearchRequest::SharedCtor() {
    request_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SearchRequest::~SearchRequest() {
    // @@protoc_insertion_point(destructor:SearchRequest)
    SharedDtor();
}

void SearchRequest::SharedDtor() {
    request_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SearchRequest::SetCachedSize(int size) const {
    _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SearchRequest::descriptor() {
    ::protobuf_example_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_example_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SearchRequest& SearchRequest::default_instance() {
    ::google::protobuf::internal::InitSCC(&protobuf_example_2eproto::scc_info_SearchRequest.base);
    return *internal_default_instance();
}


void SearchRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:SearchRequest)
    ::google::protobuf::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void) cached_has_bits;

    request_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    _internal_metadata_.Clear();
}

bool SearchRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
        #define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
        ::google::protobuf::uint32 tag;
        // @@protoc_insertion_point(parse_start:SearchRequest)
        for (;;) {
            ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
            tag = p.first;
            if (!p.second) goto handle_unusual;
            switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
                // string Request = 1;
                case 1: {
                    if (static_cast< ::google::protobuf::uint8>(tag) ==
                        static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
                            DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                                input, this->mutable_request()));
                            DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                this->request().data(), static_cast<int>(this->request().length()),
                                ::google::protobuf::internal::WireFormatLite::PARSE,
                                "SearchRequest.Request"));
                        } else {
                            goto handle_unusual;
                        }
                    break;
                }

                default: {
                    handle_unusual:
                    if (tag == 0) {
                        goto success;
                    }
                    DO_(::google::protobuf::internal::WireFormat::SkipField(
                        input, tag, _internal_metadata_.mutable_unknown_fields()));
                    break;
                }
            }
        }
        success:
        // @@protoc_insertion_point(parse_success:SearchRequest)
        return true;
        failure:
        // @@protoc_insertion_point(parse_failure:SearchRequest)
        return false;
        #undef DO_
    }

void SearchRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
        // @@protoc_insertion_point(serialize_start:SearchRequest)
        ::google::protobuf::uint32 cached_has_bits = 0;
        (void) cached_has_bits;

        // string Request = 1;
        if (this->request().size() > 0) {
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                this->request().data(), static_cast<int>(this->request().length()),
                ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                "SearchRequest.Request");
            ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
                1, this->request(), output);
        }

        if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
            ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
                (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
        }
        // @@protoc_insertion_point(serialize_end:SearchRequest)
    }

::google::protobuf::uint8* SearchRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
        (void)deterministic; // Unused
        // @@protoc_insertion_point(serialize_to_array_start:SearchRequest)
        ::google::protobuf::uint32 cached_has_bits = 0;
        (void) cached_has_bits;

        // string Request = 1;
        if (this->request().size() > 0) {
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                this->request().data(), static_cast<int>(this->request().length()),
                ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                "SearchRequest.Request");
            target =
            ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
                1, this->request(), target);
        }

        if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
            target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
        }
        // @@protoc_insertion_point(serialize_to_array_end:SearchRequest)
        return target;
    }

size_t SearchRequest::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:SearchRequest)
    size_t total_size = 0;

    if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
        total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
    }
    // string Request = 1;
    if (this->request().size() > 0) {
        total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
            this->request());
    }

    int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
}

void SearchRequest::MergeFrom(const ::google::protobuf::Message& from) {
    // @@protoc_insertion_point(generalized_merge_from_start:SearchRequest)
    GOOGLE_DCHECK_NE(&from, this);
    const SearchRequest* source =
    ::google::protobuf::internal::DynamicCastToGenerated<const SearchRequest>(
        &from);
    if (source == NULL) {
        // @@protoc_insertion_point(generalized_merge_from_cast_fail:SearchRequest)
        ::google::protobuf::internal::ReflectionOps::Merge(from, this);
    } else {
        // @@protoc_insertion_point(generalized_merge_from_cast_success:SearchRequest)
        MergeFrom(*source);
    }
}

void SearchRequest::MergeFrom(const SearchRequest& from) {
    // @@protoc_insertion_point(class_specific_merge_from_start:SearchRequest)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void) cached_has_bits;

    if (from.request().size() > 0) {

        request_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_);
    }
}

void SearchRequest::CopyFrom(const ::google::protobuf::Message& from) {
    // @@protoc_insertion_point(generalized_copy_from_start:SearchRequest)
    if (&from == this) return;
    Clear();
    MergeFrom(from);
}

void SearchRequest::CopyFrom(const SearchRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:SearchRequest)
    if (&from == this) return;
    Clear();
    MergeFrom(from);
}

bool SearchRequest::IsInitialized() const {
    return true;
}

void SearchRequest::Swap(SearchRequest* other) {
    if (other == this) return;
    InternalSwap(other);
}
void SearchRequest::InternalSwap(SearchRequest* other) {
    using std::swap;
    request_.Swap(&other->request_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  GetArenaNoVirtual());
    _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SearchRequest::GetMetadata() const {
    protobuf_example_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_example_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SearchResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SearchResponse::kResponseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SearchResponse::SearchResponse()
: ::google::protobuf::Message(), _internal_metadata_(NULL) {
    ::google::protobuf::internal::InitSCC(
        &protobuf_example_2eproto::scc_info_SearchResponse.base);
    SharedCtor();
    // @@protoc_insertion_point(constructor:SearchResponse)
}
SearchResponse::SearchResponse(const SearchResponse& from)
: ::google::protobuf::Message(),
_internal_metadata_(NULL) {
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    if (from.response().size() > 0) {
        response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_);
    }
    // @@protoc_insertion_point(copy_constructor:SearchResponse)
}

void SearchResponse::SharedCtor() {
    response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SearchResponse::~SearchResponse() {
    // @@protoc_insertion_point(destructor:SearchResponse)
    SharedDtor();
}

void SearchResponse::SharedDtor() {
    response_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SearchResponse::SetCachedSize(int size) const {
    _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SearchResponse::descriptor() {
    ::protobuf_example_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_example_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SearchResponse& SearchResponse::default_instance() {
    ::google::protobuf::internal::InitSCC(&protobuf_example_2eproto::scc_info_SearchResponse.base);
    return *internal_default_instance();
}


void SearchResponse::Clear() {
    // @@protoc_insertion_point(message_clear_start:SearchResponse)
    ::google::protobuf::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void) cached_has_bits;

    response_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    _internal_metadata_.Clear();
}

bool SearchResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
        #define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
        ::google::protobuf::uint32 tag;
        // @@protoc_insertion_point(parse_start:SearchResponse)
        for (;;) {
            ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
            tag = p.first;
            if (!p.second) goto handle_unusual;
            switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
                // string Response = 2;
                case 2: {
                    if (static_cast< ::google::protobuf::uint8>(tag) ==
                        static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
                            DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                                input, this->mutable_response()));
                            DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                this->response().data(), static_cast<int>(this->response().length()),
                                ::google::protobuf::internal::WireFormatLite::PARSE,
                                "SearchResponse.Response"));
                        } else {
                            goto handle_unusual;
                        }
                    break;
                }

                default: {
                    handle_unusual:
                    if (tag == 0) {
                        goto success;
                    }
                    DO_(::google::protobuf::internal::WireFormat::SkipField(
                        input, tag, _internal_metadata_.mutable_unknown_fields()));
                    break;
                }
            }
        }
        success:
        // @@protoc_insertion_point(parse_success:SearchResponse)
        return true;
        failure:
        // @@protoc_insertion_point(parse_failure:SearchResponse)
        return false;
        #undef DO_
    }

void SearchResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
        // @@protoc_insertion_point(serialize_start:SearchResponse)
        ::google::protobuf::uint32 cached_has_bits = 0;
        (void) cached_has_bits;

        // string Response = 2;
        if (this->response().size() > 0) {
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                this->response().data(), static_cast<int>(this->response().length()),
                ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                "SearchResponse.Response");
            ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
                2, this->response(), output);
        }

        if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
            ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
                (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
        }
        // @@protoc_insertion_point(serialize_end:SearchResponse)
    }

::google::protobuf::uint8* SearchResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
        (void)deterministic; // Unused
        // @@protoc_insertion_point(serialize_to_array_start:SearchResponse)
        ::google::protobuf::uint32 cached_has_bits = 0;
        (void) cached_has_bits;

        // string Response = 2;
        if (this->response().size() > 0) {
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                this->response().data(), static_cast<int>(this->response().length()),
                ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                "SearchResponse.Response");
            target =
            ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
                2, this->response(), target);
        }

        if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
            target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
        }
        // @@protoc_insertion_point(serialize_to_array_end:SearchResponse)
        return target;
    }

size_t SearchResponse::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:SearchResponse)
    size_t total_size = 0;

    if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
        total_size +=
        ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
            (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
    }
    // string Response = 2;
    if (this->response().size() > 0) {
        total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
            this->response());
    }

    int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
}

void SearchResponse::MergeFrom(const ::google::protobuf::Message& from) {
    // @@protoc_insertion_point(generalized_merge_from_start:SearchResponse)
    GOOGLE_DCHECK_NE(&from, this);
    const SearchResponse* source =
    ::google::protobuf::internal::DynamicCastToGenerated<const SearchResponse>(
        &from);
    if (source == NULL) {
        // @@protoc_insertion_point(generalized_merge_from_cast_fail:SearchResponse)
        ::google::protobuf::internal::ReflectionOps::Merge(from, this);
    } else {
        // @@protoc_insertion_point(generalized_merge_from_cast_success:SearchResponse)
        MergeFrom(*source);
    }
}

void SearchResponse::MergeFrom(const SearchResponse& from) {
    // @@protoc_insertion_point(class_specific_merge_from_start:SearchResponse)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::google::protobuf::uint32 cached_has_bits = 0;
    (void) cached_has_bits;

    if (from.response().size() > 0) {

        response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_);
    }
}

void SearchResponse::CopyFrom(const ::google::protobuf::Message& from) {
    // @@protoc_insertion_point(generalized_copy_from_start:SearchResponse)
    if (&from == this) return;
    Clear();
    MergeFrom(from);
}

void SearchResponse::CopyFrom(const SearchResponse& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:SearchResponse)
    if (&from == this) return;
    Clear();
    MergeFrom(from);
}

bool SearchResponse::IsInitialized() const {
    return true;
}

void SearchResponse::Swap(SearchResponse* other) {
    if (other == this) return;
    InternalSwap(other);
}
void SearchResponse::InternalSwap(SearchResponse* other) {
    using std::swap;
    response_.Swap(&other->response_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                   GetArenaNoVirtual());
    _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SearchResponse::GetMetadata() const {
    protobuf_example_2eproto::protobuf_AssignDescriptorsOnce();
    return ::protobuf_example_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
    namespace protobuf {
        template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::SearchRequest* Arena::CreateMaybeMessage< ::SearchRequest >(Arena* arena) {
            return Arena::CreateInternal< ::SearchRequest >(arena);
        }
        template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::SearchResponse* Arena::CreateMaybeMessage< ::SearchResponse >(Arena* arena) {
            return Arena::CreateInternal< ::SearchResponse >(arena);
        }
    }  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)