// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_info_base.proto

#ifndef PROTOBUF_INCLUDED_user_5finfo_5fbase_2eproto
#define PROTOBUF_INCLUDED_user_5finfo_5fbase_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_user_5finfo_5fbase_2eproto 

namespace protobuf_user_5finfo_5fbase_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_user_5finfo_5fbase_2eproto
namespace ssp {
class UserInfoBase;
class UserInfoBaseDefaultTypeInternal;
extern UserInfoBaseDefaultTypeInternal _UserInfoBase_default_instance_;
}  // namespace ssp
namespace google {
namespace protobuf {
template<> ::ssp::UserInfoBase* Arena::CreateMaybeMessage<::ssp::UserInfoBase>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssp {

// ===================================================================

class UserInfoBase : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssp.UserInfoBase) */ {
 public:
  UserInfoBase();
  virtual ~UserInfoBase();

  UserInfoBase(const UserInfoBase& from);

  inline UserInfoBase& operator=(const UserInfoBase& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UserInfoBase(UserInfoBase&& from) noexcept
    : UserInfoBase() {
    *this = ::std::move(from);
  }

  inline UserInfoBase& operator=(UserInfoBase&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserInfoBase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserInfoBase* internal_default_instance() {
    return reinterpret_cast<const UserInfoBase*>(
               &_UserInfoBase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(UserInfoBase* other);
  friend void swap(UserInfoBase& a, UserInfoBase& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserInfoBase* New() const final {
    return CreateMaybeMessage<UserInfoBase>(NULL);
  }

  UserInfoBase* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UserInfoBase>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UserInfoBase& from);
  void MergeFrom(const UserInfoBase& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserInfoBase* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string user_name = 3;
  bool has_user_name() const;
  void clear_user_name();
  static const int kUserNameFieldNumber = 3;
  const ::std::string& user_name() const;
  void set_user_name(const ::std::string& value);
  #if LANG_CXX11
  void set_user_name(::std::string&& value);
  #endif
  void set_user_name(const char* value);
  void set_user_name(const char* value, size_t size);
  ::std::string* mutable_user_name();
  ::std::string* release_user_name();
  void set_allocated_user_name(::std::string* user_name);

  // optional string nick_name = 4;
  bool has_nick_name() const;
  void clear_nick_name();
  static const int kNickNameFieldNumber = 4;
  const ::std::string& nick_name() const;
  void set_nick_name(const ::std::string& value);
  #if LANG_CXX11
  void set_nick_name(::std::string&& value);
  #endif
  void set_nick_name(const char* value);
  void set_nick_name(const char* value, size_t size);
  ::std::string* mutable_nick_name();
  ::std::string* release_nick_name();
  void set_allocated_nick_name(::std::string* nick_name);

  // optional string password = 11;
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 11;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // optional uint32 ver = 1;
  bool has_ver() const;
  void clear_ver();
  static const int kVerFieldNumber = 1;
  ::google::protobuf::uint32 ver() const;
  void set_ver(::google::protobuf::uint32 value);

  // optional uint32 user_id = 2;
  bool has_user_id() const;
  void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  ::google::protobuf::uint32 user_id() const;
  void set_user_id(::google::protobuf::uint32 value);

  // optional uint32 ret_time = 5;
  bool has_ret_time() const;
  void clear_ret_time();
  static const int kRetTimeFieldNumber = 5;
  ::google::protobuf::uint32 ret_time() const;
  void set_ret_time(::google::protobuf::uint32 value);

  // optional uint32 from = 6;
  bool has_from() const;
  void clear_from();
  static const int kFromFieldNumber = 6;
  ::google::protobuf::uint32 from() const;
  void set_from(::google::protobuf::uint32 value);

  // optional uint32 login_time = 7;
  bool has_login_time() const;
  void clear_login_time();
  static const int kLoginTimeFieldNumber = 7;
  ::google::protobuf::uint32 login_time() const;
  void set_login_time(::google::protobuf::uint32 value);

  // optional uint32 last_login_time = 8;
  bool has_last_login_time() const;
  void clear_last_login_time();
  static const int kLastLoginTimeFieldNumber = 8;
  ::google::protobuf::uint32 last_login_time() const;
  void set_last_login_time(::google::protobuf::uint32 value);

  // optional uint32 fresh_time = 9;
  bool has_fresh_time() const;
  void clear_fresh_time();
  static const int kFreshTimeFieldNumber = 9;
  ::google::protobuf::uint32 fresh_time() const;
  void set_fresh_time(::google::protobuf::uint32 value);

  // optional uint32 logout_time = 10;
  bool has_logout_time() const;
  void clear_logout_time();
  static const int kLogoutTimeFieldNumber = 10;
  ::google::protobuf::uint32 logout_time() const;
  void set_logout_time(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ssp.UserInfoBase)
 private:
  void set_has_ver();
  void clear_has_ver();
  void set_has_user_id();
  void clear_has_user_id();
  void set_has_user_name();
  void clear_has_user_name();
  void set_has_nick_name();
  void clear_has_nick_name();
  void set_has_ret_time();
  void clear_has_ret_time();
  void set_has_from();
  void clear_has_from();
  void set_has_login_time();
  void clear_has_login_time();
  void set_has_last_login_time();
  void clear_has_last_login_time();
  void set_has_fresh_time();
  void clear_has_fresh_time();
  void set_has_logout_time();
  void clear_has_logout_time();
  void set_has_password();
  void clear_has_password();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr user_name_;
  ::google::protobuf::internal::ArenaStringPtr nick_name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::uint32 ver_;
  ::google::protobuf::uint32 user_id_;
  ::google::protobuf::uint32 ret_time_;
  ::google::protobuf::uint32 from_;
  ::google::protobuf::uint32 login_time_;
  ::google::protobuf::uint32 last_login_time_;
  ::google::protobuf::uint32 fresh_time_;
  ::google::protobuf::uint32 logout_time_;
  friend struct ::protobuf_user_5finfo_5fbase_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserInfoBase

// optional uint32 ver = 1;
inline bool UserInfoBase::has_ver() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UserInfoBase::set_has_ver() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UserInfoBase::clear_has_ver() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UserInfoBase::clear_ver() {
  ver_ = 0u;
  clear_has_ver();
}
inline ::google::protobuf::uint32 UserInfoBase::ver() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.ver)
  return ver_;
}
inline void UserInfoBase::set_ver(::google::protobuf::uint32 value) {
  set_has_ver();
  ver_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.ver)
}

// optional uint32 user_id = 2;
inline bool UserInfoBase::has_user_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UserInfoBase::set_has_user_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UserInfoBase::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UserInfoBase::clear_user_id() {
  user_id_ = 0u;
  clear_has_user_id();
}
inline ::google::protobuf::uint32 UserInfoBase::user_id() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.user_id)
  return user_id_;
}
inline void UserInfoBase::set_user_id(::google::protobuf::uint32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.user_id)
}

// optional string user_name = 3;
inline bool UserInfoBase::has_user_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserInfoBase::set_has_user_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserInfoBase::clear_has_user_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserInfoBase::clear_user_name() {
  user_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_name();
}
inline const ::std::string& UserInfoBase::user_name() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.user_name)
  return user_name_.GetNoArena();
}
inline void UserInfoBase::set_user_name(const ::std::string& value) {
  set_has_user_name();
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.user_name)
}
#if LANG_CXX11
inline void UserInfoBase::set_user_name(::std::string&& value) {
  set_has_user_name();
  user_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssp.UserInfoBase.user_name)
}
#endif
inline void UserInfoBase::set_user_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_user_name();
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssp.UserInfoBase.user_name)
}
inline void UserInfoBase::set_user_name(const char* value, size_t size) {
  set_has_user_name();
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssp.UserInfoBase.user_name)
}
inline ::std::string* UserInfoBase::mutable_user_name() {
  set_has_user_name();
  // @@protoc_insertion_point(field_mutable:ssp.UserInfoBase.user_name)
  return user_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoBase::release_user_name() {
  // @@protoc_insertion_point(field_release:ssp.UserInfoBase.user_name)
  if (!has_user_name()) {
    return NULL;
  }
  clear_has_user_name();
  return user_name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoBase::set_allocated_user_name(::std::string* user_name) {
  if (user_name != NULL) {
    set_has_user_name();
  } else {
    clear_has_user_name();
  }
  user_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_name);
  // @@protoc_insertion_point(field_set_allocated:ssp.UserInfoBase.user_name)
}

// optional string nick_name = 4;
inline bool UserInfoBase::has_nick_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserInfoBase::set_has_nick_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserInfoBase::clear_has_nick_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserInfoBase::clear_nick_name() {
  nick_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_nick_name();
}
inline const ::std::string& UserInfoBase::nick_name() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.nick_name)
  return nick_name_.GetNoArena();
}
inline void UserInfoBase::set_nick_name(const ::std::string& value) {
  set_has_nick_name();
  nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.nick_name)
}
#if LANG_CXX11
inline void UserInfoBase::set_nick_name(::std::string&& value) {
  set_has_nick_name();
  nick_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssp.UserInfoBase.nick_name)
}
#endif
inline void UserInfoBase::set_nick_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_nick_name();
  nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssp.UserInfoBase.nick_name)
}
inline void UserInfoBase::set_nick_name(const char* value, size_t size) {
  set_has_nick_name();
  nick_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssp.UserInfoBase.nick_name)
}
inline ::std::string* UserInfoBase::mutable_nick_name() {
  set_has_nick_name();
  // @@protoc_insertion_point(field_mutable:ssp.UserInfoBase.nick_name)
  return nick_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoBase::release_nick_name() {
  // @@protoc_insertion_point(field_release:ssp.UserInfoBase.nick_name)
  if (!has_nick_name()) {
    return NULL;
  }
  clear_has_nick_name();
  return nick_name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoBase::set_allocated_nick_name(::std::string* nick_name) {
  if (nick_name != NULL) {
    set_has_nick_name();
  } else {
    clear_has_nick_name();
  }
  nick_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nick_name);
  // @@protoc_insertion_point(field_set_allocated:ssp.UserInfoBase.nick_name)
}

// optional uint32 ret_time = 5;
inline bool UserInfoBase::has_ret_time() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserInfoBase::set_has_ret_time() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserInfoBase::clear_has_ret_time() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserInfoBase::clear_ret_time() {
  ret_time_ = 0u;
  clear_has_ret_time();
}
inline ::google::protobuf::uint32 UserInfoBase::ret_time() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.ret_time)
  return ret_time_;
}
inline void UserInfoBase::set_ret_time(::google::protobuf::uint32 value) {
  set_has_ret_time();
  ret_time_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.ret_time)
}

// optional uint32 from = 6;
inline bool UserInfoBase::has_from() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UserInfoBase::set_has_from() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UserInfoBase::clear_has_from() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UserInfoBase::clear_from() {
  from_ = 0u;
  clear_has_from();
}
inline ::google::protobuf::uint32 UserInfoBase::from() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.from)
  return from_;
}
inline void UserInfoBase::set_from(::google::protobuf::uint32 value) {
  set_has_from();
  from_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.from)
}

// optional uint32 login_time = 7;
inline bool UserInfoBase::has_login_time() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UserInfoBase::set_has_login_time() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UserInfoBase::clear_has_login_time() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UserInfoBase::clear_login_time() {
  login_time_ = 0u;
  clear_has_login_time();
}
inline ::google::protobuf::uint32 UserInfoBase::login_time() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.login_time)
  return login_time_;
}
inline void UserInfoBase::set_login_time(::google::protobuf::uint32 value) {
  set_has_login_time();
  login_time_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.login_time)
}

// optional uint32 last_login_time = 8;
inline bool UserInfoBase::has_last_login_time() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void UserInfoBase::set_has_last_login_time() {
  _has_bits_[0] |= 0x00000100u;
}
inline void UserInfoBase::clear_has_last_login_time() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void UserInfoBase::clear_last_login_time() {
  last_login_time_ = 0u;
  clear_has_last_login_time();
}
inline ::google::protobuf::uint32 UserInfoBase::last_login_time() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.last_login_time)
  return last_login_time_;
}
inline void UserInfoBase::set_last_login_time(::google::protobuf::uint32 value) {
  set_has_last_login_time();
  last_login_time_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.last_login_time)
}

// optional uint32 fresh_time = 9;
inline bool UserInfoBase::has_fresh_time() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void UserInfoBase::set_has_fresh_time() {
  _has_bits_[0] |= 0x00000200u;
}
inline void UserInfoBase::clear_has_fresh_time() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void UserInfoBase::clear_fresh_time() {
  fresh_time_ = 0u;
  clear_has_fresh_time();
}
inline ::google::protobuf::uint32 UserInfoBase::fresh_time() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.fresh_time)
  return fresh_time_;
}
inline void UserInfoBase::set_fresh_time(::google::protobuf::uint32 value) {
  set_has_fresh_time();
  fresh_time_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.fresh_time)
}

// optional uint32 logout_time = 10;
inline bool UserInfoBase::has_logout_time() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void UserInfoBase::set_has_logout_time() {
  _has_bits_[0] |= 0x00000400u;
}
inline void UserInfoBase::clear_has_logout_time() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void UserInfoBase::clear_logout_time() {
  logout_time_ = 0u;
  clear_has_logout_time();
}
inline ::google::protobuf::uint32 UserInfoBase::logout_time() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.logout_time)
  return logout_time_;
}
inline void UserInfoBase::set_logout_time(::google::protobuf::uint32 value) {
  set_has_logout_time();
  logout_time_ = value;
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.logout_time)
}

// optional string password = 11;
inline bool UserInfoBase::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserInfoBase::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserInfoBase::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserInfoBase::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password();
}
inline const ::std::string& UserInfoBase::password() const {
  // @@protoc_insertion_point(field_get:ssp.UserInfoBase.password)
  return password_.GetNoArena();
}
inline void UserInfoBase::set_password(const ::std::string& value) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssp.UserInfoBase.password)
}
#if LANG_CXX11
inline void UserInfoBase::set_password(::std::string&& value) {
  set_has_password();
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssp.UserInfoBase.password)
}
#endif
inline void UserInfoBase::set_password(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssp.UserInfoBase.password)
}
inline void UserInfoBase::set_password(const char* value, size_t size) {
  set_has_password();
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssp.UserInfoBase.password)
}
inline ::std::string* UserInfoBase::mutable_password() {
  set_has_password();
  // @@protoc_insertion_point(field_mutable:ssp.UserInfoBase.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoBase::release_password() {
  // @@protoc_insertion_point(field_release:ssp.UserInfoBase.password)
  if (!has_password()) {
    return NULL;
  }
  clear_has_password();
  return password_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoBase::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    set_has_password();
  } else {
    clear_has_password();
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:ssp.UserInfoBase.password)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_user_5finfo_5fbase_2eproto
