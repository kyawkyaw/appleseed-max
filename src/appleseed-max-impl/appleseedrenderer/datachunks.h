
//
// This source file is part of appleseed.
// Visit https://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2015-2018 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

// Build options header.
#include "foundation/core/buildoptions.h"

// appleseed.foundation headers.
#include "foundation/platform/windows.h"

//
// Changing the values of these constants WILL break compatibility
// with 3ds Max files saved with older versions of the plugin.
//

const USHORT ChunkFileFormatVersion                                 = 0x0001;

const USHORT ChunkSettings                                          = 0x1000;

const USHORT ChunkSettingsImageSampling                             = 0x1100;
const USHORT ChunkSettingsImageSamplingPixelSamples                 = 0x1110;
const USHORT ChunkSettingsImageSamplingPasses                       = 0x1120;
const USHORT ChunkSettingsImageSamplingTileSize                     = 0x1130;
const USHORT ChunkSettingsPixelFilter                               = 0x1140;
const USHORT ChunkSettingsPixelFilterSize                           = 0x1150;
const USHORT ChunkSettingsImageSamplerType                          = 0x1160;
const USHORT ChunkSettingsAdaptiveTileBatchSize                     = 0x1161;
const USHORT ChunkSettingsAdaptiveTileMinSamples                    = 0x1162;
const USHORT ChunkSettingsAdaptiveTileMaxSamples                    = 0x1163;
const USHORT ChunkSettingsAdaptiveTileNoiseThreshold                = 0x1164;
const USHORT ChunkSettingsNoiseSeed                                 = 0x1165;
const USHORT ChunkSettingsEnableNoiseSeed                           = 0x1166;

const USHORT ChunkSettingsPathtracer                                = 0x1200;
const USHORT ChunkSettingsPathtracerGI                              = 0x1210;
const USHORT ChunkSettingsPathtracerRRMinPathLength                 = 0x1211;
const USHORT ChunkSettingsPathtracerCaustics                        = 0x1215;
const USHORT ChunkSettingsPathtracerGlobalBounces                   = 0x1220;
const USHORT ChunkSettingsPathtracerDiffuseBounces                  = 0x1221;
const USHORT ChunkSettingsPathtracerDiffuseBouncesEnabled           = 0x1222;
const USHORT ChunkSettingsPathtracerGlossyBounces                   = 0x1223;
const USHORT ChunkSettingsPathtracerGlossyBouncesEnabled            = 0x1224;
const USHORT ChunkSettingsPathtracerSpecularBounces                 = 0x1225;
const USHORT ChunkSettingsPathtracerSpecularBouncesEnabled          = 0x1226;
const USHORT ChunkSettingsPathtracerVolumeBounces                   = 0x1227;
const USHORT ChunkSettingsPathtracerVolumeBouncesEnabled            = 0x1228;
const USHORT ChunkSettingsPathtracerVolumeDistanceSamples           = 0x1229;
const USHORT ChunkSettingsPathtracerMaxRayIntensitySet              = 0x1240;
const USHORT ChunkSettingsPathtracerMaxRayIntensity                 = 0x1250;
const USHORT ChunkSettingsPathtracerClampRougness                   = 0x1251;
const USHORT ChunkSettingsPathtracerBackgroundEmitsLight            = 0x1230;
const USHORT ChunkSettingsPathtracerDirectLightingEnabled           = 0x1231;
const USHORT ChunkSettingsPathtracerDirectLightingSamples           = 0x1232;
const USHORT ChunkSettingsPathtracerDirectLightingLowLightThreshold = 0x1233;
const USHORT ChunkSettingsPathtracerImageBasedLightingSamples       = 0x1234;
const USHORT ChunkSettingsPixelBackgroundAlpha                      = 0x1260;
const USHORT ChunkSettingsPathtracerOptimizeLightsOutsideVolumes    = 0x1271;

const USHORT ChunkSettingsOutput                                    = 0x1300;
const USHORT ChunkSettingsOutputMode                                = 0x1310;
const USHORT ChunkSettingsOutputProjectFilePath                     = 0x1320;
const USHORT ChunkSettingsOutputScaleMultiplier                     = 0x1330;
const USHORT ChunkSettingsOutputShaderOverride                      = 0x1340;
const USHORT ChunkSettingsOutputMaterialPreviewQuality              = 0x1350;

const USHORT ChunkSettingEnableOverrideMaterial                     = 0x1360;
const USHORT ChunkSettingOverrideExcludeLightMaterials              = 0x1370;
const USHORT ChunkSettingOverrideExcludeGlassMaterials              = 0x1380;
const USHORT ChunkSettingOverrideMaterial                           = 0x1390;

const USHORT ChunkSettingsSystem                                    = 0x1400;
const USHORT ChunkSettingsSystemRenderingThreads                    = 0x1410;
const USHORT ChunkSettingsSystemLowPriorityMode                     = 0x1420;
const USHORT ChunkSettingsSystemUseMaxProceduralMaps                = 0x1430;
const USHORT ChunkSettingsSystemEnableRenderStamp                   = 0x1440;
const USHORT ChunkSettingsSystemRenderStampString                   = 0x1450;
const USHORT ChunkSettingsSystemEnableEmbree                        = 0x1460;
const USHORT ChunkSettingsSystemTextureCacheSize                    = 0x1470;

const USHORT ChunkSettingsPostprocessing                            = 0x1500;
const USHORT ChunkSettingsPostprocessingDenoiseMode                 = 0x1501;
const USHORT ChunkSettingsPostprocessingEnableSkipDenoised          = 0x1502;
const USHORT ChunkSettingsPostprocessingEnableRandomPixelOrder      = 0x1503;
const USHORT ChunkSettingsPostprocessingEnablePrefilterSpikes       = 0x1504;
const USHORT ChunkSettingsPostprocessingSpikeThreshold              = 0x1505;
const USHORT ChunkSettingsPostprocessingPatchDistanceThreshold      = 0x1506;
const USHORT ChunkSettingsPostprocessingDenoiseScales               = 0x1507;

const USHORT ChunkSettingsLighting                                  = 0x1600;
const USHORT ChunkSettingsLightingAlgorithm                         = 0x1601;
const USHORT ChunkSettingsLightSamplingAlgorithm                    = 0x1602;
const USHORT ChunkSettingsEnableLightImportanceSampling             = 0x1610;
const USHORT ChunkSettingsLightingForceOffDefaultLights             = 0x1270;

const USHORT ChunkSettingsSPPM                                      = 0x1700;
const USHORT ChunkSettingsSPPMPhotonType                            = 0x1701;
const USHORT ChunkSettingsSPPMDirectLightingMode                    = 0x1702;
const USHORT ChunkSettingsSPPMEnableCaustics                        = 0x1703;
const USHORT ChunkSettingsSPPMEnableImageBasedLighting              = 0x1704;
const USHORT ChunkSettingsSPPMPhotonTracingMaxBounces               = 0x1705;
const USHORT ChunkSettingsSPPMPhotonTracingEnableBounceLimit        = 0x1706;
const USHORT ChunkSettingsSPPMPhotonTracingRRMinPathLength          = 0x1707;
const USHORT ChunkSettingsSPPMPhotonTracingLightPhotons             = 0x1708;
const USHORT ChunkSettingsSPPMPhotonTracingEnvironmentPhotons       = 0x1709;
const USHORT ChunkSettingsSPPMRadianceEstimationMaxBounces          = 0x170A;
const USHORT ChunkSettingsSPPMRadianceEstimationEnableBounceLimit   = 0x170B;
const USHORT ChunkSettingsSPPMRadianceEstimationRRMinPathLength     = 0x170C;
const USHORT ChunkSettingsSPPMRadianceEstimationInitialRadius       = 0x170D;
const USHORT ChunkSettingsSPPMRadianceEstimationMaxPhotons          = 0x170E;
const USHORT ChunkSettingsSPPMRadianceEstimationAlpha               = 0x170F;
const USHORT ChunkSettingsSPPMViewPhotons                           = 0x1710;
const USHORT ChunkSettingsSPPMViewPhotonsRadius                     = 0x1711;
const USHORT ChunkSettingsSPPMMaxRayIntensitySet                    = 0x1712;
const USHORT ChunkSettingsSPPMMaxRayIntensity                       = 0x1713;
