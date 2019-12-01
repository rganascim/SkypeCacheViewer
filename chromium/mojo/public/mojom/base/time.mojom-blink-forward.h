// mojo/public/mojom/base/time.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"


namespace mojo_base {
namespace mojom {
}  // namespace mojo_base
}  // namespace mojom


namespace mojo_base {
namespace mojom {
namespace blink {
class Time;
using TimePtr = mojo::InlinedStructPtr<Time>;

class TimeDelta;
using TimeDeltaPtr = mojo::InlinedStructPtr<TimeDelta>;

class TimeTicks;
using TimeTicksPtr = mojo::InlinedStructPtr<TimeTicks>;




}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base
#include "base/time/time.h"

#endif  // MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_FORWARD_H_