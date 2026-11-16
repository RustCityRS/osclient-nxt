// libs/hal/render/shaders/ShaderUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ShaderUtils.h"

namespace jag::render {
    // 0x100bec7a0
    ReturnValue*
    BuildGLSLHeader(int arg1, int arg2, ShaderType shaderType, ShaderVariablePrecision shaderVariablePrecision1,
                    ShaderVariablePrecision shaderVariablePrecision2, ShaderVariablePrecision shaderVariablePrecision3,
                    ShaderVariablePrecision shaderVariablePrecision4, ShaderVariablePrecision shaderVariablePrecision5,
                    ShaderVariablePrecision shaderVariablePrecision6) {
        ReturnValue* result;
        uint64_t* puVar3;
        uint64_t* puVar4;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        uint32_t in_register_0000003c;
        ReturnValue result;
        char* char;
        uint8_t local_190[272];
        uint8_t* puStack_80;
        uint8_t* local_78;
        uint8_t* puStack_70;
        uint8_t* local_68;
        uint8_t* puStack_60;
        ReturnValue* local_50;
        unsigned long local_48;
        int local_3c;
        ShaderVariablePrecision local_38;

        &result = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1a0;
        if (arg2 == 4) {
            switch ((unsigned long)shaderType) {
            case 0:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 400\n");
                break;
            default:
                char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              125, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            case 10:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 410\n");
                break;
            case 20:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 420\n");
                break;
            case 30:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 430\n");
                break;
            case 40:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 440\n");
                break;
            case 50:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 450\n");
                break;
            case 60:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 460\n");
            }
        } else if (arg2 == 3) {
            if (shaderType != 30) {
                char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              93, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            }
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 330\n");
        } else {
            if (arg2 != 1) {
                char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              132, 0, "Unsupported GLSL shader language version");
            LAB_100becec3:
                char->~OptionStore();
            }
            switch (shaderType) {
            case 10:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 110\n");
                break;
            default:
                char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                       "ShaderUtils.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/ShaderUtils.cpp",
                              79, 0, "Unsupported GLSL shader language version");
                goto LAB_100becec3;
            case 20:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 120\n");
                break;
            case 30:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 130\n");
                break;
            case 40:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 140\n");
                break;
            case 50:
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#version 150\n");
            }
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "\n/***************************************************/\n/***************** GLSL Header "
                        "*********************/\n/***************************************************/\n");
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "#ifdef GL_EXT_gpu_shader4\n    #extension GL_EXT_gpu_shader4 : enable\n#endif\n");
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "#ifdef GL_ARB_gpu_shader5\n    #extension GL_ARB_gpu_shader5 : enable\n#endif\n");
        MapArea* pMVar1 = (MapArea*)local_190;
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)local_190,
            "#ifdef GL_ARB_derivative_control\n    #extension GL_ARB_derivative_control : enable\n#endif\n");
        pMVar1 = (MapArea*)pMVar1->Instance();
        long lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 176) != '\0') {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#ifdef GL_ARB_texture_gather\n    #extension GL_ARB_texture_gather : enable\n#endif\n");
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#define OGL_BACKEND\n");
        char local_31 = 1 < arg2 || 20 < (int)shaderType && arg2 == 1;
        if (1 < arg2 || 20 < (int)shaderType && arg2 == 1) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#undef attribute\n#define attribute in\n");
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#undef gl_FragColor\n#define gl_FragColor FragColor\n");
        }
        char local_32 = 19 < (int)shaderType && arg2 == 1 || 1 < arg2;
        pMVar1 = (MapArea*)local_190;
        if (19 < (int)shaderType && arg2 == 1 || 1 < arg2) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#define shadow2DCompat texture\n");
        } else {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\nfloat shadow2DCompat(sampler2DShadow shadowMap, vec3 texCoord)\n{\n    return "
                            "shadow2D(shadowMap, texCoord).x;\n}\n");
        }
        if ((1 < arg2) || (arg2 == 1 && 29 < (int)shaderType)) {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#undef textureCube\n#define textureCube texture\n\n#undef texture2D\n#define texture2D "
                            "texture\n\n#undef texture3D\n#define texture3D texture\n\n#undef texture2DLod\n#define "
                            "texture2DLod textureLod\n\n#undef textureCubeLod\n#define textureCubeLod "
                            "textureLod\n\n#undef texture2DGrad\n#define texture2DGrad textureGrad\n");
        }
        if ((arg2 == 1) && ((int)shaderType < 21)) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "#define in varying\n#define out varying\n\n");
            pMVar1 = (MapArea*)local_190;
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "#if !defined(flat)\n    #define flat\n#endif\n#if !defined(smooth)\n    #define "
                            "smooth\n#endif\n#if !defined(noperspective)\n    #define noperspective\n#endif\n\n");
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 167) != '\0') {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#define MSAA_AVAILABLE\n");
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#define TEXTURE_OFFSET_AVAILABLE\n");
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "#if !defined(lowp)\n    #define lowp\n#endif\n#if !defined(mediump)\n    #define "
                        "mediump\n#endif\n#if !defined(highp)\n    #define highp\n#endif\n\n");
        pMVar1 = (MapArea*)local_190;
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "\n#define GRAPHICS_QUALITY_LOW 0\n#define GRAPHICS_QUALITY_MEDIUM 1\n#define "
                        "GRAPHICS_QUALITY_HIGH 2\n#define GRAPHICS_QUALITY_ULTRA 3\n");
        if (arg2 < 4) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "#define precise\n");
            local_190._264_8_ = "float";
            puStack_80 = &DAT_100e578f4;
            local_78 = &DAT_100e578f8;
            puStack_70 = &DAT_100e578fd;
            local_68 = &DAT_100e57902;
            puStack_60 = &DAT_100e57907;
            pMVar1 = (MapArea*)(local_190 + 264);
            local_50 = &result;
            local_48 = (unsigned long)shaderType;
            local_3c = arg2;
            local_38 = shaderVariablePrecision1;
            puVar3 = (uint64_t*)pMVar1->begin();
            puVar4 = (uint64_t*)pMVar1->end();
            &result = local_50;
            arg2 = local_3c;
            shaderVariablePrecision1 = local_38;
            for (; local_50 = &result, local_3c = arg2, local_38 = shaderVariablePrecision1, puVar3 != puVar4;
                 puVar3 = puVar3 + 1) {
                pbVar5 = std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, (char*)*puVar3);
                pbVar5 = std::operator<<(pbVar5, " fma(");
                pbVar5 = std::operator<<(pbVar5, (char*)*puVar3);
                pbVar5 = std::operator<<(pbVar5, " a, ");
                pbVar5 = std::operator<<(pbVar5, (char*)*puVar3);
                pbVar5 = std::operator<<(pbVar5, " b, ");
                pMVar1 = (MapArea*)std::operator<<(pbVar5, (char*)*puVar3);
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)pMVar1,
                                " c)\n{\n   return (a * b) + c;\n}\n\n");
                &result = local_50;
                arg2 = local_3c;
                shaderVariablePrecision1 = local_38;
            }
            shaderType = (ShaderType)local_48;
        }
        if ((shaderVariablePrecision1 & 4294967294) == 35632) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if ((*(char*)(lVar2 + 174) == '\0') || (local_32 != '\x01')) {
                std::operator<<(
                    (basic_ostream<char, std::char_traits<char> _>*)local_190,
                    "\n#define shadow2DLodCompat(shadowMap, texCoord, lod) shadow2DCompat(shadowMap, texCoord)\n");
            } else {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\n#define shadow2DLodCompat texture2DLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if (*(char*)(lVar2 + 174) == '\0') {
                std::operator<<(
                    (basic_ostream<char, std::char_traits<char> _>*)local_190,
                    "\n#define texture2DLodCompat(sampler, texCoord, lod) texture2D(sampler, texCoord, lod)\n");
            } else {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\n#define texture2DLodCompat texture2DLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            pMVar1 = (MapArea*)local_190;
            if (*(char*)(lVar2 + 174) == '\0') {
                std::operator<<(
                    (basic_ostream<char, std::char_traits<char> _>*)local_190,
                    "\n#define textureCubeLodCompat(sampler, texCoord, lod) textureCube(sampler, texCoord, lod)\n");
            } else {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\n#define textureCubeLodCompat textureCubeLod\n");
            }
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(char*)(lVar2 + 176) == '\0') {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\nvec4 textureGatherCompat(sampler2D sampler, vec2 texCoord, vec2 viewportScale)\n{\n "
                                "  vec2 uv10 = texCoord + vec2(viewportScale.x, 0.0);\n   vec2 uv01 = texCoord + "
                                "vec2(0.0, viewportScale.y);\n   vec2 uv11 = texCoord + viewportScale.xy;\n   vec4 "
                                "gatherResult;\n   gatherResult[0] = float(texture2DLodCompat(sampler, texCoord, "
                                "0.0));\n   gatherResult[1] = float(texture2DLodCompat(sampler, uv10, 0.0));\n   "
                                "gatherResult[2] = float(texture2DLodCompat(sampler, uv01, 0.0));\n   gatherResult[3] "
                                "= float(texture2DLodCompat(sampler, uv11, 0.0));\n   return gatherResult;\n}\n");
            } else {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\n#define textureGatherCompat(sampler, texCoord, viewportScale) "
                                "textureGather(sampler, texCoord).wzxy\n");
            }
        }
        if (shaderVariablePrecision1 == 37305) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#define SHADER_TYPE_COMPUTE\n");
            pMVar1 = (MapArea*)local_190;
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\n#define sampler _UNDEFINED_SAMPLER_TYPE\n");
        } else if (shaderVariablePrecision1 == 35632) {
            pMVar1 = (MapArea*)local_190;
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#define SHADER_TYPE_PIXEL\n");
            if (arg2 < 3) {
                if (local_31 != '\0') {
                    pMVar1 = (MapArea*)local_190;
                    std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                    "\nout vec4 gl_FragColor;\n");
                }
            } else {
                pMVar1 = (MapArea*)local_190;
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\nlayout (location = 0) out vec4 gl_FragColor;\n");
            }
        }
        pMVar1 = (MapArea*)pMVar1->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if ((1 < arg2) || (arg2 == 1 && 39 < (int)shaderType)) {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                                "\n#define UNIFORM_BUFFER_BEGIN(name) layout (std140) uniform name { \n#define "
                                "UNIFORM_BUFFER_END }; \n");
                goto LAB_100beccff;
            }
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "\n#define UNIFORM_BUFFER_BEGIN(name) \n#define UNIFORM_BUFFER_END\n");
    LAB_100beccff:
        if (local_32 == '\0') {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\nmat3 Mat4ToMat3(const mat4 inputMatrix)\n{\n    return mat3(inputMatrix[0][0], "
                            "inputMatrix[0][1], inputMatrix[0][2], inputMatrix[1][0], inputMatrix[1][1], "
                            "inputMatrix[1][2], inputMatrix[2][0], inputMatrix[2][1], inputMatrix[2][2]);\n}\n");
        } else {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                            "\nmat3 Mat4ToMat3(const mat4 inputMatrix)\n{\n    return mat3(inputMatrix);\n}\n");
        }
        if (local_31 == '\0') {
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)local_190,
                "\nbool isNaN(float val)\n{\n    return (val < 0.0 || 0.0 < val || val == 0.0) ? false : true;\n}\n");
        } else {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190, "\n#define isNaN isnan");
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "\n\n#ifndef GL_ARB_derivative_control\n    #define dFdxFine dFdx\n    #define dFdyFine dFdy\n "
                        "   #define fwidthFine fwidth\n#endif\n\n");
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)local_190,
                        "\n/***************************************************/\n\n");
        result = local_1a0.str();
        return result;
    }

    // 0x100bed320
    ShaderSourceStream::ShaderSourceStream(ShaderType shaderType, ShaderVariablePrecision shaderVariablePrecision1,
                                           ShaderVariablePrecision shaderVariablePrecision2,
                                           ShaderVariablePrecision shaderVariablePrecision3,
                                           ShaderVariablePrecision shaderVariablePrecision4,
                                           ShaderVariablePrecision shaderVariablePrecision5,
                                           ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg8) {
        uint32_t in_register_00000034;
        unsigned int in_stack_00000020;
        ShaderVariablePrecision in_stack_ffffffffffffff70;
        ShaderVariablePrecision in_stack_ffffffffffffff78;
        uint8_t local_70[48];

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)shaderType);
        void** local_40 = (void**)(plVar2 + 1);
        ShaderSourceStream* pSVar3 = this;
        new (this) std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>(local_40,
                                                                                                   in_stack_00000020);
        ShaderSourceStream_vtbl* pSVar1 = (ShaderSourceStream_vtbl*)*plVar2;
        *(long*)((long)&this->_vptr + (long)pSVar1[-2]._deleting_dtor) = plVar2[11];
        field_16 = &plVar2[12];
        auto this_00 = pSVar3->Instance();
        auto renderDeviceCaps = this_00->GetOrigin();
        pSVar3 = (ShaderSourceStream*)local_70;
        new (pSVar3)
            ShaderPrecisionProfile(shaderVariablePrecision2, shaderVariablePrecision3, shaderVariablePrecision4,
                                   shaderVariablePrecision5, shaderVariablePrecision6, arg8);
        InitShaderPrecisionProfile(pSVar3, (ShaderPrecisionProfile*)local_70, shaderVariablePrecision1,
                                   renderDeviceCaps);
        BuildGLSLHeader((int)local_70 + 24, renderDeviceCaps->field_32, renderDeviceCaps->field_36,
                        shaderVariablePrecision1, shaderVariablePrecision5, shaderVariablePrecision6, arg8,
                        in_stack_ffffffffffffff70, in_stack_ffffffffffffff78);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)&field_16,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)(local_70 + 24));
        ((local_70 + 24))->~basic_string();
    }

    // 0x100bed4b0
    void ShaderSourceStream::InitShaderPrecisionProfile(ShaderPrecisionProfile& shaderPrecisionProfile,
                                                        ShaderType shaderType,
                                                        const RenderDeviceCaps& renderDeviceCaps) {
        ShaderVariablePrecision SStack_34;
        ShaderVariablePrecision SStack_30;
        ShaderVariablePrecision SStack_2c;
        ShaderVariablePrecision local_28;
        ShaderVariablePrecision SStack_24;

        ShaderVariablePrecision local_38(2, 2, 2, 2, 2, 2);
        if (shaderType == 35632) {
            local_28 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_272;
            SStack_24 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_276;
            local_38 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_256;
            SStack_34 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_260;
            SStack_30 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_264;
            SStack_2c = *(ShaderVariablePrecision*)&renderDeviceCaps.field_268;
        } else if (shaderType == 37305) {
            _local_28 = *(uint64_t*)(renderDeviceCaps.field_280 + 16);
            local_38 = *(ShaderVariablePrecision*)(renderDeviceCaps.field_280 + 0);
            SStack_34 = *(ShaderVariablePrecision*)(renderDeviceCaps.field_280 + 4);
            _SStack_30 = *(uint64_t*)(renderDeviceCaps.field_280 + 8);
        } else {
            if (shaderType != 35633) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "shaders/ShaderUtils.cpp",
                                856, "Unknown shader type");
            }
            local_28 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_248;
            SStack_24 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_252;
            local_38 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_232;
            SStack_34 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_236;
            SStack_30 = *(ShaderVariablePrecision*)&renderDeviceCaps.field_240;
            SStack_2c = *(ShaderVariablePrecision*)&renderDeviceCaps.field_244;
        }
        int iVar1 = eastl::max<int>(local_38, shaderPrecisionProfile.field_0);
        shaderPrecisionProfile.field_0 = iVar1;
        iVar1 = eastl::max<int>(SStack_34, shaderPrecisionProfile.field_4);
        shaderPrecisionProfile.field_4 = iVar1;
        iVar1 = eastl::max<int>(SStack_30, shaderPrecisionProfile.field_8);
        shaderPrecisionProfile.field_8 = iVar1;
        iVar1 = eastl::max<int>(SStack_2c, shaderPrecisionProfile.field_12);
        shaderPrecisionProfile.field_12 = iVar1;
        iVar1 = eastl::max<int>(local_28, shaderPrecisionProfile.field_16);
        shaderPrecisionProfile.field_16 = iVar1;
        iVar1 = eastl::max<int>(SStack_24, shaderPrecisionProfile.field_20);
        shaderPrecisionProfile.field_20 = iVar1;
    }

    // 0x100bed7b0
    ShaderSourceStream::ShaderSourceStream(
        const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str, ShaderType shaderType,
        ShaderVariablePrecision shaderVariablePrecision1, ShaderVariablePrecision shaderVariablePrecision2,
        ShaderVariablePrecision shaderVariablePrecision3, ShaderVariablePrecision shaderVariablePrecision4,
        ShaderVariablePrecision shaderVariablePrecision5, ShaderVariablePrecision shaderVariablePrecision6,
        unsigned int arg9) {
        uint32_t in_register_00000014;
        unsigned int in_stack_00000028;
        ShaderVariablePrecision in_stack_ffffffffffffff70;
        ShaderVariablePrecision in_stack_ffffffffffffff78;
        uint8_t local_70[48];

        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>* local_40 = str + 8;
        ShaderSourceStream* pSVar2 = this;
        new (this) std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>(
            *((basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)(((uint64_t)in_register_00000014
                                                                                         << 32) |
                                                                                        (uint32_t)shaderType)),
            in_stack_00000028);
        ShaderSourceStream_vtbl* pSVar1 = *(ShaderSourceStream_vtbl**)str;
        *(uint64_t*)((long)&this->_vptr + (long)pSVar1[-2]._deleting_dtor) = *(uint64_t*)(str + 88);
        field_16 = *(void**)(str + 96);
        auto this_00 = pSVar2->Instance();
        auto renderDeviceCaps = this_00->GetOrigin();
        pSVar2 = (ShaderSourceStream*)local_70;
        new (pSVar2)
            ShaderPrecisionProfile(shaderVariablePrecision2, shaderVariablePrecision3, shaderVariablePrecision4,
                                   shaderVariablePrecision5, shaderVariablePrecision6, 2);
        InitShaderPrecisionProfile(pSVar2, (ShaderPrecisionProfile*)local_70, shaderVariablePrecision1,
                                   renderDeviceCaps);
        BuildGLSLHeader((int)local_70 + 24, renderDeviceCaps->field_32, renderDeviceCaps->field_36,
                        shaderVariablePrecision1, shaderVariablePrecision5, shaderVariablePrecision6, 2,
                        in_stack_ffffffffffffff70, in_stack_ffffffffffffff78);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)&field_16,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)(local_70 + 24));
        ((local_70 + 24))->~basic_string();
    }

} // namespace jag::render
