// libs/oldscape/rs2lib/configdecoder/npc/NPCHeadIconCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "NPCHeadIconCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    NPCHeadIconCustomisation::GetGraphics() const;

    // 0x10023b890, 368 bytes, base-object constructor, placed by class name and debug map
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr<NpcType> const&)
    void NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr* param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        bool bVar2;
        undefined4* puVar3;
        Terrain* this_01;
        vector<unsigned int, eastl::allocator>* this_02;
        Model* this_03;
        vector<unsigned int, eastl::allocator>* this_04;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        uint uVar7;

        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)this);
        this_00 = &m_indices;
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::fixed_vector((ulong)this_00);
        uVar6 = 0;
        do {
            puVar3 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                    uVar6);
            *puVar3 = 4294967295;
            puVar3 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this_00,
                    uVar6);
            *puVar3 = 4294967295;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
        this_01 = (Terrain*)shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)param_1);
        this_02 = (vector<unsigned int, eastl::allocator>*)this_01->GetWaterHeights();
        this_03 = (Model*)shared_ptr<NpcType>::operator->((shared_ptr<NpcType>*)param_1);
        this_04 = (vector<unsigned int, eastl::allocator>*)this_03->GetBatchList();
        lVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
        if (lVar4 != 0) {
            uVar6 = 0;
            uVar5 = 1;
            do {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_02,
                        uVar6);
                uVar1 = *puVar3;
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        uVar6);
                *puVar3 = uVar1;
                uVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_02);
                bVar2 = uVar5 < uVar6;
                uVar6 = uVar5;
                uVar5 = (ulong)((int)uVar5 + 1);
            } while (bVar2);
        }
        lVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_04);
        if (lVar4 != 0) {
            uVar7 = 1;
            uVar6 = 0;
            do {
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_04,
                        uVar6);
                uVar1 = *puVar3;
                puVar3 = (undefined4*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar6);
                *puVar3 = uVar1;
                uVar6 = (ulong)uVar7;
                uVar5 = eastl::vector<unsigned int, eastl::allocator>::size(this_04);
                uVar7 = uVar7 + 1;
            } while (uVar6 < uVar5);
        }
    }

    // 0x10023ba00, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCHeadIconCustomisation::NPCHeadIconCustomisation(shared_ptr<NpcType> const&): jumps straight to the base-object constructor

    // 0x10023ba10, 64 bytes, placed by class name and debug map
    // NPCHeadIconCustomisation::SetSlot(int, int, int)
    void NPCHeadIconCustomisation::SetSlot(int param_1, int param_2, int param_3) {
        int* piVar1;

        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                (long)param_1);
        *piVar1 = param_2;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&m_indices,
                (long)param_1);
        *piVar1 = param_3;
    }

    // 0x10023ba50, 48 bytes, placed by class name and debug map
    // NPCHeadIconCustomisation::SetSlots(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&, eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&)
    void NPCHeadIconCustomisation::SetSlots(fixed_vector* param_1, fixed_vector* param_2) {
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 8ul, true, eastl::allocator>*)this, param_1);
        eastl::fixed_vector<int, 8ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 8ul, true, eastl::allocator>*)&m_indices, param_2);
    }

} // namespace jag::oldscape::configdecoder
