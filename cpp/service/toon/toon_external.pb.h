// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service/toon/toon_external.proto

#ifndef PROTOBUF_service_2ftoon_2ftoon_5fexternal_2eproto__INCLUDED
#define PROTOBUF_service_2ftoon_2ftoon_5fexternal_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/service.h>
#include "lib/rpc/rpc.pb.h"
#include "lib/protocol/entity.pb.h"
#include "lib/protocol/attribute.pb.h"
#include "service/toon/toon.pb.h"
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace toon {
namespace external {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();

class ToonListRequest;
class ToonListResponse;
class SelectToonRequest;
class SelectToonResponse;
class CreateToonRequest;
class CreateToonResponse;
class DeleteToonRequest;
class DeleteToonResponse;

// ===================================================================

class ToonListRequest : public ::google::protobuf::Message {
 public:
  ToonListRequest();
  virtual ~ToonListRequest();
  
  ToonListRequest(const ToonListRequest& from);
  
  inline ToonListRequest& operator=(const ToonListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ToonListRequest& default_instance();
  
  void Swap(ToonListRequest* other);
  
  // implements Message ----------------------------------------------
  
  ToonListRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ToonListRequest& from);
  void MergeFrom(const ToonListRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.ToonListRequest)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static ToonListRequest* default_instance_;
};
// -------------------------------------------------------------------

class ToonListResponse : public ::google::protobuf::Message {
 public:
  ToonListResponse();
  virtual ~ToonListResponse();
  
  ToonListResponse(const ToonListResponse& from);
  
  inline ToonListResponse& operator=(const ToonListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ToonListResponse& default_instance();
  
  void Swap(ToonListResponse* other);
  
  // implements Message ----------------------------------------------
  
  ToonListResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ToonListResponse& from);
  void MergeFrom(const ToonListResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .bnet.protocol.EntityId toons = 2;
  inline int toons_size() const;
  inline void clear_toons();
  static const int kToonsFieldNumber = 2;
  inline const ::bnet::protocol::EntityId& toons(int index) const;
  inline ::bnet::protocol::EntityId* mutable_toons(int index);
  inline ::bnet::protocol::EntityId* add_toons();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::EntityId >&
      toons() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::EntityId >*
      mutable_toons();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.ToonListResponse)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::EntityId > toons_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static ToonListResponse* default_instance_;
};
// -------------------------------------------------------------------

class SelectToonRequest : public ::google::protobuf::Message {
 public:
  SelectToonRequest();
  virtual ~SelectToonRequest();
  
  SelectToonRequest(const SelectToonRequest& from);
  
  inline SelectToonRequest& operator=(const SelectToonRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SelectToonRequest& default_instance();
  
  void Swap(SelectToonRequest* other);
  
  // implements Message ----------------------------------------------
  
  SelectToonRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SelectToonRequest& from);
  void MergeFrom(const SelectToonRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .bnet.protocol.EntityId toon = 1;
  inline bool has_toon() const;
  inline void clear_toon();
  static const int kToonFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& toon() const;
  inline ::bnet::protocol::EntityId* mutable_toon();
  inline ::bnet::protocol::EntityId* release_toon();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.SelectToonRequest)
 private:
  inline void set_has_toon();
  inline void clear_has_toon();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::bnet::protocol::EntityId* toon_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static SelectToonRequest* default_instance_;
};
// -------------------------------------------------------------------

class SelectToonResponse : public ::google::protobuf::Message {
 public:
  SelectToonResponse();
  virtual ~SelectToonResponse();
  
  SelectToonResponse(const SelectToonResponse& from);
  
  inline SelectToonResponse& operator=(const SelectToonResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SelectToonResponse& default_instance();
  
  void Swap(SelectToonResponse* other);
  
  // implements Message ----------------------------------------------
  
  SelectToonResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SelectToonResponse& from);
  void MergeFrom(const SelectToonResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.SelectToonResponse)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static SelectToonResponse* default_instance_;
};
// -------------------------------------------------------------------

class CreateToonRequest : public ::google::protobuf::Message {
 public:
  CreateToonRequest();
  virtual ~CreateToonRequest();
  
  CreateToonRequest(const CreateToonRequest& from);
  
  inline CreateToonRequest& operator=(const CreateToonRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateToonRequest& default_instance();
  
  void Swap(CreateToonRequest* other);
  
  // implements Message ----------------------------------------------
  
  CreateToonRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CreateToonRequest& from);
  void MergeFrom(const CreateToonRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // repeated .bnet.protocol.attribute.Attribute attribute = 2;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 2;
  inline const ::bnet::protocol::attribute::Attribute& attribute(int index) const;
  inline ::bnet::protocol::attribute::Attribute* mutable_attribute(int index);
  inline ::bnet::protocol::attribute::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
      mutable_attribute();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.CreateToonRequest)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute > attribute_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static CreateToonRequest* default_instance_;
};
// -------------------------------------------------------------------

class CreateToonResponse : public ::google::protobuf::Message {
 public:
  CreateToonResponse();
  virtual ~CreateToonResponse();
  
  CreateToonResponse(const CreateToonResponse& from);
  
  inline CreateToonResponse& operator=(const CreateToonResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateToonResponse& default_instance();
  
  void Swap(CreateToonResponse* other);
  
  // implements Message ----------------------------------------------
  
  CreateToonResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CreateToonResponse& from);
  void MergeFrom(const CreateToonResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .bnet.protocol.EntityId toon = 2;
  inline bool has_toon() const;
  inline void clear_toon();
  static const int kToonFieldNumber = 2;
  inline const ::bnet::protocol::EntityId& toon() const;
  inline ::bnet::protocol::EntityId* mutable_toon();
  inline ::bnet::protocol::EntityId* release_toon();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.CreateToonResponse)
 private:
  inline void set_has_toon();
  inline void clear_has_toon();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::bnet::protocol::EntityId* toon_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static CreateToonResponse* default_instance_;
};
// -------------------------------------------------------------------

class DeleteToonRequest : public ::google::protobuf::Message {
 public:
  DeleteToonRequest();
  virtual ~DeleteToonRequest();
  
  DeleteToonRequest(const DeleteToonRequest& from);
  
  inline DeleteToonRequest& operator=(const DeleteToonRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DeleteToonRequest& default_instance();
  
  void Swap(DeleteToonRequest* other);
  
  // implements Message ----------------------------------------------
  
  DeleteToonRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeleteToonRequest& from);
  void MergeFrom(const DeleteToonRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .bnet.protocol.EntityId toon = 1;
  inline bool has_toon() const;
  inline void clear_toon();
  static const int kToonFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& toon() const;
  inline ::bnet::protocol::EntityId* mutable_toon();
  inline ::bnet::protocol::EntityId* release_toon();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.DeleteToonRequest)
 private:
  inline void set_has_toon();
  inline void clear_has_toon();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::bnet::protocol::EntityId* toon_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static DeleteToonRequest* default_instance_;
};
// -------------------------------------------------------------------

class DeleteToonResponse : public ::google::protobuf::Message {
 public:
  DeleteToonResponse();
  virtual ~DeleteToonResponse();
  
  DeleteToonResponse(const DeleteToonResponse& from);
  
  inline DeleteToonResponse& operator=(const DeleteToonResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const DeleteToonResponse& default_instance();
  
  void Swap(DeleteToonResponse* other);
  
  // implements Message ----------------------------------------------
  
  DeleteToonResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeleteToonResponse& from);
  void MergeFrom(const DeleteToonResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.toon.external.DeleteToonResponse)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_AssignDesc_service_2ftoon_2ftoon_5fexternal_2eproto();
  friend void protobuf_ShutdownFile_service_2ftoon_2ftoon_5fexternal_2eproto();
  
  void InitAsDefaultInstance();
  static DeleteToonResponse* default_instance_;
};
// ===================================================================

class ToonServiceExternal_Stub;

class ToonServiceExternal : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline ToonServiceExternal() {};
 public:
  virtual ~ToonServiceExternal();
  
  typedef ToonServiceExternal_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void ToonList(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::ToonListRequest* request,
                       ::bnet::protocol::toon::external::ToonListResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void SelectToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::SelectToonRequest* request,
                       ::bnet::protocol::toon::external::SelectToonResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void CreateToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::CreateToonRequest* request,
                       ::bnet::protocol::toon::external::CreateToonResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void DeleteToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::DeleteToonRequest* request,
                       ::bnet::protocol::toon::external::DeleteToonResponse* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ToonServiceExternal);
};

class ToonServiceExternal_Stub : public ToonServiceExternal {
 public:
  ToonServiceExternal_Stub(::google::protobuf::RpcChannel* channel);
  ToonServiceExternal_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~ToonServiceExternal_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements ToonServiceExternal ------------------------------------------
  
  void ToonList(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::ToonListRequest* request,
                       ::bnet::protocol::toon::external::ToonListResponse* response,
                       ::google::protobuf::Closure* done);
  void SelectToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::SelectToonRequest* request,
                       ::bnet::protocol::toon::external::SelectToonResponse* response,
                       ::google::protobuf::Closure* done);
  void CreateToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::CreateToonRequest* request,
                       ::bnet::protocol::toon::external::CreateToonResponse* response,
                       ::google::protobuf::Closure* done);
  void DeleteToon(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::toon::external::DeleteToonRequest* request,
                       ::bnet::protocol::toon::external::DeleteToonResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ToonServiceExternal_Stub);
};


// ===================================================================


// ===================================================================

// ToonListRequest

// -------------------------------------------------------------------

// ToonListResponse

// repeated .bnet.protocol.EntityId toons = 2;
inline int ToonListResponse::toons_size() const {
  return toons_.size();
}
inline void ToonListResponse::clear_toons() {
  toons_.Clear();
}
inline const ::bnet::protocol::EntityId& ToonListResponse::toons(int index) const {
  return toons_.Get(index);
}
inline ::bnet::protocol::EntityId* ToonListResponse::mutable_toons(int index) {
  return toons_.Mutable(index);
}
inline ::bnet::protocol::EntityId* ToonListResponse::add_toons() {
  return toons_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::EntityId >&
ToonListResponse::toons() const {
  return toons_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::EntityId >*
ToonListResponse::mutable_toons() {
  return &toons_;
}

// -------------------------------------------------------------------

// SelectToonRequest

// required .bnet.protocol.EntityId toon = 1;
inline bool SelectToonRequest::has_toon() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SelectToonRequest::set_has_toon() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SelectToonRequest::clear_has_toon() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SelectToonRequest::clear_toon() {
  if (toon_ != NULL) toon_->::bnet::protocol::EntityId::Clear();
  clear_has_toon();
}
inline const ::bnet::protocol::EntityId& SelectToonRequest::toon() const {
  return toon_ != NULL ? *toon_ : *default_instance_->toon_;
}
inline ::bnet::protocol::EntityId* SelectToonRequest::mutable_toon() {
  set_has_toon();
  if (toon_ == NULL) toon_ = new ::bnet::protocol::EntityId;
  return toon_;
}
inline ::bnet::protocol::EntityId* SelectToonRequest::release_toon() {
  clear_has_toon();
  ::bnet::protocol::EntityId* temp = toon_;
  toon_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// SelectToonResponse

// -------------------------------------------------------------------

// CreateToonRequest

// optional string name = 1;
inline bool CreateToonRequest::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreateToonRequest::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreateToonRequest::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreateToonRequest::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& CreateToonRequest::name() const {
  return *name_;
}
inline void CreateToonRequest::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void CreateToonRequest::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void CreateToonRequest::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CreateToonRequest::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* CreateToonRequest::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .bnet.protocol.attribute.Attribute attribute = 2;
inline int CreateToonRequest::attribute_size() const {
  return attribute_.size();
}
inline void CreateToonRequest::clear_attribute() {
  attribute_.Clear();
}
inline const ::bnet::protocol::attribute::Attribute& CreateToonRequest::attribute(int index) const {
  return attribute_.Get(index);
}
inline ::bnet::protocol::attribute::Attribute* CreateToonRequest::mutable_attribute(int index) {
  return attribute_.Mutable(index);
}
inline ::bnet::protocol::attribute::Attribute* CreateToonRequest::add_attribute() {
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
CreateToonRequest::attribute() const {
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
CreateToonRequest::mutable_attribute() {
  return &attribute_;
}

// -------------------------------------------------------------------

// CreateToonResponse

// optional .bnet.protocol.EntityId toon = 2;
inline bool CreateToonResponse::has_toon() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreateToonResponse::set_has_toon() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreateToonResponse::clear_has_toon() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreateToonResponse::clear_toon() {
  if (toon_ != NULL) toon_->::bnet::protocol::EntityId::Clear();
  clear_has_toon();
}
inline const ::bnet::protocol::EntityId& CreateToonResponse::toon() const {
  return toon_ != NULL ? *toon_ : *default_instance_->toon_;
}
inline ::bnet::protocol::EntityId* CreateToonResponse::mutable_toon() {
  set_has_toon();
  if (toon_ == NULL) toon_ = new ::bnet::protocol::EntityId;
  return toon_;
}
inline ::bnet::protocol::EntityId* CreateToonResponse::release_toon() {
  clear_has_toon();
  ::bnet::protocol::EntityId* temp = toon_;
  toon_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// DeleteToonRequest

// required .bnet.protocol.EntityId toon = 1;
inline bool DeleteToonRequest::has_toon() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeleteToonRequest::set_has_toon() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeleteToonRequest::clear_has_toon() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeleteToonRequest::clear_toon() {
  if (toon_ != NULL) toon_->::bnet::protocol::EntityId::Clear();
  clear_has_toon();
}
inline const ::bnet::protocol::EntityId& DeleteToonRequest::toon() const {
  return toon_ != NULL ? *toon_ : *default_instance_->toon_;
}
inline ::bnet::protocol::EntityId* DeleteToonRequest::mutable_toon() {
  set_has_toon();
  if (toon_ == NULL) toon_ = new ::bnet::protocol::EntityId;
  return toon_;
}
inline ::bnet::protocol::EntityId* DeleteToonRequest::release_toon() {
  clear_has_toon();
  ::bnet::protocol::EntityId* temp = toon_;
  toon_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// DeleteToonResponse


// @@protoc_insertion_point(namespace_scope)

}  // namespace external
}  // namespace toon
}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_service_2ftoon_2ftoon_5fexternal_2eproto__INCLUDED
