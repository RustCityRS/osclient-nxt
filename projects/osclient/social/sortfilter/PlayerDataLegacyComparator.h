// projects/osclient/social/sortfilter/PlayerDataLegacyComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataLegacyComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(FriendData const&, FriendData const&) const;
        PlayerDataLegacyComparator(bool);
        void Compare(IgnoreData const&, IgnoreData const&) const;
        void Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170260, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerDataLegacyComparator<FriendData>::PlayerDataLegacyComparator(bool): jumps straight to the base-object constructor

    // 0x100170280, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // PlayerDataLegacyComparator<FriendData>::PlayerDataLegacyComparator(bool)
    void PlayerDataLegacyComparator<FriendData>::PlayerDataLegacyComparator(bool param_1) {
        new (this) PlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8b88 + 16;
        this[8] = (PlayerDataLegacyComparator<FriendData>)param_1;
    }

    // 0x1001702d0, 32 bytes, inline, placed by class name
    // PlayerDataLegacyComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    void PlayerDataLegacyComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        FriendData* pFVar1;

        if (this[8] == (PlayerDataLegacyComparator<FriendData>)0) {
            pFVar1 = param_1;
            param_1 = param_2;
        } else {
            pFVar1 = param_2;
        }
        param_1->CompareTo(pFVar1);
    }

    // 0x100172ea0, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerDataLegacyComparator<IgnoreData>::PlayerDataLegacyComparator(bool): jumps straight to the base-object constructor

    // 0x100172ec0, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerDataLegacyComparator<IgnoreData>::PlayerDataLegacyComparator(bool)
    void PlayerDataLegacyComparator<IgnoreData>::PlayerDataLegacyComparator(bool param_1) {
        new (this) PlayerDataComparator<IgnoreData>();
        *(undefined**)this = PTR_vtable_100ee8b90 + 16;
        this[8] = (PlayerDataLegacyComparator<IgnoreData>)param_1;
    }

    // 0x100172f10, 32 bytes, inline, placed by class name
    // PlayerDataLegacyComparator<IgnoreData>::Compare(IgnoreData const&, IgnoreData const&) const
    void PlayerDataLegacyComparator<IgnoreData>::Compare(IgnoreData* param_1, IgnoreData* param_2) {
        IgnoreData* pIVar1;

        if (this[8] == (PlayerDataLegacyComparator<IgnoreData>)0) {
            pIVar1 = param_1;
            param_1 = param_2;
        } else {
            pIVar1 = param_2;
        }
        param_1->CompareTo(pIVar1);
    }

    // 0x1001749b0, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerDataLegacyComparator<FriendChatUser>::PlayerDataLegacyComparator(bool): jumps straight to the base-object constructor

    // 0x1001749d0, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerDataLegacyComparator<FriendChatUser>::PlayerDataLegacyComparator(bool)
    void PlayerDataLegacyComparator<FriendChatUser>::PlayerDataLegacyComparator(bool param_1) {
        new (this) PlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8b98 + 16;
        this[8] = (PlayerDataLegacyComparator<FriendChatUser>)param_1;
    }

    // 0x100174a20, 32 bytes, inline, placed by class name
    // PlayerDataLegacyComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    void PlayerDataLegacyComparator<FriendChatUser>::Compare(FriendChatUser* param_1, FriendChatUser* param_2) {
        FriendData* pFVar1;

        if (this[8] == (PlayerDataLegacyComparator<FriendChatUser>)0) {
            pFVar1 = (FriendData*)param_1;
        } else {
            pFVar1 = (FriendData*)param_2;
            param_2 = param_1;
        }
        param_2->CompareTo(pFVar1);
    }

} // namespace jag::oldscape::social
