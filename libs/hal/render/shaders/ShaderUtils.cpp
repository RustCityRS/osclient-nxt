// libs/hal/render/shaders/ShaderUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ShaderUtils.h"

namespace jag::render {
    // 0x100bec7a0, 2336 bytes, placed by __FILE__ string
    // BuildGLSLHeader(int, int, ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision)
    basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>*
    BuildGLSLHeader(basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* param_1, int param_2,
                    uint param_3, uint param_4) {
        MapArea* pMVar1;
        long lVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        ostream* poVar5;
        char* this;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1a0[16];
        undefined1 local_190[272];
        undefined* puStack_80;
        undefined* local_78;
        undefined* puStack_70;
        undefined* local_68;
        undefined* puStack_60;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* local_50;
        ulong local_48;
        int local_3c;
        uint local_38;
        char local_32;
        char local_31;

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_1a0);
        if (param_2 == 4) {
            switch ((ulong)param_3) {
            case 0:
                std::operator<<((ostream*)local_190, "\n#version 400\n");
                break;
            default:
                this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              125, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            case 10:
                std::operator<<((ostream*)local_190, "\n#version 410\n");
                break;
            case 20:
                std::operator<<((ostream*)local_190, "\n#version 420\n");
                break;
            case 30:
                std::operator<<((ostream*)local_190, "\n#version 430\n");
                break;
            case 40:
                std::operator<<((ostream*)local_190, "\n#version 440\n");
                break;
            case 50:
                std::operator<<((ostream*)local_190, "\n#version 450\n");
                break;
            case 60:
                std::operator<<((ostream*)local_190, "\n#version 460\n");
            }
        } else if (param_2 == 3) {
            if (param_3 != 30) {
                this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              93, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            }
            std::operator<<((ostream*)local_190, "\n#version 330\n");
        } else {
            if (param_2 != 1) {
                this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              132, 0, "Unsupported GLSL shader language version");
            LAB_100becec3:
                /* WARNING: Subroutine does not return */
                ~OptionStore();
            }
            switch (param_3) {
            case 10:
                std::operator<<((ostream*)local_190, "\n#version 110\n");
                break;
            default:
                this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              79, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            case 20:
                std::operator<<((ostream*)local_190, "\n#version 120\n");
                break;
            case 30:
                std::operator<<((ostream*)local_190, "\n#version 130\n");
                break;
            case 40:
                std::operator<<((ostream*)local_190, "\n#version 140\n");
                break;
            case 50:
                std::operator<<((ostream*)local_190, "\n#version 150\n");
            }
        }
        std::operator<<((ostream*)local_190,
                        "\n/***************************************************/\n/***************** GLSL Header "
                        "*********************/\n/***************************************************/\n");
        std::operator<<((ostream*)local_190,
                        "#ifdef GL_EXT_gpu_shader4\n    #extension GL_EXT_gpu_shader4 : enable\n#endif\n");
        std::operator<<((ostream*)local_190,
                        "#ifdef GL_ARB_gpu_shader5\n    #extension GL_ARB_gpu_shader5 : enable\n#endif\n");
        pMVar1 = (MapArea*)local_190;
        std::operator<<(
            (ostream*)local_190,
            "#ifdef GL_ARB_derivative_control\n    #extension GL_ARB_derivative_control : enable\n#endif\n");
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 176) != '\0') {
            std::operator<<((ostream*)local_190,
                            "\n#ifdef GL_ARB_texture_gather\n    #extension GL_ARB_texture_gather : enable\n#endif\n");
        }
        std::operator<<((ostream*)local_190, "\n#define OGL_BACKEND\n");
        local_31 = 1 < param_2 || 20 < (int)param_3 && param_2 == 1;
        if (1 < param_2 || 20 < (int)param_3 && param_2 == 1) {
            std::operator<<((ostream*)local_190, "\n#undef attribute\n#define attribute in\n");
            std::operator<<((ostream*)local_190, "\n#undef gl_FragColor\n#define gl_FragColor FragColor\n");
        }
        local_32 = 19 < (int)param_3 && param_2 == 1 || 1 < param_2;
        pMVar1 = (MapArea*)local_190;
        if (19 < (int)param_3 && param_2 == 1 || 1 < param_2) {
            std::operator<<((ostream*)local_190, "\n#define shadow2DCompat texture\n");
        } else {
            std::operator<<((ostream*)local_190, "\nfloat shadow2DCompat(sampler2DShadow shadowMap, vec3 "
                                                 "texCoord)\n{\n    return shadow2D(shadowMap, texCoord).x;\n}\n");
        }
        if ((1 < param_2) || (param_2 == 1 && 29 < (int)param_3)) {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((ostream*)local_190,
                            "\n#undef textureCube\n#define textureCube texture\n\n#undef texture2D\n#define texture2D "
                            "texture\n\n#undef texture3D\n#define texture3D texture\n\n#undef texture2DLod\n#define "
                            "texture2DLod textureLod\n\n#undef textureCubeLod\n#define textureCubeLod "
                            "textureLod\n\n#undef texture2DGrad\n#define texture2DGrad textureGrad\n");
        }
        if ((param_2 == 1) && ((int)param_3 < 21)) {
            std::operator<<((ostream*)local_190, "#define in varying\n#define out varying\n\n");
            pMVar1 = (MapArea*)local_190;
            std::operator<<((ostream*)local_190,
                            "#if !defined(flat)\n    #define flat\n#endif\n#if !defined(smooth)\n    #define "
                            "smooth\n#endif\n#if !defined(noperspective)\n    #define noperspective\n#endif\n\n");
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 167) != '\0') {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((ostream*)local_190, "\n#define MSAA_AVAILABLE\n");
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<((ostream*)local_190, "\n#define TEXTURE_OFFSET_AVAILABLE\n");
        }
        std::operator<<((ostream*)local_190,
                        "#if !defined(lowp)\n    #define lowp\n#endif\n#if !defined(mediump)\n    #define "
                        "mediump\n#endif\n#if !defined(highp)\n    #define highp\n#endif\n\n");
        pMVar1 = (MapArea*)local_190;
        std::operator<<((ostream*)local_190, "\n#define GRAPHICS_QUALITY_LOW 0\n#define GRAPHICS_QUALITY_MEDIUM "
                                             "1\n#define GRAPHICS_QUALITY_HIGH 2\n#define GRAPHICS_QUALITY_ULTRA 3\n");
        if (param_2 < 4) {
            std::operator<<((ostream*)local_190, "#define precise\n");
            local_190._264_8_ = "float";
            puStack_80 = &DAT_100e578f4;
            local_78 = &DAT_100e578f8;
            puStack_70 = &DAT_100e578fd;
            local_68 = &DAT_100e57902;
            puStack_60 = &DAT_100e57907;
            pMVar1 = (MapArea*)(local_190 + 264);
            local_50 = param_1;
            local_48 = (ulong)param_3;
            local_3c = param_2;
            local_38 = param_4;
            puVar3 = (undefined8*)pMVar1->begin();
            puVar4 = (undefined8*)pMVar1->end();
            param_1 = local_50;
            param_2 = local_3c;
            param_4 = local_38;
            for (; local_50 = param_1, local_3c = param_2, local_38 = param_4, puVar3 != puVar4; puVar3 = puVar3 + 1) {
                poVar5 = std::operator<<((ostream*)local_190, (char*)*puVar3);
                poVar5 = std::operator<<(poVar5, " fma(");
                poVar5 = std::operator<<(poVar5, (char*)*puVar3);
                poVar5 = std::operator<<(poVar5, " a, ");
                poVar5 = std::operator<<(poVar5, (char*)*puVar3);
                poVar5 = std::operator<<(poVar5, " b, ");
                pMVar1 = (MapArea*)std::operator<<(poVar5, (char*)*puVar3);
                std::operator<<((ostream*)pMVar1, " c)\n{\n   return (a * b) + c;\n}\n\n");
                param_1 = local_50;
                param_2 = local_3c;
                param_4 = local_38;
            }
            param_3 = (uint)local_48;
        }
        if ((param_4 & 4294967294) == 35632) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if ((*(char*)(lVar2 + 174) == '\0') || (local_32 != '\x01')) {
                std::operator<<(
                    (ostream*)local_190,
                    "\n#define shadow2DLodCompat(shadowMap, texCoord, lod) shadow2DCompat(shadowMap, texCoord)\n");
            } else {
                std::operator<<((ostream*)local_190, "\n#define shadow2DLodCompat texture2DLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if (*(char*)(lVar2 + 174) == '\0') {
                std::operator<<(
                    (ostream*)local_190,
                    "\n#define texture2DLodCompat(sampler, texCoord, lod) texture2D(sampler, texCoord, lod)\n");
            } else {
                std::operator<<((ostream*)local_190, "\n#define texture2DLodCompat texture2DLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if (*(char*)(lVar2 + 174) == '\0') {
                std::operator<<(
                    (ostream*)local_190,
                    "\n#define textureCubeLodCompat(sampler, texCoord, lod) textureCube(sampler, texCoord, lod)\n");
            } else {
                std::operator<<((ostream*)local_190, "\n#define textureCubeLodCompat textureCubeLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(char*)(lVar2 + 176) == '\0') {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((ostream*)local_190,
                                "\nvec4 textureGatherCompat(sampler2D sampler, vec2 texCoord, vec2 viewportScale)\n{\n "
                                "  vec2 uv10 = texCoord + vec2(viewportScale.x, 0.0);\n   vec2 uv01 = texCoord + "
                                "vec2(0.0, viewportScale.y);\n   vec2 uv11 = texCoord + viewportScale.xy;\n   vec4 "
                                "gatherResult;\n   gatherResult[0] = float(texture2DLodCompat(sampler, texCoord, "
                                "0.0));\n   gatherResult[1] = float(texture2DLodCompat(sampler, uv10, 0.0));\n   "
                                "gatherResult[2] = float(texture2DLodCompat(sampler, uv01, 0.0));\n   gatherResult[3] "
                                "= float(texture2DLodCompat(sampler, uv11, 0.0));\n   return gatherResult;\n}\n");
            } else {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((ostream*)local_190, "\n#define textureGatherCompat(sampler, texCoord, viewportScale) "
                                                     "textureGather(sampler, texCoord).wzxy\n");
            }
        }
        if (param_4 == 37305) {
            std::operator<<((ostream*)local_190, "\n#define SHADER_TYPE_COMPUTE\n");
            pMVar1 = (MapArea*)local_190;
            std::operator<<((ostream*)local_190, "\n#define sampler _UNDEFINED_SAMPLER_TYPE\n");
        } else if (param_4 == 35632) {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((ostream*)local_190, "\n#define SHADER_TYPE_PIXEL\n");
            if (param_2 < 3) {
                if (local_31 != '\0') {
                    pMVar1 = (MapArea*)local_190;
                    std::operator<<((ostream*)local_190, "\nout vec4 gl_FragColor;\n");
                }
            } else {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((ostream*)local_190, "\nlayout (location = 0) out vec4 gl_FragColor;\n");
            }
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if ((1 < param_2) || (param_2 == 1 && 39 < (int)param_3)) {
                std::operator<<((ostream*)local_190, "\n#define UNIFORM_BUFFER_BEGIN(name) layout (std140) uniform "
                                                     "name { \n#define UNIFORM_BUFFER_END }; \n");
                goto LAB_100beccff;
            }
        }
        std::operator<<((ostream*)local_190, "\n#define UNIFORM_BUFFER_BEGIN(name) \n#define UNIFORM_BUFFER_END\n");
    LAB_100beccff:
        if (local_32 == '\0') {
            std::operator<<((ostream*)local_190,
                            "\nmat3 Mat4ToMat3(const mat4 inputMatrix)\n{\n    return mat3(inputMatrix[0][0], "
                            "inputMatrix[0][1], inputMatrix[0][2], inputMatrix[1][0], inputMatrix[1][1], "
                            "inputMatrix[1][2], inputMatrix[2][0], inputMatrix[2][1], inputMatrix[2][2]);\n}\n");
        } else {
            std::operator<<((ostream*)local_190,
                            "\nmat3 Mat4ToMat3(const mat4 inputMatrix)\n{\n    return mat3(inputMatrix);\n}\n");
        }
        if (local_31 == '\0') {
            std::operator<<(
                (ostream*)local_190,
                "\nbool isNaN(float val)\n{\n    return (val < 0.0 || 0.0 < val || val == 0.0) ? false : true;\n}\n");
        } else {
            std::operator<<((ostream*)local_190, "\n#define isNaN isnan");
        }
        std::operator<<((ostream*)local_190, "\n\n#ifndef GL_ARB_derivative_control\n    #define dFdxFine dFdx\n    "
                                             "#define dFdyFine dFdy\n    #define fwidthFine fwidth\n#endif\n\n");
        std::operator<<((ostream*)local_190, "\n/***************************************************/\n\n");
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(param_1);
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_1a0);
        return param_1;
    }

    // 0x100bed320, 256 bytes, base-object constructor, placed by debug map only (low confidence)
    // ShaderSourceStream::ShaderSourceStream(ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    void ShaderSourceStream::ShaderSourceStream(long* param_2, undefined4 param_3, undefined4 param_4,
                                                undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                undefined4 param_8, undefined4 param_9) {
        undefined* puVar1;
        MapArea* this_00;
        long lVar2;
        undefined1 local_70[48];
        long* local_40;

        local_40 = param_2 + 1;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream((uint)this);
        puVar1 = (undefined*)*param_2;
        field_0 = puVar1;
        *(long*)((long)&field_0 + *(long*)(puVar1 + -24)) = param_2[11];
        field_16 = (undefined*)param_2[12];
        this_00 = (MapArea*)((ShaderSourceStream*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        new (local_70) ShaderPrecisionProfile(param_4, param_5, param_6, param_7, param_8, param_9);
        InitShaderPrecisionProfile();
        BuildGLSLHeader(local_70 + 24, *(undefined4*)(lVar2 + 32), *(undefined4*)(lVar2 + 36), param_3);
        std::operator<<((ostream*)&field_16, (basic_string*)(local_70 + 24));
        ((local_70 + 24))->~basic_string();
    }

    // 0x100bed4b0, 288 bytes, placed by debug map only (low confidence)
    // ShaderSourceStream::InitShaderPrecisionProfile(ShaderPrecisionProfile&, ShaderType, RenderDeviceCaps const&)
    void ShaderSourceStream::InitShaderPrecisionProfile(undefined8 param_1_00, int* param_1, int param_3,
                                                        long param_4) {
        int iVar1;
        int local_38;
        int iStack_34;
        uint uStack_30;
        int iStack_2c;
        int local_28;
        int iStack_24;

        new (&local_38) ShaderPrecisionProfile(2, 2, 2, 2, 2, 2);
        if (param_3 == 35632) {
            _local_28 = *(undefined8*)(param_4 + 272);
            _local_38 = *(undefined8*)(param_4 + 256);
            _uStack_30 = *(undefined8*)(param_4 + 264);
        } else if (param_3 == 37305) {
            _local_28 = *(undefined8*)(param_4 + 296);
            _local_38 = *(undefined8*)(param_4 + 280);
            _uStack_30 = *(undefined8*)(param_4 + 288);
        } else {
            if (param_3 != 35633) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderUtils.cpp",
                                856, "Unknown shader type");
            }
            _local_28 = *(undefined8*)(param_4 + 248);
            _local_38 = *(undefined8*)(param_4 + 232);
            _uStack_30 = *(undefined8*)(param_4 + 240);
        }
        iVar1 = eastl::max<int>(local_38, *param_1);
        *param_1 = iVar1;
        iVar1 = eastl::max<int>(iStack_34, param_1[1]);
        param_1[1] = iVar1;
        iVar1 = eastl::max<int>(uStack_30, param_1[2]);
        param_1[2] = iVar1;
        iVar1 = eastl::max<int>(iStack_2c, param_1[3]);
        param_1[3] = iVar1;
        iVar1 = eastl::max<int>(local_28, param_1[4]);
        param_1[4] = iVar1;
        iVar1 = eastl::max<int>(iStack_24, param_1[5]);
        param_1[5] = iVar1;
    }

    // 0x100bed660, 288 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ShaderSourceStream::ShaderSourceStream(ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    void ShaderSourceStream::ShaderSourceStream(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                                undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                undefined4 param_8) {
        undefined* puVar1;
        MapArea* this_00;
        long lVar2;
        undefined1 local_78[48];
        undefined** local_48;
        undefined* local_40;

        local_48 = &field_128;
        new (local_48) std::ios();
        local_40 = PTR_VTT_100ee6f88 + 8;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream((uint)this);
        puVar1 = PTR_vtable_100ee8678;
        field_0 = PTR_vtable_100ee8678 + 24;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
        this_00 = (MapArea*)((ShaderSourceStream*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        new (local_78) ShaderPrecisionProfile(param_3, param_4, param_5, param_6, param_7, param_8);
        InitShaderPrecisionProfile();
        BuildGLSLHeader(local_78 + 24, *(undefined4*)(lVar2 + 32), *(undefined4*)(lVar2 + 36), param_2);
        std::operator<<((ostream*)&field_16, (basic_string*)(local_78 + 24));
        ((local_78 + 24))->~basic_string();
    }

    // 0x100bed7b0, 256 bytes, base-object constructor, placed by debug map only (low confidence)
    // ShaderSourceStream::ShaderSourceStream(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    /* ShaderSourceStream::ShaderSourceStream(std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, ShaderType,
   ShaderVariablePrecision, ShaderVariablePrecision,
   ShaderVariablePrecision, ShaderVariablePrecision,
   ShaderVariablePrecision, ShaderVariablePrecision, unsigned int) */

    void ShaderSourceStream::ShaderSourceStream(long* param_1, undefined8 param_3, undefined4 param_4,
                                                undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                undefined4 param_8, undefined4 param_9) {
        undefined* puVar1;
        MapArea* this_00;
        long lVar2;
        undefined1 local_70[48];
        long* local_40;

        local_40 = param_1 + 1;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(
            (basic_string*)this, (uint)local_40);
        puVar1 = (undefined*)*param_1;
        field_0 = puVar1;
        *(long*)((long)&field_0 + *(long*)(puVar1 + -24)) = param_1[11];
        field_16 = (undefined*)param_1[12];
        this_00 = (MapArea*)((ShaderSourceStream*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        new (local_70) ShaderPrecisionProfile(param_5, param_6, param_7, param_8, param_9, 2);
        InitShaderPrecisionProfile();
        BuildGLSLHeader(local_70 + 24, *(undefined4*)(lVar2 + 32), *(undefined4*)(lVar2 + 36), param_4);
        std::operator<<((ostream*)&field_16, (basic_string*)(local_70 + 24));
        ((local_70 + 24))->~basic_string();
    }

    // 0x100bed950, 304 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ShaderSourceStream::ShaderSourceStream(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    /* ShaderSourceStream::ShaderSourceStream(std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, ShaderType,
   ShaderVariablePrecision, ShaderVariablePrecision,
   ShaderVariablePrecision, ShaderVariablePrecision,
   ShaderVariablePrecision, ShaderVariablePrecision, unsigned int) */

    void ShaderSourceStream::ShaderSourceStream(undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                                undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                undefined4 param_8) {
        undefined* puVar1;
        MapArea* this_00;
        long lVar2;
        undefined1 local_78[48];
        undefined** local_48;

        local_48 = &field_128;
        new (local_48) std::ios();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(
            (basic_string*)this, (int)PTR_VTT_100ee6f88 + 8);
        puVar1 = PTR_vtable_100ee8678;
        field_0 = PTR_vtable_100ee8678 + 24;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
        this_00 = (MapArea*)((ShaderSourceStream*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        new (local_78) ShaderPrecisionProfile(param_4, param_5, param_6, param_7, param_8, 2);
        InitShaderPrecisionProfile();
        BuildGLSLHeader(local_78 + 24, *(undefined4*)(lVar2 + 32), *(undefined4*)(lVar2 + 36), param_3);
        std::operator<<((ostream*)&field_16, (basic_string*)(local_78 + 24));
        ((local_78 + 24))->~basic_string();
    }

} // namespace jag::render
