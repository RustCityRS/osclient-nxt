// projects/osclient/social/sortfilter/online/OnlinePlayerDataRankComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataRankComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataRankComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100176050
    OnlinePlayerDataRankComparator<FriendData>::OnlinePlayerDataRankComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100176080
    unsigned long OnlinePlayerDataRankComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                      const FriendData& friendData2) const {
        unsigned int uVar1 = *(int*)&friendData1.field_176 - *(int*)&friendData2.field_176;
        if (uVar1 == 0) {
            return GetChainedCompare(friendData1, friendData2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            uVar1 = *(int*)&friendData2.field_176 - *(int*)&friendData1.field_176;
        }
        return (unsigned long)uVar1;
    }

    // 0x100176210
    OnlinePlayerDataRankComparator<FriendChatUser>::OnlinePlayerDataRankComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100176240
    unsigned long OnlinePlayerDataRankComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                                          const FriendChatUser& friendChatUser2) const {
        unsigned int uVar1 = *(int*)&friendChatUser1.field_176 - *(int*)&friendChatUser2.field_176;
        if (uVar1 == 0) {
            return GetChainedCompare(friendChatUser1, friendChatUser2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            uVar1 = *(int*)&friendChatUser2.field_176 - *(int*)&friendChatUser1.field_176;
        }
        return (unsigned long)uVar1;
    }

} // namespace jag::oldscape::social
