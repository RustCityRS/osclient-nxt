// libs/hal/render/Render.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "Render.h"
#include "libs/hal/render/utils/OGL/GLUtils.h"

namespace jag::render {
    // 0x100d99470, 140 bytes, __const
    INPUT_ELEMENT_SIZE = {
        4, 8, 12, 16, 4, 1, 2, 3, 4, 1, 2, 3, 4, 2, 4, 6, 8, 2, 4, 6, 8, 4, 4, 8, 4, 8, 4, 8, 16, 36, 64, 4, 8, 12, 16,
    };

    // 0x100d994fc, 140 bytes, __const
    INPUT_ELEMENT_INDIVIDUAL_SIZE = {
        4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 16, 36, 64, 4, 0, 0, 0,
    };

    // 0x100d99720, 8 bytes, __const
    g_GLFBOAttachmentLut = 154897995566304;

    // 0x100f48600, 16 bytes, __data
    gammaLast = {-1.0f, 0, 0, 0};

    // 0x100f48610, 64 bytes, __data
    g_DEBUG_MESSAGE_SEVERITY_STRINGS__ = {
        37190, 0, 15005047, 1, 37191, 0, 15005067, 1, 37192, 0, 15005089, 1, 33387, 0, 15005108, 1,
    };

    // 0x100f48650, 80 bytes, __data
    g_DEBUG_MESSAGE_SOURCE_STRINGS__ = {
        33350,    0, 15005136, 1, 33352,    0, 15005153, 1, 33351,    0,
        15005182, 1, 33353,    0, 15005209, 1, 33354,    0, 15005234, 1,
    };

    // 0x100f486a0, 144 bytes, __data
    g_DEBUG_MESSAGE_TYPE_STRINGS__ = {
        33356, 0, 15005259, 1, 33357, 0, 15005276, 1, 33358, 0, 15005307, 1,
        33360, 0, 15005337, 1, 33359, 0, 15005360, 1, 33361, 0, 15005383, 1,
        33384, 0, 15005400, 1, 33385, 0, 15005418, 1, 33386, 0, 15005440, 1,
    };

    // 0x100f48884, 12 bytes, __data
    g_GLNativeBackBufferAttachmentLut = {1026, 6145, 6146};

    // 0x103bd9d40, 256 bytes, __common; zero-initialised
    gammaTable;

    // 0x103bd9e58, 16 bytes, __common; set at startup by ___cxx_global_var_init.186
    StringEnum g_DEBUG_MESSAGE_SEVERITY_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SEVERITY_STRINGS__, 4);

    // 0x103bd9e68, 16 bytes, __common; set at startup by ___cxx_global_var_init.192
    StringEnum g_DEBUG_MESSAGE_SOURCE_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SOURCE_STRINGS__, 5);

    // 0x103bd9e78, 24 bytes, __common; set at startup by ___cxx_global_var_init.202
    StringEnum g_DEBUG_MESSAGE_TYPE_STRINGS = StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_TYPE_STRINGS__, 9);

    // 0x104234898, 512 bytes, __bss; set at startup by ___cxx_global_var_init.181
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

    // 0x104234a98, 204 bytes, __bss; set at startup by ___cxx_global_var_init.203
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

    // 0x104234b64, 420 bytes, __bss; set at startup by ___cxx_global_var_init.204
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

    // 0x104234d08, 816 bytes, __bss; zero-initialised
    g_GLShaderTypeElementSizeMap;

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    GetBackendDefProjClipRange();

    // 0x100bc7d30, 464 bytes, placed by class name
    // CheckGlErrorInternal(char const*, char const*, int, ...)
    void CheckGlErrorInternal(char* param_1, char* param_2, int param_3, ...) {
        bool bVar1;
        char in_AL;
        int iVar2;
        int iVar3;
        char* pcVar4;
        undefined8 in_RCX;
        undefined8 in_R8;
        undefined8 in_R9;
        int iVar5;
        undefined8 in_XMM0_Qa;
        undefined8 in_XMM1_Qa;
        undefined8 in_XMM2_Qa;
        undefined8 in_XMM3_Qa;
        undefined8 in_XMM4_Qa;
        undefined8 in_XMM5_Qa;
        undefined8 in_XMM6_Qa;
        undefined8 in_XMM7_Qa;
        undefined1 uStack0000000000000008;
        undefined1 local_1b8[24];
        undefined8 local_1a0;
        undefined8 local_198;
        undefined8 local_190;
        undefined8 local_188;
        undefined8 local_178;
        undefined8 local_168;
        undefined8 local_158;
        undefined8 local_148;
        undefined8 local_138;
        undefined8 local_128;
        undefined8 local_118;
        undefined8 local_f8;
        undefined1* local_f0;
        undefined1* local_e8;
        fixed_string<char, 128, true, eastl::allocator> local_e0[168];
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1a0 = in_RCX;
        local_198 = in_R8;
        local_190 = in_R9;
        if (CheckGlErrorInternal(char const*, char const*, int, ...)::glErrorBroken != '\0') {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        iVar2 = _glGetError();
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(local_e0);
        if (iVar2 != 0) {
            local_e8 = local_1b8;
            local_f0 = &uStack0000000000000008;
            local_f8 = 206158430232;
            local_e0->sprintf_va_list(param_1, (__va_list_tag*)&local_f8);
        }
        iVar5 = 1;
        iVar3 = iVar2;
        do {
            if (iVar3 == 0) {
                if (iVar2 != 0) {
                LAB_100bc7e86:
                    if (0 < iVar5) {
                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        PrintGLError(pcVar4, iVar2, iVar5, param_2, param_3);
                    }
                }
            LAB_100bc7ead:
                /* WARNING: Subroutine does not return */
                local_e0->~fixed_string();
            }
            if (iVar3 == iVar2) {
                iVar3 = iVar5 + 1;
                bVar1 = 998 < iVar5;
                iVar5 = iVar3;
                if (bVar1) {
                    CheckGlErrorInternal(char const*, char const*, int, ...)::glErrorBroken = '\x01';
                    if (iVar2 == 0)
                        goto LAB_100bc7ead;
                    goto LAB_100bc7e86;
                }
            } else {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                PrintGLError(pcVar4, iVar2, iVar5, param_2, param_3);
                iVar2 = iVar3;
                iVar5 = 0;
            }
            iVar3 = _glGetError();
        } while (true);
    }

    // 0x100bc89c0, 240 bytes, placed by class name
    // GetTextureImageDataSize(TextureType, int, int, int, Format, int)
    int GetTextureImageDataSize(int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar3 = 1;
        if (param_1 == 32879) {
            iVar3 = param_4;
        }
        iVar2 = 0;
        if (0 < param_6) {
            iVar2 = 0;
            do {
                if ((0 < param_2) && (0 < param_3)) {
                    iVar1 = GetImageByteSize(param_2, param_3, param_5, 0);
                    iVar2 = iVar2 + iVar1 * iVar3;
                }
                param_2 = param_2 / 2;
                param_3 = param_3 / 2;
                param_6 = param_6 + -1;
            } while (param_6 != 0);
        }
        if (param_1 < 34067) {
            if ((param_1 != 3553) && (param_1 != 32879)) {
                return 0;
            }
        } else {
            if (param_1 == 34067) {
                return iVar2 * 6;
            }
            if (param_1 != 35866) {
                return 0;
            }
            iVar2 = iVar2 * param_4;
        }
        return iVar2;
    }

    // 0x100bc8ce0, 32 bytes, placed by class name
    // IsCompressedFormat(Format)
    bool IsCompressedFormat(int param_1) {
        return (207U >> (param_1 - 24U & 31) & 1) != 0 && param_1 - 24U < 8;
    }

    // 0x100bc8d50, 16 bytes, placed by class name
    // IsMultiSampleTextureType(TextureType)
    bool IsMultiSampleTextureType(int param_1) {
        return param_1 == 37120;
    }

    // 0x100bc8d60, 240 bytes, placed by class name
    // GammaCorrect(unsigned char*, unsigned long, unsigned long, float)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* GammaCorrect(unsigned char*, unsigned long, unsigned long, float) */

    void GammaCorrect(uchar* param_1, ulong param_2, ulong param_3, float param_4) {
        undefined1* puVar1;
        uchar* puVar2;
        ulong uVar3;
        int iVar4;
        double dVar5;

        if (param_4 != _gammaLast) {
            uVar3 = 0;
            _gammaLast = param_4;
            do {
                dVar5 = (double)pow<double, float>((double)(int)uVar3 * 0.00392156862745098, param_4);
                iVar4 = (int)(dVar5 * 255.0);
                if (254 < iVar4) {
                    iVar4 = 255;
                }
                puVar1 = (undefined1*)std::array<unsigned char, 256ul>::operator[](uVar3);
                *puVar1 = (char)iVar4;
                uVar3 = uVar3 + 1;
            } while (uVar3 != 256);
        }
        if (param_3 != 0) {
            uVar3 = 0;
            do {
                puVar2 = (uchar*)std::array<unsigned char, 256ul>::operator[]((ulong)param_1[uVar3]);
                param_1[uVar3] = *puVar2;
                puVar2 = (uchar*)std::array<unsigned char, 256ul>::operator[]((ulong)param_1[uVar3 + 1]);
                param_1[uVar3 + 1] = *puVar2;
                puVar2 = (uchar*)std::array<unsigned char, 256ul>::operator[]((ulong)param_1[uVar3 + 2]);
                param_1[uVar3 + 2] = *puVar2;
                uVar3 = uVar3 + param_2;
            } while (uVar3 < param_3);
        }
    }

    // 0x100bc8e70, 656 bytes, placed by class name
    // GammaCorrectDXT1(unsigned char*, unsigned long, float)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* GammaCorrectDXT1(unsigned char*, unsigned long, float) */

    void GammaCorrectDXT1(uchar* param_1, ulong param_2, float param_3) {
        uchar* puVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        ushort uVar6;
        ushort uVar7;
        uint uVar8;
        undefined1* puVar9;
        byte* pbVar10;
        int iVar11;
        uint uVar12;
        long lVar13;
        ulong uVar14;
        uint uVar15;
        undefined1 uVar16;
        double dVar17;

        if (param_3 != _gammaLast) {
            uVar14 = 0;
            _gammaLast = param_3;
            do {
                dVar17 = (double)pow<double, float>((double)(int)uVar14 * 0.00392156862745098, param_3);
                uVar16 = (undefined1)(long)(dVar17 * 255.0);
                if (254 < (uint)(long)(dVar17 * 255.0)) {
                    uVar16 = 255;
                }
                puVar9 = (undefined1*)std::array<unsigned char, 256ul>::operator[](uVar14);
                *puVar9 = uVar16;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
        }
        if (param_2 != 0) {
            lVar13 = 7;
            do {
                bVar2 = param_1[lVar13 + -6];
                uVar6 = CONCAT11(bVar2, param_1[lVar13 + -7]);
                bVar3 = param_1[lVar13 + -4];
                bVar4 = param_1[lVar13 + -5];
                uVar7 = CONCAT11(bVar3, bVar4);
                uVar12 = uVar6 >> 5 & 63;
                uVar8 = param_1[lVar13 + -7] & 31;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(bVar2 & 4294967288) |
                                                                              (ulong)(bVar2 >> 5));
                bVar2 = *pbVar10;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar12 >> 4) + (ulong)uVar12 * 4);
                bVar5 = *pbVar10;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar8 >> 2) + (ulong)uVar8 * 8);
                uVar8 = (uint)bVar5 * 253 + 505 >> 5 & 4294967264 | (uint)*pbVar10 * 249 + 1014 >> 11 |
                        (uint)bVar2 * 249 + 1014 & 129024;
                uVar12 = uVar7 >> 5 & 63;
                uVar15 = bVar4 & 31;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(bVar3 & 4294967288) |
                                                                              (ulong)(bVar3 >> 5));
                bVar2 = *pbVar10;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar12 >> 4) + (ulong)uVar12 * 4);
                bVar3 = *pbVar10;
                pbVar10 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar15 >> 2) + (ulong)uVar15 * 8);
                uVar12 = (uint)bVar3 * 253 + 505 >> 5 & 4294967264 | (uint)*pbVar10 * 249 + 1014 >> 11 |
                         (uint)bVar2 * 249 + 1014 & 129024;
                iVar11 = (uint)uVar6 - (uint)uVar7;
                if (((iVar11 < 0) && (-1 < (int)(uVar8 - uVar12))) || ((0 < iVar11 && ((int)(uVar8 - uVar12) < 1)))) {
                    if (uVar8 == uVar12) {
                        puVar1 = param_1 + lVar13 + -3;
                        puVar1[0] = '\0';
                        puVar1[1] = '\0';
                        puVar1[2] = '\0';
                        puVar1[3] = '\0';
                    } else {
                        param_1[lVar13 + -3] = ~param_1[lVar13 + -3];
                        param_1[lVar13 + -2] = ~param_1[lVar13 + -2];
                        param_1[lVar13 + -1] = ~param_1[lVar13 + -1];
                        param_1[lVar13] = ~param_1[lVar13];
                    }
                    uVar15 = uVar8;
                    uVar8 = uVar12;
                } else {
                    uVar15 = uVar12;
                }
                param_1[lVar13 + -6] = (uchar)(uVar8 >> 8);
                param_1[lVar13 + -7] = (uchar)uVar8;
                param_1[lVar13 + -4] = (uchar)(uVar15 >> 8);
                param_1[lVar13 + -5] = (uchar)uVar15;
                iVar11 = (int)lVar13;
                lVar13 = lVar13 + 8;
            } while (iVar11 + 1 < param_2);
        }
    }

    // 0x100bc9100, 640 bytes, placed by class name
    // GammaCorrectDXT5(unsigned char*, unsigned long, float)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* GammaCorrectDXT5(unsigned char*, unsigned long, float) */

    void GammaCorrectDXT5(uchar* param_1, ulong param_2, float param_3) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        uint uVar6;
        undefined1* puVar7;
        ulong uVar8;
        byte* pbVar9;
        uint uVar10;
        ulong uVar11;
        ulong uVar12;
        uint uVar13;
        int iVar14;
        double dVar15;

        if (param_3 != _gammaLast) {
            uVar12 = 0;
            _gammaLast = param_3;
            do {
                dVar15 = (double)pow<double, float>((double)(int)uVar12 * 0.00392156862745098, param_3);
                iVar14 = (int)(dVar15 * 255.0);
                if (254 < iVar14) {
                    iVar14 = 255;
                }
                puVar7 = (undefined1*)std::array<unsigned char, 256ul>::operator[](uVar12);
                *puVar7 = (char)iVar14;
                uVar12 = uVar12 + 1;
            } while (uVar12 != 256);
        }
        if (8 < param_2) {
            uVar12 = 24;
            uVar11 = 8;
            do {
                uVar8 = uVar12;
                iVar14 = (int)uVar8;
                bVar1 = param_1[iVar14 - 15U];
                bVar2 = param_1[iVar14 - 13U];
                bVar3 = param_1[iVar14 - 14U];
                uVar10 = (ushort)(CONCAT11(bVar1, param_1[uVar11]) >> 5) & 63;
                uVar6 = param_1[uVar11] & 31;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(bVar1 & 4294967288) |
                                                                             (ulong)(bVar1 >> 5));
                bVar1 = *pbVar9;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar10 >> 4) + (ulong)uVar10 * 4);
                bVar4 = *pbVar9;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar6 >> 2) + (ulong)uVar6 * 8);
                bVar5 = *pbVar9;
                uVar10 = (uint)bVar4 * 253 + 505 >> 5 & 4294967264;
                uVar13 = (ushort)(CONCAT11(bVar2, bVar3) >> 5) & 63;
                uVar6 = bVar3 & 31;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(bVar2 & 4294967288) |
                                                                             (ulong)(bVar2 >> 5));
                bVar2 = *pbVar9;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar13 >> 4) + (ulong)uVar13 * 4);
                bVar3 = *pbVar9;
                pbVar9 = (byte*)std::array<unsigned char, 256ul>::operator[]((ulong)(uVar6 >> 2) + (ulong)uVar6 * 8);
                bVar4 = *pbVar9;
                uVar6 = (uint)bVar3 * 253 + 505 >> 5 & 4294967264;
                param_1[iVar14 - 15U] = (byte)((uint)bVar1 * 249 + 1014 >> 8) & 248 | (byte)(uVar10 >> 8);
                param_1[uVar11] = (byte)uVar10 | (byte)((uint)bVar5 * 249 + 1014 >> 11);
                param_1[iVar14 - 13U] = (byte)((uint)bVar2 * 249 + 1014 >> 8) & 248 | (byte)(uVar6 >> 8);
                param_1[iVar14 - 14U] = (byte)uVar6 | (byte)((uint)bVar4 * 249 + 1014 >> 11);
                uVar12 = (ulong)(iVar14 + 16);
                uVar11 = uVar8;
            } while (uVar8 < param_2);
        }
    }

    // 0x100bca840, 112 bytes, placed by class name
    // GetFormatDepthBits(Format)
    undefined8 GetFormatDepthBits(undefined4 param_1) {
        undefined8 uVar1;

        uVar1 = 32;
        switch (param_1) {
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

    // 0x100bcb9e0, 16 bytes, placed by class name
    // IsETC2CompressedFormat(Format)
    bool IsETC2CompressedFormat(uint param_1) {
        return (param_1 & 4294967294) == 30;
    }

    // 0x100bcc970, 16 bytes, placed by class name
    // GetCubeMapFace(int)
    undefined4 GetCubeMapFace(int param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<CubeFace, 6ul>::operator[]((long)param_1);
        return *puVar1;
    }

    // 0x100bcda80, 80 bytes, placed by class name
    // GetFormatByRenderBufferFormat(unsigned int)
    ulong GetFormatByRenderBufferFormat(uint param_1) {
        uint* puVar1;
        uint uVar2;
        ulong uVar3;
        ulong unaff_R15;

        uVar3 = 0;
        while (true) {
            puVar1 = (uint*)std::array<GLFormat, 32ul>::operator[](uVar3);
            uVar2 = puVar1[3];
            if (uVar2 == 0) {
                uVar2 = *puVar1;
            }
            if (uVar2 == param_1) {
                unaff_R15 = uVar3;
            }
            unaff_R15 = unaff_R15 & 4294967295;
            if (uVar2 == param_1)
                break;
            uVar3 = uVar3 + 1;
            if (uVar3 == 32) {
                return 0;
            }
        }
        return unaff_R15;
    }

    // 0x100bce5e0, 32 bytes, placed by class name
    // TextureTypeForMipLevel(TextureType)
    uint TextureTypeForMipLevel(uint param_1) {
        uint uVar1;

        uVar1 = 3553;
        if ((param_1 & 4294967293) != 37120) {
            uVar1 = param_1;
        }
        return uVar1;
    }

    // 0x100bceb90, 32 bytes, placed by class name
    // GetShaderInputElementSize(ShaderInputFormat)
    undefined4 GetShaderInputElementSize(ulong param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<int, 35ul>::operator[]((array<int, 35ul>*)&INPUT_ELEMENT_SIZE,
                                                                param_1 & 4294967295);
        return *puVar1;
    }

    // 0x100bcebc0, 32 bytes, placed by class name
    // GetShaderInputElementComponentSize(ShaderInputFormat)
    undefined4 GetShaderInputElementComponentSize(ulong param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<int, 35ul>::operator[]((array<int, 35ul>*)&INPUT_ELEMENT_INDIVIDUAL_SIZE,
                                                                param_1 & 4294967295);
        return *puVar1;
    }

    // 0x100bcebe0, 48 bytes, placed by class name
    // GetFormatName(Format)
    char* GetFormatName(uint param_1) {
        if (param_1 < 32) {
            return (&PTR_s_FORMAT_UNKNOWN_100f27f80)[(int)param_1];
        }
        return "Unknown Format";
    }

    // 0x100bcec60, 144 bytes, placed by class name
    // GetFormatMaxValue(Format)
    undefined8 GetFormatMaxValue(undefined4 param_1) {
        undefined8 uVar1;

        uVar1 = 255;
        switch (param_1) {
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

    // 0x100bcecf0, 64 bytes, placed by class name
    // GetIndexTypeSize(IndexType)
    undefined8 GetIndexTypeSize(int param_1) {
        if (param_1 < 5123) {
            if (param_1 == -1) {
                return 0;
            }
            if (param_1 == 5121) {
                return 1;
            }
        } else if (param_1 == 5125) {
            return 4;
        }
        return 2;
    }

    // 0x100bced30, 80 bytes, placed by class name
    // GetMaxDepthBufferBits(RenderDeviceCaps const&, unsigned int)
    uint GetMaxDepthBufferBits(RenderDeviceCaps* param_1, uint param_2) {
        uint* puVar1;
        uint local_10[2];

        if (param_1->field_149 == false) {
            if (param_1->field_150 == false && param_1->field_148 == false) {
                local_10[1] = 16;
            } else {
                local_10[1] = 24;
            }
        } else {
            local_10[1] = 32;
        }
        local_10[0] = param_2;
        puVar1 = std::min<unsigned int>(local_10 + 1, local_10);
        return *puVar1;
    }

    // 0x100bced80, 32 bytes, placed by class name
    // GetAlpha8TextureFormat(RenderDeviceCaps const&)
    int GetAlpha8TextureFormat(RenderDeviceCaps* param_1) {
        return (uint)param_1->field_160 * 5 + 18;
    }

    // 0x100bceda0, 160 bytes, placed by class name
    // GetSRGBFormat(Format)
    undefined8 GetSRGBFormat(undefined4 param_1) {
        undefined8 uVar1;

        uVar1 = 8;
        switch (param_1) {
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

    // 0x100bcee40, 64 bytes, placed by class name
    // GetFormatFromDepthStencilBits(int, int, bool)
    uint GetFormatFromDepthStencilBits(int param_1, int param_2, bool param_3) {
        uint uVar1;

        if (param_1 == 16) {
            return 22;
        }
        if (param_1 == 32) {
            uVar1 = 12 - param_3;
        } else {
            uVar1 = 0;
            if (param_1 == 24) {
                return param_2 == 8 ^ 15;
            }
        }
        return uVar1;
    }

    // 0x100bcee80, 32 bytes, placed by class name
    // GetFormatStencilBits(Format)
    long GetFormatStencilBits(uint param_1) {
        return (ulong)((param_1 & 4294967294) == 14) << 3;
    }

    // 0x100bceea0, 16 bytes, placed by class name
    // HasStencilBits(Format)
    bool HasStencilBits(int param_1) {
        return param_1 == 14;
    }

    // 0x100bceeb0, 32 bytes, placed by class name
    // IsLinearFilter(Filter)
    undefined8 IsLinearFilter(int param_1) {
        return CONCAT71(6, (1539U >> (param_1 - 6U & 31) & 1) != 0 && param_1 - 6U < 11);
    }

    // 0x100bceed0, 16 bytes, placed by class name
    // GetDepthTextureClearFlags(Texture const*)
    uint GetDepthTextureClearFlags(Texture* param_1) {
        return GetStencilClearFlag(param_1) | 2;
    }

    // 0x100bceee0, 48 bytes, placed by class name
    // GetStencilClearFlag(Texture const*)
    long GetStencilClearFlag(Texture* param_1) {
        byte bVar1;
        long lVar2;

        if (param_1 == (Texture*)0) {
            return 0;
        }
        lVar2 = param_1->second();
        bVar1 = HasStencilBits(*(undefined4*)(lVar2 + 12));
        return (ulong)bVar1 << 2;
    }

    // 0x100bcef10, 64 bytes, placed by class name
    // GetTextureTypeName(TextureType)
    char* GetTextureTypeName(int param_1) {
        if (param_1 == 3553) {
            return "Texture2D";
        }
        if (param_1 == 32879) {
            return "Texture3D";
        }
        if (param_1 == 34067) {
            return "TextureCube";
        }
        return (char*)0;
    }

    // 0x100bcef50, 48 bytes, placed by class name
    // VerifyVertexCount(PrimitiveType, int)
    ulong VerifyVertexCount(int param_1, int param_2) {
        uint3 uVar1;
        bool bVar2;

        uVar1 = (uint3)(param_1 - 4U >> 8);
        if (param_1 - 4U < 3) {
            bVar2 = SBORROW4(param_2, 3);
            param_2 = param_2 + -3;
        } else {
            if (2 < param_1 - 1U) {
                return CONCAT71((uint7)uVar1, 1);
            }
            bVar2 = SBORROW4(param_2, 2);
            param_2 = param_2 + -2;
        }
        return (ulong)CONCAT31(uVar1, bVar2 == param_2 < 0);
    }

    // 0x100bcef80, 32 bytes, placed by class name
    // IsFloatFormat(Format)
    undefined8 IsFloatFormat(int param_1) {
        return CONCAT71(4101, (1049879U >> (param_1 - 1U & 31) & 1) != 0 && param_1 - 1U < 21);
    }

    // 0x100bcefc0, 32 bytes, placed by class name
    // GetCubeMapFaceIndex(CubeFace)
    uint GetCubeMapFaceIndex(int param_1) {
        uint uVar1;

        uVar1 = 4294967295;
        if (param_1 - 34069U < 6) {
            uVar1 = param_1 - 34069U;
        }
        return uVar1;
    }

    // 0x100bcefe0, 16 bytes, placed by class name
    // GetCullMode(int)
    undefined4 GetCullMode(int param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<CullMode, 4ul>::operator[]((long)param_1);
        return *puVar1;
    }

    // 0x100bcf010, 80 bytes, placed by class name
    // GetCullModeIndex(CullMode)
    undefined4 GetCullModeIndex(int param_1) {
        if (param_1 < 1029) {
            if (param_1 == 0) {
                return 0;
            }
            if (param_1 == 1028) {
                return 1;
            }
        } else {
            if (param_1 == 1029) {
                return 2;
            }
            if (param_1 == 1032) {
                return 3;
            }
        }
        return 4294967295;
    }

    // 0x100bcf060, 32 bytes, placed by class name
    // IsUpdateTypeCurrentThread(UpdateType)
    undefined4 IsUpdateTypeCurrentThread(uint param_1) {
        return CONCAT31((int3)((param_1 & 4294967293) >> 8), param_1 == 5 || (param_1 & 4294967293) == 1);
    }

    // 0x100bcf080, 32 bytes, placed by class name
    // GetDebugMessageSeverityStr(unsigned int)
    void GetDebugMessageSeverityStr(uint param_1) {
        g_DEBUG_MESSAGE_SEVERITY_STRINGS.GetName(param_1);
    }

    // 0x100bcf0d0, 32 bytes, placed by class name
    // GetDebugMessageTypeStr(unsigned int)
    void GetDebugMessageTypeStr(uint param_1) {
        g_DEBUG_MESSAGE_TYPE_STRINGS.GetName(param_1);
    }

    // 0x100bcf0f0, 32 bytes, placed by class name
    // GetDebugMessageSourceStr(unsigned int)
    void GetDebugMessageSourceStr(uint param_1) {
        g_DEBUG_MESSAGE_SOURCE_STRINGS.GetName(param_1);
    }

    // 0x100bcf120, 32 bytes, placed by class name
    // gl_format(Format)
    undefined1[16] gl_format(uint param_1) {
        undefined1(*pauVar1)[16];

        pauVar1 = (undefined1(*)[16])std::array<GLFormat, 32ul>::operator[]((ulong)param_1);
        return *pauVar1;
    }

    // 0x100bcf160, 32 bytes, placed by class name
    // gl_min_mag_filter(Filter)
    undefined1[16] gl_min_mag_filter(uint param_1) {
        undefined1(*pauVar1)[12];
        undefined1 auVar2[16];

        pauVar1 = (undefined1(*)[12])std::array<GLMinMagFilter, 17ul>::operator[]((ulong)param_1);
        auVar2._12_4_ = 0;
        auVar2._0_12_ = *pauVar1;
        return auVar2;
    }

    // 0x100bcf1a0, 32 bytes, placed by class name
    // gl_vertex_element_format(ShaderInputFormat)
    undefined1[16] gl_vertex_element_format(uint param_1) {
        undefined1(*pauVar1)[12];
        undefined1 auVar2[16];

        pauVar1 = (undefined1(*)[12])std::array<GLVertexElementFormat, 35ul>::operator[]((ulong)param_1);
        auVar2._12_4_ = 0;
        auVar2._0_12_ = *pauVar1;
        return auVar2;
    }

    // 0x100bcf1e0, 32 bytes, base-object constructor, placed by neighbouring functions
    // GLFormat::GLFormat(Format)
    void GLFormat::GLFormat(undefined4 param_2) {
        undefined1 auVar1[16];

        auVar1 = gl_format(param_2);
        *&field_0 = auVar1;
    }

    // 0x100bcf200, 32 bytes, base-object constructor, placed by neighbouring functions
    // GLMinMagFilter::GLMinMagFilter(Filter)
    void GLMinMagFilter::GLMinMagFilter(undefined4 param_2) {
        undefined1 auVar1[12];

        auVar1 = gl_min_mag_filter(param_2);
        *&field_0 = auVar1;
    }

    // 0x100bcf220, 32 bytes, base-object constructor, placed by neighbouring functions
    // GLVertexElementFormat::GLVertexElementFormat(ShaderInputFormat)
    void GLVertexElementFormat::GLVertexElementFormat(undefined4 param_2) {
        undefined1 auVar1[12];

        auVar1 = gl_vertex_element_format(param_2);
        *&field_0 = auVar1;
    }

    // 0x100bcf240, 16 bytes, complete-object constructor, placed by neighbouring functions
    // GLVertexElementFormat::GLVertexElementFormat(ShaderInputFormat): jumps straight to the base-object constructor

    // 0x100bcf250, 64 bytes, placed by class name
    // GetGLTextureBindingType(TextureType)
    undefined8 GetGLTextureBindingType(int param_1) {
        if (param_1 == 3553) {
            return 32873;
        }
        if (param_1 == 32879) {
            return 32874;
        }
        if (param_1 == 34067) {
            return 34068;
        }
        return 0;
    }

    // 0x100bd0770, 32 bytes, placed by class name
    // IsBindingType(int)
    bool IsBindingType(int param_1) {
        return param_1 - 36940U < 33;
    }

    // 0x100bd0790, 64 bytes, placed by class name
    // IsSamplerType(int)
    undefined8 IsSamplerType(int param_1) {
        if (param_1 < 36289) {
            if ((4 < param_1 - 35678U) || (param_1 - 35678U == 3)) {
                return 0;
            }
        } else if (((param_1 != 36289) && (param_1 != 37128)) && (param_1 != 37131)) {
            return 0;
        }
        return 1;
    }

    // 0x100bdb630, 1008 bytes, placed by the data it initialises
    // ___cxx_global_var_init.181
    void ___cxx_global_var_init_181() {
        new (&g_GLFormatLut) oldscape::dash3d::GridRect(0, 0, 0, 0);
        new (&DAT_1042348a8) oldscape::dash3d::GridRect(34836, 6408, 5126, 0);
        new (&DAT_1042348b8) oldscape::dash3d::GridRect(34837, 6407, 5126, 0);
        new (&DAT_1042348c8) oldscape::dash3d::GridRect(34842, 6408, 5131, 0);
        new (&DAT_1042348d8) oldscape::dash3d::GridRect(34843, 6407, 5131, 0);
        new (&DAT_1042348e8) oldscape::dash3d::GridRect(33328, 33319, 5126, 0);
        new (&DAT_1042348f8) oldscape::dash3d::GridRect(35898, 6407, 35899, 0);
        new (&DAT_104234908) oldscape::dash3d::GridRect(32856, 6408, 5121, 32856);
        new (&DAT_104234918) oldscape::dash3d::GridRect(35907, 6408, 5121, 35907);
        new (&DAT_104234928) oldscape::dash3d::GridRect(33327, 33319, 5131, 0);
        new (&DAT_104234938) oldscape::dash3d::GridRect(36012, 6402, 5126, 36012);
        new (&DAT_104234948) oldscape::dash3d::GridRect(33326, 6403, 5126, 0);
        new (&DAT_104234958) oldscape::dash3d::GridRect(33191, 6402, 5125, 33191);
        new (&DAT_104234968) oldscape::dash3d::GridRect(33334, 36244, 5125, 0);
        new (&DAT_104234978) oldscape::dash3d::GridRect(35056, 34041, 34042, 35056);
        new (&DAT_104234988) oldscape::dash3d::GridRect(33190, 6402, 5125, 33190);
        new (&DAT_104234998) oldscape::dash3d::GridRect(32849, 6407, 5121, 32849);
        new (&DAT_1042349a8) oldscape::dash3d::GridRect(35905, 6407, 5121, 35905);
        new (&DAT_1042349b8) oldscape::dash3d::GridRect(36194, 6407, 33635, 36194);
        new (&DAT_1042349c8) oldscape::dash3d::GridRect(32854, 6408, 32819, 32854);
        new (&DAT_1042349d8) oldscape::dash3d::GridRect(33323, 33319, 5121, 0);
        new (&DAT_1042349e8) oldscape::dash3d::GridRect(33325, 6403, 5131, 0);
        new (&DAT_1042349f8) oldscape::dash3d::GridRect(33189, 6402, 5123, 33189);
        new (&DAT_104234a08) oldscape::dash3d::GridRect(33321, 6403, 5121, 0);
        new (&DAT_104234a18) oldscape::dash3d::GridRect(33777, 6407, 5121, 0);
        new (&DAT_104234a28) oldscape::dash3d::GridRect(35917, 6407, 5121, 0);
        new (&DAT_104234a38) oldscape::dash3d::GridRect(33779, 6408, 5121, 0);
        new (&DAT_104234a48) oldscape::dash3d::GridRect(35919, 6408, 5121, 0);
        new (&DAT_104234a58) oldscape::dash3d::GridRect(6408, 6408, 32820, 32855);
        new (&DAT_104234a68) oldscape::dash3d::GridRect(6408, 32993, 33639, 32856);
        new (&DAT_104234a78) oldscape::dash3d::GridRect(37496, 6408, 5121, 0);
        new (&DAT_104234a88) oldscape::dash3d::GridRect(37497, 6408, 5121, 0);
    }

    // 0x100bdba20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.186
    void ___cxx_global_var_init_186() {
        new (&g_DEBUG_MESSAGE_SEVERITY_STRINGS) StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SEVERITY_STRINGS__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &g_DEBUG_MESSAGE_SEVERITY_STRINGS, 4294967296);
    }

    // 0x100bdba60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.192
    void ___cxx_global_var_init_192() {
        new (&g_DEBUG_MESSAGE_SOURCE_STRINGS) StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_SOURCE_STRINGS__, 5);
        ___cxa_atexit(StringEnum::~StringEnum, &g_DEBUG_MESSAGE_SOURCE_STRINGS, 4294967296);
    }

    // 0x100bdbaa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.202
    void ___cxx_global_var_init_202() {
        new (&g_DEBUG_MESSAGE_TYPE_STRINGS) StringEnum((StringEnumEntry*)&g_DEBUG_MESSAGE_TYPE_STRINGS__, 9);
        ___cxa_atexit(StringEnum::~StringEnum, &g_DEBUG_MESSAGE_TYPE_STRINGS, 4294967296);
    }

    // 0x100bdbae0, 448 bytes, placed by the data it initialises
    // ___cxx_global_var_init.203
    void ___cxx_global_var_init_203() {
        new (&g_GLMinMagFilterLut) oldscape::rs2lib::worldmap::LocationData(9984, 9728, 0);
        new (&DAT_104234aa4) oldscape::rs2lib::worldmap::LocationData(9986, 9728, 0);
        new (&DAT_104234ab0) oldscape::rs2lib::worldmap::LocationData(9984, 9729, 0);
        new (&DAT_104234abc) oldscape::rs2lib::worldmap::LocationData(9986, 9729, 0);
        new (&DAT_104234ac8) oldscape::rs2lib::worldmap::LocationData(9985, 9728, 0);
        new (&DAT_104234ad4) oldscape::rs2lib::worldmap::LocationData(9987, 9728, 0);
        new (&DAT_104234ae0) oldscape::rs2lib::worldmap::LocationData(9985, 9729, 0);
        new (&DAT_104234aec) oldscape::rs2lib::worldmap::LocationData(9987, 9729, 0);
        new (&DAT_104234af8) oldscape::rs2lib::worldmap::LocationData(9729, 9729, 0);
        new (&DAT_104234b04) oldscape::rs2lib::worldmap::LocationData(9984, 9728, 34894);
        new (&DAT_104234b10) oldscape::rs2lib::worldmap::LocationData(9986, 9728, 34894);
        new (&DAT_104234b1c) oldscape::rs2lib::worldmap::LocationData(9984, 9729, 34894);
        new (&DAT_104234b28) oldscape::rs2lib::worldmap::LocationData(9986, 9729, 34894);
        new (&DAT_104234b34) oldscape::rs2lib::worldmap::LocationData(9985, 9728, 34894);
        new (&DAT_104234b40) oldscape::rs2lib::worldmap::LocationData(9987, 9728, 34894);
        new (&DAT_104234b4c) oldscape::rs2lib::worldmap::LocationData(9985, 9729, 34894);
        new (&DAT_104234b58) oldscape::rs2lib::worldmap::LocationData(9987, 9729, 34894);
    }

    // 0x100bdbca0, 960 bytes, placed by the data it initialises
    // ___cxx_global_var_init.204
    void ___cxx_global_var_init_204() {
        new (&g_GLVertexFormatLut) oldscape::rs2lib::worldmap::LocationData(5126, 1, 5126);
        new (&DAT_104234b70) oldscape::rs2lib::worldmap::LocationData(5126, 2, 35664);
        new (&DAT_104234b7c) oldscape::rs2lib::worldmap::LocationData(5126, 3, 35665);
        new (&DAT_104234b88) oldscape::rs2lib::worldmap::LocationData(5126, 4, 35666);
        new (&DAT_104234b94) oldscape::rs2lib::worldmap::LocationData(5125, 1, 5126);
        new (&DAT_104234ba0) oldscape::rs2lib::worldmap::LocationData(5120, 1, 5126);
        new (&DAT_104234bac) oldscape::rs2lib::worldmap::LocationData(5120, 2, 35664);
        new (&DAT_104234bb8) oldscape::rs2lib::worldmap::LocationData(5120, 3, 35665);
        new (&DAT_104234bc4) oldscape::rs2lib::worldmap::LocationData(5120, 4, 35666);
        new (&DAT_104234bd0) oldscape::rs2lib::worldmap::LocationData(5121, 1, 5126);
        new (&DAT_104234bdc) oldscape::rs2lib::worldmap::LocationData(5121, 2, 35664);
        new (&DAT_104234be8) oldscape::rs2lib::worldmap::LocationData(5121, 3, 35665);
        new (&DAT_104234bf4) oldscape::rs2lib::worldmap::LocationData(5121, 4, 35666);
        new (&DAT_104234c00) oldscape::rs2lib::worldmap::LocationData(5122, 1, 5126);
        new (&DAT_104234c0c) oldscape::rs2lib::worldmap::LocationData(5122, 2, 35664);
        new (&DAT_104234c18) oldscape::rs2lib::worldmap::LocationData(5122, 3, 35665);
        new (&DAT_104234c24) oldscape::rs2lib::worldmap::LocationData(5122, 4, 35666);
        new (&DAT_104234c30) oldscape::rs2lib::worldmap::LocationData(5123, 1, 5126);
        new (&DAT_104234c3c) oldscape::rs2lib::worldmap::LocationData(5123, 2, 35664);
        new (&DAT_104234c48) oldscape::rs2lib::worldmap::LocationData(5123, 3, 35665);
        new (&DAT_104234c54) oldscape::rs2lib::worldmap::LocationData(5123, 4, 35666);
        new (&DAT_104234c60) oldscape::rs2lib::worldmap::LocationData(5121, 4, 35666);
        new (&DAT_104234c6c) oldscape::rs2lib::worldmap::LocationData(5122, 2, 35664);
        new (&DAT_104234c78) oldscape::rs2lib::worldmap::LocationData(5122, 4, 35666);
        new (&DAT_104234c84) oldscape::rs2lib::worldmap::LocationData(5123, 2, 35664);
        new (&DAT_104234c90) oldscape::rs2lib::worldmap::LocationData(5123, 4, 35666);
        new (&DAT_104234c9c) oldscape::rs2lib::worldmap::LocationData(5131, 2, 35664);
        new (&DAT_104234ca8) oldscape::rs2lib::worldmap::LocationData(5131, 4, 35666);
        new (&DAT_104234cb4) oldscape::rs2lib::worldmap::LocationData(5126, 4, 35674);
        new (&DAT_104234cc0) oldscape::rs2lib::worldmap::LocationData(5126, 9, 35675);
        new (&DAT_104234ccc) oldscape::rs2lib::worldmap::LocationData(5126, 16, 35676);
        new (&DAT_104234cd8) oldscape::rs2lib::worldmap::LocationData(5125, 1, 5125);
        new (&DAT_104234ce4) oldscape::rs2lib::worldmap::LocationData(5125, 2, 36294);
        new (&DAT_104234cf0) oldscape::rs2lib::worldmap::LocationData(5125, 3, 36295);
        new (&DAT_104234cfc) oldscape::rs2lib::worldmap::LocationData(5125, 4, 36296);
    }

    // 0x100beb3a0, 176 bytes, placed by class name
    // CreateShaderProgramKey(char const*, char const*, char const*)
    ulong CreateShaderProgramKey(char* param_1, char* param_2, char* param_3) {
        ulong uVar1;
        HashedString local_38;
        ulong local_28;

        local_28 = 0;
        if (param_1 != (char*)0) {
            new (&local_38) HashedString(param_1);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        if (param_2 != (char*)0) {
            new (&local_38) HashedString(param_2);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        if (param_3 != (char*)0) {
            new (&local_38) HashedString(param_3);
            uVar1 = local_38.end();
            hash_combine(&local_28, uVar1);
        }
        return local_28;
    }

    // 0x100bed1d0, 160 bytes, placed by class name
    // DefineInOutGLSL()
    render* DefineInOutGLSL() {
        MapArea* pMVar1;
        long lVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_00;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128[16];
        ostream local_118[264];

        this_00 = local_128;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(this_00);
        pMVar1 = (MapArea*)this_00->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(int*)(lVar2 + 32) == 1) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(int*)(lVar2 + 36) < 21) {
                std::operator<<(local_118, "\n#define in varying\n#define out varying\n");
            }
        }
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_128);
        return this;
    }

    // 0x100bed270, 176 bytes, placed by class name
    // UndefineInOutGLSL()
    render* UndefineInOutGLSL() {
        MapArea* pMVar1;
        long lVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_00;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130[16];
        ostream local_120[264];

        this_00 = local_130;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(this_00);
        pMVar1 = (MapArea*)this_00->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(int*)(lVar2 + 32) == 1) {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            if (*(int*)(lVar2 + 36) < 21) {
                std::operator<<(local_120, "\n#ifdef in\n#undef in\n#endif");
                std::operator<<(local_120, "\n#ifdef out\n#undef out\n#endif\n");
            }
        }
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_130);
        return this;
    }

    // 0x100bf13b0, 32 bytes, placed by class name
    // glUniformMatrix4fvNoTranspose(int, int, float const*)
    void glUniformMatrix4fvNoTranspose(int param_1, int param_2, float* param_3) {
        (*___glewUniformMatrix4fv)(param_1, param_2, 0, param_3);
    }

    // 0x100bf13d0, 32 bytes, placed by class name
    // glUniformMatrix3fvNoTranspose(int, int, float const*)
    void glUniformMatrix3fvNoTranspose(int param_1, int param_2, float* param_3) {
        (*___glewUniformMatrix3fv)(param_1, param_2, 0, param_3);
    }

    // 0x100bf13f0, 32 bytes, placed by class name
    // glUniformMatrix2fvNoTranspose(int, int, float const*)
    void glUniformMatrix2fvNoTranspose(int param_1, int param_2, float* param_3) {
        (*___glewUniformMatrix2fv)(param_1, param_2, 0, param_3);
    }

    // 0x100c0c970, 80 bytes, placed by class name and debug map
    // CreateGlobalResources(ResourceConfig const&)
    void CreateGlobalResources(ResourceConfig* param_1) {
        uint* puVar1;
        Singleton<VAOManager>* this;

        Singleton<ShaderManager<VertexShader>>::Create<unsigned int const&>((uint*)param_1);
        puVar1 = (uint*)((long)&param_1->field_0 + 4);
        Singleton<ShaderManager<PixelShader>>::Create<unsigned int const&>(puVar1);
        Singleton<ShaderManager<ComputeShader>>::Create<unsigned int const&>(puVar1);
        Singleton<ShaderProgramManager>::Create<unsigned int const&>((uint*)((long)&param_1->field_8 + 4));
        this = (Singleton<VAOManager>*)&param_1->field_16;
        Singleton<VertexDeclarationManager>::Create<unsigned int const&>((uint*)this);
        Singleton<VAOManager>::Create<>(this);
    }

    // 0x100c0cba0, 48 bytes, placed by class name and debug map
    // DestroyGlobalResources()
    void DestroyGlobalResources() {
        Singleton<ShaderManager<VertexShader>>* in_RDI;

        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
        in_RDI->Destroy();
    }

    // 0x100c0d900, 16 bytes, placed by class name
    // IsBufferPoolEnabled()
    undefined1 IsBufferPoolEnabled() {
        return 1;
    }

    // 0x100c12f50, 64 bytes, placed by class name
    // IsRangeBufferMappingFast()
    bool IsRangeBufferMappingFast() {
        int iVar1;
        NXTPixScreen* pNVar2;
        Singleton<RenderDevice>* in_RDI;

        pNVar2 = (NXTPixScreen*)in_RDI->Instance();
        iVar1 = pNVar2->GetUIHeight();
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

    // 0x100c2a910, 32 bytes, placed by class name
    // GPUMemoryReportToConsole()
    void GPUMemoryReportToConsole() {
        RenderDevice* this;
        Singleton<RenderDevice>* in_RDI;

        this = (RenderDevice*)in_RDI->Instance();
        PrintMemoryUsageToConsole();
    }

} // namespace jag::render
