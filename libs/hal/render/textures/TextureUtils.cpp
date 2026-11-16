// libs/hal/render/textures/TextureUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "TextureUtils.h"

namespace jag::render {
    // 0x100bc8ab0
    unsigned int GetCompressedImageByteSize(int arg1, int arg2, Format format, unsigned int arg4) {
        uint32_t in_register_0000003c;

        int local_28 = arg1;
        int local_24 = arg2;
        long lVar4 = ((MapArea*)((Singleton<RenderDevice>*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1))
                          ->Instance())
                         ->GetOrigin();
        int iVar1 = *(int*)(lVar4 + 52) >> ((uint8_t)arg4 & 31);
        if ((iVar1 < local_28) || (iVar1 < local_24)) {
            LogAssert("width <= maxWidth && height <= maxWidth",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      23, nullptr);
        }
        int local_2c = 4;
        auto piVar5 = std::max<int>(local_28, local_2c);
        iVar1 = *piVar5;
        local_2c = 4;
        local_28 = iVar1;
        piVar5 = std::max<int>(local_24, local_2c);
        local_24 = *piVar5;
        iVar1 = local_24 * iVar1;
        int iVar2 = GetFormatBitCount(format);
        unsigned int uVar6 = (unsigned int)(iVar2 * iVar1) >> 3;
        iVar1 = local_28 + 6;
        if (-1 < local_28 + 3) {
            iVar1 = local_28 + 3;
        }
        double dVar7 = (double)floor<int>(iVar1 >> 2);
        iVar1 = local_24 + 6;
        if (-1 < local_24 + 3) {
            iVar1 = local_24 + 3;
        }
        double dVar8 = (double)floor<int>(iVar1 >> 2);
        unsigned int uVar3 = GetFormatBitCount(format);
        if ((double)uVar3 * dVar7 * (dVar8 + dVar8) != (double)uVar6) {
            LogAssert("imageSize == std::floor((width + 3) / 4) * std::floor((height + 3) / 4) * "
                      "GetFormatBitCount(format) * 2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      33, nullptr);
        }
        return uVar6;
    }

    // 0x100bc8c60
    unsigned long GetImageByteSize(int arg1, int arg2, Format format, unsigned int arg4) {
        int iVar2;
        unsigned long uVar3;

        if ((arg1 < 1) || (arg2 < 1)) {
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      40, nullptr);
        }
        if (IsCompressedFormat(format) == '\0') {
            iVar2 = GetFormatByteCount(format);
            uVar3 = (unsigned long)(unsigned int)(iVar2 * arg2 * arg1);
        } else {
            uVar3 = GetCompressedImageByteSize(arg1, arg2, format, arg4);
        }
        return uVar3;
    }

    // 0x100bc8d00
    int GetImageByteSize(int arg1, int arg2, int arg3) {
        if ((arg1 < 1) || (arg2 < 1)) {
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      57, nullptr);
        }
        return arg2 * arg1 * arg3;
    }

    // 0x100bc9380
    auto GutterCompressedTextureData(unsigned char* arg1, unsigned int& arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        int iVar1;
        uint64_t uVar3;
        unsigned int uVar5;
        uint8_t bVar6;
        int iVar8;
        unsigned int uVar9;
        int iVar10;
        unsigned long uVar11;
        unsigned int uVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar16;
        unsigned long uVar17;
        unsigned int uVar18;
        long lVar19;
        int iVar20;
        uint8_t auVar22[16];
        unsigned int local_48;
        unsigned int local_44;
        unsigned long local_40;
        unsigned int local_34;

        unsigned int uVar21 = arg3 >> 2;
        unsigned int uVar2 = arg4 >> 2;
        if (((arg4 - arg3 < 2) || ((arg4 - arg3 & 6) != 0)) || ((uVar2 - uVar21 & 4294967294) + uVar21 != uVar2)) {
            LogAssert("padding > 0 && padding % 4 == 0 && (srcBlocks + (padBlocks * 2) == dstBlocks)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      294, nullptr);
        }
        unsigned int uVar7 = uVar2 - uVar21 >> 1;
        unsigned long arg1_01 = 0;
        unsigned int uVar15 = 0;
        int iVar4 = 0;
        do {
            if (arg2 <= uVar15)
                break;
            bVar6 = (uint8_t)iVar4;
            uVar12 = uVar21 >> (bVar6 & 31);
            uVar14 = uVar2 >> (bVar6 & 31);
            uVar18 = uVar7 >> (bVar6 & 31);
            if (uVar18 != 0) {
                if (uVar12 == 0) {
                    uVar12 = 1;
                }
                if (uVar14 == 0) {
                    uVar14 = 1;
                }
                uVar15 = uVar15 + uVar12 * uVar12 * 16;
                arg1_01 = (unsigned long)((int)arg1_01 + uVar14 * uVar14 * 16);
                iVar4 = iVar4 + 1;
            }
        } while (uVar18 != 0);
        if ((unsigned int)arg1_01 < 17) {
            LogAssert("dstByteTotal > 16",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      318, nullptr);
        }
        auVar22 = operator_new__(arg1_01);
        unsigned char* arg1_00 = auVar22._0_8_;
        result.shared_ptr<unsigned char,
                          GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::__5,
                          void>(arg1_00, auVar22._8_8_);
        if (iVar4 != 0) {
            iVar8 = 0;
            uVar15 = 0;
            local_44 = 0;
            do {
                local_40 = (unsigned long)uVar7;
                if (uVar21 != 0) {
                    uVar14 = (uVar2 + 1) * uVar7 * 16 + uVar15;
                    uVar18 = 0;
                    uVar12 = local_44;
                    do {
                        uVar17 = (unsigned long)uVar21;
                        uVar5 = uVar14;
                        uVar9 = uVar12;
                        do {
                            uVar3 = *(uint64_t*)(arg1 + uVar9 + 8);
                            *(uint64_t*)(arg1_00 + uVar5) = *(uint64_t*)(arg1 + uVar9);
                            *(uint64_t*)(arg1_00 + uVar5 + 8) = uVar3;
                            uVar5 = uVar5 + 16;
                            uVar9 = uVar9 + 16;
                            uVar17 = uVar17 - 1;
                        } while (uVar17 != 0);
                        uVar18 = uVar18 + 1;
                        uVar14 = uVar14 + uVar2 * 16;
                        uVar12 = uVar12 + uVar21 * 16;
                    } while (uVar18 != uVar21);
                }
                iVar10 = uVar21 - uVar7;
                if (uVar21 != 0) {
                    iVar16 = uVar2 * 16;
                    local_48 = uVar15 + uVar7 * 16;
                    uVar14 = uVar21 * 16;
                    iVar20 = (uVar2 + 1) * uVar7 * 16 + uVar15 + uVar14;
                    iVar13 = iVar16 * uVar7 + uVar15;
                    uVar11 = (unsigned long)(uVar14 + local_44 + uVar7 * -16);
                    uVar12 = 0;
                    local_34 = local_44;
                    uVar17 = (unsigned long)local_44;
                    do {
                        uVar12 = uVar12 + 1;
                        if (uVar7 != 0) {
                            lVar19 = 0;
                            uVar9 = local_34;
                            uVar18 = local_48;
                            do {
                                iVar1 = (int)lVar19;
                                uVar3 = *(uint64_t*)(arg1 + (unsigned int)((int)uVar11 + iVar1) + 8);
                                *(uint64_t*)(arg1_00 + (unsigned int)(iVar13 + iVar1)) =
                                    *(uint64_t*)(arg1 + (unsigned int)((int)uVar11 + iVar1));
                                *(uint64_t*)(arg1_00 + (unsigned int)(iVar13 + iVar1) + 8) = uVar3;
                                uVar3 = *(uint64_t*)(arg1 + (unsigned int)((int)uVar17 + iVar1) + 8);
                                *(uint64_t*)(arg1_00 + (unsigned int)(iVar20 + iVar1)) =
                                    *(uint64_t*)(arg1 + (unsigned int)((int)uVar17 + iVar1));
                                *(uint64_t*)(arg1_00 + (unsigned int)(iVar20 + iVar1) + 8) = uVar3;
                                uVar3 = *(uint64_t*)(arg1 + (uVar14 * iVar10 + uVar9) + 8);
                                *(uint64_t*)(arg1_00 + uVar18) = *(uint64_t*)(arg1 + (uVar14 * iVar10 + uVar9));
                                *(uint64_t*)(arg1_00 + uVar18 + 8) = uVar3;
                                uVar3 = *(uint64_t*)(arg1 + uVar9 + 8);
                                *(uint64_t*)(arg1_00 + ((uVar2 - uVar7) * iVar16 + uVar18)) =
                                    *(uint64_t*)(arg1 + uVar9);
                                *(uint64_t*)(arg1_00 + ((uVar2 - uVar7) * iVar16 + uVar18) + 8) = uVar3;
                                uVar18 = uVar18 + iVar16;
                                uVar9 = uVar9 + uVar14;
                                lVar19 = lVar19 + 16;
                            } while (local_40 << 4 != lVar19);
                        }
                        local_48 = local_48 + 16;
                        local_34 = local_34 + 16;
                        iVar20 = iVar20 + iVar16;
                        uVar17 = uVar17 + uVar14;
                        iVar13 = iVar13 + iVar16;
                        uVar11 = uVar11 + uVar14;
                    } while (uVar12 != uVar21);
                }
                iVar20 = uVar21 * 16;
                if (uVar7 != 0) {
                    uVar18 = iVar20 * iVar10 + local_44;
                    iVar13 = uVar2 * 16;
                    uVar17 = 0;
                    uVar14 = 0;
                    uVar12 = 0;
                    do {
                        uVar12 = uVar12 + 1;
                        iVar16 = (int)uVar17;
                        uVar11 = local_40;
                        uVar9 = uVar14;
                        do {
                            uVar3 = *(uint64_t*)(arg1 + uVar17 + (uVar18 + iVar10 * 16) + 8);
                            *(uint64_t*)(arg1_00 + (unsigned long)uVar9 + (unsigned long)uVar15) =
                                *(uint64_t*)(arg1 + uVar17 + (uVar18 + iVar10 * 16));
                            *(uint64_t*)(arg1_00 + (unsigned long)uVar9 + (unsigned long)uVar15 + 8) = uVar3;
                            uVar3 = *(uint64_t*)(arg1 + uVar17 + uVar18 + 8);
                            *(uint64_t*)(arg1_00 + (unsigned long)(iVar13 + uVar7 * -16 + uVar9) +
                                         (unsigned long)uVar15) = *(uint64_t*)(arg1 + uVar17 + uVar18);
                            *(uint64_t*)(arg1_00 + (unsigned long)(iVar13 + uVar7 * -16 + uVar9) +
                                         (unsigned long)uVar15 + 8) = uVar3;
                            uVar3 = *(uint64_t*)(arg1 + uVar17 + (iVar10 * 16 + local_44) + 8);
                            *(uint64_t*)(arg1_00 + (unsigned long)((uVar21 + uVar7) * iVar13 + uVar9) +
                                         (unsigned long)uVar15) =
                                *(uint64_t*)(arg1 + uVar17 + (iVar10 * 16 + local_44));
                            *(uint64_t*)(arg1_00 + (unsigned long)((uVar21 + uVar7) * iVar13 + uVar9) +
                                         (unsigned long)uVar15 + 8) = uVar3;
                            uVar3 = *(uint64_t*)(arg1 + uVar17 + local_44 + 8);
                            *(uint64_t*)(arg1_00 +
                                         (unsigned long)((uVar21 + uVar7 + 1) * iVar13 + uVar7 * -16 + uVar9) +
                                         (unsigned long)uVar15) = *(uint64_t*)(arg1 + uVar17 + local_44);
                            *(uint64_t*)(arg1_00 +
                                         (unsigned long)((uVar21 + uVar7 + 1) * iVar13 + uVar7 * -16 + uVar9) +
                                         (unsigned long)uVar15 + 8) = uVar3;
                            uVar9 = uVar9 + 16;
                            uVar17 = (unsigned long)((int)uVar17 + 16);
                            uVar11 = uVar11 - 1;
                        } while (uVar11 != 0);
                        uVar14 = uVar14 + iVar13;
                        uVar17 = (unsigned long)(unsigned int)(iVar16 + iVar20);
                    } while (uVar12 != uVar7);
                }
                local_44 = local_44 + iVar20 * uVar21;
                uVar15 = uVar15 + uVar2 * uVar2 * 16;
                uVar12 = uVar21 >> 1;
                uVar14 = uVar2 >> 1;
                if (uVar21 < 2) {
                    uVar12 = 1;
                }
                if (uVar2 < 2) {
                    uVar14 = 1;
                }
                uVar7 = uVar14 - uVar12 >> 1;
                iVar8 = iVar8 + 1;
                uVar21 = uVar12;
                uVar2 = uVar14;
            } while (iVar8 != iVar4);
        }
        arg2 = (unsigned int)arg1_01;
        return result;
    }

} // namespace jag::render
