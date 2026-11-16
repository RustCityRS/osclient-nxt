// libs/graphics/runetek7/particles/ParticleEmitterTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEmitterTemplate.h"

namespace jag::graphics {
    // 0x1007cb1e0
    unsigned int ParticleEmitterTemplate::GetRandomRGBA() const {
        unsigned int uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        float fVar5;

        if (field_88 == '\0') {
            iVar2 = math::IRandMT(field_148, field_152);
            iVar3 = math::IRandMT(field_160, field_164);
            iVar4 = math::IRandMT(field_172, field_176);
            uVar1 = math::IRandMT(field_184, field_188);
            uVar1 = uVar1 | iVar4 << 8 | iVar3 << 16 | iVar2 << 24;
        } else {
            fVar5 = (float)math::FRandMT(0.0, 1.0);
            uVar1 = (int)(long)((float)(int)field_192 * fVar5) + field_184 |
                    ((int)(long)((float)(int)field_180 * fVar5) + field_172) * 256 |
                    ((int)(long)((float)(int)field_168 * fVar5) + field_160) * 65536 |
                    ((int)(long)((float)(int)field_156 * fVar5) + field_148) * 16777216;
        }
        return uVar1;
    }

    // 0x1007cb310
    unsigned long ParticleEmitterTemplate::GetRandomRotationSpawn() const {
        float fVar1;
        float fVar2;

        float arg1 = field_124;
        unsigned long uVar3 = (unsigned long)(unsigned int)arg1;
        float arg2 = field_128;
        if (arg1 != arg2) {
            fVar1 = field_132;
            if (fVar1 == 0.0) {
                uVar3 = math::FRandMT(arg1, arg2);
            } else {
                math::FRandMT(0.0, fVar1 + 1.0);
                fVar2 = (float)_floorf();
                uVar3 = (unsigned long)(unsigned int)(arg1 + ((arg2 - arg1) * fVar2) / fVar1);
            }
        }
        return uVar3;
    }

    // 0x1007cd980
    void ParticleEmitterTemplate::Initialise(int arg1, const ParticleEmitterRaw& particleEmitterRaw) {
        int iVar8;
        float fVar13;
        float local_48;
        int local_40;

        field_0 = arg1;
        field_4 = particleEmitterRaw.field_8;
        field_8 = particleEmitterRaw.field_12;
        field_12 = particleEmitterRaw.field_16;
        field_16 = particleEmitterRaw.field_20;
        field_20 = (float)(int)particleEmitterRaw.field_100 * 0.78125f;
        field_24 = (float)(int)particleEmitterRaw.field_104 * 0.78125f;
        field_28 = particleEmitterRaw.field_116;
        field_136 = particleEmitterRaw.field_112;
        field_140 = particleEmitterRaw.field_108;
        field_144 = particleEmitterRaw.field_154;
        field_32 = (float)(int)particleEmitterRaw.field_92 * 0.02;
        unsigned int uVar1 = particleEmitterRaw.field_96;
        field_36 = (float)(int)uVar1 * 0.02;
        float local_44 = (float)particleEmitterRaw.field_28 * 0.00019073486f;
        float local_50 = (float)particleEmitterRaw.field_32 * 0.00019073486f;
        float fVar12 = (float)(int)particleEmitterRaw.field_44;
        if (particleEmitterRaw.field_44 != -1) {
            fVar12 = fVar12 * 0.00019073486f;
            fVar12 = (float)(~-(unsigned int)(local_44 == local_50) & (unsigned int)fVar12 |
                             (~-(unsigned int)(local_44 == fVar12) & (unsigned int)fVar12 |
                              -(unsigned int)(local_44 == fVar12) & 3212836864) &
                                 -(unsigned int)(local_44 == local_50));
        }
        float local_34 = (float)(int)uVar1 * 0.0002;
        if (fVar12 == -1.0) {
            fVar13 = 0.0;
        } else {
            fVar13 = (float)(int)particleEmitterRaw.field_48 * local_34;
        }
        field_40 = local_44;
        field_44 = local_50;
        field_48 = ~-(unsigned int)(fVar12 != -1.0) & 8388608 | -(unsigned int)(fVar12 != -1.0) & (unsigned int)fVar12;
        field_52 = ~-(unsigned int)(fVar13 != 0.0) & 8388608 | -(unsigned int)(fVar13 != 0.0) & (unsigned int)fVar13;
        uVar1 = particleEmitterRaw.field_36;
        field_56 = uVar1;
        float fVar9 = (float)particleEmitterRaw.field_40;
        float local_3c = fVar9;
        if ((particleEmitterRaw.field_40 != 0) && (local_3c = fVar9 * 3.90625e-05, uVar1 != 1)) {
            local_3c = fVar9 * 1.5258789e-07;
        }
        auto pfVar4 = std::max<float>(0.0, local_3c);
        fVar9 = local_34;
        field_60 = *pfVar4;
        uVar1 = particleEmitterRaw.field_52;
        int iVar7 = uVar1 * 4;
        int local_4c = particleEmitterRaw.field_56 * 4;
        if (particleEmitterRaw.field_60 == 4294967295) {
            iVar8 = -1;
        } else {
            iVar8 = particleEmitterRaw.field_60 * 4;
            if ((local_4c == iVar7) && (iVar7 == iVar8)) {
                iVar8 = -1;
            }
        }
        float fVar11 = -1.0;
        if (iVar8 != -1) {
            fVar11 = (float)(int)particleEmitterRaw.field_64 * local_34;
        }
        field_64 = (float)iVar7;
        field_68 = (float)local_4c;
        float fVar10 = 1.1754944e-38;
        if (iVar8 != -1) {
            fVar10 = (float)iVar8;
        }
        field_72 = fVar10;
        field_76 = ~-(unsigned int)(fVar11 != -1.0) & 8388608 | -(unsigned int)(fVar11 != -1.0) & (unsigned int)fVar11;
        unsigned int uVar3 = particleEmitterRaw.field_68;
        local_34 = (float)(uVar3 << 8 | uVar3 >> 24);
        unsigned int uVar6 = particleEmitterRaw.field_72;
        float local_38 = (float)(uVar6 << 8 | uVar6 >> 24);
        if (((char)(uVar6 >> 24) == '\0' && (char)(uVar3 >> 24) == '\0') ||
            (uVar6 >> 24 == 0 && particleEmitterRaw.field_88 == 0)) {
            local_34 = (float)((unsigned int)local_34 | 255);
            local_38 = (float)((unsigned int)local_38 | 255);
        }
        unsigned int uVar2 = particleEmitterRaw.field_80;
        if (uVar2 == 4294967295) {
            local_48 = 0.0;
        } else {
            local_48 = 0.0;
            if (uVar3 != uVar2 || uVar6 != uVar3) {
                local_48 = (float)(uVar2 << 8 | uVar2 >> 24);
            }
        }
        field_80 = local_34;
        field_84 = (unsigned int)local_38;
        field_88 = particleEmitterRaw.field_76;
        field_92 = (unsigned int)local_48;
        float fVar14 = -1.0;
        fVar10 = -1.0;
        if (uVar2 != 4294967295) {
            fVar14 = (float)(int)particleEmitterRaw.field_84 * fVar9;
            fVar10 = (float)(int)particleEmitterRaw.field_88 * fVar9;
        }
        field_96 = ~-(unsigned int)(fVar14 != -1.0) & 8388608 | -(unsigned int)(fVar14 != -1.0) & (unsigned int)fVar14;
        field_100 = ~-(unsigned int)(fVar10 != -1.0) & 8388608 | -(unsigned int)(fVar10 != -1.0) & (unsigned int)fVar10;
        field_104 = particleEmitterRaw.field_156;
        field_108 = particleEmitterRaw.field_136;
        field_109 = particleEmitterRaw.field_152;
        field_110 = particleEmitterRaw.field_155;
        field_112 = particleEmitterRaw.field_137;
        field_116 = particleEmitterRaw.field_160 * 50.0;
        field_120 = particleEmitterRaw.field_164 * 50.0;
        field_124 = particleEmitterRaw.field_140;
        field_128 = particleEmitterRaw.field_144;
        field_132 = (float)(int)particleEmitterRaw.field_148;
        long lVar5 = particleEmitterRaw.field_168.end();
        if (lVar5 != 0) {
            field_232 = particleEmitterRaw.field_168;
        }
        lVar5 = particleEmitterRaw.field_192.end();
        if (lVar5 != 0) {
            field_256 = particleEmitterRaw.field_192;
        }
        lVar5 = particleEmitterRaw.field_216.end();
        if (lVar5 != 0) {
            field_280 = particleEmitterRaw.field_216;
        }
        field_148 = (unsigned int)local_34 >> 24;
        field_152 = (unsigned int)local_38 >> 24;
        field_156 = ((unsigned int)local_38 >> 24) - ((unsigned int)local_34 >> 24);
        uVar3 = (unsigned int)local_34 >> 16 & 255;
        field_160 = uVar3;
        uVar6 = (unsigned int)local_38 >> 16 & 255;
        field_164 = uVar6;
        field_168 = uVar6 - uVar3;
        uVar3 = (unsigned int)local_34 >> 8 & 255;
        field_172 = uVar3;
        uVar6 = (unsigned int)local_38 >> 8 & 255;
        field_176 = uVar6;
        field_180 = uVar6 - uVar3;
        field_184 = (unsigned int)local_34 & 255;
        field_188 = (unsigned int)local_38 & 255;
        field_192 = ((unsigned int)local_38 & 255) - ((unsigned int)local_34 & 255);
        if (field_88 == '\0') {
            local_40 = iVar8;
            particleEmitterRaw.CorrectMinMaxValues<int>(field_148, field_152);
            iVar8 = local_40;
            particleEmitterRaw.CorrectMinMaxValues<int>(field_160, field_164);
            particleEmitterRaw.CorrectMinMaxValues<int>(field_172, field_176);
            particleEmitterRaw.CorrectMinMaxValues<int>(field_184, field_188);
        }
        if (particleEmitterRaw.field_80 != -1) {
            if ((local_48 == local_34) && (local_48 == local_38)) {
                field_92 = 0;
            } else {
                if (fVar14 != -1.0) {
                    fVar14 = 1.0 / fVar14;
                    field_208 = ((float)(int)field_156 * -0.5 +
                                 ((float)((unsigned int)local_48 >> 24) - (float)(int)field_148)) *
                                fVar14;
                    field_212 = ((float)(int)field_168 * -0.5 +
                                 ((float)((unsigned int)local_48 >> 16 & 255) - (float)(int)field_160)) *
                                fVar14;
                    field_216 = ((float)(int)field_180 * -0.5 +
                                 ((float)((unsigned int)local_48 >> 8 & 255) - (float)(int)field_172)) *
                                fVar14;
                }
                if (fVar10 != -1.0) {
                    fVar10 = ((float)(int)field_192 * -0.5 +
                              ((float)((unsigned int)local_48 & 255) - (float)(int)field_184)) /
                             fVar10;
                    uVar3 = -(unsigned int)(fVar10 == 0.0);
                    field_220 = uVar3 & 1132396544 | ~uVar3 & (unsigned int)fVar10;
                }
            }
        }
        if (fVar12 == -1.0) {
            fVar13 = 1.1754944e-38;
        } else {
            fVar13 = (((local_50 - local_44) * -0.5 - local_44) + fVar12) / fVar13;
        }
        field_224 = fVar13;
        if (iVar8 == -1) {
            fVar11 = 0.0;
        } else {
            fVar11 = (float)(iVar8 - ((int)(local_4c + uVar1 * -4) / 2 + iVar7)) / fVar11;
        }
        field_228 = fVar11;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007cc360
    char const* ToText<16, true>(eastl::fixed_string<char, 16>& str, int arg2, unsigned int arg3) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, (long)arg2, arg3);
        if (32 < 16) {
            _memcpy((void*)str[0], pvVar1, (unsigned long)(32 + 1));
            str.force_size((unsigned long)32);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
