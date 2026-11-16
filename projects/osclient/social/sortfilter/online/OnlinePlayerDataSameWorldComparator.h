// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataSameWorldComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x1001710d0
    OnlinePlayerDataSameWorldComparator<FriendData>::OnlinePlayerDataSameWorldComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100171100
    unsigned long OnlinePlayerDataSameWorldComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                           const FriendData& friendData2) const {
        int iVar1 = Client::Instance()->GetWorldId();
        if (friendData1.field_136 == iVar1) {
            if (friendData2.field_136 != iVar1) {
                return (unsigned long)((unsigned int)(*(char*)&this[2]._vptr == '\0') * 2 - 1);
            }
        } else if (friendData2.field_136 == iVar1) {
            return (unsigned long)((unsigned int)*(uint8_t*)&this[2]._vptr * 2 - 1);
        }
        return GetChainedCompare(friendData1, friendData2);
    }

    // 0x1001757b0
    OnlinePlayerDataSameWorldComparator<FriendChatUser>::OnlinePlayerDataSameWorldComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x1001757e0
    unsigned long
    OnlinePlayerDataSameWorldComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                                 const FriendChatUser& friendChatUser2) const {
        int iVar1 = Client::Instance()->GetWorldId();
        if (friendChatUser1.field_136 == iVar1) {
            if (friendChatUser2.field_136 != iVar1) {
                return (unsigned long)((unsigned int)(*(char*)&this[2]._vptr == '\0') * 2 - 1);
            }
        } else if (friendChatUser2.field_136 == iVar1) {
            return (unsigned long)((unsigned int)*(uint8_t*)&this[2]._vptr * 2 - 1);
        }
        return GetChainedCompare(friendChatUser1, friendChatUser2);
    }

} // namespace jag::oldscape::social
