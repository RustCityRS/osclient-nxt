// libs/graphics/runetek5/ParticleEffectorRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEffectorRaw.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ParticleEffectorRaw::~ParticleEffectorRaw();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleEffectorRaw::~ParticleEffectorRaw();

    // 0x10097d010, 432 bytes, placed by class name and debug map
    // ParticleEffectorRaw::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ParticleEffectorRaw::Decode(PacketT* param_1) {
        undefined1 uVar1;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        undefined8 uVar8;

        do {
            uVar1 = param_1->g1();
            switch (uVar1) {
            case 0:
                return;
            case 1:
                uVar3 = param_1->g2();
                field_8 = (float)uVar3 * 0.0030694604;
                break;
            case 2:
                bVar2 = param_1->g1();
                field_12 = (uint)bVar2;
                break;
            case 3:
                iVar4 = param_1->g4s();
                iVar5 = param_1->g4s();
                iVar6 = param_1->g4s();
                field_16 = (float)iVar4 * 0.0015894572;
                field_20 = (float)iVar5 * -0.0015894572;
                field_24 = (float)iVar6 * 0.0015894572;
                break;
            case 4:
                bVar2 = param_1->g1();
                field_28 = (uint)bVar2;
                uVar7 = param_1->g4s();
                field_32 = uVar7;
                break;
            default:
                uVar8 = logger::default_logger();
                logger::Logger::Log(uVar8, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek5/ParticleEffectorRaw.cpp",
                                    80, "ParticleEffectorRaw: Unrecognised config type: %u", uVar1);
                break;
            case 6:
                bVar2 = param_1->g1();
                field_4 = (uint)bVar2;
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
