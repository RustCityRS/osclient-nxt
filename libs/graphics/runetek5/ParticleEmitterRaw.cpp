// libs/graphics/runetek5/ParticleEmitterRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEmitterRaw.h"

namespace jag::graphics {
    // 0x10097d1c0
    void ParticleEmitterRaw::Decode(int arg1, PacketT<Array<unsigned char>>& arg2) {
        uint8_t bVar2;
        char cVar3;
        unsigned short uVar4;
        short sVar5;
        int iVar6;
        uint32_t uVar7;
        unsigned int* puVar8;
        unsigned long uVar9;
        float fVar10;

        field_0 = arg1;
        bool bVar1 = true;
        do {
            bVar2 = arg2.g1();
            switch (bVar2) {
            case 0:
                bVar1 = false;
                break;
            case 1:
                uVar4 = arg2.g2();
                field_8 = (float)uVar4 * 0.0030679617f;
                uVar4 = arg2.g2();
                field_12 = (float)uVar4 * 0.0030679617f;
                uVar4 = arg2.g2();
                field_16 = (float)uVar4 * 0.0030679617f;
                uVar4 = arg2.g2();
                field_20 = (float)uVar4 * 0.0030679617f;
                break;
            case 2:
                bVar2 = arg2.g1();
                field_24 = (unsigned int)bVar2;
                break;
            case 3:
                iVar6 = arg2.g4s();
                field_28 = iVar6;
                iVar6 = arg2.g4s();
                field_32 = iVar6;
                break;
            case 4:
                bVar2 = arg2.g1();
                field_36 = (unsigned int)bVar2;
                cVar3 = arg2.g1s();
                field_40 = (int)cVar3;
                break;
            case 5:
                uVar4 = arg2.g2();
                field_56 = (unsigned int)uVar4;
                field_52 = (unsigned int)uVar4;
                break;
            case 6:
                uVar7 = arg2.g4s();
                field_68 = uVar7;
                uVar7 = arg2.g4s();
                field_72 = uVar7;
                break;
            case 7:
                uVar4 = arg2.g2();
                field_92 = (unsigned int)uVar4;
                uVar4 = arg2.g2();
                field_96 = (unsigned int)uVar4;
                break;
            case 8:
                uVar4 = arg2.g2();
                field_100 = (unsigned int)uVar4;
                uVar4 = arg2.g2();
                field_104 = (unsigned int)uVar4;
                break;
            case 9:
                bVar2 = arg2.g1();
                field_216.set_max_size((unsigned long)bVar2, 0);
                if (bVar2 != 0) {
                    uVar9 = 0;
                    do {
                        uVar4 = arg2.g2();
                        puVar8 = &field_216[uVar9];
                        *puVar8 = (unsigned int)uVar4;
                        uVar9 = uVar9 + 1;
                    } while (bVar2 != uVar9);
                }
                break;
            case 10:
                bVar2 = arg2.g1();
                field_168.set_max_size((unsigned long)bVar2, 0);
                if (bVar2 != 0) {
                    uVar9 = 0;
                    do {
                        uVar4 = arg2.g2();
                        puVar8 = &field_168[uVar9];
                        *puVar8 = (unsigned int)uVar4;
                        uVar9 = uVar9 + 1;
                    } while (bVar2 != uVar9);
                }
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "ParticleEmitterRaw.cpp",
                          146, "ParticleEmitterRaw: Unknown spec definition: %u", (unsigned int)bVar2);
                break;
            case 12:
                cVar3 = arg2.g1s();
                field_108 = (int)cVar3;
                break;
            case 13:
                cVar3 = arg2.g1s();
                field_112 = (int)cVar3;
                break;
            case 14:
                uVar4 = arg2.g2();
                field_116 = (unsigned int)uVar4;
                break;
            case 15:
                uVar4 = arg2.g2();
                field_156 = (unsigned int)uVar4;
                break;
            case 16:
                cVar3 = arg2.g1();
                field_120 = cVar3 == '\x01';
                uVar4 = arg2.g2();
                field_124 = (unsigned int)uVar4;
                uVar4 = arg2.g2();
                field_128 = (unsigned int)uVar4;
                cVar3 = arg2.g1();
                field_121 = cVar3 == '\x01';
                break;
            case 17:
                arg2.g2();
                break;
            case 18:
                uVar7 = arg2.g4s();
                field_80 = uVar7;
                break;
            case 19:
                bVar2 = arg2.g1();
                field_132 = (unsigned int)bVar2;
                break;
            case 20:
                bVar2 = arg2.g1();
                field_84 = (unsigned int)bVar2;
                break;
            case 21:
                bVar2 = arg2.g1();
                field_88 = (unsigned int)bVar2;
                break;
            case 22:
                uVar7 = arg2.g4s();
                field_44 = uVar7;
                break;
            case 23:
                bVar2 = arg2.g1();
                field_48 = (unsigned int)bVar2;
                break;
            case 24:
                field_76 = 0;
                break;
            case 25:
                bVar2 = arg2.g1();
                field_192.set_max_size((unsigned long)bVar2, 0);
                if (bVar2 != 0) {
                    uVar9 = 0;
                    do {
                        uVar4 = arg2.g2();
                        puVar8 = &field_192[uVar9];
                        *puVar8 = (unsigned int)uVar4;
                        uVar9 = uVar9 + 1;
                    } while (bVar2 != uVar9);
                }
                break;
            case 26:
                field_136 = 0;
                break;
            case 27:
                uVar4 = arg2.g2();
                field_60 = (unsigned int)uVar4;
                break;
            case 28:
                bVar2 = arg2.g1();
                field_64 = (unsigned int)bVar2;
                break;
            case 29:
                cVar3 = arg2.g1();
                sVar5 = arg2.g2s();
                fVar10 = (float)math::conversion::OldJagexAngleToRadians((int)sVar5);
                if (!cVar3) {
                    field_164 = fVar10;
                    field_160 = fVar10;
                } else {
                    field_160 = fVar10;
                    sVar5 = arg2.g2s();
                    fVar10 = (float)math::conversion::OldJagexAngleToRadians((int)sVar5);
                    field_164 = fVar10;
                }
                break;
            case 30:
                break;
            case 31:
                uVar4 = arg2.g2();
                field_52 = (unsigned int)uVar4;
                uVar4 = arg2.g2();
                field_56 = (unsigned int)uVar4;
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
                cVar3 = arg2.g1();
                sVar5 = arg2.g2s();
                fVar10 = (float)math::conversion::OldJagexAngleToRadians((int)sVar5);
                if (!cVar3) {
                    field_144 = fVar10;
                    field_140 = fVar10;
                } else {
                    field_140 = fVar10;
                    sVar5 = arg2.g2s();
                    fVar10 = (float)math::conversion::OldJagexAngleToRadians((int)sVar5);
                    field_144 = fVar10;
                    bVar2 = arg2.g1();
                    field_148 = (unsigned int)bVar2;
                }
                break;
            case 36:
                field_155 = 1;
                break;
            case 37:
                field_137 = 1;
            }
        } while (bVar1);
        PostDecode();
    }

    // 0x10097d830
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
