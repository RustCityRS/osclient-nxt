// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DElements.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Cutscene2DElements.h"
#include "Cutscene2D.h"

namespace jag::game {
    // 0x1005227d0, 272 bytes, placed by debug map only (low confidence)
    // Cutscene2DImageElement::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2DImageElement::LoadFromPacket(PacketT* param_1, int param_2) {
        char cVar1;
        undefined2 uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      7, (char*)0);
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<32, true>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (fixed_string*)this, true);
        uVar2 = param_1->g2();
        field_72 = uVar2;
        uVar2 = param_1->g2();
        field_74 = uVar2;
        uVar3 = param_1->g4();
        field_76 = uVar3;
        cVar1 = (&field_80, param_1, 1)->LoadFromPacket();
        if ((((cVar1 == '\0') || (cVar1 = (&field_128, param_1, 1)->LoadFromPacket(), cVar1 == '\0')) ||
             (cVar1 = (&field_176, param_1, 1)->LoadFromPacket(), cVar1 == '\0')) ||
            (cVar1 = (&field_232, param_1, 1)->LoadFromPacket(), cVar1 == '\0')) {
            uVar4 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/iftype/cutscenes/Cutscene2DElements.cpp",
                                19, "Failed to decode 2D cutscene image element \'%s\'", uVar5);
            return 0;
        }
        return 1;
    }

    // 0x100522b60, 96 bytes, placed by __FILE__ string
    // Cutscene2DAudioElement::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2DAudioElement::LoadFromPacket(PacketT* param_1, int param_2) {
        undefined4 uVar1;

        if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      28, (char*)0);
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<32, true>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (fixed_string*)this, true);
        uVar1 = param_1->g4();
        field_72 = uVar1;
        return 1;
    }

    // 0x100522bc0, 112 bytes, placed by __FILE__ string
    // Cutscene2DSubtitleElement::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    undefined8 Cutscene2DSubtitleElement::LoadFromPacket(PacketT* param_1, int param_2) {
        undefined4 uVar1;
        undefined4 extraout_XMM0_Da;

        if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      38, (char*)0);
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<32, true>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (fixed_string*)this, true);
        uVar1 = param_1->g4s();
        field_80 = uVar1;
        uVar1 = param_1->gFloat();
        field_72 = uVar1;
        param_1->gFloat();
        field_76 = extraout_XMM0_Da;
        return 1;
    }

} // namespace jag::game
