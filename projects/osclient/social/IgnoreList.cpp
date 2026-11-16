// projects/osclient/social/IgnoreList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "IgnoreList.h"

namespace jag::oldscape::social {
    // 0x1000253a0, 816 bytes, placed by class name and debug map
    // IgnoreList::ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int, ErrorCapture&)
    void IgnoreList::ProcessUpdate(PacketJ* param_1, int param_2, ErrorCapture* param_3) {
        IgnoreData* pIVar1;
        byte bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        ulong uVar6;
        long lVar7;
        FriendSystem* this_00;
        basic_string* pbVar8;
        IgnoreData* pIVar9;
        IgnoreData* pIVar10;
        bool bVar11;
        DisplayName local_f0;
        DisplayName local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_70[32];
        ulong local_50;
        ErrorCapture* local_48;
        PacketJ* local_40;
        byte local_31;

        local_50 = (ulong)param_2;
        local_48 = param_3;
        local_40 = param_1;
        do {
            uVar6 = param_1->size();
            if (local_50 <= uVar6) {
                return;
            }
            bVar2 = param_1->g1();
            bVar11 = SUB81(param_1, 0);
            if (bVar2 == 4) {
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_b0,
                                   bVar11);
                new (&local_f0) rs2lib::social::DisplayName(&local_b0, field_160);
                local_b0.~basic_string();
                cVar3 = local_f0.IsValid();
                if (cVar3 == '\0') {
                    iVar5 = 1;
                    local_48->Raise("Name is not valid");
                } else {
                    lVar7 = Client::Instance();
                    this_00 =
                        (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar7 + 52768));
                    pbVar8 = (basic_string*)local_f0.GetDisplayName();
                    iVar5 = 2;
                    this_00->DelIgnore(pbVar8, false);
                }
            } else {
                local_31 = bVar2;
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_b0,
                                   bVar11);
                new (&local_f0) rs2lib::social::DisplayName(&local_b0, field_160);
                local_b0.~basic_string();
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(local_70, bVar11);
                new (&local_b0) rs2lib::social::DisplayName(local_70, field_160);
                local_70->~basic_string();
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(local_70, SUB81(local_40, 0));
                cVar3 = local_f0.IsValid();
                if (cVar3 == '\0') {
                    iVar5 = 1;
                    local_48->Raise("Name is not valid");
                    param_1 = local_40;
                } else {
                    pIVar9 = (IgnoreData*)GetPlayerByCurrentDisplayName(&local_f0);
                    param_1 = local_40;
                    if ((local_31 & 1) == 0) {
                        if (pIVar9 != (IgnoreData*)0)
                            goto LAB_1000255a5;
                    LAB_1000255de:
                        iVar4 = GetLevel();
                        iVar5 = 2;
                        if (399 < iVar4)
                            goto LAB_100025630;
                        iVar5 = GetLevel();
                        pIVar9 = (IgnoreData*)AddPlayer(&local_f0, &local_b0);
                        if (pIVar9 != (IgnoreData*)0) {
                            pIVar9->field_168 = iVar5;
                        }
                    } else {
                        pIVar10 = (IgnoreData*)GetPlayerByCurrentDisplayName(&local_b0);
                        pIVar1 = pIVar9;
                        if (((pIVar10 != (IgnoreData*)0) && (pIVar10 != pIVar9)) &&
                            (pIVar1 = pIVar10, pIVar9 != (IgnoreData*)0)) {
                            RemovePlayer(pIVar10);
                            pIVar1 = pIVar9;
                        }
                        pIVar9 = pIVar1;
                        if (pIVar9 == (IgnoreData*)0)
                            goto LAB_1000255de;
                    LAB_1000255a5:
                        UpdatePlayerNames(pIVar9, &local_f0, &local_b0);
                    }
                    iVar5 = 0;
                    if (pIVar9 != (IgnoreData*)0) {
                        eastl::string::operator=((eastl::string*)&pIVar9->field_136, (basic_string*)local_70);
                    }
                }
            LAB_100025630:
                local_70->~basic_string();
                local_b0.~pair();
            }
            local_f0.~pair();
            if (iVar5 == 1) {
                return;
            }
        } while (true);
    }

} // namespace jag::oldscape::social
