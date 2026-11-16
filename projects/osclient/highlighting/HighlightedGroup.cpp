// projects/osclient/highlighting/HighlightedGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "HighlightedGroup.h"

namespace jag::oldscape::highlight {
    // 0x100013a60, 224 bytes, placed by class name and debug map
    // HighlightedGroup::ForEachNPC(std::function<void (ClientNpc const&)>, std::array<shared_ptr<ClientNpc>, 65536ul> const&)
    /* HighlightedGroup::ForEachNPC(std::function<void
   (ClientNpc const&)>, std::array<shared_ptr<ClientNpc>,
   65536ul> const&) */

    void HighlightedGroup::ForEachNPC(function<void(ClientNpc_const&)>* param_2,
                                      array<shared_ptr<ClientNpc>, 65536ul>* param_3) {
        ushort uVar1;
        long lVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        uint* puVar3;
        ulong uVar4;
        ushort* puVar6;
        ClientNpc* pCVar7;
        ulong uVar8;
        undefined1* this_01;

        this_01 = &field_8;
        lVar2 = this_01->size();
        if (lVar2 != 0) {
            uVar8 = 0;
            do {
                puVar6 = (ushort*)eastl::vector<NpcUID, eastl::allocator>::operator[](
                    (vector<NpcUID, eastl::allocator>*)this_01, uVar8);
                uVar1 = *puVar6;
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](param_3, (ulong)puVar6[1]);
                pCVar7 = (ClientNpc*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (pCVar7 == (ClientNpc*)0) {
                LAB_100013aa0:
                    lVar2 = this_01->HeapBeginPtr();
                    this_01->erase((NpcUID*)(lVar2 + uVar8 * 4));
                    uVar8 = uVar8 - 1;
                } else {
                    if (!(&pCVar7->field_1024)->operator_cast_to_bool())
                        goto LAB_100013aa0;
                    puVar3 = (uint*)shared_ptr<configdecoder::NpcType>::operator->(
                        (shared_ptr<configdecoder::NpcType>*)&pCVar7->field_1024);
                    if (*puVar3 != (uint)uVar1)
                        goto LAB_100013aa0;
                    std::function<void(ClientNpc_const&)>::operator()(param_2, pCVar7);
                }
                uVar8 = uVar8 + 1;
                uVar4 = this_01->size();
            } while (uVar8 < uVar4);
        }
    }

    // 0x1000156e0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetMapSquareIndex(int, int)
    int GetMapSquareIndex(int param_1, int param_2) {
        return param_2 * 100 + param_1;
    }

} // namespace jag::oldscape::highlight
