/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef __REGAL_DISPATCHER_GL_H__
#define __REGAL_DISPATCHER_GL_H__

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include <vector>

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

struct RegalContext;

void InitDispatchGL();

// regaltest needs these declarations too

extern void InitDispatchTableCode      (RegalContext *ctx);
extern void InitDispatchTableDebug     (RegalContext *ctx);
extern void InitDispatchTableError     (RegalContext *ctx);
extern void InitDispatchTableEmu       (RegalContext *ctx);
extern void InitDispatchTableLog       (RegalContext *ctx);
extern void InitDispatchTablePpapi     (RegalContext *ctx);
extern void InitDispatchTableStatistics(RegalContext *ctx);
extern void InitDispatchTableStaticES2 (RegalContext *ctx);
extern void InitDispatchTableCache     (RegalContext *ctx);
extern void InitDispatchTableTrace     (RegalContext *ctx);
extern void InitDispatchTableHttp     (RegalContext *ctx);

namespace Loader  { extern void Init(RegalContext *ctx); }
namespace Missing { extern void Init(RegalContext *ctx); }

REGAL_NAMESPACE_END

#endif // __REGAL_DISPATCHER_GL_H__
