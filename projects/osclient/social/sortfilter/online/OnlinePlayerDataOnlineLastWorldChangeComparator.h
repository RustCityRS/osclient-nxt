// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataOnlineLastWorldChangeComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170f00
    OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::OnlinePlayerDataOnlineLastWorldChangeComparator(
        bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100170f30
    unsigned long
    OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                         const FriendData& friendData2) const {
        if ((friendData1.field_136 == 0) || (friendData2.field_136 == 0)) {
            return GetChainedCompare(friendData1, friendData2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            return (unsigned long)(unsigned int)(friendData2.field_140 - friendData1.field_140);
        }
        return (unsigned long)(unsigned int)(friendData1.field_140 - friendData2.field_140);
    }

    // 0x1001755e0
    OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataOnlineLastWorldChangeComparator(
        bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100175610
    unsigned long OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::Compare(
        const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const {
        if ((friendChatUser1.field_136 == 0) || (friendChatUser2.field_136 == 0)) {
            return GetChainedCompare(friendChatUser1, friendChatUser2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            return (unsigned long)(unsigned int)(*(int*)&friendChatUser2.field_140 - *(int*)&friendChatUser1.field_140);
        }
        return (unsigned long)(unsigned int)(*(int*)&friendChatUser1.field_140 - *(int*)&friendChatUser2.field_140);
    }

} // namespace jag::oldscape::social
