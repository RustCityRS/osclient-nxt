// libs/math/colour/ColourUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "ColourUtils.h"

namespace jag::math {
    // 0x103bdd190
    int64_t RunetekColour::m_HSLToRGB;

    // 0x103bdd198
    int64_t RunetekColour::m_HSVToRGB;

    // 0x100c61940
    void RunetekColour::InitHSLToRGBTable() {
        int iVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar5;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float local_28;
        float local_24;

        if (m_HSLToRGB != 0) {
            LogAssert(
                "!m_HSLToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp", 16,
                nullptr);
        }
        m_HSLToRGB = operator_new__(262144);
        float fVar6 = (float)frand(1.0);
        fVar6 = fVar6 * 0.03 + 0.685;
        unsigned long uVar4 = 0;
        do {
            fVar13 = (float)((unsigned int)(uVar4 >> 10) & 63);
            fVar9 = fVar13 * 0.015625f;
            fVar7 = (float)((unsigned int)(uVar4 >> 7) & 7) * 0.125;
            fVar12 = (float)((unsigned int)uVar4 & 127);
            fVar11 = fVar7 + 0.0625;
            fVar8 = fVar12 * 0.0078125f;
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
                fVar10 = fVar9 + 0.0078125f;
                local_24 = fVar12 * 0.015625f - fVar7;
                uVar5 = -(unsigned int)(1.0 < fVar9 + 0.34114584f);
                fVar11 =
                    (float)(~uVar5 & (unsigned int)(fVar9 + 0.34114584f) | (unsigned int)(fVar9 - 0.6588541f) & uVar5);
                fVar12 = fVar11 * 6.0;
                if (1.0 <= fVar12) {
                    fVar8 = fVar7;
                    if ((1.0 <= fVar11 + fVar11) && (fVar8 = local_24, fVar11 * 3.0 < 2.0)) {
                        fVar8 = (4.0 - fVar12) * (fVar7 - local_24) + local_24;
                    }
                } else {
                    fVar8 = fVar12 * (fVar7 - local_24) + local_24;
                }
                uVar5 = -(unsigned int)(fVar9 - 0.32552084f < 0.0);
                if (1.0 <= fVar10 * 6.0) {
                    local_28 = fVar7;
                    if ((1.0 <= fVar10 + fVar10) && (local_28 = local_24, fVar10 * 3.0 < 2.0)) {
                        local_28 = (fVar13 * -0.09375f + 3.953125f) * (fVar7 - local_24) + local_24;
                    }
                } else {
                    local_28 = fVar10 * 6.0 * (fVar7 - local_24) + local_24;
                }
                fVar9 =
                    (float)(~uVar5 & (unsigned int)(fVar9 - 0.32552084f) | (unsigned int)(fVar9 + 0.6744791f) & uVar5);
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
            fVar8 = (float)::floor(fVar8 * 256.0);
            iVar1 = RoundFloatToInt(fVar8);
            fVar8 = (float)::floor(fVar7 * 256.0);
            iVar2 = RoundFloatToInt(fVar8);
            fVar8 = (float)::floor(fVar9 * 256.0);
            iVar3 = RoundFloatToInt(fVar8);
            *(unsigned int*)(m_HSLToRGB + uVar4 * 4) = iVar2 * 256 + iVar1 * 65536 + iVar3 & 16777215;
            uVar4 = uVar4 + 1;
            if (uVar4 == 65536) {
                return;
            }
        } while (true);
    }

    // 0x100c61cf0
    float frand(float arg1) {
        int iVar1 = _rand();
        return arg1 * 4.656613e-10 * (float)iVar1;
    }

    // 0x100c61d40
    void RunetekColour::DestroyHSLToRGBTable() {
        if (m_HSLToRGB == 0) {
            LogAssert(
                "m_HSLToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                123, nullptr);
        }
        safe_delete_array<float>((unsigned char**)&m_HSLToRGB);
    }

    // 0x100c61d80
    void RunetekColour::DestroyHSVToRGBTable() {
        if (m_HSVToRGB == 0) {
            LogAssert(
                "m_HSVToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                129, nullptr);
        }
        safe_delete_array<float>((unsigned char**)&m_HSVToRGB);
    }

    // 0x100c61dc0
    void RunetekColour::HSLToRGB(unsigned short arg1) {
        uint32_t uVar1;

        if (m_HSLToRGB == 0) {
            InitHSLToRGBTable();
        }
        if (m_HSLToRGB == 0) {
            LogAssert(
                "m_HSLToRGB != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                140, nullptr);
        }
        if (m_HSLToRGB == 0) {
            uVar1 = 0;
        } else {
            uVar1 = *(uint32_t*)(m_HSLToRGB + (unsigned long)arg1 * 4);
        }
        return uVar1;
    }

    // 0x100c61e30
    void RunetekColour::HSVToRGB(unsigned int arg1) {
        uint32_t uVar1;

        if (m_HSVToRGB == 0) {
            InitHSVToRGBTable();
        }
        if (m_HSVToRGB == 0) {
            LogAssert(
                "m_HSVToRGB != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                151, nullptr);
        }
        if (m_HSVToRGB == 0) {
            uVar1 = 0;
        } else {
            uVar1 = *(uint32_t*)(m_HSVToRGB + (unsigned long)arg1 * 4);
        }
        return uVar1;
    }

    // 0x100c61ea0
    void RunetekColour::InitHSVToRGBTable() {
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar6;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float arg1;

        if (m_HSVToRGB != 0) {
            LogAssert(
                "!m_HSVToRGB",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                301, nullptr);
        }
        m_HSVToRGB = operator_new__(262144);
        float fVar7 = (float)frand(1.0);
        fVar7 = fVar7 * 0.03 + 0.685;
        int iVar1 = 0;
        unsigned int uVar5 = 0;
        do {
            fVar8 = (float)(uVar5 & 7) * 0.125;
            fVar9 = fVar8 + 0.0625;
            fVar14 = (float)(uVar5 >> 3) * 0.09375001f + 0.046875004f;
            fVar10 = (float)::floor(fVar14);
            fVar14 = fVar14 - (float)(int)fVar10;
            iVar6 = 0;
            do {
                fVar13 = (float)iVar6 * 0.0078125f;
                if ((unsigned int)((int)fVar10 % 6) < 6) {
                    fVar15 = fVar13 * (0.9375 - fVar8);
                    fVar16 = (1.0 - fVar14 * fVar9) * fVar13;
                    arg1 = ((fVar14 - 1.0) * fVar9 + 1.0) * fVar13;
                    fVar11 = fVar13;
                    fVar12 = fVar15;
                    switch ((int)fVar10 % 6) {
                    case 1:
                        fVar11 = fVar16;
                        arg1 = fVar13;
                        break;
                    case 2:
                        fVar11 = fVar15;
                        fVar12 = arg1;
                        arg1 = fVar13;
                        break;
                    case 3:
                        fVar11 = fVar15;
                        fVar12 = fVar13;
                        arg1 = fVar16;
                        break;
                    case 4:
                        fVar11 = arg1;
                        fVar12 = fVar13;
                        arg1 = fVar15;
                        break;
                    case 5:
                        fVar12 = fVar16;
                        arg1 = fVar15;
                    }
                } else {
                    fVar11 = 0.0;
                    fVar12 = 0.0;
                    arg1 = 0.0;
                }
                fVar13 = (float)pow(fVar11, fVar7);
                fVar11 = (float)pow(arg1, fVar7);
                fVar12 = (float)pow(fVar12, fVar7);
                fVar13 = (float)::floor(fVar13 * 256.0);
                iVar2 = RoundFloatToInt(fVar13);
                fVar13 = (float)::floor(fVar11 * 256.0);
                iVar3 = RoundFloatToInt(fVar13);
                fVar13 = (float)::floor(fVar12 * 256.0);
                iVar4 = RoundFloatToInt(fVar13);
                *(int*)(m_HSVToRGB + (unsigned long)(unsigned int)(iVar1 + iVar6) * 4) =
                    iVar4 + iVar3 * 256 + iVar2 * 65536 - 16777216;
                iVar6 = iVar6 + 1;
            } while (iVar6 != 128);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 128;
        } while (uVar5 != 512);
    }

    // 0x100c621a0
    short RunetekColour::RGBToHSL(unsigned int arg1) {
        float local_1c;

        float fVar9 = (float)(arg1 >> 16 & 255) * 0.00390625f;
        float fVar6 = (float)(arg1 >> 8 & 255) * 0.00390625f;
        float fVar10 = (float)(arg1 & 255) * 0.00390625f;
        float fVar7 = fVar6;
        if (fVar10 <= fVar6) {
            fVar7 = fVar10;
        }
        if (fVar9 <= fVar7) {
            fVar7 = fVar9;
        }
        float fVar8 = fVar6;
        if (fVar6 <= fVar10) {
            fVar8 = fVar10;
        }
        if (fVar8 <= fVar9) {
            fVar8 = fVar9;
        }
        float fVar11 = fVar7 + fVar8;
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
        fVar7 = (float)::floor(fVar7 * 42.666668f);
        unsigned short uVar1 = RoundFloatToInt(fVar7);
        fVar7 = (float)::floor(local_1c * 256.0);
        unsigned int uVar2 = RoundFloatToInt(fVar7);
        fVar7 = (float)::floor(fVar11 * 128.0);
        unsigned int uVar3 = RoundFloatToInt(fVar7);
        if (254 < (int)uVar2) {
            uVar2 = 255;
        }
        unsigned int uVar5 = 255;
        if ((int)uVar3 < 255) {
            uVar5 = uVar3;
        }
        if ((int)uVar5 < 0) {
            uVar5 = 0;
        }
        int8_t sVar4 = 4;
        if ((((int)uVar5 < 244) && (sVar4 = 3, (int)uVar5 < 218)) && (sVar4 = 2, (int)uVar5 < 193)) {
            sVar4 = 179 < (int)uVar5;
        }
        uVar3 = 0;
        if (-1 < (int)uVar2) {
            uVar3 = uVar2;
        }
        return (short)(uVar5 >> 1) + (uVar1 & 252) * 256 + ((unsigned short)(uVar3 >> sVar4) & 16352) * 4;
    }

    // 0x100c62370
    unsigned int RunetekColour::HSLAdjustAmbient(unsigned short arg1, unsigned short arg2) {
        unsigned short local_16;
        unsigned short local_14;
        unsigned short local_12;

        unsigned short uVar1 = Clamp<unsigned short>(&local_16, &local_14, &local_12);
        return (unsigned int)uVar1 | (unsigned int)this & 65408;
    }

    // 0x100c623c0
    unsigned short Clamp<unsigned short>(const unsigned short& arg1, const unsigned short& arg2,
                                         const unsigned short& arg3) {
        auto puVar1 = std::max<unsigned short>(arg2, arg1);
        puVar1 = std::min<unsigned short>(arg3, *puVar1);
        return *puVar1;
    }

    // 0x100c623f0
    unsigned int RunetekColour::HSLAdjustTint(unsigned short arg1, signed char arg2, signed char arg3, signed char arg4,
                                              unsigned char arg5) {
        uint64_t in_register_0000003a;

        unsigned long uVar4 = (((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
        unsigned int uVar3 = (unsigned int)(uVar4 >> 10);
        unsigned int uVar2 = uVar3 & 4194303;
        unsigned int uVar1 = (unsigned int)(uVar4 >> 7) & 7;
        if (arg2 != -1) {
            uVar2 = uVar3 & 65535;
            uVar2 = (((int)arg2 - uVar2) * (unsigned int)arg5 >> 7) + uVar2;
        }
        uVar3 = (unsigned int)uVar4 & 127;
        if (arg3 != -1) {
            uVar1 = (((int)arg3 - uVar1) * (unsigned int)arg5 >> 7) + uVar1;
        }
        if (arg4 != -1) {
            uVar3 = (((int)arg4 - uVar3) * (unsigned int)arg5 >> 7) + uVar3;
        }
        return (uVar3 | uVar2 << 10 | uVar1 << 7) & 65535;
    }

    // 0x100c62470
    unsigned int RunetekColour::GammaCorrectOSRS(unsigned int arg1, double arg2) {
        double dVar1 = (double)_pow((double)(arg1 >> 16 & 255) * 0.00390625f, arg2);
        double dVar2 = (double)_pow((double)(arg1 >> 8 & 255) * 0.00390625f, arg2);
        double dVar3 = (double)_pow((double)(arg1 & 255) * 0.00390625f, arg2);
        return (int)(long)(dVar2 * 256.0) * 256 + (int)(long)(dVar3 * 256.0) + (int)(long)(dVar1 * 256.0) * 65536 |
               arg1 & 4278190080;
    }

    // 0x100c62540
    unsigned int ApplyOffsetToFaceColour(unsigned int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;

        unsigned int uVar1 = arg1;
        if (arg3 != 0) {
            uVar3 = 16777215;
            if (arg2 < 128) {
                uVar3 = arg2 * 131586;
            }
            uVar1 = 0;
            if (-1 < arg2) {
                uVar1 = uVar3;
            }
            if (arg3 != 256) {
                uVar1 = ((arg1 & 65280) * (256 - arg3) + (uVar1 & 65280) * arg3 & 16711680 |
                         (arg1 & 16711935) * (256 - arg3) + (uVar1 & 16711935) * arg3 & 4278255360) >>
                        8;
            }
        }
        if (arg4 != 0) {
            iVar2 = arg4 + 256;
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

    // 0x100c62620
    unsigned int InterpolateRGBA(unsigned int arg1, unsigned int arg2, float arg3) {
        unsigned int uVar1 = arg1 >> 16 & 255;
        unsigned int uVar2 = arg1 >> 8 & 255;
        return ((unsigned int)(long)((float)(int)((arg2 >> 8 & 255) - uVar2) * arg3 + (float)uVar2) & 255) << 8 |
               ((unsigned int)(long)((float)(int)((arg2 >> 16 & 255) - uVar1) * arg3 + (float)uVar1) & 255) << 16 |
               (int)(long)((float)(int)((arg2 >> 24) - (arg1 >> 24)) * arg3 + (float)(arg1 >> 24)) << 24 |
               (unsigned int)(long)((float)(int)((arg2 & 255) - (arg1 & 255)) * arg3 + (float)(arg1 & 255)) & 255;
    }

    // 0x100c626f0
    unsigned int Add(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar3 = (arg2 >> 24) + (arg1 >> 24);
        if (254 < uVar3) {
            uVar3 = 255;
        }
        unsigned int uVar2 = (arg2 >> 16 & 255) + (arg1 >> 16 & 255);
        if (254 < uVar2) {
            uVar2 = 255;
        }
        unsigned int uVar1 = (arg2 >> 8 & 255) + (arg1 >> 8 & 255);
        if (254 < uVar1) {
            uVar1 = 255;
        }
        return uVar1 << 8 | uVar3 << 24 | uVar2 << 16 | arg1 & 255;
    }

    // 0x100c62760
    unsigned int Subtract(unsigned int arg1, unsigned int arg2) {
        int iVar2 = (arg1 >> 24) - (arg2 >> 24);
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        int iVar3 = (arg1 >> 16 & 255) - (arg2 >> 16 & 255);
        if (iVar3 < 0) {
            iVar3 = 0;
        }
        int iVar1 = (arg1 >> 8 & 255) - (arg2 >> 8 & 255);
        if (iVar1 < 0) {
            iVar1 = 0;
        }
        return iVar1 << 8 | iVar3 << 16 | iVar2 << 24 | arg1 & 255;
    }

    // 0x100c627c0
    unsigned int Multiply(unsigned int arg1, float arg2) {
        int iVar3 = (int)((float)(arg1 >> 24) * arg2);
        if (254 < iVar3) {
            iVar3 = 255;
        }
        int iVar2 = (int)((float)(arg1 >> 16 & 255) * arg2);
        if (254 < iVar2) {
            iVar2 = 255;
        }
        int iVar4 = (int)((float)(arg1 >> 8 & 255) * arg2);
        int iVar1 = 255;
        if (iVar4 < 255) {
            iVar1 = iVar4;
        }
        return iVar1 << 8 | iVar2 << 16 | iVar3 << 24 | arg1 & 255;
    }

    // 0x100c62840
    unsigned int Multiply(unsigned int arg1, unsigned int arg2) {
        int iVar1;
        int iVar2;
        int iVar3;
        unsigned int uVar4;

        if (arg1 != 4294967295) {
            if (arg2 == 4294967295) {
                arg2 = arg1;
            } else {
                iVar1 = eastl::min<unsigned int>(255, ((arg2 >> 24) * (arg1 >> 24)) / 255);
                iVar2 = eastl::min<unsigned int>(255, ((arg2 >> 16 & 255) * (arg1 >> 16 & 255)) / 255);
                iVar3 = eastl::min<unsigned int>(255, ((arg2 >> 8 & 255) * (arg1 >> 8 & 255)) / 255);
                uVar4 = eastl::min<unsigned int>(255, ((arg2 & 255) * (arg1 & 255)) / 255);
                arg2 = iVar3 << 8 | iVar1 << 24 | iVar2 << 16 | uVar4;
            }
        }
        return arg2;
    }

    // 0x100c62930
    unsigned int MultiplyAlpha(unsigned int arg1, float arg2) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;

        if (arg2 < 0.0) {
            LogAssert(
                "amount >= 0.f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                488, nullptr, in_R8, in_R9, (((uint64_t)arg2 << 32) | (uint32_t)in_EAX));
        }
        if (1.0 < arg2) {
            LogAssert(
                "amount <= 1.f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/ColourUtils.cpp",
                489, nullptr, in_R8, in_R9, (((uint64_t)arg2 << 32) | (uint32_t)in_EAX));
        }
        return arg1 & 4294967040 | (unsigned int)(long)((float)(arg1 & 255) * arg2);
    }

    // 0x100c629c0
    void RGBToHSL(const Vector3T<float>& vector3) {
        float local_38;

        float local_c = 0.0;
        float local_1c = 0.0;
        float local_24 = 0.0;
        float local_20 = *(float*)vector3;
        float arg2 = *(float*)(vector3 + 4);
        float local_18 = *(float*)(vector3 + 8);
        float fVar1 = (float)eastl::max_alt(local_20, arg2);
        float local_28 = (float)eastl::max_alt(local_18, fVar1);
        fVar1 = (float)eastl::min<float>(local_20, arg2);
        fVar1 = (float)eastl::min<float>(local_18, fVar1);
        float fVar2 = local_28 - fVar1;
        fVar1 = fVar1 + local_28;
        local_24 = fVar1 * 0.5;
        if (fVar2 == 0.0) {
            local_c = 0.0;
            local_1c = 0.0;
        } else {
            local_1c = fVar2 / (float)(~-(unsigned int)(0.5 < local_24) & (unsigned int)fVar1 |
                                       (unsigned int)(2.0 - fVar1) & -(unsigned int)(0.5 < local_24));
            if (local_28 == local_20) {
                local_c = (float)(-(unsigned int)(arg2 < local_18) & 1086324736) + (arg2 - local_18) / fVar2;
            } else if (local_28 == arg2) {
                local_c = (local_18 - local_20) / fVar2 + 2.0;
            } else if (local_28 == local_18) {
                local_c = (local_20 - arg2) / fVar2 + 4.0;
            }
            local_c = local_c * 0.16666667f;
        }
        new (&local_38) Vector3T();
        float local_14 = 0.0;
        float local_10 = 1.0;
        local_38 = Clamp<float>(&local_c, &local_14, &local_10);
        local_14 = 0.0;
        local_10 = 1.0;
        float fStack_34 = Clamp<float>(&local_1c, &local_14, &local_10);
        local_14 = 0.0;
        local_10 = 1.0;
        Clamp<float>(&local_24, &local_14, &local_10);
        return (((uint64_t)fStack_34 << 32) | (uint32_t)local_38);
    }

    // 0x100c62bb0
    void HSLToRGB(const ColourHSL& colourHSL, float arg2) {
        uint8_t auVar2[16];
        float local_38;
        float fStack_34;
        float local_1c;
        float local_18;
        float local_14;

        new (&local_38) Vector4T();
        float fVar1 = colourHSL.field_4;
        float fVar3 = colourHSL.field_8;
        if (fVar1 == 0.0) {
            local_38 = fVar3;
            fStack_34 = fVar3;
        } else {
            local_14 = colourHSL.field_0;
            if (0.5 <= fVar3) {
                local_18 = (fVar3 + fVar1) - fVar1 * fVar3;
            } else {
                local_18 = (fVar1 + 1.0) * fVar3;
            }
            local_1c = (fVar3 + fVar3) - local_18;
            local_38 = (float)HueToRGB(local_1c, local_18, local_14 + 0.33333334f);
            fStack_34 = (float)HueToRGB(local_1c, local_18, local_14);
            fVar3 = (float)HueToRGB(local_1c, local_18, local_14 - 0.33333334f);
        }
        auVar2._4_4_ = fStack_34;
        auVar2._0_4_ = local_38;
        auVar2._8_4_ = fVar3;
        auVar2._12_4_ = arg2;
        return auVar2;
    }

    // 0x100c62ca0
    void HueToRGB(float arg1, float arg2, float arg3) {
        uint32_t in_XMM0_Db;
        uint32_t in_XMM1_Db;

        float fVar1 = (float)(~-(unsigned int)(arg3 < 0.0) & (unsigned int)arg3 |
                              (unsigned int)(arg3 + 1.0) & -(unsigned int)(arg3 < 0.0));
        fVar1 = (float)(~-(unsigned int)(1.0 < fVar1) & (unsigned int)fVar1 |
                        (unsigned int)(fVar1 - 1.0) & -(unsigned int)(1.0 < fVar1));
        if (0.16666667f <= fVar1) {
            if (fVar1 < 0.5)
                goto LAB_100c62d2d;
            if (0.6666667f <= fVar1) {
                arg2 = arg1;
                in_XMM1_Db = in_XMM0_Db;
                goto LAB_100c62d2d;
            }
            fVar1 = (arg2 - arg1) * 6.0 * (0.6666667f - fVar1);
        } else {
            fVar1 = (arg2 - arg1) * 6.0 * fVar1;
        }
        arg2 = fVar1 + arg1;
    LAB_100c62d2d:
        return (((uint64_t)in_XMM1_Db << 32) | (uint32_t)arg2);
    }

} // namespace jag::math

// 0x100c61d20
void pow(float arg1, float arg2) {
    _powf();
}

// 0x100c61d30
void floor(float arg1) {
    _floorf();
}
