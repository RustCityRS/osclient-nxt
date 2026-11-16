// libs/game/runetek5/config/flutype/FloorUnderlayType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "FloorUnderlayType.h"

namespace jag::game {
    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    FloorUnderlayType::GetMaterialID() const;

    // 0x100543cc0, 224 bytes, placed by class name and debug map
    // FloorUnderlayType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* FloorUnderlayType::DecodeType(PacketT* param_1, uint param_2) {
        ushort uVar1;
        undefined8 uVar2;
        uint uVar3;

        switch (param_2) {
        case 1:
            param_1->g3();
            field_56 = 0;
            break;
        case 2:
            uVar1 = param_1->g2();
            uVar3 = 4294967295;
            if (uVar1 != 65535) {
                uVar3 = (uint)uVar1;
            }
            field_60 = uVar3;
            break;
        case 3:
            uVar1 = param_1->g2();
            field_64 = (float)uVar1 * 0.0078125;
            break;
        case 4:
            field_68 = 0;
            break;
        case 5:
            break;
        default:
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/flutype/FloorUnderlayType.cpp",
                                44, "Unrecognised .flu config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x100543da0, 16 bytes, placed by class name and debug map
    // FloorUnderlayType::PostDecode()
    void FloorUnderlayType::PostDecode() {}

} // namespace jag::game
