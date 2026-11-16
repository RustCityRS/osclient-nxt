// projects/osclient/social/sortfilter/online/OnlinePlayerDataWorldComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataWorldComparator {
    public:
        // virtual methods in vtable order
        virtual unsigned long Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        virtual ~OnlinePlayerDataWorldComparator();
        OnlinePlayerDataWorldComparator(bool arg1);
        unsigned long Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170620
    OnlinePlayerDataWorldComparator<FriendData>::OnlinePlayerDataWorldComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100170680
    unsigned long OnlinePlayerDataWorldComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                       const FriendData& friendData2) const {
        unsigned int uVar1 = friendData1.field_136 - friendData2.field_136;
        if (uVar1 == 0) {
            return GetChainedCompare(friendData1, friendData2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            uVar1 = friendData2.field_136 - friendData1.field_136;
        }
        return (unsigned long)uVar1;
    }

    // 0x1001707d0
    OnlinePlayerDataWorldComparator<FriendData>::~OnlinePlayerDataWorldComparator() {}

    // 0x100174d30
    OnlinePlayerDataWorldComparator<FriendChatUser>::OnlinePlayerDataWorldComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100174d90
    unsigned long
    OnlinePlayerDataWorldComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                             const FriendChatUser& friendChatUser2) const {
        unsigned int uVar1 = friendChatUser1.field_136 - friendChatUser2.field_136;
        if (uVar1 == 0) {
            return GetChainedCompare(friendChatUser1, friendChatUser2);
        }
        if (*(char*)&this[2]._vptr == '\0') {
            uVar1 = friendChatUser2.field_136 - friendChatUser1.field_136;
        }
        return (unsigned long)uVar1;
    }

    // 0x100174ee0
    OnlinePlayerDataWorldComparator<FriendChatUser>::~OnlinePlayerDataWorldComparator() {}

} // namespace jag::oldscape::social
