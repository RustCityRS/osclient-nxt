// libs/game/runetek5/config/defaults/WearposDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "WearposDefaults.h"

namespace jag::game {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    WearposDefaults::GetWearposType() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    WearposDefaults::GetReplaceHeldLeftResetWearPos() const;

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    WearposDefaults::GetReplaceHeldRightResetWearPos() const;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    uint WearposDefaults::GetReplaceHeldRightWearPos() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint WearposDefaults::GetReplaceHeldLeftWearPos() const;

    // 0x10054ed70, 832 bytes, base-object constructor, placed by class name
    // WearposDefaults::WearposDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void WearposDefaults::WearposDefaults(PacketT* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1 uVar1;
        byte bVar2;
        uint uVar3;
        uint* puVar4;
        undefined8 uVar5;
        ulong uVar6;
        long lVar7;
        int* piVar8;
        ulong uVar9;
        uint uVar10;

        new (this) Array<WearposType, eastl::allocator>();
        this_00 = &field_24;
        new (this_00) Array<unsigned int, eastl::allocator>();
        field_48 = 0;
        field_52 = 0;
        m_replaceHeldLeftWearPos = 4294967295;
        m_replaceHeldRightWearPos = 4294967295;
        this_01 = &field_64;
        new (this_01) Array<unsigned int, eastl::allocator>();
        this_02 = &field_88;
        new (this_02) Array<unsigned int, eastl::allocator>();
        do {
            uVar1 = param_1->g1();
            switch (uVar1) {
            case 0:
                return;
            case 1:
                bVar2 = param_1->g1();
                set_max_size((ulong)bVar2, 0);
                field_48 = 0;
                field_52 = 0;
                lVar7 = end();
                if (lVar7 != 0) {
                    uVar10 = 1;
                    uVar6 = 0;
                    do {
                        uVar3 = param_1->g1();
                        puVar4 = (uint*)Array<WearposType, eastl::allocator>::operator[](
                            (Array<WearposType, eastl::allocator>*)this, uVar6);
                        *puVar4 = uVar3 & 255;
                        piVar8 = (int*)Array<WearposType, eastl::allocator>::operator[](
                            (Array<WearposType, eastl::allocator>*)this, uVar6);
                        if (*piVar8 == 0) {
                            field_48 = field_48 + 1;
                        } else {
                            piVar8 = (int*)Array<WearposType, eastl::allocator>::operator[](
                                (Array<WearposType, eastl::allocator>*)this, uVar6);
                            if (*piVar8 == 2) {
                                field_52 = field_52 + 1;
                            }
                        }
                        uVar6 = (ulong)uVar10;
                        uVar9 = end();
                        uVar10 = uVar10 + 1;
                    } while (uVar6 < uVar9);
                }
                break;
            default:
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/defaults/WearposDefaults.cpp",
                                    71, "WearposDefaults: Error unrecognised .defaults config code: %u", uVar1);
                break;
            case 3:
                bVar2 = param_1->g1();
                m_replaceHeldLeftWearPos = (uint)bVar2;
                break;
            case 4:
                bVar2 = param_1->g1();
                m_replaceHeldRightWearPos = (uint)bVar2;
                break;
            case 5:
                bVar2 = param_1->g1();
                this_01->set_max_size((ulong)bVar2, 0);
                lVar7 = this_01->end();
                if (lVar7 != 0) {
                    uVar10 = 1;
                    uVar6 = 0;
                    do {
                        uVar3 = param_1->g1();
                        puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)this_01, uVar6);
                        *puVar4 = uVar3 & 255;
                        uVar6 = (ulong)uVar10;
                        uVar9 = this_01->end();
                        uVar10 = uVar10 + 1;
                    } while (uVar6 < uVar9);
                }
                break;
            case 6:
                bVar2 = param_1->g1();
                this_02->set_max_size((ulong)bVar2, 0);
                lVar7 = this_02->end();
                if (lVar7 != 0) {
                    uVar10 = 1;
                    uVar6 = 0;
                    do {
                        uVar3 = param_1->g1();
                        puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)this_02, uVar6);
                        *puVar4 = uVar3 & 255;
                        uVar6 = (ulong)uVar10;
                        uVar9 = this_02->end();
                        uVar10 = uVar10 + 1;
                    } while (uVar6 < uVar9);
                }
                break;
            case 7:
                uVar6 = end();
                this_00->set_max_size(uVar6, 0);
                lVar7 = end();
                if (lVar7 != 0) {
                    uVar10 = 1;
                    uVar6 = 0;
                    do {
                        uVar3 = param_1->g1();
                        piVar8 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)this_00, uVar6);
                        *piVar8 = (uVar3 & 255) - 1;
                        uVar6 = (ulong)uVar10;
                        uVar9 = end();
                        uVar10 = uVar10 + 1;
                    } while (uVar6 < uVar9);
                }
            }
        } while (true);
    }

    // 0x10054f280, 16 bytes, complete-object constructor, placed by class name
    // WearposDefaults::WearposDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

} // namespace jag::game
