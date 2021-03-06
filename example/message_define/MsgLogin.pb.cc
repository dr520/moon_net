// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MsgLogin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgLogin.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace NetMessage {

void protobuf_ShutdownFile_MsgLogin_2eproto() {
  delete C2SReqLogin::default_instance_;
  delete S2CLogin::default_instance_;
  delete C2SReqRegister::default_instance_;
  delete S2CRegister::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MsgLogin_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MsgLogin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  C2SReqLogin::default_instance_ = new C2SReqLogin();
  S2CLogin::default_instance_ = new S2CLogin();
  C2SReqRegister::default_instance_ = new C2SReqRegister();
  S2CRegister::default_instance_ = new S2CRegister();
  C2SReqLogin::default_instance_->InitAsDefaultInstance();
  S2CLogin::default_instance_->InitAsDefaultInstance();
  C2SReqRegister::default_instance_->InitAsDefaultInstance();
  S2CRegister::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgLogin_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MsgLogin_2eproto_once_);
void protobuf_AddDesc_MsgLogin_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MsgLogin_2eproto_once_,
                 &protobuf_AddDesc_MsgLogin_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgLogin_2eproto {
  StaticDescriptorInitializer_MsgLogin_2eproto() {
    protobuf_AddDesc_MsgLogin_2eproto();
  }
} static_descriptor_initializer_MsgLogin_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int C2SReqLogin::kUsernameFieldNumber;
const int C2SReqLogin::kPasswordFieldNumber;
#endif  // !_MSC_VER

C2SReqLogin::C2SReqLogin()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void C2SReqLogin::InitAsDefaultInstance() {
}

C2SReqLogin::C2SReqLogin(const C2SReqLogin& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void C2SReqLogin::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

C2SReqLogin::~C2SReqLogin() {
  SharedDtor();
}

void C2SReqLogin::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void C2SReqLogin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const C2SReqLogin& C2SReqLogin::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MsgLogin_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MsgLogin_2eproto();
#endif
  return *default_instance_;
}

C2SReqLogin* C2SReqLogin::default_instance_ = NULL;

C2SReqLogin* C2SReqLogin::New() const {
  return new C2SReqLogin;
}

void C2SReqLogin::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool C2SReqLogin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string username = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // optional string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void C2SReqLogin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }

}

int C2SReqLogin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // optional string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void C2SReqLogin::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const C2SReqLogin*>(&from));
}

void C2SReqLogin::MergeFrom(const C2SReqLogin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
}

void C2SReqLogin::CopyFrom(const C2SReqLogin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SReqLogin::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void C2SReqLogin::Swap(C2SReqLogin* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string C2SReqLogin::GetTypeName() const {
  return "NetMessage.C2SReqLogin";
}


// ===================================================================

bool S2CLogin_ERet_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const S2CLogin_ERet S2CLogin::Ok;
const S2CLogin_ERet S2CLogin::AccountNotExsit;
const S2CLogin_ERet S2CLogin::PasswordError;
const S2CLogin_ERet S2CLogin::LoginAgain;
const S2CLogin_ERet S2CLogin::ERet_MIN;
const S2CLogin_ERet S2CLogin::ERet_MAX;
const int S2CLogin::ERet_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int S2CLogin::kRetFieldNumber;
const int S2CLogin::kAccountIDFieldNumber;
#endif  // !_MSC_VER

S2CLogin::S2CLogin()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void S2CLogin::InitAsDefaultInstance() {
}

S2CLogin::S2CLogin(const S2CLogin& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void S2CLogin::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  accountid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CLogin::~S2CLogin() {
  SharedDtor();
}

void S2CLogin::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void S2CLogin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const S2CLogin& S2CLogin::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MsgLogin_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MsgLogin_2eproto();
#endif
  return *default_instance_;
}

S2CLogin* S2CLogin::default_instance_ = NULL;

S2CLogin* S2CLogin::New() const {
  return new S2CLogin;
}

void S2CLogin::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
    accountid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool S2CLogin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .NetMessage.S2CLogin.ERet ret = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::NetMessage::S2CLogin_ERet_IsValid(value)) {
            set_ret(static_cast< ::NetMessage::S2CLogin_ERet >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_accountID;
        break;
      }

      // optional uint64 accountID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_accountID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &accountid_)));
          set_has_accountid();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void S2CLogin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .NetMessage.S2CLogin.ERet ret = 1;
  if (has_ret()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->ret(), output);
  }

  // optional uint64 accountID = 2;
  if (has_accountid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->accountid(), output);
  }

}

int S2CLogin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .NetMessage.S2CLogin.ERet ret = 1;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ret());
    }

    // optional uint64 accountID = 2;
    if (has_accountid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->accountid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CLogin::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const S2CLogin*>(&from));
}

void S2CLogin::MergeFrom(const S2CLogin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ret()) {
      set_ret(from.ret());
    }
    if (from.has_accountid()) {
      set_accountid(from.accountid());
    }
  }
}

void S2CLogin::CopyFrom(const S2CLogin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CLogin::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void S2CLogin::Swap(S2CLogin* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(accountid_, other->accountid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string S2CLogin::GetTypeName() const {
  return "NetMessage.S2CLogin";
}


// ===================================================================

#ifndef _MSC_VER
const int C2SReqRegister::kUsernameFieldNumber;
const int C2SReqRegister::kPasswordFieldNumber;
#endif  // !_MSC_VER

C2SReqRegister::C2SReqRegister()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void C2SReqRegister::InitAsDefaultInstance() {
}

C2SReqRegister::C2SReqRegister(const C2SReqRegister& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void C2SReqRegister::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

C2SReqRegister::~C2SReqRegister() {
  SharedDtor();
}

void C2SReqRegister::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void C2SReqRegister::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const C2SReqRegister& C2SReqRegister::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MsgLogin_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MsgLogin_2eproto();
#endif
  return *default_instance_;
}

C2SReqRegister* C2SReqRegister::default_instance_ = NULL;

C2SReqRegister* C2SReqRegister::New() const {
  return new C2SReqRegister;
}

void C2SReqRegister::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool C2SReqRegister::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string username = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // optional string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void C2SReqRegister::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }

}

int C2SReqRegister::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // optional string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void C2SReqRegister::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const C2SReqRegister*>(&from));
}

void C2SReqRegister::MergeFrom(const C2SReqRegister& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
}

void C2SReqRegister::CopyFrom(const C2SReqRegister& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool C2SReqRegister::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void C2SReqRegister::Swap(C2SReqRegister* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string C2SReqRegister::GetTypeName() const {
  return "NetMessage.C2SReqRegister";
}


// ===================================================================

bool S2CRegister_ERet_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const S2CRegister_ERet S2CRegister::Ok;
const S2CRegister_ERet S2CRegister::AccountRepeat;
const S2CRegister_ERet S2CRegister::ERet_MIN;
const S2CRegister_ERet S2CRegister::ERet_MAX;
const int S2CRegister::ERet_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int S2CRegister::kRetFieldNumber;
#endif  // !_MSC_VER

S2CRegister::S2CRegister()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void S2CRegister::InitAsDefaultInstance() {
}

S2CRegister::S2CRegister(const S2CRegister& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void S2CRegister::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CRegister::~S2CRegister() {
  SharedDtor();
}

void S2CRegister::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void S2CRegister::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const S2CRegister& S2CRegister::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MsgLogin_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MsgLogin_2eproto();
#endif
  return *default_instance_;
}

S2CRegister* S2CRegister::default_instance_ = NULL;

S2CRegister* S2CRegister::New() const {
  return new S2CRegister;
}

void S2CRegister::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool S2CRegister::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .NetMessage.S2CRegister.ERet ret = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::NetMessage::S2CRegister_ERet_IsValid(value)) {
            set_ret(static_cast< ::NetMessage::S2CRegister_ERet >(value));
          }
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void S2CRegister::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .NetMessage.S2CRegister.ERet ret = 1;
  if (has_ret()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->ret(), output);
  }

}

int S2CRegister::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .NetMessage.S2CRegister.ERet ret = 1;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->ret());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CRegister::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const S2CRegister*>(&from));
}

void S2CRegister::MergeFrom(const S2CRegister& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ret()) {
      set_ret(from.ret());
    }
  }
}

void S2CRegister::CopyFrom(const S2CRegister& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CRegister::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void S2CRegister::Swap(S2CRegister* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string S2CRegister::GetTypeName() const {
  return "NetMessage.S2CRegister";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NetMessage

// @@protoc_insertion_point(global_scope)
