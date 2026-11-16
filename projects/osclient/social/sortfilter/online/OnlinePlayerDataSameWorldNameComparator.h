// projects/osclient/social/sortfilter/online/OnlinePlayerDataSameWorldNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataSameWorldNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataSameWorldNameComparator(bool);
        void Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x1001712b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldNameComparator<FriendData>::OnlinePlayerDataSameWorldNameComparator(bool): jumps straight to the base-object constructor

    // 0x1001712d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldNameComparator<FriendData>::OnlinePlayerDataSameWorldNameComparator(bool)
    void OnlinePlayerDataSameWorldNameComparator<FriendData>::OnlinePlayerDataSameWorldNameComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8c00 + 16;
        this[16] = (OnlinePlayerDataSameWorldNameComparator<FriendData>)param_1;
    }

    // 0x100171300, 144 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataSameWorldNameComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    void OnlinePlayerDataSameWorldNameComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        Client* this_00;
        int iVar1;
        DisplayName* pDVar2;
        DisplayName* this_01;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if ((param_1->field_136 == iVar1) && (param_2->field_136 == iVar1)) {
            if (this[16] == (OnlinePlayerDataSameWorldNameComparator<FriendData>)0) {
                this_01 = (DisplayName*)param_2->second();
                pDVar2 = (DisplayName*)param_1->second();
            } else {
                this_01 = (DisplayName*)param_1->second();
                pDVar2 = (DisplayName*)param_2->second();
            }
            this_01->CompareTo(pDVar2);
        } else {
            GetChainedCompare(param_1, param_2);
        }
    }

    // 0x100175990, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::OnlinePlayerDataSameWorldNameComparator(bool): jumps straight to the base-object constructor

    // 0x1001759b0, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::OnlinePlayerDataSameWorldNameComparator(bool)
    void social::OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::OnlinePlayerDataSameWorldNameComparator(
        bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8c08 + 16;
        this[16] = (OnlinePlayerDataSameWorldNameComparator<FriendChatUser>)param_1;
    }

    // 0x1001759e0, 144 bytes, inline, placed by class name
    // OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    void social::OnlinePlayerDataSameWorldNameComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                                  FriendChatUser* param_2) {
        Client* this_00;
        int iVar1;
        DisplayName* pDVar2;
        DisplayName* this_01;

        this_00 = (Client*)Client::Instance();
        iVar1 = this_00->GetWorldId();
        if ((param_1->field_136 == iVar1) && (param_2->field_136 == iVar1)) {
            if (this[16] == (OnlinePlayerDataSameWorldNameComparator<FriendChatUser>)0) {
                this_01 = (DisplayName*)param_2->second();
                pDVar2 = (DisplayName*)param_1->second();
            } else {
                this_01 = (DisplayName*)param_1->second();
                pDVar2 = (DisplayName*)param_2->second();
            }
            this_01->CompareTo(pDVar2);
        } else {
            GetChainedCompare(param_1, param_2);
        }
    }

} // namespace jag::oldscape::social
