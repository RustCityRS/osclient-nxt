// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataSameWorldNameComparator(bool arg1);
        void Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x1001712d0
    OnlinePlayerDataSameWorldNameComparator<FriendData>::OnlinePlayerDataSameWorldNameComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendData>() {}

    // 0x100171300
    void OnlinePlayerDataSameWorldNameComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                      const FriendData& friendData2) const {
        DisplayName* this_01;
        DisplayName* displayName;

        int iVar1 = Client::Instance()->GetWorldId();
        if ((friendData1.field_136 == iVar1) && (friendData2.field_136 == iVar1)) {
            if (*(char*)&this[2]._vptr == '\0') {
                this_01 = (DisplayName*)friendData2.second();
                displayName = (DisplayName*)friendData1.second();
            } else {
                this_01 = (DisplayName*)friendData1.second();
                displayName = (DisplayName*)friendData2.second();
            }
            this_01->CompareTo(*displayName);
        } else {
            GetChainedCompare(friendData1, friendData2);
        }
    }

    // 0x1001759b0
    OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::OnlinePlayerDataSameWorldNameComparator(bool arg1)
        : ChainablePlayerDataComparator<FriendChatUser>() {}

    // 0x1001759e0
    void OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                                          const FriendChatUser& friendChatUser2) const {
        DisplayName* this_01;
        DisplayName* displayName;

        int iVar1 = Client::Instance()->GetWorldId();
        if ((friendChatUser1.field_136 == iVar1) && (friendChatUser2.field_136 == iVar1)) {
            if (*(char*)&this[2]._vptr == '\0') {
                this_01 = (DisplayName*)friendChatUser2.second();
                displayName = (DisplayName*)friendChatUser1.second();
            } else {
                this_01 = (DisplayName*)friendChatUser1.second();
                displayName = (DisplayName*)friendChatUser2.second();
            }
            this_01->CompareTo(*displayName);
        } else {
            GetChainedCompare(friendChatUser1, friendChatUser2);
        }
    }

} // namespace jag::oldscape::social
