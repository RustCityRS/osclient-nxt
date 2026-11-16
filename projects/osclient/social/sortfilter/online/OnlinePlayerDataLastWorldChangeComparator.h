// projects/osclient/social/sortfilter/online/OnlinePlayerDataLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual int Compare(const FriendData& friendData1, const FriendData& friendData2) const;
        OnlinePlayerDataLastWorldChangeComparator(bool arg1);
    };

    // 0x100170970
    OnlinePlayerDataLastWorldChangeComparator<FriendData>::OnlinePlayerDataLastWorldChangeComparator(bool arg1)
        : PlayerDataComparator<FriendData>() {}

    // 0x1001709a0
    int OnlinePlayerDataLastWorldChangeComparator<FriendData>::Compare(const FriendData& friendData1,
                                                                       const FriendData& friendData2) const {
        FriendData* pFVar1 = friendData2;
        if (*(char*)&this[1]._vptr == '\0') {
            pFVar1 = friendData1;
            friendData1 = friendData2;
        }
        return friendData1.field_140 - pFVar1->field_140;
    }

    // 0x100175080
    OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataLastWorldChangeComparator(bool arg1)
        : PlayerDataComparator<FriendChatUser>() {}

} // namespace jag::oldscape::social
