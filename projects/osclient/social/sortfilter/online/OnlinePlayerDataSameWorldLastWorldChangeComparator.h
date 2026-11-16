// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataSameWorldLastWorldChangeComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x1001714f0
    OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::OnlinePlayerDataSameWorldLastWorldChangeComparator(
        bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100171520
    unsigned long
    OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                            const FriendData& friendData2) const {
        unsigned long uVar2;

        int iVar1 = Client::Instance()->GetWorldId();
        if ((friendData1.field_136 == iVar1) && (friendData2.field_136 == iVar1)) {
            if (*(char*)&this[2]._vptr == '\0') {
                uVar2 = (unsigned long)(unsigned int)(friendData2.field_140 - friendData1.field_140);
            } else {
                uVar2 = (unsigned long)(unsigned int)(friendData1.field_140 - friendData2.field_140);
            }
        } else {
            uVar2 = GetChainedCompare(friendData1, friendData2);
        }
        return uVar2;
    }

    // 0x100175bd0
    OnlinePlayerDataSameWorldLastWorldChangeComparator<
        FriendChatUser>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100175c00
    unsigned long OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>::Compare(
        const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const {
        unsigned long uVar2;

        int iVar1 = Client::Instance()->GetWorldId();
        if ((friendChatUser1.field_136 == iVar1) && (friendChatUser2.field_136 == iVar1)) {
            if (*(char*)&this[2]._vptr == '\0') {
                uVar2 = (unsigned long)(unsigned int)(*(int*)&friendChatUser2.field_140 -
                                                      *(int*)&friendChatUser1.field_140);
            } else {
                uVar2 = (unsigned long)(unsigned int)(*(int*)&friendChatUser1.field_140 -
                                                      *(int*)&friendChatUser2.field_140);
            }
        } else {
            uVar2 = GetChainedCompare(friendChatUser1, friendChatUser2);
        }
        return uVar2;
    }

} // namespace jag::oldscape::social
