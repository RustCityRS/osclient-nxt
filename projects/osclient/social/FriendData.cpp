// projects/osclient/social/FriendData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "FriendData.h"

namespace jag::oldscape::social {
    // 0x100024a70
    int FriendData::CompareTo(const FriendData& friendData) const {
        FriendData* pFVar4;

        int iVar3 = Client::Instance()->GetWorldId();
        int iVar1 = field_136;
        int iVar2 = friendData.field_136;
        if ((iVar1 == iVar3) && (iVar2 != iVar3)) {
            return -1;
        }
        if ((iVar2 != iVar3) || (iVar1 == iVar3)) {
            if ((iVar1 != 0) && (iVar2 == 0)) {
                return -1;
            }
            if ((iVar2 == 0) || (iVar1 != 0)) {
                if ((field_184 != '\0') && (friendData.field_184 == '\0')) {
                    return -1;
                }
                if ((field_184 != '\0') || (friendData.field_184 == '\0')) {
                    if ((field_185 != '\0') && (friendData.field_185 == '\0')) {
                        return -1;
                    }
                    if ((field_185 == '\0') && (friendData.field_185 != '\0')) {
                        return 1;
                    }
                    pFVar4 = friendData;
                    if (iVar1 == 0) {
                        pFVar4 = this;
                        this = friendData;
                    }
                    return field_140 - pFVar4->field_140;
                }
            }
        }
        return 1;
    }

} // namespace jag::oldscape::social
