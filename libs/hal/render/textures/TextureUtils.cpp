// libs/hal/render/textures/TextureUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "TextureUtils.h"

namespace jag::render {
    // 0x100bc8ab0, 320 bytes, placed by __FILE__ string
    // GetCompressedImageByteSize(int, int, Format, unsigned int)
    uint GetCompressedImageByteSize(Singleton<RenderDevice>* param_1, int param_2, undefined4 param_3, byte param_4) {
        int iVar1;
        int iVar2;
        uint uVar3;
        MapArea* this;
        long lVar4;
        int* piVar5;
        uint uVar6;
        double dVar7;
        double dVar8;
        int local_2c;
        int local_28;
        int local_24;

        local_28 = (int)param_1;
        local_24 = param_2;
        this = (MapArea*)param_1->Instance();
        lVar4 = GetOrigin();
        iVar1 = *(int*)(lVar4 + 52) >> (param_4 & 31);
        if ((iVar1 < local_28) || (iVar1 < local_24)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width <= maxWidth && height <= maxWidth",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      23, (char*)0);
        }
        local_2c = 4;
        piVar5 = std::max<int>(&local_28, &local_2c);
        iVar1 = *piVar5;
        local_2c = 4;
        local_28 = iVar1;
        piVar5 = std::max<int>(&local_24, &local_2c);
        local_24 = *piVar5;
        iVar1 = local_24 * iVar1;
        iVar2 = GetFormatBitCount(param_3);
        uVar6 = (uint)(iVar2 * iVar1) >> 3;
        iVar1 = local_28 + 6;
        if (-1 < local_28 + 3) {
            iVar1 = local_28 + 3;
        }
        dVar7 = (double)floor<int>(iVar1 >> 2);
        iVar1 = local_24 + 6;
        if (-1 < local_24 + 3) {
            iVar1 = local_24 + 3;
        }
        dVar8 = (double)floor<int>(iVar1 >> 2);
        uVar3 = GetFormatBitCount(param_3);
        if ((double)uVar3 * dVar7 * (dVar8 + dVar8) != (double)uVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("imageSize == std::floor((width + 3) / 4) * std::floor((height + 3) / 4) * "
                      "GetFormatBitCount(format) * 2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      33, (char*)0);
        }
        return uVar6;
    }

    // 0x100bc8c60, 128 bytes, placed by __FILE__ string
    // GetImageByteSize(int, int, Format, unsigned int)
    ulong GetImageByteSize(int param_1, int param_2, undefined4 param_3, undefined4 param_4) {
        int iVar2;
        ulong uVar3;

        if ((param_1 < 1) || (param_2 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      40, (char*)0);
        }
        if (IsCompressedFormat(param_3) == '\0') {
            iVar2 = GetFormatByteCount(param_3);
            uVar3 = (ulong)(uint)(iVar2 * param_2 * param_1);
        } else {
            uVar3 = GetCompressedImageByteSize(param_1, param_2, param_3, param_4);
        }
        return uVar3;
    }

    // 0x100bc8d00, 80 bytes, placed by __FILE__ string
    // GetImageByteSize(int, int, int)
    int GetImageByteSize(int param_1, int param_2, int param_3) {
        if ((param_1 < 1) || (param_2 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      57, (char*)0);
        }
        return param_2 * param_1 * param_3;
    }

    // 0x100bc9380, 1328 bytes, placed by __FILE__ string
    // GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)
    render* GutterCompressedTextureData(uchar* param_1, uint* param_2, uint param_3, uint param_4) {
        undefined8* puVar1;
        int iVar2;
        uint uVar3;
        undefined8 uVar4;
        int iVar5;
        uint uVar6;
        void* pvVar7;
        byte bVar8;
        uint uVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        ulong uVar13;
        uint uVar14;
        int iVar15;
        uint uVar16;
        uint uVar17;
        int iVar18;
        ulong uVar19;
        uint uVar20;
        long lVar21;
        int iVar22;
        uint uVar23;
        ulong uVar24;
        uint local_48;
        uint local_44;
        ulong local_40;
        uint local_34;

        uVar23 = param_3 >> 2;
        uVar3 = param_4 >> 2;
        if (((param_4 - param_3 < 2) || ((param_4 - param_3 & 6) != 0)) ||
            ((uVar3 - uVar23 & 4294967294) + uVar23 != uVar3)) {
            /* WARNING: Subroutine does not return */
            LogAssert("padding > 0 && padding % 4 == 0 && (srcBlocks + (padBlocks * 2) == dstBlocks)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      294, (char*)0);
        }
        uVar9 = uVar3 - uVar23 >> 1;
        uVar24 = 0;
        uVar17 = 0;
        iVar5 = 0;
        do {
            if (*param_2 <= uVar17)
                break;
            bVar8 = (byte)iVar5;
            uVar14 = uVar23 >> (bVar8 & 31);
            uVar16 = uVar3 >> (bVar8 & 31);
            uVar20 = uVar9 >> (bVar8 & 31);
            if (uVar20 != 0) {
                if (uVar14 == 0) {
                    uVar14 = 1;
                }
                if (uVar16 == 0) {
                    uVar16 = 1;
                }
                uVar17 = uVar17 + uVar14 * uVar14 * 16;
                uVar24 = (ulong)((int)uVar24 + uVar16 * uVar16 * 16);
                iVar5 = iVar5 + 1;
            }
        } while (uVar20 != 0);
        if ((uint)uVar24 < 17) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstByteTotal > 16",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.cpp",
                      318, (char*)0);
        }
        pvVar7 = operator_new__(uVar24);
        shared_ptr<unsigned char>::shared_ptr<
            unsigned char,
            (unsigned char*)->GutterCompressedTextureData(unsigned int&, unsigned int, unsigned int)::__5, void>(
            this, pvVar7);
        if (iVar5 != 0) {
            iVar10 = 0;
            uVar17 = 0;
            local_44 = 0;
            do {
                local_40 = (ulong)uVar9;
                if (uVar23 != 0) {
                    uVar16 = (uVar3 + 1) * uVar9 * 16 + uVar17;
                    uVar20 = 0;
                    uVar14 = local_44;
                    do {
                        uVar19 = (ulong)uVar23;
                        uVar6 = uVar16;
                        uVar11 = uVar14;
                        do {
                            uVar4 = *(undefined8*)(param_1 + uVar11 + 8);
                            *(undefined8*)((long)pvVar7 + (ulong)uVar6) = *(undefined8*)(param_1 + uVar11);
                            ((undefined8*)((long)pvVar7 + (ulong)uVar6))[1] = uVar4;
                            uVar6 = uVar6 + 16;
                            uVar11 = uVar11 + 16;
                            uVar19 = uVar19 - 1;
                        } while (uVar19 != 0);
                        uVar20 = uVar20 + 1;
                        uVar16 = uVar16 + uVar3 * 16;
                        uVar14 = uVar14 + uVar23 * 16;
                    } while (uVar20 != uVar23);
                }
                iVar12 = uVar23 - uVar9;
                if (uVar23 != 0) {
                    iVar18 = uVar3 * 16;
                    local_48 = uVar17 + uVar9 * 16;
                    uVar16 = uVar23 * 16;
                    iVar22 = (uVar3 + 1) * uVar9 * 16 + uVar17 + uVar16;
                    iVar15 = iVar18 * uVar9 + uVar17;
                    uVar13 = (ulong)(uVar16 + local_44 + uVar9 * -16);
                    uVar14 = 0;
                    local_34 = local_44;
                    uVar19 = (ulong)local_44;
                    do {
                        uVar14 = uVar14 + 1;
                        if (uVar9 != 0) {
                            lVar21 = 0;
                            uVar11 = local_34;
                            uVar20 = local_48;
                            do {
                                iVar2 = (int)lVar21;
                                uVar4 = *(undefined8*)(param_1 + (uint)((int)uVar13 + iVar2) + 8);
                                puVar1 = (undefined8*)((long)pvVar7 + (ulong)(uint)(iVar15 + iVar2));
                                *puVar1 = *(undefined8*)(param_1 + (uint)((int)uVar13 + iVar2));
                                puVar1[1] = uVar4;
                                uVar4 = *(undefined8*)(param_1 + (uint)((int)uVar19 + iVar2) + 8);
                                puVar1 = (undefined8*)((long)pvVar7 + (ulong)(uint)(iVar22 + iVar2));
                                *puVar1 = *(undefined8*)(param_1 + (uint)((int)uVar19 + iVar2));
                                puVar1[1] = uVar4;
                                uVar4 = *(undefined8*)(param_1 + (uVar16 * iVar12 + uVar11) + 8);
                                *(undefined8*)((long)pvVar7 + (ulong)uVar20) =
                                    *(undefined8*)(param_1 + (uVar16 * iVar12 + uVar11));
                                ((undefined8*)((long)pvVar7 + (ulong)uVar20))[1] = uVar4;
                                uVar4 = *(undefined8*)(param_1 + uVar11 + 8);
                                puVar1 = (undefined8*)((long)pvVar7 + (ulong)((uVar3 - uVar9) * iVar18 + uVar20));
                                *puVar1 = *(undefined8*)(param_1 + uVar11);
                                puVar1[1] = uVar4;
                                uVar20 = uVar20 + iVar18;
                                uVar11 = uVar11 + uVar16;
                                lVar21 = lVar21 + 16;
                            } while (local_40 << 4 != lVar21);
                        }
                        local_48 = local_48 + 16;
                        local_34 = local_34 + 16;
                        iVar22 = iVar22 + iVar18;
                        uVar19 = uVar19 + uVar16;
                        iVar15 = iVar15 + iVar18;
                        uVar13 = uVar13 + uVar16;
                    } while (uVar14 != uVar23);
                }
                iVar22 = uVar23 * 16;
                if (uVar9 != 0) {
                    uVar20 = iVar22 * iVar12 + local_44;
                    iVar15 = uVar3 * 16;
                    uVar19 = 0;
                    uVar16 = 0;
                    uVar14 = 0;
                    do {
                        uVar14 = uVar14 + 1;
                        iVar18 = (int)uVar19;
                        uVar13 = local_40;
                        uVar11 = uVar16;
                        do {
                            uVar4 = *(undefined8*)(param_1 + uVar19 + (uVar20 + iVar12 * 16) + 8);
                            puVar1 = (undefined8*)((long)pvVar7 + (ulong)uVar11 + (ulong)uVar17);
                            *puVar1 = *(undefined8*)(param_1 + uVar19 + (uVar20 + iVar12 * 16));
                            puVar1[1] = uVar4;
                            uVar4 = *(undefined8*)(param_1 + uVar19 + uVar20 + 8);
                            puVar1 =
                                (undefined8*)((long)pvVar7 + (ulong)(iVar15 + uVar9 * -16 + uVar11) + (ulong)uVar17);
                            *puVar1 = *(undefined8*)(param_1 + uVar19 + uVar20);
                            puVar1[1] = uVar4;
                            uVar4 = *(undefined8*)(param_1 + uVar19 + (iVar12 * 16 + local_44) + 8);
                            puVar1 = (undefined8*)((long)pvVar7 + (ulong)((uVar23 + uVar9) * iVar15 + uVar11) +
                                                   (ulong)uVar17);
                            *puVar1 = *(undefined8*)(param_1 + uVar19 + (iVar12 * 16 + local_44));
                            puVar1[1] = uVar4;
                            uVar4 = *(undefined8*)(param_1 + uVar19 + local_44 + 8);
                            puVar1 = (undefined8*)((long)pvVar7 +
                                                   (ulong)((uVar23 + uVar9 + 1) * iVar15 + uVar9 * -16 + uVar11) +
                                                   (ulong)uVar17);
                            *puVar1 = *(undefined8*)(param_1 + uVar19 + local_44);
                            puVar1[1] = uVar4;
                            uVar11 = uVar11 + 16;
                            uVar19 = (ulong)((int)uVar19 + 16);
                            uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                        uVar16 = uVar16 + iVar15;
                        uVar19 = (ulong)(uint)(iVar18 + iVar22);
                    } while (uVar14 != uVar9);
                }
                local_44 = local_44 + iVar22 * uVar23;
                uVar17 = uVar17 + uVar3 * uVar3 * 16;
                uVar14 = uVar23 >> 1;
                uVar16 = uVar3 >> 1;
                if (uVar23 < 2) {
                    uVar14 = 1;
                }
                if (uVar3 < 2) {
                    uVar16 = 1;
                }
                uVar9 = uVar16 - uVar14 >> 1;
                iVar10 = iVar10 + 1;
                uVar23 = uVar14;
                uVar3 = uVar16;
            } while (iVar10 != iVar5);
        }
        *param_2 = (uint)uVar24;
        return this;
    }

} // namespace jag::render
