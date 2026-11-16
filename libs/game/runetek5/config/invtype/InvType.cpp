// libs/game/runetek5/config/invtype/InvType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "InvType.h"

namespace jag::game {
    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint InvType::GetSize() const;

    // 0x100524fe0, 208 bytes, placed by class name and debug map
    // InvType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* InvType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        uint* puVar3;
        undefined8 uVar4;
        int iVar5;
        uint local_34;

        if (param_2 == 4) {
            bVar1 = param_1->g1();
            field_60 = (uint)bVar1;
            if (bVar1 != 0) {
                iVar5 = 0;
                do {
                    uVar2 = param_1->g2();
                    local_34 = (uint)uVar2;
                    uVar2 = param_1->g2();
                    puVar3 = (uint*)
                        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                        false>::operator[]((hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                                     eastl::allocator, false>*)&field_64,
                                                           (int*)&local_34);
                    *puVar3 = (uint)uVar2;
                    iVar5 = iVar5 + 1;
                } while (iVar5 < (int)field_60);
            }
        } else if (param_2 == 2) {
            uVar2 = param_1->g2();
            m_size = (uint)uVar2;
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/invtype/InvType.cpp",
                                27, "Error unrecognised .inv config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x1005250b0, 16 bytes, placed by class name and debug map
    // InvType::PostDecode()
    void InvType::PostDecode() {}

} // namespace jag::game
