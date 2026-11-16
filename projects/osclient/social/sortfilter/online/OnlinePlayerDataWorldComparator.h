// projects/osclient/social/sortfilter/online/OnlinePlayerDataWorldComparator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 2 instantiations, e.g. <FriendChatUser>, <FriendData>
    class OnlinePlayerDataWorldComparator {
    public:
        // virtual methods in vtable order
        virtual ulong Compare(FriendData const&, FriendData const&) const;
        virtual ~OnlinePlayerDataWorldComparator();
        OnlinePlayerDataWorldComparator(bool);
        ulong Compare(FriendChatUser const&, FriendChatUser const&) const;
    };

    // 0x100170600, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataWorldComparator<FriendData>::OnlinePlayerDataWorldComparator(bool): jumps straight to the base-object constructor

    // 0x100170620, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OnlinePlayerDataWorldComparator<FriendData>::OnlinePlayerDataWorldComparator(bool)
    void OnlinePlayerDataWorldComparator<FriendData>::OnlinePlayerDataWorldComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendData>();
        *(undefined**)this = PTR_vtable_100ee8bc0 + 16;
        this[16] = (OnlinePlayerDataWorldComparator<FriendData>)param_1;
    }

    // 0x100170680, 48 bytes, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendData>::Compare(FriendData const&, FriendData const&) const
    ulong OnlinePlayerDataWorldComparator<FriendData>::Compare(FriendData* param_1, FriendData* param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = param_1->field_136 - param_2->field_136;
        if (uVar1 == 0) {
            uVar2 = GetChainedCompare(param_1, param_2);
            return uVar2;
        }
        if (this[16] == (OnlinePlayerDataWorldComparator<FriendData>)0) {
            uVar1 = param_2->field_136 - param_1->field_136;
        }
        return (ulong)uVar1;
    }

    // 0x1001706b0, 16 bytes, complete-object destructor, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendData>::~OnlinePlayerDataWorldComparator(): jumps straight to the base-object destructor

    // 0x1001706c0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OnlinePlayerDataWorldComparator<FriendData>::~OnlinePlayerDataWorldComparator()
    /* OnlinePlayerDataOnlineComparator<FriendData>::~OnlinePlayerDataOnlineComparator()
    */

    void OnlinePlayerDataOnlineComparator<FriendData>::~OnlinePlayerDataOnlineComparator() {
        ~OnlinePlayerDataOnlineComparator(this);
        operator_delete(this);
    }

    // 0x1001707d0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OnlinePlayerDataWorldComparator<FriendData>::~OnlinePlayerDataWorldComparator()
    /* OnlinePlayerDataOnlineComparator<FriendData>::~OnlinePlayerDataOnlineComparator()
    */

    void OnlinePlayerDataOnlineComparator<FriendData>::~OnlinePlayerDataOnlineComparator() {
        ~ChainablePlayerDataComparator();
    }

    // 0x100174d10, 16 bytes, complete-object constructor, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendChatUser>::OnlinePlayerDataWorldComparator(bool): jumps straight to the base-object constructor

    // 0x100174d30, 48 bytes, base-object constructor, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendChatUser>::OnlinePlayerDataWorldComparator(bool)
    void OnlinePlayerDataWorldComparator<FriendChatUser>::OnlinePlayerDataWorldComparator(bool param_1) {
        new (this) ChainablePlayerDataComparator<FriendChatUser>();
        *(undefined**)this = PTR_vtable_100ee8bc8 + 16;
        this[16] = (OnlinePlayerDataWorldComparator<FriendChatUser>)param_1;
    }

    // 0x100174d90, 48 bytes, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendChatUser>::Compare(FriendChatUser const&, FriendChatUser const&) const
    ulong OnlinePlayerDataWorldComparator<FriendChatUser>::Compare(FriendChatUser* param_1, FriendChatUser* param_2) {
        uint uVar1;
        ulong uVar2;

        uVar1 = param_1->field_136 - param_2->field_136;
        if (uVar1 == 0) {
            uVar2 = GetChainedCompare(param_1, param_2);
            return uVar2;
        }
        if (this[16] == (OnlinePlayerDataWorldComparator<FriendChatUser>)0) {
            uVar1 = param_2->field_136 - param_1->field_136;
        }
        return (ulong)uVar1;
    }

    // 0x100174dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // OnlinePlayerDataWorldComparator<FriendChatUser>::~OnlinePlayerDataWorldComparator(): jumps straight to the base-object destructor

    // 0x100174dd0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OnlinePlayerDataWorldComparator<FriendChatUser>::~OnlinePlayerDataWorldComparator()
    /* OnlinePlayerDataOnlineComparator<FriendChatUser>::~OnlinePlayerDataOnlineComparator()
    */

    void OnlinePlayerDataOnlineComparator<FriendChatUser>::~OnlinePlayerDataOnlineComparator() {
        ~OnlinePlayerDataOnlineComparator(this);
        operator_delete(this);
    }

    // 0x100174ee0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OnlinePlayerDataWorldComparator<FriendChatUser>::~OnlinePlayerDataWorldComparator()
    /* OnlinePlayerDataOnlineComparator<FriendChatUser>::~OnlinePlayerDataOnlineComparator()
    */

    void OnlinePlayerDataOnlineComparator<FriendChatUser>::~OnlinePlayerDataOnlineComparator() {
        ~ChainablePlayerDataComparator();
    }

} // namespace jag::oldscape::social
