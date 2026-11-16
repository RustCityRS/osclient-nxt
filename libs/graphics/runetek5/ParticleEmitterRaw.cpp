// libs/graphics/runetek5/ParticleEmitterRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEmitterRaw.h"

namespace jag::graphics {
    // 0x10097d1c0, 1632 bytes, placed by class name and debug map
    // ParticleEmitterRaw::Decode(int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void ParticleEmitterRaw::Decode(int param_1, PacketT* param_2) {
        bool bVar1;
        undefined1 uVar2;
        char cVar3;
        byte bVar4;
        ushort uVar5;
        short sVar6;
        int iVar7;
        undefined4 uVar8;
        undefined8 uVar9;
        uint* puVar10;
        ulong uVar11;
        float fVar12;

        field_0 = param_1;
        bVar1 = true;
        do {
            uVar2 = param_2->g1();
            switch (uVar2) {
            case 0:
                bVar1 = false;
                break;
            case 1:
                uVar5 = param_2->g2();
                field_8 = (float)uVar5 * 0.0030679617;
                uVar5 = param_2->g2();
                field_12 = (float)uVar5 * 0.0030679617;
                uVar5 = param_2->g2();
                field_16 = (float)uVar5 * 0.0030679617;
                uVar5 = param_2->g2();
                field_20 = (float)uVar5 * 0.0030679617;
                break;
            case 2:
                bVar4 = param_2->g1();
                field_24 = (uint)bVar4;
                break;
            case 3:
                iVar7 = param_2->g4s();
                field_28 = iVar7;
                iVar7 = param_2->g4s();
                field_32 = iVar7;
                break;
            case 4:
                bVar4 = param_2->g1();
                field_36 = (uint)bVar4;
                cVar3 = param_2->g1s();
                field_40 = (int)cVar3;
                break;
            case 5:
                uVar5 = param_2->g2();
                field_56 = (uint)uVar5;
                field_52 = (uint)uVar5;
                break;
            case 6:
                uVar8 = param_2->g4s();
                field_68 = uVar8;
                uVar8 = param_2->g4s();
                field_72 = uVar8;
                break;
            case 7:
                uVar5 = param_2->g2();
                field_92 = (uint)uVar5;
                uVar5 = param_2->g2();
                field_96 = (uint)uVar5;
                break;
            case 8:
                uVar5 = param_2->g2();
                field_100 = (uint)uVar5;
                uVar5 = param_2->g2();
                field_104 = (uint)uVar5;
                break;
            case 9:
                bVar4 = param_2->g1();
                (&field_216, (ulong)bVar4, 0)->set_max_size();
                if (bVar4 != 0) {
                    uVar11 = 0;
                    do {
                        uVar5 = param_2->g2();
                        puVar10 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&field_216, uVar11);
                        *puVar10 = (uint)uVar5;
                        uVar11 = uVar11 + 1;
                    } while (bVar4 != uVar11);
                }
                break;
            case 10:
                bVar4 = param_2->g1();
                (&field_168, (ulong)bVar4, 0)->set_max_size();
                if (bVar4 != 0) {
                    uVar11 = 0;
                    do {
                        uVar5 = param_2->g2();
                        puVar10 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&field_168, uVar11);
                        *puVar10 = (uint)uVar5;
                        uVar11 = uVar11 + 1;
                    } while (bVar4 != uVar11);
                }
                break;
            default:
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek5/ParticleEmitterRaw.cpp",
                                    146, "ParticleEmitterRaw: Unknown spec definition: %u", uVar2);
                break;
            case 12:
                cVar3 = param_2->g1s();
                field_108 = (int)cVar3;
                break;
            case 13:
                cVar3 = param_2->g1s();
                field_112 = (int)cVar3;
                break;
            case 14:
                uVar5 = param_2->g2();
                field_116 = (uint)uVar5;
                break;
            case 15:
                uVar5 = param_2->g2();
                field_156 = (uint)uVar5;
                break;
            case 16:
                cVar3 = param_2->g1();
                field_120 = cVar3 == '\x01';
                uVar5 = param_2->g2();
                field_124 = (uint)uVar5;
                uVar5 = param_2->g2();
                field_128 = (uint)uVar5;
                cVar3 = param_2->g1();
                field_121 = cVar3 == '\x01';
                break;
            case 17:
                param_2->g2();
                break;
            case 18:
                uVar8 = param_2->g4s();
                field_80 = uVar8;
                break;
            case 19:
                bVar4 = param_2->g1();
                field_132 = (uint)bVar4;
                break;
            case 20:
                bVar4 = param_2->g1();
                field_84 = (uint)bVar4;
                break;
            case 21:
                bVar4 = param_2->g1();
                field_88 = (uint)bVar4;
                break;
            case 22:
                uVar8 = param_2->g4s();
                field_44 = uVar8;
                break;
            case 23:
                bVar4 = param_2->g1();
                field_48 = (uint)bVar4;
                break;
            case 24:
                field_76 = 0;
                break;
            case 25:
                bVar4 = param_2->g1();
                (&field_192, (ulong)bVar4, 0)->set_max_size();
                if (bVar4 != 0) {
                    uVar11 = 0;
                    do {
                        uVar5 = param_2->g2();
                        puVar10 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&field_192, uVar11);
                        *puVar10 = (uint)uVar5;
                        uVar11 = uVar11 + 1;
                    } while (bVar4 != uVar11);
                }
                break;
            case 26:
                field_136 = 0;
                break;
            case 27:
                uVar5 = param_2->g2();
                field_60 = (uint)uVar5;
                break;
            case 28:
                bVar4 = param_2->g1();
                field_64 = (uint)bVar4;
                break;
            case 29:
                cVar3 = param_2->g1();
                sVar6 = param_2->g2s();
                fVar12 = (float)math::conversion::OldJagexAngleToRadians((int)sVar6);
                if (cVar3 == '\0') {
                    field_164 = fVar12;
                    field_160 = fVar12;
                } else {
                    field_160 = fVar12;
                    sVar6 = param_2->g2s();
                    fVar12 = (float)math::conversion::OldJagexAngleToRadians((int)sVar6);
                    field_164 = fVar12;
                }
                break;
            case 30:
                break;
            case 31:
                uVar5 = param_2->g2();
                field_52 = (uint)uVar5;
                uVar5 = param_2->g2();
                field_56 = (uint)uVar5;
                break;
            case 32:
                field_152 = 0;
                break;
            case 33:
                field_153 = 1;
                break;
            case 34:
                field_154 = 0;
                break;
            case 35:
                cVar3 = param_2->g1();
                sVar6 = param_2->g2s();
                fVar12 = (float)math::conversion::OldJagexAngleToRadians((int)sVar6);
                if (cVar3 == '\0') {
                    field_144 = fVar12;
                    field_140 = fVar12;
                } else {
                    field_140 = fVar12;
                    sVar6 = param_2->g2s();
                    fVar12 = (float)math::conversion::OldJagexAngleToRadians((int)sVar6);
                    field_144 = fVar12;
                    bVar4 = param_2->g1();
                    field_148 = (uint)bVar4;
                }
                break;
            case 36:
                field_155 = 1;
                break;
            case 37:
                field_137 = 1;
            }
        } while (bVar1);
        PostDecode(this);
    }

    // 0x10097d830, 160 bytes, placed by class name and debug map
    // ParticleEmitterRaw::PostDecode()
    void ParticleEmitterRaw::PostDecode() {
        CorrectMinMaxValues<int>(this, (int*)&field_100, (int*)&field_104);
        CorrectMinMaxValues<int>(this, (int*)&field_92, (int*)&field_96);
        CorrectMinMaxValues<int>(this, &field_28, &field_32);
        CorrectMinMaxValues<int>(this, (int*)&field_52, (int*)&field_56);
        CorrectMinMaxValues<float>(this, &field_8, &field_12);
        CorrectMinMaxValues<float>(this, &field_16, &field_20);
        CorrectMinMaxValues<float>(this, &field_140, &field_144);
        CorrectMinMaxValues<float>(this, &field_160, &field_164);
    }

} // namespace jag::graphics
