/******************************************************************************
*
* Copyright (C) 2015-2022 Allegro DVT2
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
******************************************************************************/

#pragma once

#include "module_structs.h"

#include <vector>

extern "C"
{
#include <lib_decode/lib_decode.h>
}

Clock CreateClock(AL_TDecSettings settings);
bool UpdateClock(AL_TDecSettings& settings, Clock clock);

int CreateInternalEntropyBuffer(AL_TDecSettings settings);
bool UpdateInternalEntropyBuffer(AL_TDecSettings& settings, int internalEntropyBuffer);

SequencePictureModeType CreateSequenceMode(AL_TDecSettings settings);
bool UpdateSequenceMode(AL_TDecSettings& settings, SequencePictureModeType sequenceMode, std::vector<SequencePictureModeType> sequenceModes);

Format CreateFormat(AL_TDecSettings settings);
bool UpdateFormat(AL_TDecSettings& settings, Format format, std::vector<ColorType> colors, std::vector<int> bitdepths, Stride& stride, StrideAlignments strideAlignments);

Resolution CreateResolution(AL_TDecSettings settings, Stride stride);
bool UpdateResolution(AL_TDecSettings& settings, Stride& stride, StrideAlignments strideAlignments, Resolution resolution);

BufferSizes CreateBufferSizes(AL_TDecSettings settings, Stride stride);

DecodedPictureBufferType CreateDecodedPictureBuffer(AL_TDecSettings settings);

bool UpdateIsEnabledSubframe(AL_TDecSettings& settings, bool isSubframeEnabled);

bool UpdateDecodedPictureBuffer(AL_TDecSettings& settings, DecodedPictureBufferType decodedPictureBuffer);

Point<int> CreateOutputPosition(AL_TDecSettings settings);
bool UpdateOutputPosition(AL_TDecSettings& settings, Point<int> position);

int CreateInstanceId(AL_TDecSettings settings);
bool UpdateInstanceId(AL_TDecSettings& settings, int instance);

