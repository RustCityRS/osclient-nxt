// libs/game/runetek5/config/seqtype/SeqGroupType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SeqGroupType.h"

namespace jag::game {
    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    SeqGroupType::GetTransformMask() const;

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    SeqGroupType::GetJointWeights() const;

    // 0x1004dd7c0, 512 bytes, placed by class name and debug map
    // SeqGroupType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* SeqGroupType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1* puVar1;
        byte bVar2;
        ushort uVar3;
        bool* pbVar4;
        bool* pbVar5;
        undefined1* puVar6;
        float* pfVar7;
        float* pfVar8;
        undefined8 uVar9;
        uint uVar10;
        uint uVar11;
        float local_48;
        float local_44;
        bool local_31;

        if (param_2 == 4) {
            bVar2 = param_1->g1();
            local_48 = (float)bVar2 * 0.003921569;
            puVar1 = &field_88;
            puVar1->set_max_size(256, 0);
            pfVar7 = (float*)puVar1->data();
            pfVar8 = (float*)puVar1->end();
            eastl::fill<float*, float>(pfVar7, pfVar8, &local_48);
            uVar3 = param_1->gSmart1or2();
            uVar11 = (uint)uVar3;
            if (uVar3 != 0) {
                uVar10 = uVar11;
                do {
                    uVar3 = param_1->gSmart1or2();
                    bVar2 = param_1->g1();
                    local_44 = (float)bVar2 * 0.003921569;
                    pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)puVar1,
                                                                                (ulong)uVar3);
                    *pfVar7 = local_44;
                    uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
            }
        } else {
            if (param_2 == 3) {
                param_1->g1();
                uVar3 = param_1->gSmart1or2();
                uVar11 = (uint)uVar3;
                if (uVar3 != 0) {
                    do {
                        param_1->gSmart1or2();
                        param_1->g1();
                        uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                }
                field_112 = uVar3 != 0;
                return DataStatus::READY;
            }
            if (param_2 != 2) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/seqtype/SeqGroupType.cpp",
                                    61, "Unrecognised .seqgroup config code: %u", param_2);
                return DataStatus::READY;
            }
            puVar1 = &field_64;
            puVar1->set_max_size(800, 0);
            pbVar4 = (bool*)puVar1->data();
            pbVar5 = (bool*)puVar1->end();
            local_31 = false;
            eastl::fill<bool*, bool>(pbVar4, pbVar5, &local_31);
            uVar3 = param_1->gSmart1or2();
            uVar11 = (uint)uVar3;
            if (uVar3 != 0) {
                uVar10 = uVar11;
                do {
                    uVar3 = param_1->gSmart1or2();
                    puVar6 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)puVar1, (ulong)uVar3);
                    *puVar6 = 1;
                    uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
            }
        }
        ((SeqGroupType*)this)->field_112 = uVar11 != 0;
        return DataStatus::READY;
    }

    // 0x1004dd9d0, 16 bytes, placed by class name and debug map
    // SeqGroupType::PostDecode()
    void SeqGroupType::PostDecode() {}

} // namespace jag::game
