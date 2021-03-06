/*
 * Copyright 2011 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "GrGLSL.h"
#include "GrShaderCaps.h"

const char* GrGLSLTypeString(const GrShaderCaps* shaderCaps, GrSLType t) {
    switch (t) {
        case kVoid_GrSLType:
            return "void";
        case kHalf_GrSLType:
            return "half";
        case kHalf2_GrSLType:
            return "half2";
        case kHalf3_GrSLType:
            return "half3";
        case kHalf4_GrSLType:
            return "half4";
        case kFloat_GrSLType:
            return "float";
        case kFloat2_GrSLType:
            return "float2";
        case kFloat3_GrSLType:
            return "float3";
        case kFloat4_GrSLType:
            return "float4";
        case kUint2_GrSLType:
            return "uint2";
        case kInt2_GrSLType:
            return "int2";
        case kInt3_GrSLType:
            return "int3";
        case kInt4_GrSLType:
            return "int4";
        case kFloat2x2_GrSLType:
            return "float2x2";
        case kFloat3x3_GrSLType:
            return "float3x3";
        case kFloat4x4_GrSLType:
            return "float4x4";
        case kHalf2x2_GrSLType:
            return "half2x2";
        case kHalf3x3_GrSLType:
            return "half3x3";
        case kHalf4x4_GrSLType:
            return "half4x4";
        case kTexture2DSampler_GrSLType:
            return "sampler2D";
        case kTextureExternalSampler_GrSLType:
            return "samplerExternalOES";
        case kTexture2DRectSampler_GrSLType:
            return "sampler2DRect";
        case kBufferSampler_GrSLType:
            return "samplerBuffer";
        case kBool_GrSLType:
            return "bool";
        case kInt_GrSLType:
            return "int";
        case kUint_GrSLType:
            return "uint";
        case kShort_GrSLType:
            return "short";
        case kShort2_GrSLType:
            return "short2";
        case kShort3_GrSLType:
            return "short3";
        case kShort4_GrSLType:
            return "short4";
        case kUShort_GrSLType:
            return "ushort";
        case kUShort2_GrSLType:
            if (shaderCaps->integerSupport()) {
                return "ushort2";
            } else {
                // uint2 (aka uvec2) isn't supported in GLSL ES 1.00/GLSL 1.20
                // FIXME: this should be handled by the client code rather than relying on
                // unconventional ushort2 behavior.
                return "float2";
            }
        case kUShort3_GrSLType:
            return "ushort3";
        case kUShort4_GrSLType:
            return "ushort4";
        case kTexture2D_GrSLType:
            return "texture2D";
        case kSampler_GrSLType:
            return "sampler";
    }
    SK_ABORT("Unknown shader var type.");
    return ""; // suppress warning
}
