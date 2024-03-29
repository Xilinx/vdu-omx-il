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

#include <OMX_VideoExt.h>
#include <OMX_ComponentAlg.h>
#include <OMX_IVCommonAlg.h>

#include "module/module_enums.h"
#include "module/module_structs.h"

ColorType ConvertOMXToMediaColor(OMX_COLOR_FORMATTYPE format);
OMX_COLOR_FORMATTYPE ConvertMediaToOMXColor(ColorType color, int bitdepth);

CompressionType ConvertOMXToMediaCompression(OMX_VIDEO_CODINGTYPE coding);
OMX_VIDEO_CODINGTYPE ConvertMediaToOMXCompression(CompressionType compression);

OMX_U32 ConvertMediaToOMXFramerate(Clock clock);

int ConvertOMXToMediaBitdepth(OMX_COLOR_FORMATTYPE format);
Clock ConvertOMXToMediaClock(OMX_U32 framerateInQ16);

bool ConvertOMXToMediaBool(OMX_BOOL boolean);
OMX_BOOL ConvertMediaToOMXBool(bool boolean);

BufferHandleType ConvertOMXToMediaBufferHandle(OMX_ALG_BUFFER_MODE bufferMode);
OMX_ALG_BUFFER_MODE ConvertMediaToOMXBufferHandle(BufferHandleType handle);

DecodedPictureBufferType ConvertOMXToMediaDecodedPictureBuffer(OMX_ALG_EDpbMode mode);
OMX_ALG_EDpbMode ConvertMediaToOMXDecodedPictureBuffer(DecodedPictureBufferType mode);

ProfileLevel ConvertOMXToMediaAVCProfileLevel(OMX_VIDEO_AVCPROFILETYPE profile, OMX_VIDEO_AVCLEVELTYPE level);

OMX_VIDEO_AVCPROFILETYPE ConvertMediaToOMXAVCProfile(ProfileLevel profileLevel);
OMX_VIDEO_AVCLEVELTYPE ConvertMediaToOMXAVCLevel(ProfileLevel profileLevel);

ProfileLevel ConvertOMXToMediaHEVCProfileLevel(OMX_ALG_VIDEO_HEVCPROFILETYPE profile, OMX_ALG_VIDEO_HEVCLEVELTYPE level);

OMX_ALG_VIDEO_HEVCPROFILETYPE ConvertMediaToOMXHEVCProfile(ProfileLevel profileLevel);
OMX_ALG_VIDEO_HEVCLEVELTYPE ConvertMediaToOMXHEVCLevel(ProfileLevel profileLevel);

LoopFilterType ConvertOMXToMediaAVCLoopFilter(OMX_VIDEO_AVCLOOPFILTERTYPE loopFilter);
OMX_VIDEO_AVCLOOPFILTERTYPE ConvertMediaToOMXAVCLoopFilter(LoopFilterType loopFilter);

LoopFilterType ConvertOMXToMediaHEVCLoopFilter(OMX_ALG_VIDEO_HEVCLOOPFILTERTYPE loopFilter);
OMX_ALG_VIDEO_HEVCLOOPFILTERTYPE ConvertMediaToOMXHEVCLoopFilter(LoopFilterType loopFilter);

int ConvertOMXToMediaBFrames(OMX_U32 bFrames, OMX_U32 pFrames);
int ConvertOMXToMediaGopLength(OMX_U32 bFrames, OMX_U32 pFrames);
OMX_U32 ConvertMediaToOMXBFrames(Gop gop);
OMX_U32 ConvertMediaToOMXPFrames(Gop gop);

EntropyCodingType ConvertOMXToMediaEntropyCoding(OMX_BOOL isCabac);
OMX_BOOL ConvertMediaToOMXEntropyCoding(EntropyCodingType mode);

int ConvertOMXToMediaQpInitial(OMX_U32 qpI);
int ConvertOMXToMediaQpDeltaIP(OMX_U32 qpI, OMX_U32 qpP);
int ConvertOMXToMediaQpDeltaPB(OMX_U32 pP, OMX_U32 qpB);
OMX_U32 ConvertMediaToOMXQpI(QPs qps);
OMX_U32 ConvertMediaToOMXQpP(QPs qps);
OMX_U32 ConvertMediaToOMXQpB(QPs qps);

int ConvertOMXToMediaQpMin(OMX_S32 qpMin);
OMX_S32 ConvertMediaToOMXQpMin(QPs qps);

int ConvertOMXToMediaQpMax(OMX_S32 qpMax);
OMX_S32 ConvertMediaToOMXQpMax(QPs qps);

QPControlType ConvertOMXToMediaQpCtrlMode(OMX_ALG_EQpCtrlMode mode);
OMX_ALG_EQpCtrlMode ConvertMediaToOMXQpCtrlMode(QPControlType mode);

RateControlType ConvertOMXToMediaControlRate(OMX_VIDEO_CONTROLRATETYPE mode);
OMX_VIDEO_CONTROLRATETYPE ConvertMediaToOMXControlRate(RateControlType mode);

AspectRatioType ConvertOMXToMediaAspectRatio(OMX_ALG_EAspectRatio aspectRatio);
OMX_ALG_EAspectRatio ConvertMediaToOMXAspectRatio(AspectRatioType aspectRatio);

GopControlType ConvertOMXToMediaGopControl(OMX_ALG_EGopCtrlMode mode);
OMX_ALG_EGopCtrlMode ConvertMediaToOMXGopControl(GopControlType mode);

GdrType ConvertOMXToMediaGdr(OMX_ALG_EGdrMode gdr);
OMX_ALG_EGdrMode ConvertMediaToOMXGdr(GdrType gdr);

ScalingListType ConvertOMXToMediaScalingList(OMX_ALG_EScalingList scalingListMode);
OMX_ALG_EScalingList ConvertMediaToOMXScalingList(ScalingListType scalingLisgt);

BufferModeType ConvertOMXToMediaBufferMode(OMX_ALG_VIDEO_BUFFER_MODE mode);
OMX_ALG_VIDEO_BUFFER_MODE ConvertMediaToOMXBufferMode(BufferModeType mode);

QualityType ConvertOMXToMediaQualityPreset(OMX_ALG_ERoiQuality quality);
int ConvertOMXToMediaQualityValue(OMX_S32 quality);

OMX_U32 ConvertMediaToOMXInterlaceFlag(VideoModeType mode);
VideoModeType ConvertOMXToMediaVideoMode(OMX_U32 flag);

SequencePictureModeType ConvertOMXToMediaSequencePictureMode(OMX_ALG_SEQUENCE_PICTURE_MODE mode);
OMX_ALG_SEQUENCE_PICTURE_MODE ConvertMediaToOMXSequencePictureMode(SequencePictureModeType mode);

OMX_ALG_VIDEO_COLOR_PRIMARIESTYPE ConvertMediaToOMXColorPrimaries(ColorPrimariesType colorPrimaries);
ColorPrimariesType ConvertOMXToMediaColorPrimaries(OMX_ALG_VIDEO_COLOR_PRIMARIESTYPE colorPrimaries);

OMX_ALG_VIDEO_TRANSFER_CHARACTERISTICS ConvertMediaToOMXTransferCharacteristics(TransferCharacteristicsType transferCharac);
TransferCharacteristicsType ConvertOMXToMediaTransferCharacteristics(OMX_ALG_VIDEO_TRANSFER_CHARACTERISTICS transferCharac);

OMX_ALG_VIDEO_COLOR_MATRIX ConvertMediaToOMXColourMatrix(ColourMatrixType colourMatrix);
ColourMatrixType ConvertOMXToMediaColourMatrix(OMX_ALG_VIDEO_COLOR_MATRIX colourMatrix);

OMX_ALG_VIDEO_CONFIG_HIGH_DYNAMIC_RANGE_SEI ConvertMediaToOMXHDRSEI(HighDynamicRangeSeis const& hdrSEIs);
HighDynamicRangeSeis ConvertOMXToMediaHDRSEI(OMX_ALG_VIDEO_CONFIG_HIGH_DYNAMIC_RANGE_SEI const& hdrSEIs);

OMX_ALG_EQpTableMode ConvertMediaToOMXQpTable(QPTableType mode);
QPTableType ConvertOMXToMediaQpTable(OMX_ALG_EQpTableMode mode);

OMX_ALG_EStartCodeBytesAligment ConvertMediaToOMXStartCodeBytesAlignment(StartCodeBytesAlignmentType mode);
StartCodeBytesAlignmentType ConvertOMXToMediaStartCodeBytesAlignment(OMX_ALG_EStartCodeBytesAligment mode);

