// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataSameWorldComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x1001710b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldComparator<FriendData>::OnlinePlayerDataSameWorldComparator(bool): jumps straight to the base-object constructor

    // 0x1001710d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldComparator<FriendData>::OnlinePlayerDataSameWorldComparator(bool)
    void OnlinePlayerDataSameWorldComparator<FriendData>::OnlinePlayerDataSameWorldComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8be0 + 16;
        this[16] = (OnlinePlayerDataSameWorldComparator<FriendData>)param_1;
    }

    // 0x100171100, 112 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong OnlinePlayerDataSameWorldComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        int iVar1;
        Client* this_00;
        ulong uVar2;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if (param_1->field_136 == iVar1) {
            if (param_2->field_136 != iVar1) {
                return (ulong)((uint)(this[16] == (OnlinePlayerDataSameWorldComparator<FriendData>)0) * 2 - 1);
            }
        } else if (param_2->field_136 == iVar1) {
            return (ulong)((uint)(byte)this[16] * 2 - 1);
        }
        uVar2 = GetChainedCompare(param_1, param_2);
        return uVar2;
    }

    // 0x100175790, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataSameWorldComparator<FriendChatUser>::OnlinePlayerDataSameWorldComparator(bool): jumps straight to the base-object constructor

    // 0x1001757b0, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataSameWorldComparator<FriendChatUser>::OnlinePlayerDataSameWorldComparator(bool)
    void OnlinePlayerDataSameWorldComparator<FriendChatUser>::OnlinePlayerDataSameWorldComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8be8 + 16;
        this[16] = (OnlinePlayerDataSameWorldComparator<FriendChatUser>)param_1;
    }

    // 0x1001757e0, 112 bytes, inline, placed by class name
    // OnlinePlayerDataSameWorldComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong OnlinePlayerDataSameWorldComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                       FriendChatUser* param_2) {
        int iVar1;
        Client* this_00;
        ulong uVar2;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if (param_1->field_136 == iVar1) {
            if (param_2->field_136 != iVar1) {
                return (ulong)((uint)(this[16] == (OnlinePlayerDataSameWorldComparator<FriendChatUser>)0) * 2 - 1);
            }
        } else if (param_2->field_136 == iVar1) {
            return (ulong)((uint)(byte)this[16] * 2 - 1);
        }
        uVar2 = GetChainedCompare(param_1, param_2);
        return uVar2;
    }

} // namespace jag::oldscape::social
