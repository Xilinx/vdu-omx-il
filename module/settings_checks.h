/******************************************************************************
*
* Copyright (C) 2015-2023 Allegro DVT2
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
#include <algorithm>

template<class T>
bool IsSupported(T value, std::vector<T> supported)
{
  return std::any_of(supported.cbegin(), supported.cend(), [&](T const& each) { return each == value; });
}

bool CheckClock(Clock clock);
bool CheckGroupOfPictures(Gop gop);
bool CheckInternalEntropyBuffer(int internalEntropyBuffer);
bool CheckVideoMode(VideoModeType videoMode);
bool CheckSequenceMode(SequencePictureModeType sequenceMode, std::vector<SequencePictureModeType> sequenceModes);
bool CheckBitrate(Bitrate bitrate, Clock clock);
bool CheckAspectRatio(AspectRatioType aspectRatio);
bool CheckScalingList(ScalingListType scalingList);
bool CheckQuantizationParameter(QPs qps);
bool CheckSlicesParameter(Slices slices);
bool CheckFormat(Format format, std::vector<ColorType> colors, std::vector<int> bitdepths);
bool CheckBufferHandles(BufferHandles bufferHandles);
bool CheckColorPrimaries(ColorPrimariesType colorPrimaries);
bool CheckTransferCharacteristics(TransferCharacteristicsType transferCharacteristics);
bool CheckColourMatrix(ColourMatrixType colourMatrix);
bool CheckLookAhead(LookAhead la);
bool CheckTwoPass(TwoPass tp);
bool CheckMaxPictureSizes(MaxPicturesSizes sizes);
bool CheckLoopFilterBeta(int beta);
bool CheckLoopFilterTc(int tc);
bool CheckCrop(Region region);
bool CheckLog2CodingUnit(MinMax<int> log2CodingUnit);
bool CheckStartCodeBytesAlignment(StartCodeBytesAlignmentType startCodeBytesAlignment);

