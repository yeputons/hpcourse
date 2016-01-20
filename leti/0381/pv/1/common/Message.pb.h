// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef PROTOBUF_Message_2eproto__INCLUDED
#define PROTOBUF_Message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace server {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Message_2eproto();
void protobuf_AssignDesc_Message_2eproto();
void protobuf_ShutdownFile_Message_2eproto();

class Message;

// ===================================================================

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
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
  static const Message& default_instance();

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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

  // required string Sender = 1;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 1;
  inline const ::std::string& sender() const;
  inline void set_sender(const ::std::string& value);
  inline void set_sender(const char* value);
  inline void set_sender(const char* value, size_t size);
  inline ::std::string* mutable_sender();
  inline ::std::string* release_sender();
  inline void set_allocated_sender(::std::string* sender);

  // required string Text = 2;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 2;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  inline void set_allocated_text(::std::string* text);

  // optional string Data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const char* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:server.proto.Message)
 private:
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* sender_;
  ::std::string* text_;
  ::std::string* data_;
  friend void  protobuf_AddDesc_Message_2eproto();
  friend void protobuf_AssignDesc_Message_2eproto();
  friend void protobuf_ShutdownFile_Message_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message

// required string Sender = 1;
inline bool Message::has_sender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_sender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_sender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_sender() {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_->clear();
  }
  clear_has_sender();
}
inline const ::std::string& Message::sender() const {
  // @@protoc_insertion_point(field_get:server.proto.Message.Sender)
  return *sender_;
}
inline void Message::set_sender(const ::std::string& value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set:server.proto.Message.Sender)
}
inline void Message::set_sender(const char* value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set_char:server.proto.Message.Sender)
}
inline void Message::set_sender(const char* value, size_t size) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:server.proto.Message.Sender)
}
inline ::std::string* Message::mutable_sender() {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:server.proto.Message.Sender)
  return sender_;
}
inline ::std::string* Message::release_sender() {
  clear_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sender_;
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_sender(::std::string* sender) {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sender_;
  }
  if (sender) {
    set_has_sender();
    sender_ = sender;
  } else {
    clear_has_sender();
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:server.proto.Message.Sender)
}

// required string Text = 2;
inline bool Message::has_text() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_text() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_text() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_text() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& Message::text() const {
  // @@protoc_insertion_point(field_get:server.proto.Message.Text)
  return *text_;
}
inline void Message::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set:server.proto.Message.Text)
}
inline void Message::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set_char:server.proto.Message.Text)
}
inline void Message::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:server.proto.Message.Text)
}
inline ::std::string* Message::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:server.proto.Message.Text)
  return text_;
}
inline ::std::string* Message::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_text(::std::string* text) {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (text) {
    set_has_text();
    text_ = text;
  } else {
    clear_has_text();
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:server.proto.Message.Text)
}

// optional string Data = 3;
inline bool Message::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Message::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Message::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& Message::data() const {
  // @@protoc_insertion_point(field_get:server.proto.Message.Data)
  return *data_;
}
inline void Message::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:server.proto.Message.Data)
}
inline void Message::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:server.proto.Message.Data)
}
inline void Message::set_data(const char* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:server.proto.Message.Data)
}
inline ::std::string* Message::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:server.proto.Message.Data)
  return data_;
}
inline ::std::string* Message::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:server.proto.Message.Data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace server

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Message_2eproto__INCLUDED
