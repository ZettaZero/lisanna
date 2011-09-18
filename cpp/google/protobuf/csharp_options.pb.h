// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/csharp_options.proto

#ifndef PROTOBUF_google_2fprotobuf_2fcsharp_5foptions_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fcsharp_5foptions_2eproto__INCLUDED

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
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2fcsharp_5foptions_2eproto();

class CSharpFileOptions;
class CSharpFieldOptions;

// ===================================================================

class CSharpFileOptions : public ::google::protobuf::Message {
 public:
  CSharpFileOptions();
  virtual ~CSharpFileOptions();
  
  CSharpFileOptions(const CSharpFileOptions& from);
  
  inline CSharpFileOptions& operator=(const CSharpFileOptions& from) {
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
  static const CSharpFileOptions& default_instance();
  
  void Swap(CSharpFileOptions* other);
  
  // implements Message ----------------------------------------------
  
  CSharpFileOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSharpFileOptions& from);
  void MergeFrom(const CSharpFileOptions& from);
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
  
  // optional string namespace = 1;
  inline bool has_namespace_() const;
  inline void clear_namespace_();
  static const int kNamespaceFieldNumber = 1;
  inline const ::std::string& namespace_() const;
  inline void set_namespace_(const ::std::string& value);
  inline void set_namespace_(const char* value);
  inline void set_namespace_(const char* value, size_t size);
  inline ::std::string* mutable_namespace_();
  inline ::std::string* release_namespace_();
  
  // optional string umbrella_classname = 2;
  inline bool has_umbrella_classname() const;
  inline void clear_umbrella_classname();
  static const int kUmbrellaClassnameFieldNumber = 2;
  inline const ::std::string& umbrella_classname() const;
  inline void set_umbrella_classname(const ::std::string& value);
  inline void set_umbrella_classname(const char* value);
  inline void set_umbrella_classname(const char* value, size_t size);
  inline ::std::string* mutable_umbrella_classname();
  inline ::std::string* release_umbrella_classname();
  
  // optional bool public_classes = 3 [default = true];
  inline bool has_public_classes() const;
  inline void clear_public_classes();
  static const int kPublicClassesFieldNumber = 3;
  inline bool public_classes() const;
  inline void set_public_classes(bool value);
  
  // optional bool multiple_files = 4;
  inline bool has_multiple_files() const;
  inline void clear_multiple_files();
  static const int kMultipleFilesFieldNumber = 4;
  inline bool multiple_files() const;
  inline void set_multiple_files(bool value);
  
  // optional bool nest_classes = 5;
  inline bool has_nest_classes() const;
  inline void clear_nest_classes();
  static const int kNestClassesFieldNumber = 5;
  inline bool nest_classes() const;
  inline void set_nest_classes(bool value);
  
  // optional bool code_contracts = 6;
  inline bool has_code_contracts() const;
  inline void clear_code_contracts();
  static const int kCodeContractsFieldNumber = 6;
  inline bool code_contracts() const;
  inline void set_code_contracts(bool value);
  
  // optional bool expand_namespace_directories = 7;
  inline bool has_expand_namespace_directories() const;
  inline void clear_expand_namespace_directories();
  static const int kExpandNamespaceDirectoriesFieldNumber = 7;
  inline bool expand_namespace_directories() const;
  inline void set_expand_namespace_directories(bool value);
  
  // optional bool cls_compliance = 8 [default = true];
  inline bool has_cls_compliance() const;
  inline void clear_cls_compliance();
  static const int kClsComplianceFieldNumber = 8;
  inline bool cls_compliance() const;
  inline void set_cls_compliance(bool value);
  
  // optional string file_extension = 221 [default = ".cs"];
  inline bool has_file_extension() const;
  inline void clear_file_extension();
  static const int kFileExtensionFieldNumber = 221;
  inline const ::std::string& file_extension() const;
  inline void set_file_extension(const ::std::string& value);
  inline void set_file_extension(const char* value);
  inline void set_file_extension(const char* value, size_t size);
  inline ::std::string* mutable_file_extension();
  inline ::std::string* release_file_extension();
  
  // optional string umbrella_namespace = 222;
  inline bool has_umbrella_namespace() const;
  inline void clear_umbrella_namespace();
  static const int kUmbrellaNamespaceFieldNumber = 222;
  inline const ::std::string& umbrella_namespace() const;
  inline void set_umbrella_namespace(const ::std::string& value);
  inline void set_umbrella_namespace(const char* value);
  inline void set_umbrella_namespace(const char* value, size_t size);
  inline ::std::string* mutable_umbrella_namespace();
  inline ::std::string* release_umbrella_namespace();
  
  // optional string output_directory = 223 [default = "."];
  inline bool has_output_directory() const;
  inline void clear_output_directory();
  static const int kOutputDirectoryFieldNumber = 223;
  inline const ::std::string& output_directory() const;
  inline void set_output_directory(const ::std::string& value);
  inline void set_output_directory(const char* value);
  inline void set_output_directory(const char* value, size_t size);
  inline ::std::string* mutable_output_directory();
  inline ::std::string* release_output_directory();
  
  // optional bool ignore_google_protobuf = 224 [default = false];
  inline bool has_ignore_google_protobuf() const;
  inline void clear_ignore_google_protobuf();
  static const int kIgnoreGoogleProtobufFieldNumber = 224;
  inline bool ignore_google_protobuf() const;
  inline void set_ignore_google_protobuf(bool value);
  
  // @@protoc_insertion_point(class_scope:google.protobuf.CSharpFileOptions)
 private:
  inline void set_has_namespace_();
  inline void clear_has_namespace_();
  inline void set_has_umbrella_classname();
  inline void clear_has_umbrella_classname();
  inline void set_has_public_classes();
  inline void clear_has_public_classes();
  inline void set_has_multiple_files();
  inline void clear_has_multiple_files();
  inline void set_has_nest_classes();
  inline void clear_has_nest_classes();
  inline void set_has_code_contracts();
  inline void clear_has_code_contracts();
  inline void set_has_expand_namespace_directories();
  inline void clear_has_expand_namespace_directories();
  inline void set_has_cls_compliance();
  inline void clear_has_cls_compliance();
  inline void set_has_file_extension();
  inline void clear_has_file_extension();
  inline void set_has_umbrella_namespace();
  inline void clear_has_umbrella_namespace();
  inline void set_has_output_directory();
  inline void clear_has_output_directory();
  inline void set_has_ignore_google_protobuf();
  inline void clear_has_ignore_google_protobuf();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* namespace__;
  ::std::string* umbrella_classname_;
  bool public_classes_;
  bool multiple_files_;
  bool nest_classes_;
  bool code_contracts_;
  bool expand_namespace_directories_;
  bool cls_compliance_;
  bool ignore_google_protobuf_;
  ::std::string* file_extension_;
  static const ::std::string _default_file_extension_;
  ::std::string* umbrella_namespace_;
  ::std::string* output_directory_;
  static const ::std::string _default_output_directory_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
  friend void  protobuf_AddDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  
  void InitAsDefaultInstance();
  static CSharpFileOptions* default_instance_;
};
// -------------------------------------------------------------------

class CSharpFieldOptions : public ::google::protobuf::Message {
 public:
  CSharpFieldOptions();
  virtual ~CSharpFieldOptions();
  
  CSharpFieldOptions(const CSharpFieldOptions& from);
  
  inline CSharpFieldOptions& operator=(const CSharpFieldOptions& from) {
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
  static const CSharpFieldOptions& default_instance();
  
  void Swap(CSharpFieldOptions* other);
  
  // implements Message ----------------------------------------------
  
  CSharpFieldOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSharpFieldOptions& from);
  void MergeFrom(const CSharpFieldOptions& from);
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
  
  // optional string property_name = 1;
  inline bool has_property_name() const;
  inline void clear_property_name();
  static const int kPropertyNameFieldNumber = 1;
  inline const ::std::string& property_name() const;
  inline void set_property_name(const ::std::string& value);
  inline void set_property_name(const char* value);
  inline void set_property_name(const char* value, size_t size);
  inline ::std::string* mutable_property_name();
  inline ::std::string* release_property_name();
  
  // @@protoc_insertion_point(class_scope:google.protobuf.CSharpFieldOptions)
 private:
  inline void set_has_property_name();
  inline void clear_has_property_name();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* property_name_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fcsharp_5foptions_2eproto();
  
  void InitAsDefaultInstance();
  static CSharpFieldOptions* default_instance_;
};
// ===================================================================

static const int kCsharpFileOptionsFieldNumber = 1000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::protobuf::CSharpFileOptions >, 11, false >
  csharp_file_options;
static const int kCsharpFieldOptionsFieldNumber = 1000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::protobuf::CSharpFieldOptions >, 11, false >
  csharp_field_options;

// ===================================================================

// CSharpFileOptions

// optional string namespace = 1;
inline bool CSharpFileOptions::has_namespace_() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSharpFileOptions::set_has_namespace_() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSharpFileOptions::clear_has_namespace_() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSharpFileOptions::clear_namespace_() {
  if (namespace__ != &::google::protobuf::internal::kEmptyString) {
    namespace__->clear();
  }
  clear_has_namespace_();
}
inline const ::std::string& CSharpFileOptions::namespace_() const {
  return *namespace__;
}
inline void CSharpFileOptions::set_namespace_(const ::std::string& value) {
  set_has_namespace_();
  if (namespace__ == &::google::protobuf::internal::kEmptyString) {
    namespace__ = new ::std::string;
  }
  namespace__->assign(value);
}
inline void CSharpFileOptions::set_namespace_(const char* value) {
  set_has_namespace_();
  if (namespace__ == &::google::protobuf::internal::kEmptyString) {
    namespace__ = new ::std::string;
  }
  namespace__->assign(value);
}
inline void CSharpFileOptions::set_namespace_(const char* value, size_t size) {
  set_has_namespace_();
  if (namespace__ == &::google::protobuf::internal::kEmptyString) {
    namespace__ = new ::std::string;
  }
  namespace__->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFileOptions::mutable_namespace_() {
  set_has_namespace_();
  if (namespace__ == &::google::protobuf::internal::kEmptyString) {
    namespace__ = new ::std::string;
  }
  return namespace__;
}
inline ::std::string* CSharpFileOptions::release_namespace_() {
  clear_has_namespace_();
  if (namespace__ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = namespace__;
    namespace__ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string umbrella_classname = 2;
inline bool CSharpFileOptions::has_umbrella_classname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSharpFileOptions::set_has_umbrella_classname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSharpFileOptions::clear_has_umbrella_classname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSharpFileOptions::clear_umbrella_classname() {
  if (umbrella_classname_ != &::google::protobuf::internal::kEmptyString) {
    umbrella_classname_->clear();
  }
  clear_has_umbrella_classname();
}
inline const ::std::string& CSharpFileOptions::umbrella_classname() const {
  return *umbrella_classname_;
}
inline void CSharpFileOptions::set_umbrella_classname(const ::std::string& value) {
  set_has_umbrella_classname();
  if (umbrella_classname_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_classname_ = new ::std::string;
  }
  umbrella_classname_->assign(value);
}
inline void CSharpFileOptions::set_umbrella_classname(const char* value) {
  set_has_umbrella_classname();
  if (umbrella_classname_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_classname_ = new ::std::string;
  }
  umbrella_classname_->assign(value);
}
inline void CSharpFileOptions::set_umbrella_classname(const char* value, size_t size) {
  set_has_umbrella_classname();
  if (umbrella_classname_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_classname_ = new ::std::string;
  }
  umbrella_classname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFileOptions::mutable_umbrella_classname() {
  set_has_umbrella_classname();
  if (umbrella_classname_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_classname_ = new ::std::string;
  }
  return umbrella_classname_;
}
inline ::std::string* CSharpFileOptions::release_umbrella_classname() {
  clear_has_umbrella_classname();
  if (umbrella_classname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = umbrella_classname_;
    umbrella_classname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool public_classes = 3 [default = true];
inline bool CSharpFileOptions::has_public_classes() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CSharpFileOptions::set_has_public_classes() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CSharpFileOptions::clear_has_public_classes() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CSharpFileOptions::clear_public_classes() {
  public_classes_ = true;
  clear_has_public_classes();
}
inline bool CSharpFileOptions::public_classes() const {
  return public_classes_;
}
inline void CSharpFileOptions::set_public_classes(bool value) {
  set_has_public_classes();
  public_classes_ = value;
}

// optional bool multiple_files = 4;
inline bool CSharpFileOptions::has_multiple_files() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CSharpFileOptions::set_has_multiple_files() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CSharpFileOptions::clear_has_multiple_files() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CSharpFileOptions::clear_multiple_files() {
  multiple_files_ = false;
  clear_has_multiple_files();
}
inline bool CSharpFileOptions::multiple_files() const {
  return multiple_files_;
}
inline void CSharpFileOptions::set_multiple_files(bool value) {
  set_has_multiple_files();
  multiple_files_ = value;
}

// optional bool nest_classes = 5;
inline bool CSharpFileOptions::has_nest_classes() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CSharpFileOptions::set_has_nest_classes() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CSharpFileOptions::clear_has_nest_classes() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CSharpFileOptions::clear_nest_classes() {
  nest_classes_ = false;
  clear_has_nest_classes();
}
inline bool CSharpFileOptions::nest_classes() const {
  return nest_classes_;
}
inline void CSharpFileOptions::set_nest_classes(bool value) {
  set_has_nest_classes();
  nest_classes_ = value;
}

// optional bool code_contracts = 6;
inline bool CSharpFileOptions::has_code_contracts() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CSharpFileOptions::set_has_code_contracts() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CSharpFileOptions::clear_has_code_contracts() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CSharpFileOptions::clear_code_contracts() {
  code_contracts_ = false;
  clear_has_code_contracts();
}
inline bool CSharpFileOptions::code_contracts() const {
  return code_contracts_;
}
inline void CSharpFileOptions::set_code_contracts(bool value) {
  set_has_code_contracts();
  code_contracts_ = value;
}

// optional bool expand_namespace_directories = 7;
inline bool CSharpFileOptions::has_expand_namespace_directories() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CSharpFileOptions::set_has_expand_namespace_directories() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CSharpFileOptions::clear_has_expand_namespace_directories() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CSharpFileOptions::clear_expand_namespace_directories() {
  expand_namespace_directories_ = false;
  clear_has_expand_namespace_directories();
}
inline bool CSharpFileOptions::expand_namespace_directories() const {
  return expand_namespace_directories_;
}
inline void CSharpFileOptions::set_expand_namespace_directories(bool value) {
  set_has_expand_namespace_directories();
  expand_namespace_directories_ = value;
}

// optional bool cls_compliance = 8 [default = true];
inline bool CSharpFileOptions::has_cls_compliance() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CSharpFileOptions::set_has_cls_compliance() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CSharpFileOptions::clear_has_cls_compliance() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CSharpFileOptions::clear_cls_compliance() {
  cls_compliance_ = true;
  clear_has_cls_compliance();
}
inline bool CSharpFileOptions::cls_compliance() const {
  return cls_compliance_;
}
inline void CSharpFileOptions::set_cls_compliance(bool value) {
  set_has_cls_compliance();
  cls_compliance_ = value;
}

// optional string file_extension = 221 [default = ".cs"];
inline bool CSharpFileOptions::has_file_extension() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CSharpFileOptions::set_has_file_extension() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CSharpFileOptions::clear_has_file_extension() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CSharpFileOptions::clear_file_extension() {
  if (file_extension_ != &_default_file_extension_) {
    file_extension_->assign(_default_file_extension_);
  }
  clear_has_file_extension();
}
inline const ::std::string& CSharpFileOptions::file_extension() const {
  return *file_extension_;
}
inline void CSharpFileOptions::set_file_extension(const ::std::string& value) {
  set_has_file_extension();
  if (file_extension_ == &_default_file_extension_) {
    file_extension_ = new ::std::string;
  }
  file_extension_->assign(value);
}
inline void CSharpFileOptions::set_file_extension(const char* value) {
  set_has_file_extension();
  if (file_extension_ == &_default_file_extension_) {
    file_extension_ = new ::std::string;
  }
  file_extension_->assign(value);
}
inline void CSharpFileOptions::set_file_extension(const char* value, size_t size) {
  set_has_file_extension();
  if (file_extension_ == &_default_file_extension_) {
    file_extension_ = new ::std::string;
  }
  file_extension_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFileOptions::mutable_file_extension() {
  set_has_file_extension();
  if (file_extension_ == &_default_file_extension_) {
    file_extension_ = new ::std::string(_default_file_extension_);
  }
  return file_extension_;
}
inline ::std::string* CSharpFileOptions::release_file_extension() {
  clear_has_file_extension();
  if (file_extension_ == &_default_file_extension_) {
    return NULL;
  } else {
    ::std::string* temp = file_extension_;
    file_extension_ = const_cast< ::std::string*>(&_default_file_extension_);
    return temp;
  }
}

// optional string umbrella_namespace = 222;
inline bool CSharpFileOptions::has_umbrella_namespace() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CSharpFileOptions::set_has_umbrella_namespace() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CSharpFileOptions::clear_has_umbrella_namespace() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CSharpFileOptions::clear_umbrella_namespace() {
  if (umbrella_namespace_ != &::google::protobuf::internal::kEmptyString) {
    umbrella_namespace_->clear();
  }
  clear_has_umbrella_namespace();
}
inline const ::std::string& CSharpFileOptions::umbrella_namespace() const {
  return *umbrella_namespace_;
}
inline void CSharpFileOptions::set_umbrella_namespace(const ::std::string& value) {
  set_has_umbrella_namespace();
  if (umbrella_namespace_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_namespace_ = new ::std::string;
  }
  umbrella_namespace_->assign(value);
}
inline void CSharpFileOptions::set_umbrella_namespace(const char* value) {
  set_has_umbrella_namespace();
  if (umbrella_namespace_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_namespace_ = new ::std::string;
  }
  umbrella_namespace_->assign(value);
}
inline void CSharpFileOptions::set_umbrella_namespace(const char* value, size_t size) {
  set_has_umbrella_namespace();
  if (umbrella_namespace_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_namespace_ = new ::std::string;
  }
  umbrella_namespace_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFileOptions::mutable_umbrella_namespace() {
  set_has_umbrella_namespace();
  if (umbrella_namespace_ == &::google::protobuf::internal::kEmptyString) {
    umbrella_namespace_ = new ::std::string;
  }
  return umbrella_namespace_;
}
inline ::std::string* CSharpFileOptions::release_umbrella_namespace() {
  clear_has_umbrella_namespace();
  if (umbrella_namespace_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = umbrella_namespace_;
    umbrella_namespace_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string output_directory = 223 [default = "."];
inline bool CSharpFileOptions::has_output_directory() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void CSharpFileOptions::set_has_output_directory() {
  _has_bits_[0] |= 0x00000400u;
}
inline void CSharpFileOptions::clear_has_output_directory() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void CSharpFileOptions::clear_output_directory() {
  if (output_directory_ != &_default_output_directory_) {
    output_directory_->assign(_default_output_directory_);
  }
  clear_has_output_directory();
}
inline const ::std::string& CSharpFileOptions::output_directory() const {
  return *output_directory_;
}
inline void CSharpFileOptions::set_output_directory(const ::std::string& value) {
  set_has_output_directory();
  if (output_directory_ == &_default_output_directory_) {
    output_directory_ = new ::std::string;
  }
  output_directory_->assign(value);
}
inline void CSharpFileOptions::set_output_directory(const char* value) {
  set_has_output_directory();
  if (output_directory_ == &_default_output_directory_) {
    output_directory_ = new ::std::string;
  }
  output_directory_->assign(value);
}
inline void CSharpFileOptions::set_output_directory(const char* value, size_t size) {
  set_has_output_directory();
  if (output_directory_ == &_default_output_directory_) {
    output_directory_ = new ::std::string;
  }
  output_directory_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFileOptions::mutable_output_directory() {
  set_has_output_directory();
  if (output_directory_ == &_default_output_directory_) {
    output_directory_ = new ::std::string(_default_output_directory_);
  }
  return output_directory_;
}
inline ::std::string* CSharpFileOptions::release_output_directory() {
  clear_has_output_directory();
  if (output_directory_ == &_default_output_directory_) {
    return NULL;
  } else {
    ::std::string* temp = output_directory_;
    output_directory_ = const_cast< ::std::string*>(&_default_output_directory_);
    return temp;
  }
}

// optional bool ignore_google_protobuf = 224 [default = false];
inline bool CSharpFileOptions::has_ignore_google_protobuf() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void CSharpFileOptions::set_has_ignore_google_protobuf() {
  _has_bits_[0] |= 0x00000800u;
}
inline void CSharpFileOptions::clear_has_ignore_google_protobuf() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void CSharpFileOptions::clear_ignore_google_protobuf() {
  ignore_google_protobuf_ = false;
  clear_has_ignore_google_protobuf();
}
inline bool CSharpFileOptions::ignore_google_protobuf() const {
  return ignore_google_protobuf_;
}
inline void CSharpFileOptions::set_ignore_google_protobuf(bool value) {
  set_has_ignore_google_protobuf();
  ignore_google_protobuf_ = value;
}

// -------------------------------------------------------------------

// CSharpFieldOptions

// optional string property_name = 1;
inline bool CSharpFieldOptions::has_property_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSharpFieldOptions::set_has_property_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSharpFieldOptions::clear_has_property_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSharpFieldOptions::clear_property_name() {
  if (property_name_ != &::google::protobuf::internal::kEmptyString) {
    property_name_->clear();
  }
  clear_has_property_name();
}
inline const ::std::string& CSharpFieldOptions::property_name() const {
  return *property_name_;
}
inline void CSharpFieldOptions::set_property_name(const ::std::string& value) {
  set_has_property_name();
  if (property_name_ == &::google::protobuf::internal::kEmptyString) {
    property_name_ = new ::std::string;
  }
  property_name_->assign(value);
}
inline void CSharpFieldOptions::set_property_name(const char* value) {
  set_has_property_name();
  if (property_name_ == &::google::protobuf::internal::kEmptyString) {
    property_name_ = new ::std::string;
  }
  property_name_->assign(value);
}
inline void CSharpFieldOptions::set_property_name(const char* value, size_t size) {
  set_has_property_name();
  if (property_name_ == &::google::protobuf::internal::kEmptyString) {
    property_name_ = new ::std::string;
  }
  property_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSharpFieldOptions::mutable_property_name() {
  set_has_property_name();
  if (property_name_ == &::google::protobuf::internal::kEmptyString) {
    property_name_ = new ::std::string;
  }
  return property_name_;
}
inline ::std::string* CSharpFieldOptions::release_property_name() {
  clear_has_property_name();
  if (property_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = property_name_;
    property_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fcsharp_5foptions_2eproto__INCLUDED
