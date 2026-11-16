// libs/graphics/runetek7/particles/ParticleEmitterTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEmitterTemplate.h"

namespace jag::graphics {
    // 0x1007cb1e0, 272 bytes, placed by class name and debug map
    // ParticleEmitterTemplate::GetRandomRGBA() const
    uint ParticleEmitterTemplate::GetRandomRGBA() {
        uint uVar1;
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

    // 0x1007cb310, 144 bytes, placed by class name and debug map
    // ParticleEmitterTemplate::GetRandomRotationSpawn() const
    ulong ParticleEmitterTemplate::GetRandomRotationSpawn() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        ulong uVar5;

        fVar1 = field_124;
        uVar5 = (ulong)(uint)fVar1;
        fVar2 = field_128;
        if (fVar1 != fVar2) {
            fVar3 = field_132;
            if (fVar3 == 0.0) {
                uVar5 = math::FRandMT(fVar1, fVar2);
            } else {
                math::FRandMT(0.0, fVar3 + 1.0);
                fVar4 = (float)_floorf();
                uVar5 = (ulong)(uint)(fVar1 + ((fVar2 - fVar1) * fVar4) / fVar3);
            }
        }
        return uVar5;
    }

    // 0x1007cd980, 1920 bytes, placed by class name
    // ParticleEmitterTemplate::Initialise(int, ParticleEmitterRaw const&)
    void ParticleEmitterTemplate::Initialise(int param_1, ParticleEmitterRaw* param_2) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        float* pfVar4;
        long lVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float local_54;
        float local_50;
        int local_4c;
        float local_48;
        float local_44;
        int local_40;
        float local_3c;
        float local_38;
        float local_34;

        field_0 = param_1;
        field_4 = param_2->field_8;
        field_8 = param_2->field_12;
        field_12 = param_2->field_16;
        field_16 = param_2->field_20;
        field_20 = (float)(int)param_2->field_100 * 0.78125;
        field_24 = (float)(int)param_2->field_104 * 0.78125;
        field_28 = param_2->field_116;
        field_136 = param_2->field_112;
        field_140 = param_2->field_108;
        field_144 = param_2->field_154;
        field_32 = (float)(int)param_2->field_92 * 0.02;
        uVar1 = param_2->field_96;
        field_36 = (float)(int)uVar1 * 0.02;
        local_44 = (float)param_2->field_28 * 0.00019073486;
        local_50 = (float)param_2->field_32 * 0.00019073486;
        fVar12 = (float)(int)param_2->field_44;
        if (param_2->field_44 != -1) {
            fVar12 = fVar12 * 0.00019073486;
            fVar12 = (float)(~-(uint)(local_44 == local_50) & (uint)fVar12 |
                             (~-(uint)(local_44 == fVar12) & (uint)fVar12 | -(uint)(local_44 == fVar12) & 3212836864) &
                                 -(uint)(local_44 == local_50));
        }
        local_34 = (float)(int)uVar1 * 0.0002;
        if (fVar12 == -1.0) {
            fVar13 = 0.0;
        } else {
            fVar13 = (float)(int)param_2->field_48 * local_34;
        }
        field_40 = local_44;
        field_44 = local_50;
        field_48 = ~-(uint)(fVar12 != -1.0) & 8388608 | -(uint)(fVar12 != -1.0) & (uint)fVar12;
        field_52 = ~-(uint)(fVar13 != 0.0) & 8388608 | -(uint)(fVar13 != 0.0) & (uint)fVar13;
        uVar1 = param_2->field_36;
        field_56 = uVar1;
        fVar9 = (float)param_2->field_40;
        local_3c = fVar9;
        if ((param_2->field_40 != 0) && (local_3c = fVar9 * 3.90625e-05, uVar1 != 1)) {
            local_3c = fVar9 * 1.5258789e-07;
        }
        local_54 = 0.0;
        pfVar4 = std::max<float>(&local_54, &local_3c);
        fVar9 = local_34;
        field_60 = *pfVar4;
        uVar1 = param_2->field_52;
        iVar7 = uVar1 * 4;
        local_4c = param_2->field_56 * 4;
        if (param_2->field_60 == 4294967295) {
            iVar8 = -1;
        } else {
            iVar8 = param_2->field_60 * 4;
            if ((local_4c == iVar7) && (iVar7 == iVar8)) {
                iVar8 = -1;
            }
        }
        fVar11 = -1.0;
        if (iVar8 != -1) {
            fVar11 = (float)(int)param_2->field_64 * local_34;
        }
        field_64 = (float)iVar7;
        field_68 = (float)local_4c;
        fVar10 = 1.1754944e-38;
        if (iVar8 != -1) {
            fVar10 = (float)iVar8;
        }
        field_72 = fVar10;
        field_76 = ~-(uint)(fVar11 != -1.0) & 8388608 | -(uint)(fVar11 != -1.0) & (uint)fVar11;
        uVar3 = param_2->field_68;
        local_34 = (float)(uVar3 << 8 | uVar3 >> 24);
        uVar6 = param_2->field_72;
        local_38 = (float)(uVar6 << 8 | uVar6 >> 24);
        if (((char)(uVar6 >> 24) == '\0' && (char)(uVar3 >> 24) == '\0') ||
            (uVar6 >> 24 == 0 && param_2->field_88 == 0)) {
            local_34 = (float)((uint)local_34 | 255);
            local_38 = (float)((uint)local_38 | 255);
        }
        uVar2 = param_2->field_80;
        if (uVar2 == 4294967295) {
            local_48 = 0.0;
        } else {
            local_48 = 0.0;
            if (uVar3 != uVar2 || uVar6 != uVar3) {
                local_48 = (float)(uVar2 << 8 | uVar2 >> 24);
            }
        }
        field_80 = local_34;
        field_84 = (uint)local_38;
        field_88 = param_2->field_76;
        field_92 = (uint)local_48;
        fVar14 = -1.0;
        fVar10 = -1.0;
        if (uVar2 != 4294967295) {
            fVar14 = (float)(int)param_2->field_84 * fVar9;
            fVar10 = (float)(int)param_2->field_88 * fVar9;
        }
        field_96 = ~-(uint)(fVar14 != -1.0) & 8388608 | -(uint)(fVar14 != -1.0) & (uint)fVar14;
        field_100 = ~-(uint)(fVar10 != -1.0) & 8388608 | -(uint)(fVar10 != -1.0) & (uint)fVar10;
        field_104 = param_2->field_156;
        field_108 = param_2->field_136;
        field_109 = param_2->field_152;
        field_110 = param_2->field_155;
        field_112 = param_2->field_137;
        field_116 = param_2->field_160 * 50.0;
        field_120 = param_2->field_164 * 50.0;
        field_124 = param_2->field_140;
        field_128 = param_2->field_144;
        field_132 = (float)(int)param_2->field_148;
        lVar5 = (&param_2->field_168)->end();
        if (lVar5 != 0) {
            Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_232,
                                                             (Array*)&param_2->field_168);
        }
        lVar5 = (&param_2->field_192)->end();
        if (lVar5 != 0) {
            Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_256,
                                                             (Array*)&param_2->field_192);
        }
        lVar5 = (&param_2->field_216)->end();
        if (lVar5 != 0) {
            Array<unsigned int, eastl::allocator>::operator=((Array<unsigned int, eastl::allocator>*)&field_280,
                                                             (Array*)&param_2->field_216);
        }
        field_148 = (uint)local_34 >> 24;
        field_152 = (uint)local_38 >> 24;
        field_156 = ((uint)local_38 >> 24) - ((uint)local_34 >> 24);
        uVar3 = (uint)local_34 >> 16 & 255;
        field_160 = uVar3;
        uVar6 = (uint)local_38 >> 16 & 255;
        field_164 = uVar6;
        field_168 = uVar6 - uVar3;
        uVar3 = (uint)local_34 >> 8 & 255;
        field_172 = uVar3;
        uVar6 = (uint)local_38 >> 8 & 255;
        field_176 = uVar6;
        field_180 = uVar6 - uVar3;
        field_184 = (uint)local_34 & 255;
        field_188 = (uint)local_38 & 255;
        field_192 = ((uint)local_38 & 255) - ((uint)local_34 & 255);
        if (field_88 == '\0') {
            local_40 = iVar8;
            ParticleEmitterRaw::CorrectMinMaxValues<int>(param_2, (int*)&field_148, (int*)&field_152);
            iVar8 = local_40;
            ParticleEmitterRaw::CorrectMinMaxValues<int>(param_2, (int*)&field_160, (int*)&field_164);
            ParticleEmitterRaw::CorrectMinMaxValues<int>(param_2, (int*)&field_172, (int*)&field_176);
            ParticleEmitterRaw::CorrectMinMaxValues<int>(param_2, (int*)&field_184, (int*)&field_188);
        }
        if (param_2->field_80 != -1) {
            if ((local_48 == local_34) && (local_48 == local_38)) {
                field_92 = 0;
            } else {
                if (fVar14 != -1.0) {
                    fVar14 = 1.0 / fVar14;
                    field_208 =
                        ((float)(int)field_156 * -0.5 + ((float)((uint)local_48 >> 24) - (float)(int)field_148)) *
                        fVar14;
                    field_212 =
                        ((float)(int)field_168 * -0.5 + ((float)((uint)local_48 >> 16 & 255) - (float)(int)field_160)) *
                        fVar14;
                    field_216 =
                        ((float)(int)field_180 * -0.5 + ((float)((uint)local_48 >> 8 & 255) - (float)(int)field_172)) *
                        fVar14;
                }
                if (fVar10 != -1.0) {
                    fVar10 = ((float)(int)field_192 * -0.5 + ((float)((uint)local_48 & 255) - (float)(int)field_184)) /
                             fVar10;
                    uVar3 = -(uint)(fVar10 == 0.0);
                    field_220 = uVar3 & 1132396544 | ~uVar3 & (uint)fVar10;
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
    // 0x1007cc360, 144 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<16, true>(eastl::fixed_string<char, 16, true, eastl::allocator>&, int, unsigned int)
    char* ToText<16, true>(fixed_string* param_1, int param_2, uint param_3) {
        void* pvVar1;
        void* pvVar2;
        char* pcVar3;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, (long)param_2, param_3);
        if (local_4c < 16) {
            pvVar2 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            _memcpy(pvVar2, pvVar1, (ulong)(local_4c + 1));
            param_1->force_size((ulong)local_4c);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

} // namespace jag
