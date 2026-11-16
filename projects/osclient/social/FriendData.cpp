// projects/osclient/social/FriendData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "FriendData.h"

namespace jag::oldscape::social {
    // 0x100024a70, 192 bytes, placed by class name and debug map
    // FriendData::CompareTo(FriendData const&) const
    int FriendData::CompareTo(FriendData* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        Client* this_00;
        FriendData* pFVar4;

        this_00 = (Client*)Client::Instance();
        iVar3 = this_00->GetWorldId();
        iVar1 = field_136;
        iVar2 = param_1->field_136;
        if ((iVar1 == iVar3) && (iVar2 != iVar3)) {
            return -1;
        }
        if ((iVar2 != iVar3) || (iVar1 == iVar3)) {
            if ((iVar1 != 0) && (iVar2 == 0)) {
                return -1;
            }
            if ((iVar2 == 0) || (iVar1 != 0)) {
                if ((field_184 != '\0') && (param_1->field_184 == '\0')) {
                    return -1;
                }
                if ((field_184 != '\0') || (param_1->field_184 == '\0')) {
                    if ((field_185 != '\0') && (param_1->field_185 == '\0')) {
                        return -1;
                    }
                    if ((field_185 == '\0') && (param_1->field_185 != '\0')) {
                        return 1;
                    }
                    pFVar4 = param_1;
                    if (iVar1 == 0) {
                        pFVar4 = this;
                        this = param_1;
                    }
                    return field_140 - pFVar4->field_140;
                }
            }
        }
        return 1;
    }

} // namespace jag::oldscape::social
