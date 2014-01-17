/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

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

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#ifndef REGAL_EMU_PROCS_PPCA_H
#define REGAL_EMU_PROCS_PPCA_H

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

void EmuProcsInterceptPpca( Dispatch::GL & dt );

struct EmuProcsOriginatePpca {

  EmuProcsOriginatePpca() {
    memset(this, 0, sizeof( *this ) );
  }

  PFNGLBINDBUFFERPROC glBindBuffer;
  PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
  PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
  PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers;
  PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
  PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
  PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
  PFNGLCOLORPOINTERPROC glColorPointer;
  PFNGLDELETEBUFFERSPROC glDeleteBuffers;
  PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
  PFNGLDISABLEPROC glDisable;
  PFNGLDISABLECLIENTSTATEPROC glDisableClientState;
  PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
  PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;
  PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
  PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;
  PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;
  PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
  PFNGLDISABLEIPROC glDisablei;
  PFNGLEDGEFLAGPOINTERPROC glEdgeFlagPointer;
  PFNGLENABLEPROC glEnable;
  PFNGLENABLECLIENTSTATEPROC glEnableClientState;
  PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
  PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT;
  PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
  PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT;
  PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT;
  PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
  PFNGLENABLEIPROC glEnablei;
  PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
  PFNGLGETBOOLEANVPROC glGetBooleanv;
  PFNGLGETDOUBLEVPROC glGetDoublev;
  PFNGLGETFLOATVPROC glGetFloatv;
  PFNGLGETINTEGERVPROC glGetIntegerv;
  PFNGLINDEXPOINTERPROC glIndexPointer;
  PFNGLINTERLEAVEDARRAYSPROC glInterleavedArrays;
  PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
  PFNGLNORMALPOINTERPROC glNormalPointer;
  PFNGLPIXELSTOREFPROC glPixelStoref;
  PFNGLPIXELSTOREIPROC glPixelStorei;
  PFNGLPOPCLIENTATTRIBPROC glPopClientAttrib;
  PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
  PFNGLPUSHCLIENTATTRIBPROC glPushClientAttrib;
  PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
  PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
  PFNGLTEXCOORDPOINTERPROC glTexCoordPointer;
  PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT;
  PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT;
  PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT;
  PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT;
  PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT;
  PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT;
  PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT;
  PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT;
  PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT;
  PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT;
  PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT;
  PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
  PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
  PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
  PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
  PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
  PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
  PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
  PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
  PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
  PFNGLVERTEXPOINTERPROC glVertexPointer;

  void Initialize( Dispatch::GL & dt ) {
    glBindBuffer = dt.glBindBuffer;
    glBindVertexArray = dt.glBindVertexArray;
    glBindVertexBuffer = dt.glBindVertexBuffer;
    glBindVertexBuffers = dt.glBindVertexBuffers;
    glClientActiveTexture = dt.glClientActiveTexture;
    glClientActiveTextureARB = dt.glClientActiveTextureARB;
    glClientAttribDefaultEXT = dt.glClientAttribDefaultEXT;
    glColorPointer = dt.glColorPointer;
    glDeleteBuffers = dt.glDeleteBuffers;
    glDeleteVertexArrays = dt.glDeleteVertexArrays;
    glDisable = dt.glDisable;
    glDisableClientState = dt.glDisableClientState;
    glDisableClientStateIndexedEXT = dt.glDisableClientStateIndexedEXT;
    glDisableClientStateiEXT = dt.glDisableClientStateiEXT;
    glDisableIndexedEXT = dt.glDisableIndexedEXT;
    glDisableVertexArrayAttribEXT = dt.glDisableVertexArrayAttribEXT;
    glDisableVertexArrayEXT = dt.glDisableVertexArrayEXT;
    glDisableVertexAttribArray = dt.glDisableVertexAttribArray;
    glDisablei = dt.glDisablei;
    glEdgeFlagPointer = dt.glEdgeFlagPointer;
    glEnable = dt.glEnable;
    glEnableClientState = dt.glEnableClientState;
    glEnableClientStateIndexedEXT = dt.glEnableClientStateIndexedEXT;
    glEnableClientStateiEXT = dt.glEnableClientStateiEXT;
    glEnableIndexedEXT = dt.glEnableIndexedEXT;
    glEnableVertexArrayAttribEXT = dt.glEnableVertexArrayAttribEXT;
    glEnableVertexArrayEXT = dt.glEnableVertexArrayEXT;
    glEnableVertexAttribArray = dt.glEnableVertexAttribArray;
    glEnablei = dt.glEnablei;
    glFogCoordPointer = dt.glFogCoordPointer;
    glGetBooleanv = dt.glGetBooleanv;
    glGetDoublev = dt.glGetDoublev;
    glGetFloatv = dt.glGetFloatv;
    glGetIntegerv = dt.glGetIntegerv;
    glIndexPointer = dt.glIndexPointer;
    glInterleavedArrays = dt.glInterleavedArrays;
    glMultiTexCoordPointerEXT = dt.glMultiTexCoordPointerEXT;
    glNormalPointer = dt.glNormalPointer;
    glPixelStoref = dt.glPixelStoref;
    glPixelStorei = dt.glPixelStorei;
    glPopClientAttrib = dt.glPopClientAttrib;
    glPrimitiveRestartIndex = dt.glPrimitiveRestartIndex;
    glPushClientAttrib = dt.glPushClientAttrib;
    glPushClientAttribDefaultEXT = dt.glPushClientAttribDefaultEXT;
    glSecondaryColorPointer = dt.glSecondaryColorPointer;
    glTexCoordPointer = dt.glTexCoordPointer;
    glVertexArrayColorOffsetEXT = dt.glVertexArrayColorOffsetEXT;
    glVertexArrayEdgeFlagOffsetEXT = dt.glVertexArrayEdgeFlagOffsetEXT;
    glVertexArrayFogCoordOffsetEXT = dt.glVertexArrayFogCoordOffsetEXT;
    glVertexArrayIndexOffsetEXT = dt.glVertexArrayIndexOffsetEXT;
    glVertexArrayMultiTexCoordOffsetEXT = dt.glVertexArrayMultiTexCoordOffsetEXT;
    glVertexArrayNormalOffsetEXT = dt.glVertexArrayNormalOffsetEXT;
    glVertexArraySecondaryColorOffsetEXT = dt.glVertexArraySecondaryColorOffsetEXT;
    glVertexArrayTexCoordOffsetEXT = dt.glVertexArrayTexCoordOffsetEXT;
    glVertexArrayVertexAttribIOffsetEXT = dt.glVertexArrayVertexAttribIOffsetEXT;
    glVertexArrayVertexAttribOffsetEXT = dt.glVertexArrayVertexAttribOffsetEXT;
    glVertexArrayVertexOffsetEXT = dt.glVertexArrayVertexOffsetEXT;
    glVertexAttribBinding = dt.glVertexAttribBinding;
    glVertexAttribDivisor = dt.glVertexAttribDivisor;
    glVertexAttribFormat = dt.glVertexAttribFormat;
    glVertexAttribIFormat = dt.glVertexAttribIFormat;
    glVertexAttribIPointer = dt.glVertexAttribIPointer;
    glVertexAttribLFormat = dt.glVertexAttribLFormat;
    glVertexAttribLPointer = dt.glVertexAttribLPointer;
    glVertexAttribPointer = dt.glVertexAttribPointer;
    glVertexBindingDivisor = dt.glVertexBindingDivisor;
    glVertexPointer = dt.glVertexPointer;
  }
};

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION

#endif // REGAL_EMU_PROCS_PPCA_H
