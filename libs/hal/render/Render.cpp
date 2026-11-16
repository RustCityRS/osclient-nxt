// libs/hal/render/Render.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "Render.h"
#include "libs/hal/render/utils/OGL/GLUtils.h"

namespace jag::render {
    // 0x100d99470
    int32_t INPUT_ELEMENT_SIZE[35] = {
        4, 8, 12, 16, 4, 1, 2, 3, 4, 1, 2, 3, 4, 2, 4, 6, 8, 2, 4, 6, 8, 4, 4, 8, 4, 8, 4, 8, 16, 36, 64, 4, 8, 12, 16,
    };

    // 0x100d994fc
    int32_t INPUT_ELEMENT_INDIVIDUAL_SIZE[35] = {
        4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 16, 36, 64, 4, 0, 0, 0,
    };

    // 0x100d99720
    int64_t g_GLFBOAttachmentLut = 154897995566304;

    // 0x100f48600
    float gammaLast[4] = {-1.0f, 0, 0, 0};

    // 0x100f48610
    int32_t g_DEBUG_MESSAGE_SEVERITY_STRINGS__[16] = {
        37190, 0, 15005047, 1, 37191, 0, 15005067, 1, 37192, 0, 15005089, 1, 33387, 0, 15005108, 1,
    };

    // 0x100f48650
    int32_t g_DEBUG_MESSAGE_SOURCE_STRINGS__[20] = {
        33350,    0, 15005136, 1, 33352,    0, 15005153, 1, 33351,    0,
        15005182, 1, 33353,    0, 15005209, 1, 33354,    0, 15005234, 1,
    };

    // 0x100f486a0
    int32_t g_DEBUG_MESSAGE_TYPE_STRINGS__[36] = {
        33356, 0, 15005259, 1, 33357, 0, 15005276, 1, 33358, 0, 15005307, 1,
        33360, 0, 15005337, 1, 33359, 0, 15005360, 1, 33361, 0, 15005383, 1,
        33384, 0, 15005400, 1, 33385, 0, 15005418, 1, 33386, 0, 15005440, 1,
    };

    // 0x100f48884
    int32_t g_GLNativeBackBufferAttachmentLut[3] = {1026, 6145, 6146};

    // 0x103bd9d40
    uint8_t gammaTable[256];

    // 0x103bd9e58, set at startup by ___cxx_global_var_init.186
    StringEnum g_DEBUG_MESSAGE_SEVERITY_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SEVERITY_STRINGS__, 4);

    // 0x103bd9e68, set at startup by ___cxx_global_var_init.192
    StringEnum g_DEBUG_MESSAGE_SOURCE_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SOURCE_STRINGS__, 5);

    // 0x103bd9e78, set at startup by ___cxx_global_var_init.202
    StringEnum g_DEBUG_MESSAGE_TYPE_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_TYPE_STRINGS__, 9);

    // 0x104234898, set at startup by ___cxx_global_var_init.181
    oldscape::dash3d::GridRect g_GLFormatLut[32] = {
        /* [0] */ GridRect(0, 0, 0, 0),
        /* [1] */ GridRect(34836, 6408, 5126, 0),
        /* [2] */ GridRect(34837, 6407, 5126, 0),
        /* [3] */ GridRect(34842, 6408, 5131, 0),
        /* [4] */ GridRect(34843, 6407, 5131, 0),
        /* [5] */ GridRect(33328, 33319, 5126, 0),
        /* [6] */ GridRect(35898, 6407, 35899, 0),
        /* [7] */ GridRect(32856, 6408, 5121, 32856),
        /* [8] */ GridRect(35907, 6408, 5121, 35907),
        /* [9] */ GridRect(33327, 33319, 5131, 0),
        /* [10] */ GridRect(36012, 6402, 5126, 36012),
        /* [11] */ GridRect(33326, 6403, 5126, 0),
        /* [12] */ GridRect(33191, 6402, 5125, 33191),
        /* [13] */ GridRect(33334, 36244, 5125, 0),
        /* [14] */ GridRect(35056, 34041, 34042, 35056),
        /* [15] */ GridRect(33190, 6402, 5125, 33190),
        /* [16] */ GridRect(32849, 6407, 5121, 32849),
        /* [17] */ GridRect(35905, 6407, 5121, 35905),
        /* [18] */ GridRect(36194, 6407, 33635, 36194),
        /* [19] */ GridRect(32854, 6408, 32819, 32854),
        /* [20] */ GridRect(33323, 33319, 5121, 0),
        /* [21] */ GridRect(33325, 6403, 5131, 0),
        /* [22] */ GridRect(33189, 6402, 5123, 33189),
        /* [23] */ GridRect(33321, 6403, 5121, 0),
        /* [24] */ GridRect(33777, 6407, 5121, 0),
        /* [25] */ GridRect(35917, 6407, 5121, 0),
        /* [26] */ GridRect(33779, 6408, 5121, 0),
        /* [27] */ GridRect(35919, 6408, 5121, 0),
        /* [28] */ GridRect(6408, 6408, 32820, 32855),
        /* [29] */ GridRect(6408, 32993, 33639, 32856),
        /* [30] */ GridRect(37496, 6408, 5121, 0),
        /* [31] */ GridRect(37497, 6408, 5121, 0),
    };

    // 0x104234a98, set at startup by ___cxx_global_var_init.203
    oldscape::rs2lib::worldmap::LocationData g_GLMinMagFilterLut[17] = {
        /* [0] */ LocationData(9984, 9728, 0),
        /* [1] */ LocationData(9986, 9728, 0),
        /* [2] */ LocationData(9984, 9729, 0),
        /* [3] */ LocationData(9986, 9729, 0),
        /* [4] */ LocationData(9985, 9728, 0),
        /* [5] */ LocationData(9987, 9728, 0),
        /* [6] */ LocationData(9985, 9729, 0),
        /* [7] */ LocationData(9987, 9729, 0),
        /* [8] */ LocationData(9729, 9729, 0),
        /* [9] */ LocationData(9984, 9728, 34894),
        /* [10] */ LocationData(9986, 9728, 34894),
        /* [11] */ LocationData(9984, 9729, 34894),
        /* [12] */ LocationData(9986, 9729, 34894),
        /* [13] */ LocationData(9985, 9728, 34894),
        /* [14] */ LocationData(9987, 9728, 34894),
        /* [15] */ LocationData(9985, 9729, 34894),
        /* [16] */ LocationData(9987, 9729, 34894),
    };

    // 0x104234b64, set at startup by ___cxx_global_var_init.204
    oldscape::rs2lib::worldmap::LocationData g_GLVertexFormatLut[35] = {
        /* [0] */ LocationData(5126, 1, 5126),
        /* [1] */ LocationData(5126, 2, 35664),
        /* [2] */ LocationData(5126, 3, 35665),
        /* [3] */ LocationData(5126, 4, 35666),
        /* [4] */ LocationData(5125, 1, 5126),
        /* [5] */ LocationData(5120, 1, 5126),
        /* [6] */ LocationData(5120, 2, 35664),
        /* [7] */ LocationData(5120, 3, 35665),
        /* [8] */ LocationData(5120, 4, 35666),
        /* [9] */ LocationData(5121, 1, 5126),
        /* [10] */ LocationData(5121, 2, 35664),
        /* [11] */ LocationData(5121, 3, 35665),
        /* [12] */ LocationData(5121, 4, 35666),
        /* [13] */ LocationData(5122, 1, 5126),
        /* [14] */ LocationData(5122, 2, 35664),
        /* [15] */ LocationData(5122, 3, 35665),
        /* [16] */ LocationData(5122, 4, 35666),
        /* [17] */ LocationData(5123, 1, 5126),
        /* [18] */ LocationData(5123, 2, 35664),
        /* [19] */ LocationData(5123, 3, 35665),
        /* [20] */ LocationData(5123, 4, 35666),
        /* [21] */ LocationData(5121, 4, 35666),
        /* [22] */ LocationData(5122, 2, 35664),
        /* [23] */ LocationData(5122, 4, 35666),
        /* [24] */ LocationData(5123, 2, 35664),
        /* [25] */ LocationData(5123, 4, 35666),
        /* [26] */ LocationData(5131, 2, 35664),
        /* [27] */ LocationData(5131, 4, 35666),
        /* [28] */ LocationData(5126, 4, 35674),
        /* [29] */ LocationData(5126, 9, 35675),
        /* [30] */ LocationData(5126, 16, 35676),
        /* [31] */ LocationData(5125, 1, 5125),
        /* [32] */ LocationData(5125, 2, 36294),
        /* [33] */ LocationData(5125, 3, 36295),
        /* [34] */ LocationData(5125, 4, 36296),
    };

    // 0x104234d08
    eastl::fixed_map<unsigned int, unsigned int, 17ul> g_GLShaderTypeElementSizeMap;

    // 0x100269960: GetBackendDefProjClipRange() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100bc7d30
    void CheckGlErrorInternal(const char* str1, const char* str2, int arg3, ...) {
        bool bVar1;
        char in_AL;
        char* pcVar3;
        uint64_t in_RCX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_1b8[24];
        uint64_t local_188;
        uint64_t local_178;
        uint64_t local_168;
        uint64_t local_158;
        uint64_t local_148;
        uint64_t local_138;
        uint64_t local_128;
        uint64_t local_118;
        uint64_t local_f8;
        uint8_t* local_f0;
        uint8_t* local_e8;

        if (in_AL != '\0') {
            local_188 = in_XMM0_Qa;
            local_178 = in_XMM1_Qa;
            local_168 = in_XMM2_Qa;
            local_158 = in_XMM3_Qa;
            local_148 = in_XMM4_Qa;
            local_138 = in_XMM5_Qa;
            local_128 = in_XMM6_Qa;
            local_118 = in_XMM7_Qa;
        }
        uint64_t local_1a0 = in_RCX;
        uint64_t local_198 = in_R8;
        uint64_t local_190 = in_R9;
        if (CheckGlErrorInternal(char const*, char const*, int, ...)::glErrorBroken != '\0') {
            return;
        }
        int arg2 = _glGetError();
        fixed_string<char, 128> local_e0;
        if (arg2 != 0) {
            local_e8 = local_1b8;
            local_f0 = &uStack0000000000000008;
            local_f8 = 206158430232;
            local_e0.sprintf_va_list(str1, &local_f8);
        }
        int arg3_00 = 1;
        int iVar2 = arg2;
        do {
            if (iVar2 == 0) {
                if (arg2 != 0) {
                LAB_100bc7e86:
                    if (0 < arg3_00) {
                        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        PrintGLError(pcVar3, arg2, arg3_00, str2, arg3);
                    }
                }
            LAB_100bc7ead:
            }
            if (iVar2 == arg2) {
                iVar2 = arg3_00 + 1;
                bVar1 = 998 < arg3_00;
                arg3_00 = iVar2;
                if (bVar1) {
                    CheckGlErrorInternal(char const*, char const*, int, ...)::glErrorBroken = '\x01';
                    if (arg2 == 0)
                        goto LAB_100bc7ead;
                    goto LAB_100bc7e86;
                }
            } else {
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                PrintGLError(pcVar3, arg2, arg3_00, str2, arg3);
                arg2 = iVar2;
                arg3_00 = 0;
            }
            iVar2 = _glGetError();
        } while (true);
    }

    // 0x100bc89c0
    int GetTextureImageDataSize(TextureType textureType, int arg2, int arg3, int arg4, Format format, int arg6) {
        int iVar1;

        int iVar3 = 1;
        if (textureType == 32879) {
            iVar3 = arg4;
        }
        int iVar2 = 0;
        if (0 < arg6) {
            iVar2 = 0;
            do {
                if ((0 < arg2) && (0 < arg3)) {
                    iVar1 = GetImageByteSize(arg2, arg3, format, 0);
                    iVar2 = iVar2 + iVar1 * iVar3;
                }
                arg2 = arg2 / 2;
                arg3 = arg3 / 2;
                arg6 = arg6 - 1;
            } while (arg6 != 0);
        }
        if ((int)textureType < 34067) {
            if ((textureType != 3553) && (textureType != 32879)) {
                return 0;
            }
        } else {
            if (textureType == 34067) {
                return iVar2 * 6;
            }
            if (textureType != 35866) {
                return 0;
            }
            iVar2 = iVar2 * arg4;
        }
        return iVar2;
    }

    // 0x100bc8ce0
    bool IsCompressedFormat(Format format) {
        return (207U >> (format - 24 & 31) & 1) != 0 && format - 24 < 8;
    }

    // 0x100bc8d50
    bool IsMultiSampleTextureType(TextureType textureType) {
        return textureType == 37120;
    }

    // 0x100bc8d60
    void GammaCorrect(unsigned char* arg1, unsigned long arg2, unsigned long arg3, float arg4) {
        uint8_t* puVar1;
        unsigned char* puVar2;
        array<unsigned char, 256ul>* array;
        unsigned long uVar3;
        int iVar4;
        double dVar5;

        if (arg4 != gammaLast) {
            array = nullptr;
            gammaLast = arg4;
            do {
                dVar5 = (double)pow<double, float>((double)(int)array * 0.00392156862745098, arg4);
                iVar4 = (int)(dVar5 * 255.0);
                if (254 < iVar4) {
                    iVar4 = 255;
                }
                puVar1 = (uint8_t*)(*array)[arg2];
                *puVar1 = (char)iVar4;
                array = array + 1;
            } while (array != (array<unsigned char, 256ul>*)256);
        }
        if (arg3 != 0) {
            uVar3 = 0;
            do {
                puVar2 = (unsigned char*)(*((array<unsigned char, 256ul>*)(unsigned long)arg1[uVar3]))[arg2];
                arg1[uVar3] = *puVar2;
                puVar2 = (unsigned char*)(*((array<unsigned char, 256ul>*)(unsigned long)arg1[uVar3 + 1]))[arg2];
                arg1[uVar3 + 1] = *puVar2;
                puVar2 = (unsigned char*)(*((array<unsigned char, 256ul>*)(unsigned long)arg1[uVar3 + 2]))[arg2];
                arg1[uVar3 + 2] = *puVar2;
                uVar3 = uVar3 + arg2;
            } while (uVar3 < arg3);
        }
    }

    // 0x100bc8e70
    void GammaCorrectDXT1(unsigned char* arg1, unsigned long arg2, float arg3) {
        unsigned char* puVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned short uVar6;
        unsigned short uVar7;
        unsigned int uVar8;
        uint8_t* puVar9;
        uint8_t* pbVar10;
        int iVar11;
        unsigned int uVar12;
        long lVar13;
        array<unsigned char, 256ul>* array;
        unsigned long uVar14;
        unsigned int uVar15;
        uint8_t uVar16;
        double dVar17;

        if (arg3 != gammaLast) {
            array = nullptr;
            uVar14 = arg2;
            gammaLast = arg3;
            do {
                dVar17 = (double)pow<double, float>((double)(int)array * 0.00392156862745098, arg3);
                uVar16 = (uint8_t)(long)(dVar17 * 255.0);
                if (254 < (unsigned int)(long)(dVar17 * 255.0)) {
                    uVar16 = 255;
                }
                puVar9 = (uint8_t*)(*array)[uVar14];
                *puVar9 = uVar16;
                array = array + 1;
            } while (array != (array<unsigned char, 256ul>*)256);
        }
        if (arg2 != 0) {
            lVar13 = 7;
            do {
                bVar2 = arg1[lVar13 - 6];
                uVar6 = (((uint16_t)bVar2 << 8) | (uint8_t)(arg1[lVar13 - 7]));
                bVar3 = arg1[lVar13 - 4];
                bVar4 = arg1[lVar13 - 5];
                uVar7 = (((uint16_t)bVar3 << 8) | (uint8_t)bVar4);
                uVar14 = (unsigned long)(unsigned int)uVar7;
                uVar12 = uVar6 >> 5 & 63;
                uVar8 = arg1[lVar13 - 7] & 31;
                pbVar10 = (uint8_t*)(*((array<unsigned char, 256ul>*)((unsigned long)(bVar2 & 4294967288) |
                                                                      (unsigned long)(bVar2 >> 5))))[uVar14];
                bVar2 = *pbVar10;
                pbVar10 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar12 >> 4) + (unsigned long)uVar12 * 4)))[uVar14];
                bVar5 = *pbVar10;
                pbVar10 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar8 >> 2) + (unsigned long)uVar8 * 8)))[uVar14];
                uVar8 = (unsigned int)bVar5 * 253 + 505 >> 5 & 4294967264 | (unsigned int)*pbVar10 * 249 + 1014 >> 11 |
                        (unsigned int)bVar2 * 249 + 1014 & 129024;
                uVar12 = uVar7 >> 5 & 63;
                uVar15 = bVar4 & 31;
                pbVar10 = (uint8_t*)(*((array<unsigned char, 256ul>*)((unsigned long)(bVar3 & 4294967288) |
                                                                      (unsigned long)(bVar3 >> 5))))[uVar14];
                bVar2 = *pbVar10;
                pbVar10 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar12 >> 4) + (unsigned long)uVar12 * 4)))[uVar14];
                bVar3 = *pbVar10;
                pbVar10 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar15 >> 2) + (unsigned long)uVar15 * 8)))[uVar14];
                uVar12 = (unsigned int)bVar3 * 253 + 505 >> 5 & 4294967264 | (unsigned int)*pbVar10 * 249 + 1014 >> 11 |
                         (unsigned int)bVar2 * 249 + 1014 & 129024;
                iVar11 = (unsigned int)uVar6 - (unsigned int)uVar7;
                if (((iVar11 < 0) && (-1 < (int)(uVar8 - uVar12))) || ((0 < iVar11 && ((int)(uVar8 - uVar12) < 1)))) {
                    if (uVar8 == uVar12) {
                        puVar1 = arg1 + lVar13 - 3;
                        puVar1[0] = '\0';
                        puVar1[1] = '\0';
                        puVar1[2] = '\0';
                        puVar1[3] = '\0';
                    } else {
                        arg1[lVar13 - 3] = ~arg1[lVar13 - 3];
                        arg1[lVar13 - 2] = ~arg1[lVar13 - 2];
                        arg1[lVar13 - 1] = ~arg1[lVar13 - 1];
                        arg1[lVar13] = ~arg1[lVar13];
                    }
                    uVar15 = uVar8;
                    uVar8 = uVar12;
                } else {
                    uVar15 = uVar12;
                }
                arg1[lVar13 - 6] = (unsigned char)(uVar8 >> 8);
                arg1[lVar13 - 7] = (unsigned char)uVar8;
                arg1[lVar13 - 4] = (unsigned char)(uVar15 >> 8);
                arg1[lVar13 - 5] = (unsigned char)uVar15;
                iVar11 = (int)lVar13;
                lVar13 = lVar13 + 8;
            } while (iVar11 + 1 < arg2);
        }
    }

    // 0x100bc9100
    void GammaCorrectDXT5(unsigned char* arg1, unsigned long arg2, float arg3) {
        uint8_t bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        unsigned int uVar6;
        uint8_t* puVar7;
        unsigned long uVar8;
        uint8_t* pbVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        array<unsigned char, 256ul>* array;
        unsigned long uVar12;
        unsigned long arg1_00;
        unsigned int uVar13;
        int iVar14;
        double dVar15;

        if (arg3 != gammaLast) {
            array = nullptr;
            uVar12 = arg2;
            gammaLast = arg3;
            do {
                dVar15 = (double)pow<double, float>((double)(int)array * 0.00392156862745098, arg3);
                iVar14 = (int)(dVar15 * 255.0);
                if (254 < iVar14) {
                    iVar14 = 255;
                }
                puVar7 = (uint8_t*)(*array)[uVar12];
                *puVar7 = (char)iVar14;
                array = array + 1;
            } while (array != (array<unsigned char, 256ul>*)256);
        }
        if (8 < arg2) {
            uVar12 = 24;
            uVar11 = 8;
            do {
                uVar8 = uVar12;
                iVar14 = (int)uVar8;
                bVar1 = arg1[iVar14 - 15U];
                bVar2 = arg1[iVar14 - 13U];
                arg1_00 = (unsigned long)(iVar14 - 14);
                bVar3 = arg1[arg1_00];
                uVar10 = (unsigned short)((((uint16_t)bVar1 << 8) | (uint8_t)arg1[uVar11]) >> 5) & 63;
                uVar6 = arg1[uVar11] & 31;
                uVar12 = arg1_00;
                pbVar9 = (uint8_t*)(*((array<unsigned char, 256ul>*)((unsigned long)(bVar1 & 4294967288) |
                                                                     (unsigned long)(bVar1 >> 5))))[arg1_00];
                bVar1 = *pbVar9;
                pbVar9 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar10 >> 4) + (unsigned long)uVar10 * 4)))[uVar12];
                bVar4 = *pbVar9;
                pbVar9 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar6 >> 2) + (unsigned long)uVar6 * 8)))[uVar12];
                bVar5 = *pbVar9;
                uVar10 = (unsigned int)bVar4 * 253 + 505 >> 5 & 4294967264;
                uVar13 = (unsigned short)((((uint16_t)bVar2 << 8) | (uint8_t)bVar3) >> 5) & 63;
                uVar6 = bVar3 & 31;
                pbVar9 = (uint8_t*)(*((array<unsigned char, 256ul>*)((unsigned long)(bVar2 & 4294967288) |
                                                                     (unsigned long)(bVar2 >> 5))))[uVar12];
                bVar2 = *pbVar9;
                pbVar9 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar13 >> 4) + (unsigned long)uVar13 * 4)))[uVar12];
                bVar3 = *pbVar9;
                pbVar9 = (uint8_t*)(*(
                    (array<unsigned char, 256ul>*)((unsigned long)(uVar6 >> 2) + (unsigned long)uVar6 * 8)))[uVar12];
                bVar4 = *pbVar9;
                uVar6 = (unsigned int)bVar3 * 253 + 505 >> 5 & 4294967264;
                arg1[iVar14 - 15U] = (uint8_t)((unsigned int)bVar1 * 249 + 1014 >> 8) & 248 | (uint8_t)(uVar10 >> 8);
                arg1[uVar11] = (uint8_t)uVar10 | (uint8_t)((unsigned int)bVar5 * 249 + 1014 >> 11);
                arg1[iVar14 - 13U] = (uint8_t)((unsigned int)bVar2 * 249 + 1014 >> 8) & 248 | (uint8_t)(uVar6 >> 8);
                arg1[arg1_00] = (uint8_t)uVar6 | (uint8_t)((unsigned int)bVar4 * 249 + 1014 >> 11);
                uVar12 = (unsigned long)(iVar14 + 16);
                uVar11 = uVar8;
            } while (uVar8 < arg2);
        }
    }

    // 0x100bca840
    void GetFormatDepthBits(Format format) {
        uint64_t uVar1 = 32;
        switch (format) {
        case 10:
        case 12:
            goto switchD_100bca860_caseD_a;
        default:
            uVar1 = 0;
        switchD_100bca860_caseD_a:
            return uVar1;
        case 14:
        case 15:
            return 24;
        case 22:
            return 16;
        }
    }

    // 0x100bcb9e0
    bool IsETC2CompressedFormat(Format format) {
        return (format & 4294967294) == 30;
    }

    // 0x100bcc970
    void GetCubeMapFace(int arg1) {
        unsigned long in_RSI;

        uint32_t* puVar1 = (uint32_t*)(*((array<CubeFace, 6ul>*)(long)arg1))[in_RSI];
        return *puVar1;
    }

    // 0x100bcda80
    array<GLFormat, 32ul>* GetFormatByRenderBufferFormat(unsigned int arg1) {
        unsigned int* puVar1;
        unsigned int uVar2;
        unsigned long in_RSI;
        array<GLFormat, 32ul>* unaff_R15;

        array<GLFormat, 32ul>* array = nullptr;
        while (true) {
            puVar1 = (unsigned int*)(*array)[in_RSI];
            uVar2 = puVar1[3];
            if (uVar2 == 0) {
                uVar2 = *puVar1;
            }
            if (uVar2 == arg1) {
                unaff_R15 = array;
            }
            unaff_R15 = (array<GLFormat, 32ul>*)((unsigned long)unaff_R15 & 4294967295);
            if (uVar2 == arg1)
                break;
            array = array + 1;
            if (array == (array<GLFormat, 32ul>*)32) {
                return nullptr;
            }
        }
        return unaff_R15;
    }

    // 0x100bce5e0
    TextureType TextureTypeForMipLevel(TextureType textureType) {
        TextureType TVar1 = 3553;
        if ((textureType & 4294967293) != 37120) {
            TVar1 = textureType;
        }
        return TVar1;
    }

    // 0x100bceb90
    void GetShaderInputElementSize(ShaderInputFormat shaderInputFormat) {
        uint32_t* puVar1 = &INPUT_ELEMENT_SIZE[(unsigned long)shaderInputFormat];
        return *puVar1;
    }

    // 0x100bcebc0
    void GetShaderInputElementComponentSize(ShaderInputFormat shaderInputFormat) {
        uint32_t* puVar1 = &INPUT_ELEMENT_INDIVIDUAL_SIZE[(unsigned long)shaderInputFormat];
        return *puVar1;
    }

    // 0x100bcebe0
    char* GetFormatName(Format format) {
        if (format < 32) {
            return (&PTR_s_FORMAT_UNKNOWN_100f27f80)[format];
        }
        return "Unknown Format";
    }

    // 0x100bcec60
    void GetFormatMaxValue(Format format) {
        uint64_t uVar1 = 255;
        switch (format) {
        case 7:
            return 4294967295;
        default:
            uVar1 = 0;
        switchD_100bcec80_caseD_17:
            return uVar1;
        case 16:
        case 18:
            return 16777215;
        case 19:
        case 20:
        case 28:
            return 65535;
        case 23:
            goto switchD_100bcec80_caseD_17;
        }
    }

    // 0x100bcecf0
    void GetIndexTypeSize(IndexType indexType) {
        if ((int)indexType < 5123) {
            if (indexType == 4294967295) {
                return 0;
            }
            if (indexType == 5121) {
                return 1;
            }
        } else if (indexType == 5125) {
            return 4;
        }
        return 2;
    }

    // 0x100bced30
    unsigned int GetMaxDepthBufferBits(const RenderDeviceCaps& renderDeviceCaps, unsigned int arg2) {
        unsigned int local_10[2];

        if (renderDeviceCaps.field_149 == false) {
            if (renderDeviceCaps.field_150 == false && renderDeviceCaps.field_148 == false) {
                local_10[1] = 16;
            } else {
                local_10[1] = 24;
            }
        } else {
            local_10[1] = 32;
        }
        local_10[0] = arg2;
        auto puVar1 = std::min<unsigned int>(*(local_10 + 1), *local_10);
        return *puVar1;
    }

    // 0x100bced80
    int GetAlpha8TextureFormat(const RenderDeviceCaps& renderDeviceCaps) {
        return (unsigned int)renderDeviceCaps.field_160 * 5 + 18;
    }

    // 0x100bceda0
    void GetSRGBFormat(Format format) {
        uint64_t uVar1 = 8;
        switch (format) {
        case 7:
            goto switchD_100bcedc0_caseD_7;
        default:
            uVar1 = 0;
        switchD_100bcedc0_caseD_7:
            return uVar1;
        case 16:
            return 17;
        case 24:
            return 25;
        case 26:
            return 27;
        case 30:
            return 31;
        }
    }

    // 0x100bcee40
    unsigned int GetFormatFromDepthStencilBits(int arg1, int arg2, bool arg3) {
        unsigned int uVar1;

        if (arg1 == 16) {
            return 22;
        }
        if (arg1 == 32) {
            uVar1 = 12 - arg3;
        } else {
            uVar1 = 0;
            if (arg1 == 24) {
                return arg2 == 8 ^ 15;
            }
        }
        return uVar1;
    }

    // 0x100bcee80
    long GetFormatStencilBits(Format format) {
        return (unsigned long)((format & 4294967294) == 14) << 3;
    }

    // 0x100bceea0
    bool HasStencilBits(Format format) {
        return format == 14;
    }

    // 0x100bceeb0
    void IsLinearFilter(Filter filter) {
        return (1539U >> (filter - 6 & 31) & 1) != 0 && filter - 6 < 11;
    }

    // 0x100bceed0
    unsigned int GetDepthTextureClearFlags(const Texture* texture) {
        return GetStencilClearFlag(texture) | 2;
    }

    // 0x100bceee0
    long GetStencilClearFlag(const Texture* texture) {
        if (texture == nullptr) {
            return 0;
        }
        long lVar2 = texture->second();
        uint8_t bVar1 = HasStencilBits(*(Format*)(lVar2 + 12));
        return (unsigned long)bVar1 << 2;
    }

    // 0x100bcef10
    char* GetTextureTypeName(TextureType textureType) {
        if (textureType == 3553) {
            return "Texture2D";
        }
        if (textureType == 32879) {
            return "Texture3D";
        }
        if (textureType == 34067) {
            return "TextureCube";
        }
        return nullptr;
    }

    // 0x100bcef50
    unsigned long VerifyVertexCount(PrimitiveType primitiveType, int arg2) {
        int iVar1;
        bool bVar3;

        uint32_t uVar2 = (uint32_t)(primitiveType - 4 >> 8);
        if (primitiveType - 4 < 3) {
            bVar3 = SBORROW4(arg2, 3);
            iVar1 = arg2 - 3;
        } else {
            if (2 < primitiveType - 1) {
                return 1;
            }
            bVar3 = SBORROW4(arg2, 2);
            iVar1 = arg2 - 2;
        }
        return (unsigned long)(((uint32_t)uVar2 << 8) | (uint8_t)(bVar3 == iVar1 < 0));
    }

    // 0x100bcef80
    void IsFloatFormat(Format format) {
        return (1049879U >> (format - 1 & 31) & 1) != 0 && format - 1 < 21;
    }

    // 0x100bcefc0
    unsigned int GetCubeMapFaceIndex(CubeFace cubeFace) {
        unsigned int uVar1 = 4294967295;
        if (cubeFace - 34069 < 6) {
            uVar1 = cubeFace - 34069;
        }
        return uVar1;
    }

    // 0x100bcefe0
    void GetCullMode(int arg1) {
        unsigned long in_RSI;

        uint32_t* puVar1 = (uint32_t*)(*((array<CullMode, 4ul>*)(long)arg1))[in_RSI];
        return *puVar1;
    }

    // 0x100bcf010
    void GetCullModeIndex(CullMode cullMode) {
        if ((int)cullMode < 1029) {
            if (cullMode == 0) {
                return 0;
            }
            if (cullMode == 1028) {
                return 1;
            }
        } else {
            if (cullMode == 1029) {
                return 2;
            }
            if (cullMode == 1032) {
                return 3;
            }
        }
        return 4294967295;
    }

    // 0x100bcf060
    void IsUpdateTypeCurrentThread(UpdateType updateType) {
        return updateType == 5 || (updateType & 4294967293) == 1;
    }

    // 0x100bcf080
    void GetDebugMessageSeverityStr(unsigned int arg1) {
        g_DEBUG_MESSAGE_SEVERITY_STRINGS.GetName(arg1);
    }

    // 0x100bcf0d0
    void GetDebugMessageTypeStr(unsigned int arg1) {
        g_DEBUG_MESSAGE_TYPE_STRINGS.GetName(arg1);
    }

    // 0x100bcf0f0
    void GetDebugMessageSourceStr(unsigned int arg1) {
        g_DEBUG_MESSAGE_SOURCE_STRINGS.GetName(arg1);
    }

    // 0x100bcf120
    void gl_format(Format format) {
        uint8_t(*pauVar1)[16];
        unsigned long in_RSI;

        pauVar1 = (uint8_t(*)[16])(*((array<GLFormat, 32ul>*)(unsigned long)format))[in_RSI];
        return *pauVar1;
    }

    // 0x100bcf160
    void gl_min_mag_filter(Filter filter) {
        uint8_t(*pauVar1)[12];
        unsigned long in_RSI;
        uint8_t auVar2[16];

        pauVar1 = (uint8_t(*)[12])(*((array<GLMinMagFilter, 17ul>*)(unsigned long)filter))[in_RSI];
        auVar2._12_4_ = 0;
        auVar2._0_12_ = *pauVar1;
        return auVar2;
    }

    // 0x100bcf1a0
    void gl_vertex_element_format(ShaderInputFormat shaderInputFormat) {
        uint8_t(*pauVar1)[12];
        unsigned long in_RSI;
        uint8_t auVar2[16];

        pauVar1 = (uint8_t(*)[12])(*((array<GLVertexElementFormat, 35ul>*)(unsigned long)shaderInputFormat))[in_RSI];
        auVar2._12_4_ = 0;
        auVar2._0_12_ = *pauVar1;
        return auVar2;
    }

    // 0x100bcf1e0
    GLFormat::GLFormat(Format format) {
        uint8_t auVar1[16];

        auVar1 = gl_format(format);
        *&field_0 = auVar1;
    }

    // 0x100bcf200
    GLMinMagFilter::GLMinMagFilter(Filter filter) {
        uint8_t auVar1[12];

        auVar1 = gl_min_mag_filter(filter);
        *&field_0 = auVar1;
    }

    // 0x100bcf220
    GLVertexElementFormat::GLVertexElementFormat(ShaderInputFormat shaderInputFormat) {
        uint8_t auVar1[12];

        auVar1 = gl_vertex_element_format(shaderInputFormat);
        *&field_0 = auVar1;
    }

    // 0x100bcf250
    void GetGLTextureBindingType(TextureType textureType) {
        if (textureType == 3553) {
            return 32873;
        }
        if (textureType == 32879) {
            return 32874;
        }
        if (textureType == 34067) {
            return 34068;
        }
        return 0;
    }

    // 0x100bd0770
    bool IsBindingType(int arg1) {
        return arg1 - 36940U < 33;
    }

    // 0x100bd0790
    void IsSamplerType(int arg1) {
        if (arg1 < 36289) {
            if ((4 < arg1 - 35678U) || (arg1 - 35678U == 3)) {
                return 0;
            }
        } else if (((arg1 != 36289) && (arg1 != 37128)) && (arg1 != 37131)) {
            return 0;
        }
        return 1;
    }

    // 0x100beb3a0
    unsigned long CreateShaderProgramKey(const char* str1, const char* str2, const char* str3) {
        unsigned long uVar1;
        HashedString local_38;

        return local_28 = 0;
        if (str1 != nullptr) {
            local_38 = HashedString(str1);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        if (str2 != nullptr) {
            local_38 = HashedString(str2);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        if (str3 != nullptr) {
            local_38 = HashedString(str3);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        return local_28;
    }

    // 0x100bed1d0
    auto DefineInOutGLSL() {
        basic_ostream<char, std::char_traits<char> _> local_118;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128;
        auto pMVar1 = &local_128->Instance();
        long lVar2 = pMVar1->GetOrigin();
        if (*(int*)(lVar2 + 32) == 1) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(int*)(lVar2 + 36) < 21) {
                std::operator<<(&local_118, "\n#define in varying\n#define out varying\n");
            }
        }
        auto result = local_128.str();
        local_128.~&local_128();
        return result;
    }

    // 0x100bed270
    auto UndefineInOutGLSL() {
        basic_ostream<char, std::char_traits<char> _> local_120;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130;
        auto pMVar1 = &local_130->Instance();
        long lVar2 = pMVar1->GetOrigin();
        if (*(int*)(lVar2 + 32) == 1) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(int*)(lVar2 + 36) < 21) {
                std::operator<<(&local_120, "\n#ifdef in\n#undef in\n#endif");
                std::operator<<(&local_120, "\n#ifdef out\n#undef out\n#endif\n");
            }
        }
        auto result = local_130.str();
        local_130.~&local_130();
        return result;
    }

    // 0x100bf13b0
    void glUniformMatrix4fvNoTranspose(int arg1, int arg2, const float* arg3) {
        (*___glewUniformMatrix4fv)(arg1, arg2, 0, arg3);
    }

    // 0x100bf13d0
    void glUniformMatrix3fvNoTranspose(int arg1, int arg2, const float* arg3) {
        (*___glewUniformMatrix3fv)(arg1, arg2, 0, arg3);
    }

    // 0x100bf13f0
    void glUniformMatrix2fvNoTranspose(int arg1, int arg2, const float* arg3) {
        (*___glewUniformMatrix2fv)(arg1, arg2, 0, arg3);
    }

    // 0x100c0c970
    void CreateGlobalResources(const ResourceConfig& resourceConfig) {
        Singleton<ShaderManager<VertexShader>>::Create<unsigned int const&>(resourceConfig);
        unsigned int* arg1 = (unsigned int*)((long)&resourceConfig.field_0 + 4);
        Singleton<ShaderManager<PixelShader>>::Create<unsigned int const&>(*arg1);
        Singleton<ShaderManager<ComputeShader>>::Create<unsigned int const&>(*arg1);
        Singleton<ShaderProgramManager>::Create<unsigned int const&>(
            *((unsigned int*)((long)&resourceConfig.field_8 + 4)));
        Singleton<VAOManager>* singleton = (Singleton<VAOManager>*)&resourceConfig.field_16;
        Singleton<VertexDeclarationManager>::Create<unsigned int const&>(*singleton);
        singleton->Create<>();
    }

    // 0x100c0cba0
    void DestroyGlobalResources() {
        Singleton<ShaderManager<VertexShader>>* in_RDI;

        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
    }

    // 0x100c0d900
    void IsBufferPoolEnabled() {
        return 1;
    }

    // 0x100c12f50
    bool IsRangeBufferMappingFast() {
        Singleton<RenderDevice>* in_RDI;

        auto pNVar2 = in_RDI->Instance();
        int iVar1 = pNVar2->GetUIHeight();
        if (iVar1 != 0) {
            pNVar2 = (NXTPixScreen*)pNVar2->Instance();
            iVar1 = pNVar2->GetUIHeight();
            if (iVar1 != 5) {
                pNVar2 = (NXTPixScreen*)pNVar2->Instance();
                iVar1 = pNVar2->GetUIHeight();
                return iVar1 != 1;
            }
        }
        return false;
    }

    // 0x100c2a910
    void GPUMemoryReportToConsole() {
        Singleton<RenderDevice>* in_RDI;

        ((RenderDevice*)in_RDI->Instance())->PrintMemoryUsageToConsole();
    }

} // namespace jag::render
