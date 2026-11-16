// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataOnlineComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170b10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineComparator<FriendData>::OnlinePlayerDataOnlineComparator(bool): jumps straight to the base-object constructor

    // 0x100170b30, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineComparator<FriendData>::OnlinePlayerDataOnlineComparator(bool)
    void OnlinePlayerDataOnlineComparator<FriendData>::OnlinePlayerDataOnlineComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8bd0 + 16;
        this[16] = (OnlinePlayerDataOnlineComparator<FriendData>)param_1;
    }

    // 0x100170b60, 64 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong OnlinePlayerDataOnlineComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        ulong uVar1;
        OnlinePlayerDataOnlineComparator<FriendData> OVar2;

        if (param_1->field_136 == 0) {
            if (param_2->field_136 == 0)
                goto LAB_100170b91;
            OVar2 = this[16];
        } else {
            if (param_2->field_136 != 0) {
            LAB_100170b91:
                uVar1 = GetChainedCompare(param_1, param_2);
                return uVar1;
            }
            OVar2 = (OnlinePlayerDataOnlineComparator<FriendData>)(this[16] ==
                                                                   (OnlinePlayerDataOnlineComparator<FriendData>)0);
        }
        return (ulong)((uint)(byte)OVar2 * 2 - 1);
    }

    // 0x1001751f0, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineComparator<FriendChatUser>::OnlinePlayerDataOnlineComparator(bool): jumps straight to the base-object constructor

    // 0x100175210, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineComparator<FriendChatUser>::OnlinePlayerDataOnlineComparator(bool)
    void OnlinePlayerDataOnlineComparator<FriendChatUser>::OnlinePlayerDataOnlineComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8bd8 + 16;
        this[16] = (OnlinePlayerDataOnlineComparator<FriendChatUser>)param_1;
    }

    // 0x100175240, 64 bytes, inline, placed by class name
    // OnlinePlayerDataOnlineComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong OnlinePlayerDataOnlineComparator<FriendChatUser>::Compare(FriendChatUser* param_1, FriendChatUser* param_2) {
        ulong uVar1;
        OnlinePlayerDataOnlineComparator<FriendChatUser> OVar2;

        if (param_1->field_136 == 0) {
            if (param_2->field_136 == 0)
                goto LAB_100175271;
            OVar2 = this[16];
        } else {
            if (param_2->field_136 != 0) {
            LAB_100175271:
                uVar1 = GetChainedCompare(param_1, param_2);
                return uVar1;
            }
            OVar2 =
                (OnlinePlayerDataOnlineComparator<FriendChatUser>)(this[16] ==
                                                                   (OnlinePlayerDataOnlineComparator<FriendChatUser>)0);
        }
        return (ulong)((uint)(byte)OVar2 * 2 - 1);
    }

} // namespace jag::oldscape::social
