// libs/oldscape/rs2lib/configdecoder/npc/NPCHeadIconCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "NPCHeadIconCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100009ca0: NPCHeadIconCustomisation::GetGraphics() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10023b890
    NPCHeadIconCustomisation::NPCHeadIconCustomisation(const shared_ptr<NpcType>& npcType)
        : eastl::fixed_vector<int, 8ul>(8) {
        uint32_t uVar1;
        bool bVar2;
        uint32_t* puVar3;
        unsigned long uVar5;
        unsigned int uVar7;

        uint8_t* this_00 = m_indices;
        new (this_00) eastl::fixed_vector<int, 8ul>(8);
        unsigned long uVar6 = 0;
        do {
            puVar3 = (uint32_t*)(*this)[uVar6];
            *puVar3 = 4294967295;
            puVar3 = (uint32_t*)(*this_00)[uVar6];
            *puVar3 = 4294967295;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
        auto this_01 = npcType.operator->();
        auto this_02 = this_01->GetWaterHeights();
        auto this_03 = npcType.operator->();
        auto this_04 = this_03->GetBatchList();
        long lVar4 = this_02->size();
        if (lVar4 != 0) {
            uVar6 = 0;
            uVar5 = 1;
            do {
                puVar3 = (uint32_t*)(*this_02)[uVar6];
                uVar1 = *puVar3;
                puVar3 = (uint32_t*)(*this)[uVar6];
                *puVar3 = uVar1;
                uVar6 = this_02->size();
                bVar2 = uVar5 < uVar6;
                uVar6 = uVar5;
                uVar5 = (unsigned long)((int)uVar5 + 1);
            } while (bVar2);
        }
        lVar4 = this_04->size();
        if (lVar4 != 0) {
            uVar7 = 1;
            uVar6 = 0;
            do {
                puVar3 = (uint32_t*)(*this_04)[uVar6];
                uVar1 = *puVar3;
                puVar3 = (uint32_t*)(*this_00)[uVar6];
                *puVar3 = uVar1;
                uVar6 = (unsigned long)uVar7;
                uVar5 = this_04->size();
                uVar7 = uVar7 + 1;
            } while (uVar6 < uVar5);
        }
    }

    // 0x10023ba10
    void NPCHeadIconCustomisation::SetSlot(int arg1, int arg2, int arg3) {
        int* piVar1 = (int*)(*this)[(long)arg1];
        *piVar1 = arg2;
        piVar1 = (int*)(*m_indices)[(long)arg1];
        *piVar1 = arg3;
    }

    // 0x10023ba50
    void NPCHeadIconCustomisation::SetSlots(const eastl::fixed_vector<int, 8ul>& arg1,
                                            const eastl::fixed_vector<int, 8ul>& arg2) {
        *this = arg1;
        *m_indices = arg2;
    }

} // namespace jag::oldscape::configdecoder
