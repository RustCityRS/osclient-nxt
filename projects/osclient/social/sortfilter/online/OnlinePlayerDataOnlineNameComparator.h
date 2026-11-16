// projects/osclient/social/sortfilter/online/OnlinePlayerDataOnlineNameComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataOnlineNameComparator {
    public:
        // virtual methods in vtable order
        virtual void Compare(FriendData const&, FriendData const&) const;
        OnlinePlayerDataOnlineNameComparator(bool);
        void Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170ce0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineNameComparator<FriendData>::OnlinePlayerDataOnlineNameComparator(bool): jumps straight to the base-object constructor

    // 0x100170d00, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineNameComparator<FriendData>::OnlinePlayerDataOnlineNameComparator(bool)
    void OnlinePlayerDataOnlineNameComparator<FriendData>::OnlinePlayerDataOnlineNameComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8bf0 + 16;
        this[16] = (OnlinePlayerDataOnlineNameComparator<FriendData>)param_1;
    }

    // 0x100170d30, 112 bytes, inline, placed by class name and debug map
    // OnlinePlayerDataOnlineNameComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    void OnlinePlayerDataOnlineNameComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        DisplayName* this_00;
        DisplayName* pDVar1;

        if ((param_1->field_136 == 0) || (param_2->field_136 == 0)) {
            GetChainedCompare(param_1, param_2);
        } else {
            if (this[16] == (OnlinePlayerDataOnlineNameComparator<FriendData>)0) {
                this_00 = (DisplayName*)param_2->second();
                pDVar1 = (DisplayName*)param_1->second();
            } else {
                this_00 = (DisplayName*)param_1->second();
                pDVar1 = (DisplayName*)param_2->second();
            }
            this_00->CompareTo(pDVar1);
        }
    }

    // 0x1001753c0, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineNameComparator<FriendChatUser>::OnlinePlayerDataOnlineNameComparator(bool): jumps straight to the base-object constructor

    // 0x1001753e0, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataOnlineNameComparator<FriendChatUser>::OnlinePlayerDataOnlineNameComparator(bool)
    void OnlinePlayerDataOnlineNameComparator<FriendChatUser>::OnlinePlayerDataOnlineNameComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8bf8 + 16;
        this[16] = (OnlinePlayerDataOnlineNameComparator<FriendChatUser>)param_1;
    }

    // 0x100175410, 112 bytes, inline, placed by class name
    // OnlinePlayerDataOnlineNameComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    void OnlinePlayerDataOnlineNameComparator<FriendChatUser>::Compare(FriendChatUser* param_1,
                                                                       FriendChatUser* param_2) {
        DisplayName* this_00;
        DisplayName* pDVar1;

        if ((param_1->field_136 == 0) || (param_2->field_136 == 0)) {
            GetChainedCompare(param_1, param_2);
        } else {
            if (this[16] == (OnlinePlayerDataOnlineNameComparator<FriendChatUser>)0) {
                this_00 = (DisplayName*)param_2->second();
                pDVar1 = (DisplayName*)param_1->second();
            } else {
                this_00 = (DisplayName*)param_1->second();
                pDVar1 = (DisplayName*)param_2->second();
            }
            this_00->CompareTo(pDVar1);
        }
    }

} // namespace jag::oldscape::social
