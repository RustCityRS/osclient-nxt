// projects/osclient/social/IgnoreList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "IgnoreList.h"

namespace jag::oldscape::social {
    // 0x1000253a0
    void IgnoreList::ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, int arg2,
                                   ErrorCapture& errorCapture) {
        IgnoreData* pIVar1;
        uint8_t bVar2;
        int iVar4;
        int iVar5;
        unsigned long uVar6;
        Client* pCVar7;
        FriendSystem* this_00;
        eastl::string* str;
        IgnoreData* ignoreData;
        IgnoreData* ignoreData_00;
        bool arg1;
        DisplayName local_f0;
        DisplayName local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_70[32];
        uint8_t local_31;

        unsigned long local_50 = (unsigned long)arg2;
        ErrorCapture* local_48 = errorCapture;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* local_40 = packetJ;
        do {
            uVar6 = packetJ.size();
            if (local_50 <= uVar6) {
                return;
            }
            bVar2 = packetJ.g1();
            arg1 = (uint8_t)packetJ;
            if (bVar2 == 4) {
                local_b0.gStringCP1252ToUTF8<eastl::string>(arg1);
                local_f0 = rs2lib::social::DisplayName(local_b0, field_160);
                if (!(local_f0.IsValid())) {
                    iVar5 = 1;
                    local_48->Raise("Name is not valid");
                } else {
                    pCVar7 = Client::Instance();
                    this_00 = (FriendSystem*)pCVar7->field_52768.operator->();
                    str = local_f0.GetDisplayName();
                    iVar5 = 2;
                    this_00->DelIgnore(*str, false);
                }
            } else {
                local_31 = bVar2;
                local_b0.gStringCP1252ToUTF8<eastl::string>(arg1);
                local_f0 = rs2lib::social::DisplayName(local_b0, field_160);
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(local_70, arg1);
                local_b0 = rs2lib::social::DisplayName(*local_70, field_160);
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(local_70, (uint8_t)local_40);
                if (!(local_f0.IsValid())) {
                    iVar5 = 1;
                    local_48->Raise("Name is not valid");
                    packetJ = local_40;
                } else {
                    ignoreData = (IgnoreData*)GetPlayerByCurrentDisplayName(local_f0);
                    packetJ = local_40;
                    if ((local_31 & 1) == 0) {
                        if (ignoreData != nullptr)
                            goto LAB_1000255a5;
                    LAB_1000255de:
                        iVar4 = GetLevel();
                        iVar5 = 2;
                        if (399 < iVar4)
                            goto LAB_100025630;
                        iVar5 = GetLevel();
                        ignoreData = (IgnoreData*)AddPlayer(local_f0, local_b0);
                        if (ignoreData != nullptr) {
                            ignoreData->field_168 = iVar5;
                        }
                    } else {
                        ignoreData_00 = (IgnoreData*)GetPlayerByCurrentDisplayName(local_b0);
                        pIVar1 = ignoreData;
                        if (((ignoreData_00 != nullptr) && (ignoreData_00 != ignoreData)) &&
                            (pIVar1 = ignoreData_00, ignoreData != nullptr)) {
                            RemovePlayer(ignoreData_00);
                            pIVar1 = ignoreData;
                        }
                        ignoreData = pIVar1;
                        if (ignoreData == nullptr)
                            goto LAB_1000255de;
                    LAB_1000255a5:
                        UpdatePlayerNames(ignoreData, local_f0, local_b0);
                    }
                    iVar5 = 0;
                    if (ignoreData != nullptr) {
                        ignoreData->field_136 = local_70;
                    }
                }
            LAB_100025630:
            }
            if (iVar5 == 1) {
                return;
            }
        } while (true);
    }

} // namespace jag::oldscape::social
