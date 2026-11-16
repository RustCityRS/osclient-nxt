// projects/osclient/social/sortfilter/PlayerDataNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        PlayerDataNameComparator(bool arg1);
    };

    // 0x100170450
    PlayerDataNameComparator<FriendData>::PlayerDataNameComparator(bool arg1) : PlayerDataComparator<FriendData>() {}

    // 0x100170480
    void PlayerDataNameComparator<FriendData>::Compare(const FriendData& friendData1,
                                                       const FriendData& friendData2) const {
        FriendData* this_01 = friendData2;
        if (*(char*)&this[1]._vptr == '\0') {
            this_01 = friendData1;
            friendData1 = friendData2;
        }
        auto this_00 = friendData1.second();
        auto displayName = this_01->second();
        this_00->CompareTo(*displayName);
    }

    // 0x100173090
    PlayerDataNameComparator<IgnoreData>::PlayerDataNameComparator(bool arg1) : PlayerDataComparator<IgnoreData>() {}

    // 0x100174ba0
    PlayerDataNameComparator<FriendChatUser>::PlayerDataNameComparator(bool arg1)
        : PlayerDataComparator<FriendChatUser>() {}

} // namespace jag::oldscape::social
