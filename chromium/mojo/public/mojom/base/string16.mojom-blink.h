// mojo/public/mojom/base/string16.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_STRING16_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_STRING16_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {









class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) String16 {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<String16, T>::value>;
  using DataView = String16DataView;
  using Data_ = internal::String16_Data;

  template <typename... Args>
  static String16Ptr New(Args&&... args) {
    return String16Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static String16Ptr From(const U& u) {
    return mojo::TypeConverter<String16Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, String16>::Convert(*this);
  }


  String16();

  explicit String16(
      const WTF::Vector<uint16_t>& data);

  ~String16();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = String16Ptr>
  String16Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, String16::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        String16::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        String16::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::String16_UnserializedMessageContext<
            UserType, String16::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<String16::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return String16::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::String16_UnserializedMessageContext<
            UserType, String16::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<String16::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<uint16_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, String16::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, String16::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, String16::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, String16::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BigString16 {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BigString16, T>::value>;
  using DataView = BigString16DataView;
  using Data_ = internal::BigString16_Data;

  template <typename... Args>
  static BigString16Ptr New(Args&&... args) {
    return BigString16Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BigString16Ptr From(const U& u) {
    return mojo::TypeConverter<BigString16Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BigString16>::Convert(*this);
  }


  BigString16();

  explicit BigString16(
      ::mojo_base::BigBuffer data);

  ~BigString16();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BigString16Ptr>
  BigString16Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BigString16::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BigString16::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BigString16::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BigString16_UnserializedMessageContext<
            UserType, BigString16::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BigString16::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BigString16::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BigString16_UnserializedMessageContext<
            UserType, BigString16::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BigString16::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::mojo_base::BigBuffer data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BigString16);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BigString16::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BigString16::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BigString16::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BigString16::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
String16Ptr String16::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T, String16::EnableIfSame<T>*>
bool String16::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}

template <typename T, String16::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.data < rhs.data)
    return true;
  if (rhs.data < lhs.data)
    return false;
  return false;
}
template <typename StructPtrType>
BigString16Ptr BigString16::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T, BigString16::EnableIfSame<T>*>
bool BigString16::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}

template <typename T, BigString16::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.data < rhs.data)
    return true;
  if (rhs.data < lhs.data)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::String16::DataView,
                                         ::mojo_base::mojom::blink::String16Ptr> {
  static bool IsNull(const ::mojo_base::mojom::blink::String16Ptr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::String16Ptr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::blink::String16::data)& data(
      const ::mojo_base::mojom::blink::String16Ptr& input) {
    return input->data;
  }

  static bool Read(::mojo_base::mojom::blink::String16::DataView input, ::mojo_base::mojom::blink::String16Ptr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::BigString16::DataView,
                                         ::mojo_base::mojom::blink::BigString16Ptr> {
  static bool IsNull(const ::mojo_base::mojom::blink::BigString16Ptr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::BigString16Ptr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::blink::BigString16::data)& data(
       ::mojo_base::mojom::blink::BigString16Ptr& input) {
    return input->data;
  }

  static bool Read(::mojo_base::mojom::blink::BigString16::DataView input, ::mojo_base::mojom::blink::BigString16Ptr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_STRING16_MOJOM_BLINK_H_