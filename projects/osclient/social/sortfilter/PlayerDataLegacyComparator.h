// projects/osclient/social/sortfilter/PlayerDataLegacyComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataLegacyComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        PlayerDataLegacyComparator(bool arg1);
        void Compare(const IgnoreData& ignoreData1, const IgnoreData& ignoreData2) const;
        void Compare(const FriendChatUser& friendChatUser1, const FriendChatUser& friendChatUser2) const;
    };

    // 0x100170280
    PlayerDataLegacyComparator<FriendData>::PlayerDataLegacyComparator(bool arg1)
        : PlayerDataComparator<FriendData>() {}

    // 0x1001702d0
    void PlayerDataLegacyComparator<FriendData>::Compare(const FriendData& friendData1,
                                                         const FriendData& friendData2) const {
        FriendData* friendData;

        if (*(char*)&this[1]._vptr == '\0') {
            friendData = friendData1;
            friendData1 = friendData2;
        } else {
            friendData = friendData2;
        }
        friendData1.CompareTo(*friendData);
    }

    // 0x100172ec0
    PlayerDataLegacyComparator<IgnoreData>::PlayerDataLegacyComparator(bool arg1)
        : PlayerDataComparator<IgnoreData>() {}

    // 0x100172f10
    void PlayerDataLegacyComparator<IgnoreData>::Compare(const IgnoreData& ignoreData1,
                                                         const IgnoreData& ignoreData2) const {
        IgnoreData* ignoreData;

        if (*(char*)&this[1]._vptr == '\0') {
            ignoreData = ignoreData1;
            ignoreData1 = ignoreData2;
        } else {
            ignoreData = ignoreData2;
        }
        ignoreData1.CompareTo(*ignoreData);
    }

    // 0x1001749d0
    PlayerDataLegacyComparator<FriendChatUser>::PlayerDataLegacyComparator(bool arg1)
        : PlayerDataComparator<FriendChatUser>() {}

    // 0x100174a20
    void PlayerDataLegacyComparator<FriendChatUser>::Compare(const FriendChatUser& friendChatUser1,
                                                             const FriendChatUser& friendChatUser2) const {
        FriendChatUser* friendChatUser;

        if (*(char*)&this[1]._vptr == '\0') {
            friendChatUser = friendChatUser1;
        } else {
            friendChatUser = friendChatUser2;
            friendChatUser2 = friendChatUser1;
        }
        friendChatUser2.CompareTo(*friendChatUser);
    }

} // namespace jag::oldscape::social
