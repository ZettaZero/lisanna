// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GBHandle.proto

#ifndef PROTOBUF_GBHandle_2eproto__INCLUDED
#define PROTOBUF_GBHandle_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace D3 {
namespace GameBalance {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GBHandle_2eproto();
void protobuf_AssignDesc_GBHandle_2eproto();
void protobuf_ShutdownFile_GBHandle_2eproto();

class Handle;

// ===================================================================

class Handle : public ::google::protobuf::Message {
 public:
  Handle();
  virtual ~Handle();
  
  Handle(const Handle& from);
  
  inline Handle& operator=(const Handle& from) {
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
  static const Handle& default_instance();
  
  void Swap(Handle* other);
  
  // implements Message ----------------------------------------------
  
  Handle* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Handle& from);
  void MergeFrom(const Handle& from);
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
  
  // required sint32 game_balance_type = 1;
  inline bool has_game_balance_type() const;
  inline void clear_game_balance_type();
  static const int kGameBalanceTypeFieldNumber = 1;
  inline ::google::protobuf::int32 game_balance_type() const;
  inline void set_game_balance_type(::google::protobuf::int32 value);
  
  // required sfixed32 gbid = 2;
  inline bool has_gbid() const;
  inline void clear_gbid();
  static const int kGbidFieldNumber = 2;
  inline ::google::protobuf::int32 gbid() const;
  inline void set_gbid(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:D3.GameBalance.Handle)
 private:
  inline void set_has_game_balance_type();
  inline void clear_has_game_balance_type();
  inline void set_has_gbid();
  inline void clear_has_gbid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 game_balance_type_;
  ::google::protobuf::int32 gbid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_GBHandle_2eproto();
  friend void protobuf_AssignDesc_GBHandle_2eproto();
  friend void protobuf_ShutdownFile_GBHandle_2eproto();
  
  void InitAsDefaultInstance();
  static Handle* default_instance_;
};
// ===================================================================


// ===================================================================

// Handle

// required sint32 game_balance_type = 1;
inline bool Handle::has_game_balance_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Handle::set_has_game_balance_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Handle::clear_has_game_balance_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Handle::clear_game_balance_type() {
  game_balance_type_ = 0;
  clear_has_game_balance_type();
}
inline ::google::protobuf::int32 Handle::game_balance_type() const {
  return game_balance_type_;
}
inline void Handle::set_game_balance_type(::google::protobuf::int32 value) {
  set_has_game_balance_type();
  game_balance_type_ = value;
}

// required sfixed32 gbid = 2;
inline bool Handle::has_gbid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Handle::set_has_gbid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Handle::clear_has_gbid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Handle::clear_gbid() {
  gbid_ = 0;
  clear_has_gbid();
}
inline ::google::protobuf::int32 Handle::gbid() const {
  return gbid_;
}
inline void Handle::set_gbid(::google::protobuf::int32 value) {
  set_has_gbid();
  gbid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GameBalance
}  // namespace D3

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GBHandle_2eproto__INCLUDED