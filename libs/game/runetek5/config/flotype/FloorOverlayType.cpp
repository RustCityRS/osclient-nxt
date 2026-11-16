// libs/game/runetek5/config/flotype/FloorOverlayType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "FloorOverlayType.h"

namespace jag::game {
    // 0x1000602b0: FloorOverlayType::HasSmoothEdges() const has the same machine code as oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const

    // 0x100061e30: FloorOverlayType::GetMaterialID() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x10012dc00: FloorOverlayType::GetPriority() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x1001be5d0: FloorOverlayType::GetRGBA() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x10054fd10
    uint8_t* FloorOverlayType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar3;
        uint32_t uVar4;
        unsigned int uVar5;

        switch (arg2) {
        case 1:
            uVar5 = arg1.g3();
            uVar4 = 0;
            if (uVar5 != 16711935) {
                uVar4 = ColourFudge((FloorOverlayType*)arg1, uVar5);
            }
            m_rGBA = uVar4;
            break;
        case 2:
            bVar1 = arg1.g1();
            m_materialID = (unsigned int)bVar1;
            break;
        case 3:
            uVar3 = arg1.g2();
            uVar5 = 4294967295;
            if (uVar3 != 65535) {
                uVar5 = (unsigned int)uVar3;
            }
            m_materialID = uVar5;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "flotype/FloorOverlayType.cpp",
                      93, "Unrecognised .flo config code: %u", arg2);
            break;
        case 5:
        case 8:
            break;
        case 7:
            uVar5 = arg1.g3();
            uVar4 = 0;
            if (uVar5 != 16711935) {
                uVar4 = ColourFudge((FloorOverlayType*)arg1, uVar5);
            }
            field_68 = uVar4;
            break;
        case 9:
            uVar3 = arg1.g2();
            m_textureScale = (float)uVar3 * 0.0078125f;
            break;
        case 10:
            field_77 = 0;
            break;
        case 11:
            bVar1 = arg1.g1();
            m_priority = (unsigned int)bVar1;
            break;
        case 12:
            m_hasSmoothEdges = 1;
            break;
        case 13:
            uVar4 = arg1.g3();
            field_80 = uVar4;
            break;
        case 14:
            bVar1 = arg1.g1();
            field_84 = (unsigned int)bVar1 << 2;
            break;
        case 16:
            bVar1 = arg1.g1();
            field_88 = (unsigned int)bVar1;
            break;
        case 20:
            uVar3 = arg1.g2();
            field_92 = (unsigned int)uVar3;
            break;
        case 21:
            field_96 = arg1.g1() != '\0';
            break;
        case 22:
            uVar3 = arg1.g2();
            field_100 = (unsigned int)uVar3;
        }
        return DataStatus::READY;
    }

    // 0x10054ff00
    unsigned int FloorOverlayType::ColourFudge(unsigned int arg1) {
        unsigned int uVar1 = math::RunetekColour::RGBToHSL(arg1);
        unsigned int uVar3 = (uVar1 & 127) * 38258 >> 16;
        return math::RunetekColour::HSLToRGB((unsigned short)uVar1 & 65408 |
                                             (unsigned short)((((uVar1 & 127) * 74 - uVar3 & 65535) >> 1) + uVar3 >> 6))
                   << 8 |
               255;
    }

    // 0x10054ff40
    void FloorOverlayType::PostDecode() {}

    // 0x10062b9c0, the same machine code as FloorUnderlayType::GetTextureScale() const
    float FloorOverlayType::GetTextureScale() const {
        return m_textureScale;
    }

} // namespace jag::game
