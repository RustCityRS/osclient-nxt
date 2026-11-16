// libs/game/runetek5/config/flutype/FloorUnderlayType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "FloorUnderlayType.h"

namespace jag::game {
    // 0x100061e30: FloorUnderlayType::GetMaterialID() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x100543cc0
    uint8_t* FloorUnderlayType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        unsigned short uVar1;
        unsigned int uVar2;

        switch (arg2) {
        case 1:
            arg1.g3();
            field_56 = 0;
            break;
        case 2:
            uVar1 = arg1.g2();
            uVar2 = 4294967295;
            if (uVar1 != 65535) {
                uVar2 = (unsigned int)uVar1;
            }
            m_materialID = uVar2;
            break;
        case 3:
            uVar1 = arg1.g2();
            m_textureScale = (float)uVar1 * 0.0078125f;
            break;
        case 4:
            field_68 = 0;
            break;
        case 5:
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "flutype/FloorUnderlayType.cpp",
                      44, "Unrecognised .flu config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x100543da0
    void FloorUnderlayType::PostDecode() {}

} // namespace jag::game
