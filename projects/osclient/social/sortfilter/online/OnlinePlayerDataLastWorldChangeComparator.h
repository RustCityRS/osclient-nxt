// projects/osclient/social/sortfilter/online/OnlinePlayerDataLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual int Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataLastWorldChangeComparator(bool);
    };

    // 0x100170950, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataLastWorldChangeComparator<FriendData>::OnlinePlayerDataLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x100170970, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataLastWorldChangeComparator<FriendData>::OnlinePlayerDataLastWorldChangeComparator(bool)
    void
    OnlinePlayerDataLastWorldChangeComparator<FriendData>::OnlinePlayerDataLastWorldChangeComparator(bool param_1) {
        new (this) PlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8c10 + 16;
        this[8] = (OnlinePlayerDataLastWorldChangeComparator<FriendData>)param_1;
    }

    // 0x1001709a0, 48 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataLastWorldChangeComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    /* OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser
   const&, FriendChatUser const&) const */

    int social::OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                                   FriendChatUser* param_2) {
        FriendChatUser* pFVar1;

        pFVar1 = param_2;
        if (this[8] == (OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>)0) {
            pFVar1 = param_1;
            param_1 = param_2;
        }
        return *(int*)&param_1->field_140 - *(int*)&pFVar1->field_140;
    }

    // 0x100175060, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x100175080, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataLastWorldChangeComparator(bool)
    void social::OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataLastWorldChangeComparator(
        bool param_1) {
        new (this) PlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8c18 + 16;
        this[8] = (OnlinePlayerDataLastWorldChangeComparator<FriendChatUser>)param_1;
    }

} // namespace jag::oldscape::social
