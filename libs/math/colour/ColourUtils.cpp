// libs/math/colour/ColourUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "ColourUtils.h"

namespace jag::math {
    // 0x103bdd190, 8 bytes, __common; zero-initialised
    RunetekColour::m_HSLToRGB;

    // 0x103bdd198, 8 bytes, __common; zero-initialised
    RunetekColour::m_HSVToRGB;

    // 0x100c61940, 944 bytes, placed by debug map only (low confidence)
    // RunetekColour::InitHSLToRGBTable()
    void RunetekColour::InitHSLToRGBTable() {
        int iVar1;
        int iVar2;
        int iVar3;
        ulong uVar4;
        uint uVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float local_28;
        float local_24;

        if (m_HSLToRGB != (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_HSLToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp", 16,
                (char*)0);
        }
        m_HSLToRGB = operator_new__(262144);
        fVar6 = (float)frand(1.0);
        fVar6 = fVar6 * 0.03 + 0.685;
        uVar4 = 0;
        do {
            fVar13 = (float)((uint)(uVar4 >> 10) & 63);
            fVar9 = fVar13 * 0.015625;
            fVar7 = (float)((uint)(uVar4 >> 7) & 7) * 0.125;
            fVar12 = (float)((uint)uVar4 & 127);
            fVar11 = fVar7 + 0.0625;
            fVar8 = fVar12 * 0.0078125;
            if (fVar11 == 0.0) {
                fVar7 = fVar8;
                local_28 = fVar8;
            LAB_100c61c90:
                local_24 = fVar7;
            } else {
                if (0.5 <= fVar8) {
                    fVar7 = (fVar11 + fVar8) - fVar11 * fVar8;
                } else {
                    fVar7 = fVar8 * (fVar7 + 1.0625);
                }
                fVar10 = fVar9 + 0.0078125;
                local_24 = fVar12 * 0.015625 - fVar7;
                uVar5 = -(uint)(1.0 < fVar9 + 0.34114584);
                fVar11 = (float)(~uVar5 & (uint)(fVar9 + 0.34114584) | (uint)(fVar9 + -0.6588541) & uVar5);
                fVar12 = fVar11 * 6.0;
                if (1.0 <= fVar12) {
                    fVar8 = fVar7;
                    if ((1.0 <= fVar11 + fVar11) && (fVar8 = local_24, fVar11 * 3.0 < 2.0)) {
                        fVar8 = (4.0 - fVar12) * (fVar7 - local_24) + local_24;
                    }
                } else {
                    fVar8 = fVar12 * (fVar7 - local_24) + local_24;
                }
                uVar5 = -(uint)(fVar9 + -0.32552084 < 0.0);
                if (1.0 <= fVar10 * 6.0) {
                    local_28 = fVar7;
                    if ((1.0 <= fVar10 + fVar10) && (local_28 = local_24, fVar10 * 3.0 < 2.0)) {
                        local_28 = (fVar13 * -0.09375 + 3.953125) * (fVar7 - local_24) + local_24;
                    }
                } else {
                    local_28 = fVar10 * 6.0 * (fVar7 - local_24) + local_24;
                }
                fVar9 = (float)(~uVar5 & (uint)(fVar9 + -0.32552084) | (uint)(fVar9 + 0.6744791) & uVar5);
                fVar11 = fVar9 * 6.0;
                if (fVar11 < 1.0) {
                    local_24 = fVar11 * (fVar7 - local_24) + local_24;
                } else {
                    if (fVar9 + fVar9 < 1.0)
                        goto LAB_100c61c90;
                    if (fVar9 * 3.0 < 2.0) {
                        local_24 = (4.0 - fVar11) * (fVar7 - local_24) + local_24;
                    }
                }
            }
            fVar8 = (float)pow(fVar8, fVar6);
            fVar7 = (float)pow(local_28, fVar6);
            fVar9 = (float)pow(local_24, fVar6);
            fVar8 = (float)floor(fVar8 * 256.0);
            iVar1 = RoundFloatToInt(fVar8);
            fVar8 = (float)floor(fVar7 * 256.0);
            iVar2 = RoundFloatToInt(fVar8);
            fVar8 = (float)floor(fVar9 * 256.0);
            iVar3 = RoundFloatToInt(fVar8);
            *(uint*)((long)m_HSLToRGB + uVar4 * 4) = iVar2 * 256 + iVar1 * 65536 + iVar3 & 16777215;
            uVar4 = uVar4 + 1;
            if (uVar4 == 65536) {
                return;
            }
        } while (true);
    }

    // 0x100c61cf0, 48 bytes, inline, placed by debug map only (low confidence)
    // frand(float)
    float frand(float param_1) {
        int iVar1;

        iVar1 = _rand();
        return param_1 * 4.656613e-10 * (float)iVar1;
    }

    // 0x100c61d40, 64 bytes, placed by debug map only (low confidence)
    // RunetekColour::DestroyHSLToRGBTable()
    void RunetekColour::DestroyHSLToRGBTable() {
        if (m_HSLToRGB == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_HSLToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                123, (char*)0);
        }
        safe_delete_array<float>((float**)&m_HSLToRGB);
    }

    // 0x100c61d80, 64 bytes, placed by debug map only (low confidence)
    // RunetekColour::DestroyHSVToRGBTable()
    void RunetekColour::DestroyHSVToRGBTable() {
        if (m_HSVToRGB == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_HSVToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                129, (char*)0);
        }
        safe_delete_array<float>((float**)&m_HSVToRGB);
    }

    // 0x100c61dc0, 112 bytes, placed by debug map only (low confidence)
    // RunetekColour::HSLToRGB(unsigned short)
    undefined4 RunetekColour::HSLToRGB(ushort param_1) {
        undefined4 uVar1;

        if (m_HSLToRGB == 0) {
            InitHSLToRGBTable();
        }
        if (m_HSLToRGB == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_HSLToRGB != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                140, (char*)0);
        }
        if (m_HSLToRGB == 0) {
            uVar1 = 0;
        } else {
            uVar1 = *(undefined4*)(m_HSLToRGB + (ulong)param_1 * 4);
        }
        return uVar1;
    }

    // 0x100c61e30, 112 bytes, placed by debug map only (low confidence)
    // RunetekColour::HSVToRGB(unsigned int)
    undefined4 RunetekColour::HSVToRGB(uint param_1) {
        undefined4 uVar1;

        if (m_HSVToRGB == 0) {
            InitHSVToRGBTable();
        }
        if (m_HSVToRGB == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_HSVToRGB != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                151, (char*)0);
        }
        if (m_HSVToRGB == 0) {
            uVar1 = 0;
        } else {
            uVar1 = *(undefined4*)(m_HSVToRGB + (ulong)param_1 * 4);
        }
        return uVar1;
    }

    // 0x100c61ea0, 768 bytes, placed by debug map only (low confidence)
    // RunetekColour::InitHSVToRGBTable()
    void RunetekColour::InitHSVToRGBTable() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;

        if (m_HSVToRGB != (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_HSVToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                301, (char*)0);
        }
        m_HSVToRGB = operator_new__(262144);
        fVar7 = (float)frand(1.0);
        fVar7 = fVar7 * 0.03 + 0.685;
        iVar1 = 0;
        uVar5 = 0;
        do {
            fVar8 = (float)(uVar5 & 7) * 0.125;
            fVar9 = fVar8 + 0.0625;
            fVar14 = (float)(uVar5 >> 3) * 0.09375001 + 0.046875004;
            fVar10 = (float)floor(fVar14);
            fVar14 = fVar14 - (float)(int)fVar10;
            iVar6 = 0;
            do {
                fVar13 = (float)iVar6 * 0.0078125;
                if ((uint)((int)fVar10 % 6) < 6) {
                    fVar15 = fVar13 * (0.9375 - fVar8);
                    fVar16 = (1.0 - fVar14 * fVar9) * fVar13;
                    fVar17 = ((fVar14 - 1.0) * fVar9 + 1.0) * fVar13;
                    fVar11 = fVar13;
                    fVar12 = fVar15;
                    switch ((int)fVar10 % 6) {
                    case 1:
                        fVar11 = fVar16;
                        fVar17 = fVar13;
                        break;
                    case 2:
                        fVar11 = fVar15;
                        fVar12 = fVar17;
                        fVar17 = fVar13;
                        break;
                    case 3:
                        fVar11 = fVar15;
                        fVar12 = fVar13;
                        fVar17 = fVar16;
                        break;
                    case 4:
                        fVar11 = fVar17;
                        fVar12 = fVar13;
                        fVar17 = fVar15;
                        break;
                    case 5:
                        fVar12 = fVar16;
                        fVar17 = fVar15;
                    }
                } else {
                    fVar11 = 0.0;
                    fVar12 = 0.0;
                    fVar17 = 0.0;
                }
                fVar13 = (float)pow(fVar11, fVar7);
                fVar11 = (float)pow(fVar17, fVar7);
                fVar12 = (float)pow(fVar12, fVar7);
                fVar13 = (float)floor(fVar13 * 256.0);
                iVar2 = RoundFloatToInt(fVar13);
                fVar13 = (float)floor(fVar11 * 256.0);
                iVar3 = RoundFloatToInt(fVar13);
                fVar13 = (float)floor(fVar12 * 256.0);
                iVar4 = RoundFloatToInt(fVar13);
                *(int*)((long)m_HSVToRGB + (ulong)(uint)(iVar1 + iVar6) * 4) =
                    iVar4 + iVar3 * 256 + iVar2 * 65536 + -16777216;
                iVar6 = iVar6 + 1;
            } while (iVar6 != 128);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 128;
        } while (uVar5 != 512);
    }

    // 0x100c621a0, 464 bytes, placed by neighbouring functions
    // RunetekColour::RGBToHSL(unsigned int)
    short RunetekColour::RGBToHSL(uint param_1) {
        ushort uVar1;
        uint uVar2;
        uint uVar3;
        sbyte sVar4;
        uint uVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float local_1c;

        fVar9 = (float)(param_1 >> 16 & 255) * 0.00390625;
        fVar6 = (float)(param_1 >> 8 & 255) * 0.00390625;
        fVar10 = (float)(param_1 & 255) * 0.00390625;
        fVar7 = fVar6;
        if (fVar10 <= fVar6) {
            fVar7 = fVar10;
        }
        if (fVar9 <= fVar7) {
            fVar7 = fVar9;
        }
        fVar8 = fVar6;
        if (fVar6 <= fVar10) {
            fVar8 = fVar10;
        }
        if (fVar8 <= fVar9) {
            fVar8 = fVar9;
        }
        fVar11 = fVar7 + fVar8;
        if (fVar7 == fVar8) {
            fVar7 = 0.0;
            local_1c = 0.0;
        } else {
            if (fVar11 * 0.5 < 0.5) {
                local_1c = (fVar8 - fVar7) / fVar11;
            } else {
                local_1c = (fVar8 - fVar7) / (2.0 - fVar11);
            }
            if (fVar9 == fVar8) {
                fVar7 = (fVar6 - fVar10) / (fVar8 - fVar7);
            } else if (fVar6 == fVar8) {
                fVar7 = (fVar10 - fVar9) / (fVar8 - fVar7) + 2.0;
            } else if (fVar10 == fVar8) {
                fVar7 = (fVar9 - fVar6) / (fVar8 - fVar7) + 4.0;
            } else {
                fVar7 = 0.0;
            }
        }
        fVar7 = (float)floor(fVar7 * 42.666668);
        uVar1 = RoundFloatToInt(fVar7);
        fVar7 = (float)floor(local_1c * 256.0);
        uVar2 = RoundFloatToInt(fVar7);
        fVar7 = (float)floor(fVar11 * 128.0);
        uVar3 = RoundFloatToInt(fVar7);
        if (254 < (int)uVar2) {
            uVar2 = 255;
        }
        uVar5 = 255;
        if ((int)uVar3 < 255) {
            uVar5 = uVar3;
        }
        if ((int)uVar5 < 0) {
            uVar5 = 0;
        }
        sVar4 = 4;
        if ((((int)uVar5 < 244) && (sVar4 = 3, (int)uVar5 < 218)) && (sVar4 = 2, (int)uVar5 < 193)) {
            sVar4 = 179 < (int)uVar5;
        }
        uVar3 = 0;
        if (-1 < (int)uVar2) {
            uVar3 = uVar2;
        }
        return (short)(uVar5 >> 1) + (uVar1 & 252) * 256 + ((ushort)(uVar3 >> sVar4) & 16352) * 4;
    }

    // 0x100c62370, 80 bytes, placed by neighbouring functions
    // RunetekColour::HSLAdjustAmbient(unsigned short, unsigned short)
    ushort RunetekColour::HSLAdjustAmbient(ushort param_1, ushort param_2) {
        ushort local_16;
        ushort local_14;
        ushort local_12;

        return Clamp<unsigned short>(&local_16, &local_14, &local_12) | param_1 & 65408;
    }

    // 0x100c623c0, 48 bytes, inline, placed by debug map only (low confidence)
    // unsigned short Clamp<unsigned short>(unsigned short const&, unsigned short const&, unsigned short const&)
    ushort Clamp<unsigned short>(ushort* param_1, ushort* param_2, ushort* param_3) {
        ushort* puVar1;

        puVar1 = std::max<unsigned short>(param_2, param_1);
        puVar1 = std::min<unsigned short>(param_3, puVar1);
        return *puVar1;
    }

    // 0x100c623f0, 128 bytes, placed by neighbouring functions
    // RunetekColour::HSLAdjustTint(unsigned short, signed char, signed char, signed char, unsigned char)
    uint RunetekColour::HSLAdjustTint(uint param_1, char param_2, char param_3, char param_4, byte param_5) {
        uint uVar1;
        uint uVar3;

        uVar3 = param_1 >> 10;
        uVar1 = param_1 >> 7 & 7;
        if (param_2 != -1) {
            uVar3 = (((int)param_2 - (uVar3 & 65535)) * (uint)param_5 >> 7) + (uVar3 & 65535);
        }
        param_1 = param_1 & 127;
        if (param_3 != -1) {
            uVar1 = (((int)param_3 - uVar1) * (uint)param_5 >> 7) + uVar1;
        }
        if (param_4 != -1) {
            param_1 = (((int)param_4 - param_1) * (uint)param_5 >> 7) + param_1;
        }
        return (param_1 | uVar3 << 10 | uVar1 << 7) & 65535;
    }

    // 0x100c62470, 208 bytes, placed by neighbouring functions
    // RunetekColour::GammaCorrectOSRS(unsigned int, double)
    uint RunetekColour::GammaCorrectOSRS(uint param_1, double param_2) {
        double dVar1;
        double dVar2;
        double dVar3;

        dVar1 = (double)_pow((double)(param_1 >> 16 & 255) * 0.00390625, param_2);
        dVar2 = (double)_pow((double)(param_1 >> 8 & 255) * 0.00390625, param_2);
        dVar3 = (double)_pow((double)(param_1 & 255) * 0.00390625, param_2);
        return (int)(long)(dVar2 * 256.0) * 256 + (int)(long)(dVar3 * 256.0) + (int)(long)(dVar1 * 256.0) * 65536 |
               param_1 & 4278190080;
    }

    // 0x100c62540, 224 bytes, placed by neighbouring functions
    // ApplyOffsetToFaceColour(unsigned int, int, unsigned int, unsigned int)
    uint ApplyOffsetToFaceColour(uint param_1, int param_2, uint param_3, uint param_4) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;

        uVar1 = param_1;
        if (param_3 != 0) {
            uVar3 = 16777215;
            if (param_2 < 128) {
                uVar3 = param_2 * 131586;
            }
            uVar1 = 0;
            if (-1 < param_2) {
                uVar1 = uVar3;
            }
            if (param_3 != 256) {
                uVar1 = ((param_1 & 65280) * (256 - param_3) + (uVar1 & 65280) * param_3 & 16711680 |
                         (param_1 & 16711935) * (256 - param_3) + (uVar1 & 16711935) * param_3 & 4278255360) >>
                        8;
            }
        }
        if (param_4 != 0) {
            iVar2 = param_4 + 256;
            uVar3 = (uVar1 >> 16 & 255) * iVar2;
            if (65534 < uVar3) {
                uVar3 = 65535;
            }
            uVar4 = (uVar1 >> 8 & 255) * iVar2;
            if (65534 < uVar4) {
                uVar4 = 65535;
            }
            uVar1 = (uVar1 & 255) * iVar2;
            if (65534 < uVar1) {
                uVar1 = 65535;
            }
            uVar1 = uVar1 >> 8 | uVar4 & 65280 | (uVar3 & 65280) << 8;
        }
        return uVar1;
    }

    // 0x100c62620, 208 bytes, placed by neighbouring functions
    // InterpolateRGBA(unsigned int, unsigned int, float)
    uint InterpolateRGBA(uint param_1, uint param_2, float param_3) {
        uint uVar1;
        uint uVar2;

        uVar1 = param_1 >> 16 & 255;
        uVar2 = param_1 >> 8 & 255;
        return ((uint)(long)((float)(int)((param_2 >> 8 & 255) - uVar2) * param_3 + (float)uVar2) & 255) << 8 |
               ((uint)(long)((float)(int)((param_2 >> 16 & 255) - uVar1) * param_3 + (float)uVar1) & 255) << 16 |
               (int)(long)((float)(int)((param_2 >> 24) - (param_1 >> 24)) * param_3 + (float)(param_1 >> 24)) << 24 |
               (uint)(long)((float)(int)((param_2 & 255) - (param_1 & 255)) * param_3 + (float)(param_1 & 255)) & 255;
    }

    // 0x100c626f0, 112 bytes, placed by neighbouring functions
    // Add(unsigned int, unsigned int)
    uint Add(uint param_1, uint param_2) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        uVar3 = (param_2 >> 24) + (param_1 >> 24);
        if (254 < uVar3) {
            uVar3 = 255;
        }
        uVar2 = (param_2 >> 16 & 255) + (param_1 >> 16 & 255);
        if (254 < uVar2) {
            uVar2 = 255;
        }
        uVar1 = (param_2 >> 8 & 255) + (param_1 >> 8 & 255);
        if (254 < uVar1) {
            uVar1 = 255;
        }
        return uVar1 << 8 | uVar3 << 24 | uVar2 << 16 | param_1 & 255;
    }

    // 0x100c62760, 96 bytes, placed by neighbouring functions
    // Subtract(unsigned int, unsigned int)
    uint Subtract(uint param_1, uint param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar2 = (param_1 >> 24) - (param_2 >> 24);
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        iVar3 = (param_1 >> 16 & 255) - (param_2 >> 16 & 255);
        if (iVar3 < 0) {
            iVar3 = 0;
        }
        iVar1 = (param_1 >> 8 & 255) - (param_2 >> 8 & 255);
        if (iVar1 < 0) {
            iVar1 = 0;
        }
        return iVar1 << 8 | iVar3 << 16 | iVar2 << 24 | param_1 & 255;
    }

    // 0x100c627c0, 128 bytes, placed by neighbouring functions
    // Multiply(unsigned int, float)
    uint Multiply(uint param_1, float param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        iVar3 = (int)((float)(param_1 >> 24) * param_2);
        if (254 < iVar3) {
            iVar3 = 255;
        }
        iVar2 = (int)((float)(param_1 >> 16 & 255) * param_2);
        if (254 < iVar2) {
            iVar2 = 255;
        }
        iVar4 = (int)((float)(param_1 >> 8 & 255) * param_2);
        iVar1 = 255;
        if (iVar4 < 255) {
            iVar1 = iVar4;
        }
        return iVar1 << 8 | iVar2 << 16 | iVar3 << 24 | param_1 & 255;
    }

    // 0x100c62840, 240 bytes, placed by neighbouring functions
    // Multiply(unsigned int, unsigned int)
    uint Multiply(uint param_1, uint param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        uint uVar4;

        if (param_1 != 4294967295) {
            if (param_2 == 4294967295) {
                param_2 = param_1;
            } else {
                iVar1 = eastl::min<unsigned int>(255, ((param_2 >> 24) * (param_1 >> 24)) / 255);
                iVar2 = eastl::min<unsigned int>(255, ((param_2 >> 16 & 255) * (param_1 >> 16 & 255)) / 255);
                iVar3 = eastl::min<unsigned int>(255, ((param_2 >> 8 & 255) * (param_1 >> 8 & 255)) / 255);
                uVar4 = eastl::min<unsigned int>(255, ((param_2 & 255) * (param_1 & 255)) / 255);
                param_2 = iVar3 << 8 | iVar1 << 24 | iVar2 << 16 | uVar4;
            }
        }
        return param_2;
    }

    // 0x100c62930, 144 bytes, placed by debug map only (low confidence)
    // MultiplyAlpha(unsigned int, float)
    uint MultiplyAlpha(uint param_1, float param_2) {
        undefined4 in_EAX;
        undefined8 in_R8;
        undefined8 in_R9;

        if (param_2 < 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "amount >= 0.f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                488, (char*)0, in_R8, in_R9, CONCAT44(param_2, in_EAX));
        }
        if (1.0 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "amount <= 1.f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                489, (char*)0, in_R8, in_R9, CONCAT44(param_2, in_EAX));
        }
        return param_1 & 4294967040 | (uint)(long)((float)(param_1 & 255) * param_2);
    }

    // 0x100c629c0, 480 bytes, placed by debug map only (low confidence)
    // RGBToHSL(Vector3T<float> const&)
    undefined8 RGBToHSL(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float local_38;
        float fStack_34;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;
        float local_18;
        float local_14;
        float local_10;
        float local_c;

        local_c = 0.0;
        local_1c = 0.0;
        local_24 = 0.0;
        local_20 = *(float*)param_1;
        fVar1 = *(float*)(param_1 + 4);
        local_18 = *(float*)(param_1 + 8);
        fVar2 = (float)eastl::max_alt(local_20, fVar1);
        local_28 = (float)eastl::max_alt(local_18, fVar2);
        fVar2 = (float)eastl::min<float>(local_20, fVar1);
        fVar2 = (float)eastl::min<float>(local_18, fVar2);
        fVar3 = local_28 - fVar2;
        fVar2 = fVar2 + local_28;
        local_24 = fVar2 * 0.5;
        if (fVar3 == 0.0) {
            local_c = 0.0;
            local_1c = 0.0;
        } else {
            local_1c =
                fVar3 / (float)(~-(uint)(0.5 < local_24) & (uint)fVar2 | (uint)(2.0 - fVar2) & -(uint)(0.5 < local_24));
            if (local_28 == local_20) {
                local_c = (float)(-(uint)(fVar1 < local_18) & 1086324736) + (fVar1 - local_18) / fVar3;
            } else if (local_28 == fVar1) {
                local_c = (local_18 - local_20) / fVar3 + 2.0;
            } else if (local_28 == local_18) {
                local_c = (local_20 - fVar1) / fVar3 + 4.0;
            }
            local_c = local_c * 0.16666667;
        }
        new (&local_38) Vector3T<int>();
        local_14 = 0.0;
        local_10 = 1.0;
        local_38 = Clamp<float>(&local_c, &local_14, &local_10);
        local_14 = 0.0;
        local_10 = 1.0;
        fStack_34 = Clamp<float>(&local_1c, &local_14, &local_10);
        local_14 = 0.0;
        local_10 = 1.0;
        Clamp<float>(&local_24, &local_14, &local_10);
        return CONCAT44(fStack_34, local_38);
    }

    // 0x100c62bb0, 240 bytes, placed by debug map only (low confidence)
    // HSLToRGB(ColourHSL const&, float)
    undefined1[16] HSLToRGB(ColourHSL* param_1, float param_2) {
        float fVar1;
        undefined1 auVar2[16];
        float fVar3;
        float local_38;
        float fStack_34;
        float local_1c;
        float local_18;
        float local_14;

        new (&local_38) Vector4T<float>();
        fVar1 = param_1->field_4;
        fVar3 = param_1->field_8;
        if (fVar1 == 0.0) {
            local_38 = fVar3;
            fStack_34 = fVar3;
        } else {
            local_14 = param_1->field_0;
            if (0.5 <= fVar3) {
                local_18 = (fVar3 + fVar1) - fVar1 * fVar3;
            } else {
                local_18 = (fVar1 + 1.0) * fVar3;
            }
            local_1c = (fVar3 + fVar3) - local_18;
            local_38 = (float)HueToRGB(local_1c, local_18, local_14 + 0.33333334);
            fStack_34 = (float)HueToRGB(local_1c, local_18, local_14);
            fVar3 = (float)HueToRGB(local_1c, local_18, local_14 + -0.33333334);
        }
        auVar2._4_4_ = fStack_34;
        auVar2._0_4_ = local_38;
        auVar2._8_4_ = fVar3;
        auVar2._12_4_ = param_2;
        return auVar2;
    }

    // 0x100c62ca0, 160 bytes, placed by debug map only (low confidence)
    // HueToRGB(float, float, float)
    undefined8 HueToRGB(float param_1, float param_2, float param_3) {
        undefined4 in_XMM0_Db;
        undefined4 in_XMM1_Db;
        float fVar1;

        fVar1 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_3 | (uint)(param_3 + 1.0) & -(uint)(param_3 < 0.0));
        fVar1 = (float)(~-(uint)(1.0 < fVar1) & (uint)fVar1 | (uint)(fVar1 + -1.0) & -(uint)(1.0 < fVar1));
        if (0.16666667 <= fVar1) {
            if (fVar1 < 0.5)
                goto LAB_100c62d2d;
            if (0.6666667 <= fVar1) {
                param_2 = param_1;
                in_XMM1_Db = in_XMM0_Db;
                goto LAB_100c62d2d;
            }
            fVar1 = (param_2 - param_1) * 6.0 * (0.6666667 - fVar1);
        } else {
            fVar1 = (param_2 - param_1) * 6.0 * fVar1;
        }
        param_2 = fVar1 + param_1;
    LAB_100c62d2d:
        return CONCAT44(in_XMM1_Db, param_2);
    }

} // namespace jag::math

// 0x100c61d20, 16 bytes, placed by neighbouring functions
// pow(float, float)
void pow(float param_1, float param_2) {
    _powf();
}

// 0x100c61d30, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
