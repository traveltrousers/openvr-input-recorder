// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ovr_device.proto

#ifndef PROTOBUF_ovr_5fdevice_2eproto__INCLUDED
#define PROTOBUF_ovr_5fdevice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
class OVRDevice;
class OVRDeviceDefaultTypeInternal;
extern OVRDeviceDefaultTypeInternal _OVRDevice_default_instance_;
class OVRDeviceProperty;
class OVRDevicePropertyDefaultTypeInternal;
extern OVRDevicePropertyDefaultTypeInternal _OVRDeviceProperty_default_instance_;
class OVRSample;
class OVRSampleDefaultTypeInternal;
extern OVRSampleDefaultTypeInternal _OVRSample_default_instance_;
class OVRTimeline;
class OVRTimelineDefaultTypeInternal;
extern OVRTimelineDefaultTypeInternal _OVRTimeline_default_instance_;
namespace google {
namespace protobuf {
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace protobuf_ovr_5fdevice_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_ovr_5fdevice_2eproto

enum OVRDeviceProperty_Type {
  OVRDeviceProperty_Type_Int32 = 0,
  OVRDeviceProperty_Type_Uint64 = 1,
  OVRDeviceProperty_Type_Bool = 2,
  OVRDeviceProperty_Type_Float = 3,
  OVRDeviceProperty_Type_String = 4,
  OVRDeviceProperty_Type_Matrix34 = 5,
  OVRDeviceProperty_Type_OVRDeviceProperty_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  OVRDeviceProperty_Type_OVRDeviceProperty_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool OVRDeviceProperty_Type_IsValid(int value);
const OVRDeviceProperty_Type OVRDeviceProperty_Type_Type_MIN = OVRDeviceProperty_Type_Int32;
const OVRDeviceProperty_Type OVRDeviceProperty_Type_Type_MAX = OVRDeviceProperty_Type_Matrix34;
const int OVRDeviceProperty_Type_Type_ARRAYSIZE = OVRDeviceProperty_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* OVRDeviceProperty_Type_descriptor();
inline const ::std::string& OVRDeviceProperty_Type_Name(OVRDeviceProperty_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    OVRDeviceProperty_Type_descriptor(), value);
}
inline bool OVRDeviceProperty_Type_Parse(
    const ::std::string& name, OVRDeviceProperty_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OVRDeviceProperty_Type>(
    OVRDeviceProperty_Type_descriptor(), name, value);
}
// ===================================================================

class OVRDeviceProperty : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OVRDeviceProperty) */ {
 public:
  OVRDeviceProperty();
  virtual ~OVRDeviceProperty();

  OVRDeviceProperty(const OVRDeviceProperty& from);

  inline OVRDeviceProperty& operator=(const OVRDeviceProperty& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OVRDeviceProperty& default_instance();

  static inline const OVRDeviceProperty* internal_default_instance() {
    return reinterpret_cast<const OVRDeviceProperty*>(
               &_OVRDeviceProperty_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OVRDeviceProperty* other);

  // implements Message ----------------------------------------------

  inline OVRDeviceProperty* New() const PROTOBUF_FINAL { return New(NULL); }

  OVRDeviceProperty* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OVRDeviceProperty& from);
  void MergeFrom(const OVRDeviceProperty& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OVRDeviceProperty* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef OVRDeviceProperty_Type Type;
  static const Type Int32 =
    OVRDeviceProperty_Type_Int32;
  static const Type Uint64 =
    OVRDeviceProperty_Type_Uint64;
  static const Type Bool =
    OVRDeviceProperty_Type_Bool;
  static const Type Float =
    OVRDeviceProperty_Type_Float;
  static const Type String =
    OVRDeviceProperty_Type_String;
  static const Type Matrix34 =
    OVRDeviceProperty_Type_Matrix34;
  static inline bool Type_IsValid(int value) {
    return OVRDeviceProperty_Type_IsValid(value);
  }
  static const Type Type_MIN =
    OVRDeviceProperty_Type_Type_MIN;
  static const Type Type_MAX =
    OVRDeviceProperty_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    OVRDeviceProperty_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return OVRDeviceProperty_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return OVRDeviceProperty_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return OVRDeviceProperty_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated float matrix34_value = 7;
  int matrix34_value_size() const;
  void clear_matrix34_value();
  static const int kMatrix34ValueFieldNumber = 7;
  float matrix34_value(int index) const;
  void set_matrix34_value(int index, float value);
  void add_matrix34_value(float value);
  const ::google::protobuf::RepeatedField< float >&
      matrix34_value() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_matrix34_value();

  // string string_value = 6;
  void clear_string_value();
  static const int kStringValueFieldNumber = 6;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  #if LANG_CXX11
  void set_string_value(::std::string&& value);
  #endif
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);

  // .OVRDeviceProperty.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::OVRDeviceProperty_Type type() const;
  void set_type(::OVRDeviceProperty_Type value);

  // int32 int32_value = 2;
  void clear_int32_value();
  static const int kInt32ValueFieldNumber = 2;
  ::google::protobuf::int32 int32_value() const;
  void set_int32_value(::google::protobuf::int32 value);

  // uint64 uint64_value = 3;
  void clear_uint64_value();
  static const int kUint64ValueFieldNumber = 3;
  ::google::protobuf::uint64 uint64_value() const;
  void set_uint64_value(::google::protobuf::uint64 value);

  // bool bool_value = 4;
  void clear_bool_value();
  static const int kBoolValueFieldNumber = 4;
  bool bool_value() const;
  void set_bool_value(bool value);

  // float float_value = 5;
  void clear_float_value();
  static const int kFloatValueFieldNumber = 5;
  float float_value() const;
  void set_float_value(float value);

  // int32 identifier = 8;
  void clear_identifier();
  static const int kIdentifierFieldNumber = 8;
  ::google::protobuf::int32 identifier() const;
  void set_identifier(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:OVRDeviceProperty)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > matrix34_value_;
  mutable int _matrix34_value_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr string_value_;
  int type_;
  ::google::protobuf::int32 int32_value_;
  ::google::protobuf::uint64 uint64_value_;
  bool bool_value_;
  float float_value_;
  ::google::protobuf::int32 identifier_;
  mutable int _cached_size_;
  friend struct protobuf_ovr_5fdevice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class OVRDevice : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OVRDevice) */ {
 public:
  OVRDevice();
  virtual ~OVRDevice();

  OVRDevice(const OVRDevice& from);

  inline OVRDevice& operator=(const OVRDevice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OVRDevice& default_instance();

  static inline const OVRDevice* internal_default_instance() {
    return reinterpret_cast<const OVRDevice*>(
               &_OVRDevice_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(OVRDevice* other);

  // implements Message ----------------------------------------------

  inline OVRDevice* New() const PROTOBUF_FINAL { return New(NULL); }

  OVRDevice* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OVRDevice& from);
  void MergeFrom(const OVRDevice& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OVRDevice* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .OVRDeviceProperty properties = 3;
  int properties_size() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 3;
  const ::OVRDeviceProperty& properties(int index) const;
  ::OVRDeviceProperty* mutable_properties(int index);
  ::OVRDeviceProperty* add_properties();
  ::google::protobuf::RepeatedPtrField< ::OVRDeviceProperty >*
      mutable_properties();
  const ::google::protobuf::RepeatedPtrField< ::OVRDeviceProperty >&
      properties() const;

  // int32 device_class = 1;
  void clear_device_class();
  static const int kDeviceClassFieldNumber = 1;
  ::google::protobuf::int32 device_class() const;
  void set_device_class(::google::protobuf::int32 value);

  // int32 controller_role = 2;
  void clear_controller_role();
  static const int kControllerRoleFieldNumber = 2;
  ::google::protobuf::int32 controller_role() const;
  void set_controller_role(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:OVRDevice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::OVRDeviceProperty > properties_;
  ::google::protobuf::int32 device_class_;
  ::google::protobuf::int32 controller_role_;
  mutable int _cached_size_;
  friend struct protobuf_ovr_5fdevice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class OVRSample : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OVRSample) */ {
 public:
  OVRSample();
  virtual ~OVRSample();

  OVRSample(const OVRSample& from);

  inline OVRSample& operator=(const OVRSample& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OVRSample& default_instance();

  static inline const OVRSample* internal_default_instance() {
    return reinterpret_cast<const OVRSample*>(
               &_OVRSample_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(OVRSample* other);

  // implements Message ----------------------------------------------

  inline OVRSample* New() const PROTOBUF_FINAL { return New(NULL); }

  OVRSample* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OVRSample& from);
  void MergeFrom(const OVRSample& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OVRSample* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float position = 2;
  int position_size() const;
  void clear_position();
  static const int kPositionFieldNumber = 2;
  float position(int index) const;
  void set_position(int index, float value);
  void add_position(float value);
  const ::google::protobuf::RepeatedField< float >&
      position() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_position();

  // repeated float rotation = 3;
  int rotation_size() const;
  void clear_rotation();
  static const int kRotationFieldNumber = 3;
  float rotation(int index) const;
  void set_rotation(int index, float value);
  void add_rotation(float value);
  const ::google::protobuf::RepeatedField< float >&
      rotation() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_rotation();

  // repeated float axis = 4;
  int axis_size() const;
  void clear_axis();
  static const int kAxisFieldNumber = 4;
  float axis(int index) const;
  void set_axis(int index, float value);
  void add_axis(float value);
  const ::google::protobuf::RepeatedField< float >&
      axis() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_axis();

  // .google.protobuf.Timestamp time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  const ::google::protobuf::Timestamp& time() const;
  ::google::protobuf::Timestamp* mutable_time();
  ::google::protobuf::Timestamp* release_time();
  void set_allocated_time(::google::protobuf::Timestamp* time);

  // uint64 button_pressed = 5;
  void clear_button_pressed();
  static const int kButtonPressedFieldNumber = 5;
  ::google::protobuf::uint64 button_pressed() const;
  void set_button_pressed(::google::protobuf::uint64 value);

  // uint64 button_touched = 6;
  void clear_button_touched();
  static const int kButtonTouchedFieldNumber = 6;
  ::google::protobuf::uint64 button_touched() const;
  void set_button_touched(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:OVRSample)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > position_;
  mutable int _position_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > rotation_;
  mutable int _rotation_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > axis_;
  mutable int _axis_cached_byte_size_;
  ::google::protobuf::Timestamp* time_;
  ::google::protobuf::uint64 button_pressed_;
  ::google::protobuf::uint64 button_touched_;
  mutable int _cached_size_;
  friend struct protobuf_ovr_5fdevice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class OVRTimeline : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:OVRTimeline) */ {
 public:
  OVRTimeline();
  virtual ~OVRTimeline();

  OVRTimeline(const OVRTimeline& from);

  inline OVRTimeline& operator=(const OVRTimeline& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OVRTimeline& default_instance();

  static inline const OVRTimeline* internal_default_instance() {
    return reinterpret_cast<const OVRTimeline*>(
               &_OVRTimeline_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(OVRTimeline* other);

  // implements Message ----------------------------------------------

  inline OVRTimeline* New() const PROTOBUF_FINAL { return New(NULL); }

  OVRTimeline* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OVRTimeline& from);
  void MergeFrom(const OVRTimeline& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OVRTimeline* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .OVRSample samples = 1;
  int samples_size() const;
  void clear_samples();
  static const int kSamplesFieldNumber = 1;
  const ::OVRSample& samples(int index) const;
  ::OVRSample* mutable_samples(int index);
  ::OVRSample* add_samples();
  ::google::protobuf::RepeatedPtrField< ::OVRSample >*
      mutable_samples();
  const ::google::protobuf::RepeatedPtrField< ::OVRSample >&
      samples() const;

  // @@protoc_insertion_point(class_scope:OVRTimeline)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::OVRSample > samples_;
  mutable int _cached_size_;
  friend struct protobuf_ovr_5fdevice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// OVRDeviceProperty

// int32 identifier = 8;
inline void OVRDeviceProperty::clear_identifier() {
  identifier_ = 0;
}
inline ::google::protobuf::int32 OVRDeviceProperty::identifier() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.identifier)
  return identifier_;
}
inline void OVRDeviceProperty::set_identifier(::google::protobuf::int32 value) {
  
  identifier_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.identifier)
}

// .OVRDeviceProperty.Type type = 1;
inline void OVRDeviceProperty::clear_type() {
  type_ = 0;
}
inline ::OVRDeviceProperty_Type OVRDeviceProperty::type() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.type)
  return static_cast< ::OVRDeviceProperty_Type >(type_);
}
inline void OVRDeviceProperty::set_type(::OVRDeviceProperty_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.type)
}

// int32 int32_value = 2;
inline void OVRDeviceProperty::clear_int32_value() {
  int32_value_ = 0;
}
inline ::google::protobuf::int32 OVRDeviceProperty::int32_value() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.int32_value)
  return int32_value_;
}
inline void OVRDeviceProperty::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.int32_value)
}

// uint64 uint64_value = 3;
inline void OVRDeviceProperty::clear_uint64_value() {
  uint64_value_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 OVRDeviceProperty::uint64_value() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.uint64_value)
  return uint64_value_;
}
inline void OVRDeviceProperty::set_uint64_value(::google::protobuf::uint64 value) {
  
  uint64_value_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.uint64_value)
}

// bool bool_value = 4;
inline void OVRDeviceProperty::clear_bool_value() {
  bool_value_ = false;
}
inline bool OVRDeviceProperty::bool_value() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.bool_value)
  return bool_value_;
}
inline void OVRDeviceProperty::set_bool_value(bool value) {
  
  bool_value_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.bool_value)
}

// float float_value = 5;
inline void OVRDeviceProperty::clear_float_value() {
  float_value_ = 0;
}
inline float OVRDeviceProperty::float_value() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.float_value)
  return float_value_;
}
inline void OVRDeviceProperty::set_float_value(float value) {
  
  float_value_ = value;
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.float_value)
}

// string string_value = 6;
inline void OVRDeviceProperty::clear_string_value() {
  string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OVRDeviceProperty::string_value() const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.string_value)
  return string_value_.GetNoArena();
}
inline void OVRDeviceProperty::set_string_value(const ::std::string& value) {
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.string_value)
}
#if LANG_CXX11
inline void OVRDeviceProperty::set_string_value(::std::string&& value) {
  
  string_value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:OVRDeviceProperty.string_value)
}
#endif
inline void OVRDeviceProperty::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:OVRDeviceProperty.string_value)
}
inline void OVRDeviceProperty::set_string_value(const char* value, size_t size) {
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:OVRDeviceProperty.string_value)
}
inline ::std::string* OVRDeviceProperty::mutable_string_value() {
  
  // @@protoc_insertion_point(field_mutable:OVRDeviceProperty.string_value)
  return string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OVRDeviceProperty::release_string_value() {
  // @@protoc_insertion_point(field_release:OVRDeviceProperty.string_value)
  
  return string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OVRDeviceProperty::set_allocated_string_value(::std::string* string_value) {
  if (string_value != NULL) {
    
  } else {
    
  }
  string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  // @@protoc_insertion_point(field_set_allocated:OVRDeviceProperty.string_value)
}

// repeated float matrix34_value = 7;
inline int OVRDeviceProperty::matrix34_value_size() const {
  return matrix34_value_.size();
}
inline void OVRDeviceProperty::clear_matrix34_value() {
  matrix34_value_.Clear();
}
inline float OVRDeviceProperty::matrix34_value(int index) const {
  // @@protoc_insertion_point(field_get:OVRDeviceProperty.matrix34_value)
  return matrix34_value_.Get(index);
}
inline void OVRDeviceProperty::set_matrix34_value(int index, float value) {
  matrix34_value_.Set(index, value);
  // @@protoc_insertion_point(field_set:OVRDeviceProperty.matrix34_value)
}
inline void OVRDeviceProperty::add_matrix34_value(float value) {
  matrix34_value_.Add(value);
  // @@protoc_insertion_point(field_add:OVRDeviceProperty.matrix34_value)
}
inline const ::google::protobuf::RepeatedField< float >&
OVRDeviceProperty::matrix34_value() const {
  // @@protoc_insertion_point(field_list:OVRDeviceProperty.matrix34_value)
  return matrix34_value_;
}
inline ::google::protobuf::RepeatedField< float >*
OVRDeviceProperty::mutable_matrix34_value() {
  // @@protoc_insertion_point(field_mutable_list:OVRDeviceProperty.matrix34_value)
  return &matrix34_value_;
}

// -------------------------------------------------------------------

// OVRDevice

// int32 device_class = 1;
inline void OVRDevice::clear_device_class() {
  device_class_ = 0;
}
inline ::google::protobuf::int32 OVRDevice::device_class() const {
  // @@protoc_insertion_point(field_get:OVRDevice.device_class)
  return device_class_;
}
inline void OVRDevice::set_device_class(::google::protobuf::int32 value) {
  
  device_class_ = value;
  // @@protoc_insertion_point(field_set:OVRDevice.device_class)
}

// int32 controller_role = 2;
inline void OVRDevice::clear_controller_role() {
  controller_role_ = 0;
}
inline ::google::protobuf::int32 OVRDevice::controller_role() const {
  // @@protoc_insertion_point(field_get:OVRDevice.controller_role)
  return controller_role_;
}
inline void OVRDevice::set_controller_role(::google::protobuf::int32 value) {
  
  controller_role_ = value;
  // @@protoc_insertion_point(field_set:OVRDevice.controller_role)
}

// repeated .OVRDeviceProperty properties = 3;
inline int OVRDevice::properties_size() const {
  return properties_.size();
}
inline void OVRDevice::clear_properties() {
  properties_.Clear();
}
inline const ::OVRDeviceProperty& OVRDevice::properties(int index) const {
  // @@protoc_insertion_point(field_get:OVRDevice.properties)
  return properties_.Get(index);
}
inline ::OVRDeviceProperty* OVRDevice::mutable_properties(int index) {
  // @@protoc_insertion_point(field_mutable:OVRDevice.properties)
  return properties_.Mutable(index);
}
inline ::OVRDeviceProperty* OVRDevice::add_properties() {
  // @@protoc_insertion_point(field_add:OVRDevice.properties)
  return properties_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::OVRDeviceProperty >*
OVRDevice::mutable_properties() {
  // @@protoc_insertion_point(field_mutable_list:OVRDevice.properties)
  return &properties_;
}
inline const ::google::protobuf::RepeatedPtrField< ::OVRDeviceProperty >&
OVRDevice::properties() const {
  // @@protoc_insertion_point(field_list:OVRDevice.properties)
  return properties_;
}

// -------------------------------------------------------------------

// OVRSample

// .google.protobuf.Timestamp time = 1;
inline bool OVRSample::has_time() const {
  return this != internal_default_instance() && time_ != NULL;
}
inline void OVRSample::clear_time() {
  if (GetArenaNoVirtual() == NULL && time_ != NULL) delete time_;
  time_ = NULL;
}
inline const ::google::protobuf::Timestamp& OVRSample::time() const {
  // @@protoc_insertion_point(field_get:OVRSample.time)
  return time_ != NULL ? *time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
inline ::google::protobuf::Timestamp* OVRSample::mutable_time() {
  
  if (time_ == NULL) {
    time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:OVRSample.time)
  return time_;
}
inline ::google::protobuf::Timestamp* OVRSample::release_time() {
  // @@protoc_insertion_point(field_release:OVRSample.time)
  
  ::google::protobuf::Timestamp* temp = time_;
  time_ = NULL;
  return temp;
}
inline void OVRSample::set_allocated_time(::google::protobuf::Timestamp* time) {
  delete time_;
  if (time != NULL && time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_time = new ::google::protobuf::Timestamp;
    new_time->CopyFrom(*time);
    time = new_time;
  }
  time_ = time;
  if (time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:OVRSample.time)
}

// repeated float position = 2;
inline int OVRSample::position_size() const {
  return position_.size();
}
inline void OVRSample::clear_position() {
  position_.Clear();
}
inline float OVRSample::position(int index) const {
  // @@protoc_insertion_point(field_get:OVRSample.position)
  return position_.Get(index);
}
inline void OVRSample::set_position(int index, float value) {
  position_.Set(index, value);
  // @@protoc_insertion_point(field_set:OVRSample.position)
}
inline void OVRSample::add_position(float value) {
  position_.Add(value);
  // @@protoc_insertion_point(field_add:OVRSample.position)
}
inline const ::google::protobuf::RepeatedField< float >&
OVRSample::position() const {
  // @@protoc_insertion_point(field_list:OVRSample.position)
  return position_;
}
inline ::google::protobuf::RepeatedField< float >*
OVRSample::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:OVRSample.position)
  return &position_;
}

// repeated float rotation = 3;
inline int OVRSample::rotation_size() const {
  return rotation_.size();
}
inline void OVRSample::clear_rotation() {
  rotation_.Clear();
}
inline float OVRSample::rotation(int index) const {
  // @@protoc_insertion_point(field_get:OVRSample.rotation)
  return rotation_.Get(index);
}
inline void OVRSample::set_rotation(int index, float value) {
  rotation_.Set(index, value);
  // @@protoc_insertion_point(field_set:OVRSample.rotation)
}
inline void OVRSample::add_rotation(float value) {
  rotation_.Add(value);
  // @@protoc_insertion_point(field_add:OVRSample.rotation)
}
inline const ::google::protobuf::RepeatedField< float >&
OVRSample::rotation() const {
  // @@protoc_insertion_point(field_list:OVRSample.rotation)
  return rotation_;
}
inline ::google::protobuf::RepeatedField< float >*
OVRSample::mutable_rotation() {
  // @@protoc_insertion_point(field_mutable_list:OVRSample.rotation)
  return &rotation_;
}

// repeated float axis = 4;
inline int OVRSample::axis_size() const {
  return axis_.size();
}
inline void OVRSample::clear_axis() {
  axis_.Clear();
}
inline float OVRSample::axis(int index) const {
  // @@protoc_insertion_point(field_get:OVRSample.axis)
  return axis_.Get(index);
}
inline void OVRSample::set_axis(int index, float value) {
  axis_.Set(index, value);
  // @@protoc_insertion_point(field_set:OVRSample.axis)
}
inline void OVRSample::add_axis(float value) {
  axis_.Add(value);
  // @@protoc_insertion_point(field_add:OVRSample.axis)
}
inline const ::google::protobuf::RepeatedField< float >&
OVRSample::axis() const {
  // @@protoc_insertion_point(field_list:OVRSample.axis)
  return axis_;
}
inline ::google::protobuf::RepeatedField< float >*
OVRSample::mutable_axis() {
  // @@protoc_insertion_point(field_mutable_list:OVRSample.axis)
  return &axis_;
}

// uint64 button_pressed = 5;
inline void OVRSample::clear_button_pressed() {
  button_pressed_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 OVRSample::button_pressed() const {
  // @@protoc_insertion_point(field_get:OVRSample.button_pressed)
  return button_pressed_;
}
inline void OVRSample::set_button_pressed(::google::protobuf::uint64 value) {
  
  button_pressed_ = value;
  // @@protoc_insertion_point(field_set:OVRSample.button_pressed)
}

// uint64 button_touched = 6;
inline void OVRSample::clear_button_touched() {
  button_touched_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 OVRSample::button_touched() const {
  // @@protoc_insertion_point(field_get:OVRSample.button_touched)
  return button_touched_;
}
inline void OVRSample::set_button_touched(::google::protobuf::uint64 value) {
  
  button_touched_ = value;
  // @@protoc_insertion_point(field_set:OVRSample.button_touched)
}

// -------------------------------------------------------------------

// OVRTimeline

// repeated .OVRSample samples = 1;
inline int OVRTimeline::samples_size() const {
  return samples_.size();
}
inline void OVRTimeline::clear_samples() {
  samples_.Clear();
}
inline const ::OVRSample& OVRTimeline::samples(int index) const {
  // @@protoc_insertion_point(field_get:OVRTimeline.samples)
  return samples_.Get(index);
}
inline ::OVRSample* OVRTimeline::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:OVRTimeline.samples)
  return samples_.Mutable(index);
}
inline ::OVRSample* OVRTimeline::add_samples() {
  // @@protoc_insertion_point(field_add:OVRTimeline.samples)
  return samples_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::OVRSample >*
OVRTimeline::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:OVRTimeline.samples)
  return &samples_;
}
inline const ::google::protobuf::RepeatedPtrField< ::OVRSample >&
OVRTimeline::samples() const {
  // @@protoc_insertion_point(field_list:OVRTimeline.samples)
  return samples_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::OVRDeviceProperty_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OVRDeviceProperty_Type>() {
  return ::OVRDeviceProperty_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ovr_5fdevice_2eproto__INCLUDED
