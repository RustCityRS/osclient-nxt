// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldLastWorldChangeComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldLastWorldChangeComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataSameWorldLastWorldChangeComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x1001714d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x1001714f0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool)
    void social::OnlinePlayerDataSameWorldLastWorldChangeComparator<
        FriendData>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8c30 + 16;
        this[16] = (OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>)param_1;
    }

    // 0x100171520, 112 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong social::OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>::Compare(FriendData* param_1,
                                                                                          FriendData* param_2) {
        int iVar1;
        Client* this_00;
        ulong uVar2;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if ((param_1->field_136 == iVar1) && (param_2->field_136 == iVar1)) {
            if (this[16] == (OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendData>)0) {
                uVar2 = (ulong)(uint)(param_2->field_140 - param_1->field_140);
            } else {
                uVar2 = (ulong)(uint)(param_1->field_140 - param_2->field_140);
            }
        } else {
            uVar2 = GetChainedCompare(param_1, param_2);
        }
        return uVar2;
    }

    // 0x100175bb0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool): jumps straight to the base-object constructor

    // 0x100175bd0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool)
    void social::OnlinePlayerDataSameWorldLastWorldChangeComparator<
        FriendChatUser>::OnlinePlayerDataSameWorldLastWorldChangeComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8c38 + 16;
        this[16] = (OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>)param_1;
    }

    // 0x100175c00, 112 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong social::OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                                              FriendChatUser* param_2) {
        int iVar1;
        Client* this_00;
        ulong uVar2;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if ((param_1->field_136 == iVar1) && (param_2->field_136 == iVar1)) {
            if (this[16] == (OnlinePlayerDataSameWorldLastWorldChangeComparator<FriendChatUser>)0) {
                uVar2 = (ulong)(uint)(*(int*)&param_2->field_140 - *(int*)&param_1->field_140);
            } else {
                uVar2 = (ulong)(uint)(*(int*)&param_1->field_140 - *(int*)&param_2->field_140);
            }
        } else {
            uVar2 = GetChainedCompare(param_1, param_2);
        }
        return uVar2;
    }

} // namespace jag::oldscape::social
