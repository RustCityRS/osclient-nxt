// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataOnlineComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170b30
    OnlinePlayerDataOnlineComparator<FriendData>::OnlinePlayerDataOnlineComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100170b60
    unsigned long OnlinePlayerDataOnlineComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                        const FriendData& friendData2) const {
        uint8_t bVar2;

        if (friendData1.field_136 == 0) {
            if (friendData2.field_136 == 0)
                goto LAB_100170b91;
            bVar2 = *(uint8_t*)&this[2]._vptr;
        } else {
            if (friendData2.field_136 != 0) {
            LAB_100170b91:
                return GetChainedCompare(friendData1, friendData2);
            }
            bVar2 = *(char*)&this[2]._vptr == '\0';
        }
        return (unsigned long)((unsigned int)bVar2 * 2 - 1);
    }

    // 0x100175210
    OnlinePlayerDataOnlineComparator<FriendChatUser>::OnlinePlayerDataOnlineComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100175240
    unsigned long
    OnlinePlayerDataOnlineComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                              const FriendChatUser& friendChatUser2) const {
        uint8_t bVar2;

        if (friendChatUser1.field_136 == 0) {
            if (friendChatUser2.field_136 == 0)
                goto LAB_100175271;
            bVar2 = *(uint8_t*)&this[2]._vptr;
        } else {
            if (friendChatUser2.field_136 != 0) {
            LAB_100175271:
                return GetChainedCompare(friendChatUser1, friendChatUser2);
            }
            bVar2 = *(char*)&this[2]._vptr == '\0';
        }
        return (unsigned long)((unsigned int)bVar2 * 2 - 1);
    }

} // namespace jag::oldscape::social
