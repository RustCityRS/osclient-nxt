// projects/osclient/social/sortfilter/online/OnlinePlayerDataRankComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataRankComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataRankComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100176030, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendData>::OnlinePlayerDataRankComparator(bool): jumps straight to the base-object constructor

    // 0x100176050, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendData>::OnlinePlayerDataRankComparator(bool)
    void OnlinePlayerDataRankComparator<FriendData>::OnlinePlayerDataRankComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8bb0 + 16;
        this[16] = (OnlinePlayerDataRankComparator<FriendData>)param_1;
    }

    // 0x100176080, 48 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong OnlinePlayerDataRankComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = *(int*)&param_1->field_176 - *(int*)&param_2->field_176;
        if (uVar1 == 0) {
            uVar2 = GetChainedCompare(param_1, param_2);
            return uVar2;
        }
        if (this[16] == (OnlinePlayerDataRankComparator<FriendData>)0) {
            uVar1 = *(int*)&param_2->field_176 - *(int*)&param_1->field_176;
        }
        return (ulong)uVar1;
    }

    // 0x1001761f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendChatUser>::OnlinePlayerDataRankComparator(bool): jumps straight to the base-object constructor

    // 0x100176210, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendChatUser>::OnlinePlayerDataRankComparator(bool)
    void OnlinePlayerDataRankComparator<FriendChatUser>::OnlinePlayerDataRankComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8bb8 + 16;
        this[16] = (OnlinePlayerDataRankComparator<FriendChatUser>)param_1;
    }

    // 0x100176240, 48 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataRankComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong OnlinePlayerDataRankComparator<FriendChatUser>::Compare(FriendChatUser* param_1, FriendChatUser* param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = *(int*)&param_1->field_176 - *(int*)&param_2->field_176;
        if (uVar1 == 0) {
            uVar2 = GetChainedCompare(param_1, param_2);
            return uVar2;
        }
        if (this[16] == (OnlinePlayerDataRankComparator<FriendChatUser>)0) {
            uVar1 = *(int*)&param_2->field_176 - *(int*)&param_1->field_176;
        }
        return (ulong)uVar1;
    }

} // namespace jag::oldscape::social
