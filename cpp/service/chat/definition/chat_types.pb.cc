// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "service/chat/definition/chat_types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace chat {

namespace {

const ::google::protobuf::Descriptor* ChannelState_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChannelState_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto() {
  protobuf_AddDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "service/chat/definition/chat_types.proto");
  GOOGLE_CHECK(file != NULL);
  ChannelState_descriptor_ = file->message_type(0);
  static const int ChannelState_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChannelState, identity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChannelState, program_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChannelState, locale_),
  };
  ChannelState_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ChannelState_descriptor_,
      ChannelState::default_instance_,
      ChannelState_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChannelState, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChannelState, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ChannelState));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ChannelState_descriptor_, &ChannelState::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto() {
  delete ChannelState::default_instance_;
  delete ChannelState_reflection_;
}

void protobuf_AddDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bnet::protocol::channel::protobuf_AddDesc_service_2fchannel_2fchannel_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(service/chat/definition/chat_types.pro"
    "to\022\022bnet.protocol.chat\032#service/channel/"
    "channel_types.proto\"\226\001\n\014ChannelState\022\020\n\010"
    "identity\030\001 \001(\t\022\017\n\007program\030\002 \001(\007\022\016\n\006local"
    "e\030\003 \001(\0072S\n\004chat\022#.bnet.protocol.channel."
    "ChannelState\030d \001(\0132 .bnet.protocol.chat."
    "ChannelState", 252);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "service/chat/definition/chat_types.proto", &protobuf_RegisterTypes);
  ChannelState::default_instance_ = new ChannelState();
  ChannelState::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::bnet::protocol::channel::ChannelState::default_instance(),
    100, 11, false, false,
    &::bnet::protocol::chat::ChannelState::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto {
  StaticDescriptorInitializer_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto() {
    protobuf_AddDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto();
  }
} static_descriptor_initializer_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ChannelState::kIdentityFieldNumber;
const int ChannelState::kProgramFieldNumber;
const int ChannelState::kLocaleFieldNumber;
#endif  // !_MSC_VER

#ifndef _MSC_VER
const int ChannelState::kChatFieldNumber;
#endif
::google::protobuf::internal::ExtensionIdentifier< ::bnet::protocol::channel::ChannelState,
    ::google::protobuf::internal::MessageTypeTraits< ::bnet::protocol::chat::ChannelState >, 11, false >
  ChannelState::chat(kChatFieldNumber, ::bnet::protocol::chat::ChannelState::default_instance());
ChannelState::ChannelState()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ChannelState::InitAsDefaultInstance() {
}

ChannelState::ChannelState(const ChannelState& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ChannelState::SharedCtor() {
  _cached_size_ = 0;
  identity_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  program_ = 0u;
  locale_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChannelState::~ChannelState() {
  SharedDtor();
}

void ChannelState::SharedDtor() {
  if (identity_ != &::google::protobuf::internal::kEmptyString) {
    delete identity_;
  }
  if (this != default_instance_) {
  }
}

void ChannelState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChannelState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChannelState_descriptor_;
}

const ChannelState& ChannelState::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_service_2fchat_2fdefinition_2fchat_5ftypes_2eproto();  return *default_instance_;
}

ChannelState* ChannelState::default_instance_ = NULL;

ChannelState* ChannelState::New() const {
  return new ChannelState;
}

void ChannelState::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_identity()) {
      if (identity_ != &::google::protobuf::internal::kEmptyString) {
        identity_->clear();
      }
    }
    program_ = 0u;
    locale_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ChannelState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string identity = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_identity()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->identity().data(), this->identity().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_program;
        break;
      }
      
      // optional fixed32 program = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_program:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &program_)));
          set_has_program();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_locale;
        break;
      }
      
      // optional fixed32 locale = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_locale:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &locale_)));
          set_has_locale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ChannelState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string identity = 1;
  if (has_identity()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->identity().data(), this->identity().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->identity(), output);
  }
  
  // optional fixed32 program = 2;
  if (has_program()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->program(), output);
  }
  
  // optional fixed32 locale = 3;
  if (has_locale()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(3, this->locale(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ChannelState::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string identity = 1;
  if (has_identity()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->identity().data(), this->identity().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->identity(), target);
  }
  
  // optional fixed32 program = 2;
  if (has_program()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->program(), target);
  }
  
  // optional fixed32 locale = 3;
  if (has_locale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(3, this->locale(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ChannelState::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string identity = 1;
    if (has_identity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->identity());
    }
    
    // optional fixed32 program = 2;
    if (has_program()) {
      total_size += 1 + 4;
    }
    
    // optional fixed32 locale = 3;
    if (has_locale()) {
      total_size += 1 + 4;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChannelState::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ChannelState* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ChannelState*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ChannelState::MergeFrom(const ChannelState& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_identity()) {
      set_identity(from.identity());
    }
    if (from.has_program()) {
      set_program(from.program());
    }
    if (from.has_locale()) {
      set_locale(from.locale());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ChannelState::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChannelState::CopyFrom(const ChannelState& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChannelState::IsInitialized() const {
  
  return true;
}

void ChannelState::Swap(ChannelState* other) {
  if (other != this) {
    std::swap(identity_, other->identity_);
    std::swap(program_, other->program_);
    std::swap(locale_, other->locale_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ChannelState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChannelState_descriptor_;
  metadata.reflection = ChannelState_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace chat
}  // namespace protocol
}  // namespace bnet

// @@protoc_insertion_point(global_scope)
