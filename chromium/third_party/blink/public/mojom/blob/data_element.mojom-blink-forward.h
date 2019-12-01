// third_party/blink/public/mojom/blob/data_element.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class DataElementBytes;
using DataElementBytesPtr = mojo::StructPtr<DataElementBytes>;

class DataElementFile;
using DataElementFilePtr = mojo::StructPtr<DataElementFile>;

class DataElementFilesystemURL;
using DataElementFilesystemURLPtr = mojo::StructPtr<DataElementFilesystemURL>;

class DataElementBlob;
using DataElementBlobPtr = mojo::StructPtr<DataElementBlob>;

class DataElement;

typedef mojo::StructPtr<DataElement> DataElementPtr;

class BytesProvider;

using BytesProviderPtr = mojo::InterfacePtr<BytesProvider>;
using BytesProviderPtrInfo = mojo::InterfacePtrInfo<BytesProvider>;
using ThreadSafeBytesProviderPtr =
    mojo::ThreadSafeInterfacePtr<BytesProvider>;

using BytesProviderRequest = mojo::InterfaceRequest<BytesProvider>;

using BytesProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<BytesProvider>;
using ThreadSafeBytesProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BytesProvider>;
using BytesProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BytesProvider>;

using BytesProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BytesProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_FORWARD_H_