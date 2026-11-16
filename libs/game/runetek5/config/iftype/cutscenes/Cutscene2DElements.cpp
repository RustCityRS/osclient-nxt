// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DElements.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Cutscene2DElements.h"
#include "Cutscene2D.h"

namespace jag::game {
    // 0x1005227d0
    uint64_t Cutscene2DImageElement::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        Logger* this_00;
        uint64_t uVar4;

        if (arg2 != 1) {
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      7, nullptr);
        }
        arg1.gStringNoConversion<32, true>(*this, true);
        uint16_t uVar2 = arg1.g2();
        field_72 = uVar2;
        uVar2 = arg1.g2();
        field_74 = uVar2;
        field_76 = arg1.g4();
        bool cVar1 = field_80.LoadFromPacket(arg1, 1);
        if ((((!cVar1) || (cVar1 = field_128.LoadFromPacket(arg1, 1), !cVar1)) ||
             (cVar1 = field_176.LoadFromPacket(arg1, 1), !cVar1)) ||
            (cVar1 = field_232.LoadFromPacket(arg1, 1), !cVar1)) {
            this_00 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "iftype/cutscenes/Cutscene2DElements.cpp",
                         19, "Failed to decode 2D cutscene image element \'%s\'", uVar4);
            return 0;
        }
        return 1;
    }

    // 0x100522b60
    uint64_t Cutscene2DAudioElement::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        if (arg2 != 1) {
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      28, nullptr);
        }
        arg1.gStringNoConversion<32, true>(*this, true);
        field_72 = arg1.g4();
        return 1;
    }

    // 0x100522bc0
    uint64_t Cutscene2DSubtitleElement::LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t extraout_XMM0_Da;

        if (arg2 != 1) {
            LogAssert("version == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DElements.cpp",
                      38, nullptr);
        }
        arg1.gStringNoConversion<32, true>(*this, true);
        uint32_t uVar1 = arg1.g4s();
        field_80 = uVar1;
        uVar1 = arg1.gFloat();
        field_72 = uVar1;
        arg1.gFloat();
        field_76 = extraout_XMM0_Da;
        return 1;
    }

} // namespace jag::game
