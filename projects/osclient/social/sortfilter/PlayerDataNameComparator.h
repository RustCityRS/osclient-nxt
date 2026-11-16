// projects/osclient/social/sortfilter/PlayerDataNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerDataNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(FriendData const&, FriendData const&) const;
        PlayerDataNameComparator(bool);
    };

    // 0x100170430, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerDataNameComparator<FriendData>::PlayerDataNameComparator(bool): jumps straight to the base-object constructor

    // 0x100170450, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // PlayerDataNameComparator<FriendData>::PlayerDataNameComparator(bool)
    void PlayerDataNameComparator<FriendData>::PlayerDataNameComparator(bool param_1) {
        new (this) PlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8b70 + 16;
        this[8] = (PlayerDataNameComparator<FriendData>)param_1;
    }

    // 0x100170480, 64 bytes, inline, placed by class name and debug map
    // PlayerDataNameComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    /* PlayerDataNameComparator<IgnoreData>::Compare(IgnoreData
   const&, IgnoreData const&) const */

    void PlayerDataNameComparator<IgnoreData>::Compare(IgnoreData* param_1, IgnoreData* param_2) {
        DisplayName* this_00;
        DisplayName* pDVar1;
        IgnoreData* this_01;

        this_01 = param_2;
        if (this[8] == (PlayerDataNameComparator<IgnoreData>)0) {
            this_01 = param_1;
            param_1 = param_2;
        }
        this_00 = (DisplayName*)param_1->second();
        pDVar1 = (DisplayName*)this_01->second();
        this_00->CompareTo(pDVar1);
    }

    // 0x100173070, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerDataNameComparator<IgnoreData>::PlayerDataNameComparator(bool): jumps straight to the base-object constructor

    // 0x100173090, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerDataNameComparator<IgnoreData>::PlayerDataNameComparator(bool)
    void PlayerDataNameComparator<IgnoreData>::PlayerDataNameComparator(bool param_1) {
        new (this) PlayerDataComparator<IgnoreData>();
        *(undefined**)this = PTR_vtable_100ee8b78 + 16;
        this[8] = (PlayerDataNameComparator<IgnoreData>)param_1;
    }

    // 0x100174b80, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerDataNameComparator<FriendChatUser>::PlayerDataNameComparator(bool): jumps straight to the base-object constructor

    // 0x100174ba0, 48 bytes, base-object constructor, inline, placed by class name
    // PlayerDataNameComparator<FriendChatUser>::PlayerDataNameComparator(bool)
    void PlayerDataNameComparator<FriendChatUser>::PlayerDataNameComparator(bool param_1) {
        new (this) PlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8b80 + 16;
        this[8] = (PlayerDataNameComparator<FriendChatUser>)param_1;
    }

} // namespace jag::oldscape::social
