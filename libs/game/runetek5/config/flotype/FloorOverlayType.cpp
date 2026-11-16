// libs/game/runetek5/config/flotype/FloorOverlayType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "FloorOverlayType.h"

namespace jag::game {
    // 0x1000602b0: the linker folded this into oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const, which has identical code
    FloorOverlayType::HasSmoothEdges() const;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    uint FloorOverlayType::GetMaterialID() const;

    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    uint FloorOverlayType::GetPriority() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    FloorOverlayType::GetRGBA() const;

    // 0x10054fd10, 496 bytes, placed by class name and debug map
    // FloorOverlayType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* FloorOverlayType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        char cVar2;
        ushort uVar3;
        undefined4 uVar4;
        uint uVar5;
        undefined8 uVar6;

        switch (param_2) {
        case 1:
            uVar5 = param_1->g3();
            uVar4 = 0;
            if (uVar5 != 16711935) {
                uVar4 = ColourFudge((FloorOverlayType*)param_1, uVar5);
            }
            m_rGBA = uVar4;
            break;
        case 2:
            bVar1 = param_1->g1();
            m_materialID = (uint)bVar1;
            break;
        case 3:
            uVar3 = param_1->g2();
            uVar5 = 4294967295;
            if (uVar3 != 65535) {
                uVar5 = (uint)uVar3;
            }
            m_materialID = uVar5;
            break;
        default:
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/flotype/FloorOverlayType.cpp",
                                93, "Unrecognised .flo config code: %u", param_2);
            break;
        case 5:
        case 8:
            break;
        case 7:
            uVar5 = param_1->g3();
            uVar4 = 0;
            if (uVar5 != 16711935) {
                uVar4 = ColourFudge((FloorOverlayType*)param_1, uVar5);
            }
            field_68 = uVar4;
            break;
        case 9:
            uVar3 = param_1->g2();
            m_textureScale = (float)uVar3 * 0.0078125;
            break;
        case 10:
            field_77 = 0;
            break;
        case 11:
            bVar1 = param_1->g1();
            m_priority = (uint)bVar1;
            break;
        case 12:
            m_hasSmoothEdges = 1;
            break;
        case 13:
            uVar4 = param_1->g3();
            field_80 = uVar4;
            break;
        case 14:
            bVar1 = param_1->g1();
            field_84 = (uint)bVar1 << 2;
            break;
        case 16:
            bVar1 = param_1->g1();
            field_88 = (uint)bVar1;
            break;
        case 20:
            uVar3 = param_1->g2();
            field_92 = (uint)uVar3;
            break;
        case 21:
            cVar2 = param_1->g1();
            field_96 = cVar2 != '\0';
            break;
        case 22:
            uVar3 = param_1->g2();
            field_100 = (uint)uVar3;
        }
        return DataStatus::READY;
    }

    // 0x10054ff00, 64 bytes, placed by class name and debug map
    // FloorOverlayType::ColourFudge(unsigned int)
    uint FloorOverlayType::ColourFudge(uint param_1) {
        uint uVar1;
        int iVar2;
        uint uVar3;

        uVar1 = math::RunetekColour::RGBToHSL(param_1);
        uVar3 = (uVar1 & 127) * 38258 >> 16;
        iVar2 = math::RunetekColour::HSLToRGB((ushort)uVar1 & 65408 |
                                              (ushort)((((uVar1 & 127) * 74 - uVar3 & 65535) >> 1) + uVar3 >> 6));
        return iVar2 << 8 | 255;
    }

    // 0x10054ff40, 16 bytes, placed by class name and debug map
    // FloorOverlayType::PostDecode()
    void FloorOverlayType::PostDecode() {}

    // 0x10062b9c0: the linker folded this into FloorUnderlayType::GetTextureScale() const, which has identical code
    float FloorOverlayType::GetTextureScale() const;

} // namespace jag::game
