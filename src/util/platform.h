// Copyright (c) 2012-2013, the Scal Project Authors.  All rights reserved.
// Please see the AUTHORS file for details.  Use of this source code is governed
// by a BSD license that can be found in the LICENSE file.

#ifndef SCAL_UTIL_PLATFORM_H_
#define SCAL_UTIL_PLATFORM_H_

#include <stdint.h>

namespace scal {

const uint64_t kPageSize = 4096;
const uint64_t kCachelineSize = 64;
const uint64_t kCachePrefetch = 128;

}  // namespace scal

#endif
