// libs/graphics/runetek5/ParticleEffectorRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEffectorRaw.h"

namespace jag::graphics {
    // 0x100009e70: ParticleEffectorRaw::~ParticleEffectorRaw() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10097d010
    void ParticleEffectorRaw::Decode(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;
        unsigned short uVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        do {
            bVar1 = arg1.g1();
            switch (bVar1) {
            case 0:
                return;
            case 1:
                uVar2 = arg1.g2();
                field_8 = (float)uVar2 * 0.0030694604f;
                break;
            case 2:
                bVar1 = arg1.g1();
                field_12 = (unsigned int)bVar1;
                break;
            case 3:
                iVar3 = arg1.g4s();
                iVar4 = arg1.g4s();
                iVar5 = arg1.g4s();
                field_16 = (float)iVar3 * 0.0015894572f;
                field_20 = (float)iVar4 * -0.0015894572;
                field_24 = (float)iVar5 * 0.0015894572f;
                break;
            case 4:
                bVar1 = arg1.g1();
                field_28 = (unsigned int)bVar1;
                field_32 = arg1.g4s();
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                          "ParticleEffectorRaw.cpp",
                          80, "ParticleEffectorRaw: Unrecognised config type: %u", (unsigned int)bVar1);
                break;
            case 6:
                bVar1 = arg1.g1();
                field_4 = (unsigned int)bVar1;
                break;
            case 8:
                field_36 = 1;
                break;
            case 9:
                field_40 = 1;
                break;
            case 10:
                field_44 = 1;
            }
        } while (true);
    }

} // namespace jag::graphics
