// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataOnlineLastWorldChangeComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170ee0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x100170f00, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool)
    void social::OnlinePlayerDataOnlineLastWorldChangeComparator<
        FriendData>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8c20 + 16;
        this[16] = (OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>)param_1;
    }

    // 0x100170f30, 64 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong social::OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>::Compare(FriendData* param_1,
                                                                                       FriendData* param_2) {
        ulong uVar1;

        if ((param_1->field_136 == 0) || (param_2->field_136 == 0)) {
            uVar1 = GetChainedCompare(param_1, param_2);
            return uVar1;
        }
        if (this[16] == (OnlinePlayerDataOnlineLastWorldChangeComparator<FriendData>)0) {
            return (ulong)(uint)(param_2->field_140 - param_1->field_140);
        }
        return (ulong)(uint)(param_1->field_140 - param_2->field_140);
    }

    // 0x1001755c0, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x1001755e0, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool)
    void social::OnlinePlayerDataOnlineLastWorldChangeComparator<
        FriendChatUser>::OnlinePlayerDataOnlineLastWorldChangeComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8c28 + 16;
        this[16] = (OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>)param_1;
    }

    // 0x100175610, 64 bytes, inline, placed by class name
    // OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong social::OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                                           FriendChatUser* param_2) {
        ulong uVar1;

        if ((param_1->field_136 == 0) || (param_2->field_136 == 0)) {
            uVar1 = GetChainedCompare(param_1, param_2);
            return uVar1;
        }
        if (this[16] == (OnlinePlayerDataOnlineLastWorldChangeComparator<FriendChatUser>)0) {
            return (ulong)(uint)(*(int*)&param_2->field_140 - *(int*)&param_1->field_140);
        }
        return (ulong)(uint)(*(int*)&param_1->field_140 - *(int*)&param_2->field_140);
    }

} // namespace jag::oldscape::social
