// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataOnlineNameComparator(bool arg1);
        void Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170d00
    OnlinePlayerDataOnlineNameComparator<FriendData>::OnlinePlayerDataOnlineNameComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100170d30
    void OnlinePlayerDataOnlineNameComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                   const FriendData& friendData2) const {
        DisplayName* this_00;
        DisplayName* displayName;

        if ((friendData1.field_136 == 0) || (friendData2.field_136 == 0)) {
            GetChainedCompare(friendData1, friendData2);
        } else {
            if (*(char*)&this[2]._vptr == '\0') {
                this_00 = (DisplayName*)friendData2.second();
                displayName = (DisplayName*)friendData1.second();
            } else {
                this_00 = (DisplayName*)friendData1.second();
                displayName = (DisplayName*)friendData2.second();
            }
            this_00->CompareTo(*displayName);
        }
    }

    // 0x1001753e0
    OnlinePlayerDataOnlineNameComparator<FriendChatUser>::OnlinePlayerDataOnlineNameComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x100175410
    void OnlinePlayerDataOnlineNameComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                                       const FriendChatUser& friendChatUser2) const {
        DisplayName* this_00;
        DisplayName* displayName;

        if ((friendChatUser1.field_136 == 0) || (friendChatUser2.field_136 == 0)) {
            GetChainedCompare(friendChatUser1, friendChatUser2);
        } else {
            if (*(char*)&this[2]._vptr == '\0') {
                this_00 = (DisplayName*)friendChatUser2.second();
                displayName = (DisplayName*)friendChatUser1.second();
            } else {
                this_00 = (DisplayName*)friendChatUser1.second();
                displayName = (DisplayName*)friendChatUser2.second();
            }
            this_00->CompareTo(*displayName);
        }
    }

} // namespace jag::oldscape::social
