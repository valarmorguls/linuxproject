// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_info_base.proto

#include "user_info_base.pb.h"

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

namespace ssp {
class UserInfoBaseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<UserInfoBase>
      _instance;
} _UserInfoBase_default_instance_;
}  // namespace ssp
namespace protobuf_user_5finfo_5fbase_2eproto {
static void InitDefaultsUserInfoBase() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ssp::_UserInfoBase_default_instance_;
    new (ptr) ::ssp::UserInfoBase();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ssp::UserInfoBase::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_UserInfoBase =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsUserInfoBase}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_UserInfoBase.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, ver_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, user_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, user_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, nick_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, ret_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, from_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, login_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, last_login_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, fresh_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, logout_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssp::UserInfoBase, password_),
  3,
  4,
  0,
  1,
  5,
  6,
  7,
  8,
  9,
  10,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 16, sizeof(::ssp::UserInfoBase)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ssp::_UserInfoBase_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "user_info_base.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024user_info_base.proto\022\003ssp\"\332\001\n\014UserInfo"
      "Base\022\013\n\003ver\030\001 \001(\r\022\017\n\007user_id\030\002 \001(\r\022\021\n\tus"
      "er_name\030\003 \001(\t\022\021\n\tnick_name\030\004 \001(\t\022\020\n\010ret_"
      "time\030\005 \001(\r\022\014\n\004from\030\006 \001(\r\022\022\n\nlogin_time\030\007"
      " \001(\r\022\027\n\017last_login_time\030\010 \001(\r\022\022\n\nfresh_t"
      "ime\030\t \001(\r\022\023\n\013logout_time\030\n \001(\r\022\020\n\010passwo"
      "rd\030\013 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 248);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "user_info_base.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_user_5finfo_5fbase_2eproto
namespace ssp {

// ===================================================================

void UserInfoBase::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserInfoBase::kVerFieldNumber;
const int UserInfoBase::kUserIdFieldNumber;
const int UserInfoBase::kUserNameFieldNumber;
const int UserInfoBase::kNickNameFieldNumber;
const int UserInfoBase::kRetTimeFieldNumber;
const int UserInfoBase::kFromFieldNumber;
const int UserInfoBase::kLoginTimeFieldNumber;
const int UserInfoBase::kLastLoginTimeFieldNumber;
const int UserInfoBase::kFreshTimeFieldNumber;
const int UserInfoBase::kLogoutTimeFieldNumber;
const int UserInfoBase::kPasswordFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserInfoBase::UserInfoBase()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_user_5finfo_5fbase_2eproto::scc_info_UserInfoBase.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ssp.UserInfoBase)
}
UserInfoBase::UserInfoBase(const UserInfoBase& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_user_name()) {
    user_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_name_);
  }
  nick_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_nick_name()) {
    nick_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nick_name_);
  }
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_password()) {
    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  ::memcpy(&ver_, &from.ver_,
    static_cast<size_t>(reinterpret_cast<char*>(&logout_time_) -
    reinterpret_cast<char*>(&ver_)) + sizeof(logout_time_));
  // @@protoc_insertion_point(copy_constructor:ssp.UserInfoBase)
}

void UserInfoBase::SharedCtor() {
  user_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nick_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ver_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&logout_time_) -
      reinterpret_cast<char*>(&ver_)) + sizeof(logout_time_));
}

UserInfoBase::~UserInfoBase() {
  // @@protoc_insertion_point(destructor:ssp.UserInfoBase)
  SharedDtor();
}

void UserInfoBase::SharedDtor() {
  user_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nick_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void UserInfoBase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* UserInfoBase::descriptor() {
  ::protobuf_user_5finfo_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_5finfo_5fbase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UserInfoBase& UserInfoBase::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_user_5finfo_5fbase_2eproto::scc_info_UserInfoBase.base);
  return *internal_default_instance();
}


void UserInfoBase::Clear() {
// @@protoc_insertion_point(message_clear_start:ssp.UserInfoBase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      user_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      nick_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      password_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 248u) {
    ::memset(&ver_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&login_time_) -
        reinterpret_cast<char*>(&ver_)) + sizeof(login_time_));
  }
  if (cached_has_bits & 1792u) {
    ::memset(&last_login_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&logout_time_) -
        reinterpret_cast<char*>(&last_login_time_)) + sizeof(logout_time_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool UserInfoBase::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ssp.UserInfoBase)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 ver = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_ver();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ver_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 user_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &user_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string user_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->user_name().data(), static_cast<int>(this->user_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ssp.UserInfoBase.user_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string nick_name = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->nick_name().data(), static_cast<int>(this->nick_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ssp.UserInfoBase.nick_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 ret_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_ret_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ret_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 from = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_from();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &from_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 login_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          set_has_login_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &login_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 last_login_time = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          set_has_last_login_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &last_login_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 fresh_time = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          set_has_fresh_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fresh_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 logout_time = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {
          set_has_logout_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &logout_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string password = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->password().data(), static_cast<int>(this->password().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ssp.UserInfoBase.password");
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
  // @@protoc_insertion_point(parse_success:ssp.UserInfoBase)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ssp.UserInfoBase)
  return false;
#undef DO_
}

void UserInfoBase::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ssp.UserInfoBase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 ver = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ver(), output);
  }

  // optional uint32 user_id = 2;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->user_id(), output);
  }

  // optional string user_name = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->user_name().data(), static_cast<int>(this->user_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.user_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->user_name(), output);
  }

  // optional string nick_name = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.nick_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->nick_name(), output);
  }

  // optional uint32 ret_time = 5;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->ret_time(), output);
  }

  // optional uint32 from = 6;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->from(), output);
  }

  // optional uint32 login_time = 7;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->login_time(), output);
  }

  // optional uint32 last_login_time = 8;
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->last_login_time(), output);
  }

  // optional uint32 fresh_time = 9;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->fresh_time(), output);
  }

  // optional uint32 logout_time = 10;
  if (cached_has_bits & 0x00000400u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->logout_time(), output);
  }

  // optional string password = 11;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), static_cast<int>(this->password().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.password");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->password(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ssp.UserInfoBase)
}

::google::protobuf::uint8* UserInfoBase::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ssp.UserInfoBase)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 ver = 1;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ver(), target);
  }

  // optional uint32 user_id = 2;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->user_id(), target);
  }

  // optional string user_name = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->user_name().data(), static_cast<int>(this->user_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.user_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->user_name(), target);
  }

  // optional string nick_name = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.nick_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->nick_name(), target);
  }

  // optional uint32 ret_time = 5;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->ret_time(), target);
  }

  // optional uint32 from = 6;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->from(), target);
  }

  // optional uint32 login_time = 7;
  if (cached_has_bits & 0x00000080u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->login_time(), target);
  }

  // optional uint32 last_login_time = 8;
  if (cached_has_bits & 0x00000100u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->last_login_time(), target);
  }

  // optional uint32 fresh_time = 9;
  if (cached_has_bits & 0x00000200u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->fresh_time(), target);
  }

  // optional uint32 logout_time = 10;
  if (cached_has_bits & 0x00000400u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->logout_time(), target);
  }

  // optional string password = 11;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), static_cast<int>(this->password().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ssp.UserInfoBase.password");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->password(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ssp.UserInfoBase)
  return target;
}

size_t UserInfoBase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ssp.UserInfoBase)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 255u) {
    // optional string user_name = 3;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // optional string nick_name = 4;
    if (has_nick_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->nick_name());
    }

    // optional string password = 11;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // optional uint32 ver = 1;
    if (has_ver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ver());
    }

    // optional uint32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->user_id());
    }

    // optional uint32 ret_time = 5;
    if (has_ret_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ret_time());
    }

    // optional uint32 from = 6;
    if (has_from()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->from());
    }

    // optional uint32 login_time = 7;
    if (has_login_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->login_time());
    }

  }
  if (_has_bits_[8 / 32] & 1792u) {
    // optional uint32 last_login_time = 8;
    if (has_last_login_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->last_login_time());
    }

    // optional uint32 fresh_time = 9;
    if (has_fresh_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->fresh_time());
    }

    // optional uint32 logout_time = 10;
    if (has_logout_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->logout_time());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserInfoBase::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ssp.UserInfoBase)
  GOOGLE_DCHECK_NE(&from, this);
  const UserInfoBase* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UserInfoBase>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ssp.UserInfoBase)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ssp.UserInfoBase)
    MergeFrom(*source);
  }
}

void UserInfoBase::MergeFrom(const UserInfoBase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ssp.UserInfoBase)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_user_name();
      user_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_nick_name();
      nick_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nick_name_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_password();
      password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
    }
    if (cached_has_bits & 0x00000008u) {
      ver_ = from.ver_;
    }
    if (cached_has_bits & 0x00000010u) {
      user_id_ = from.user_id_;
    }
    if (cached_has_bits & 0x00000020u) {
      ret_time_ = from.ret_time_;
    }
    if (cached_has_bits & 0x00000040u) {
      from_ = from.from_;
    }
    if (cached_has_bits & 0x00000080u) {
      login_time_ = from.login_time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 1792u) {
    if (cached_has_bits & 0x00000100u) {
      last_login_time_ = from.last_login_time_;
    }
    if (cached_has_bits & 0x00000200u) {
      fresh_time_ = from.fresh_time_;
    }
    if (cached_has_bits & 0x00000400u) {
      logout_time_ = from.logout_time_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void UserInfoBase::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ssp.UserInfoBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserInfoBase::CopyFrom(const UserInfoBase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ssp.UserInfoBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfoBase::IsInitialized() const {
  return true;
}

void UserInfoBase::Swap(UserInfoBase* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserInfoBase::InternalSwap(UserInfoBase* other) {
  using std::swap;
  user_name_.Swap(&other->user_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  nick_name_.Swap(&other->nick_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  password_.Swap(&other->password_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(ver_, other->ver_);
  swap(user_id_, other->user_id_);
  swap(ret_time_, other->ret_time_);
  swap(from_, other->from_);
  swap(login_time_, other->login_time_);
  swap(last_login_time_, other->last_login_time_);
  swap(fresh_time_, other->fresh_time_);
  swap(logout_time_, other->logout_time_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata UserInfoBase::GetMetadata() const {
  protobuf_user_5finfo_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_user_5finfo_5fbase_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ssp
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ssp::UserInfoBase* Arena::CreateMaybeMessage< ::ssp::UserInfoBase >(Arena* arena) {
  return Arena::CreateInternal< ::ssp::UserInfoBase >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
