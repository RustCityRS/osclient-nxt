// libs/oldscape/rs2lib/social/clanchat/ClanChannelUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    // 0x10026b5c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelUser*): jumps straight to the base-object constructor

    // 0x10026b5d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelUser*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::ref_counter_shared(ulong param_1,
                                                                                           ClanChannelUser* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7848 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClanChannelUser**)(this + 24) = param_2;
    }

    // 0x10026b610, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ListNode();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 96;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10026b9b0, 128 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::AddUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&, long long&>(void*, long long&, eastl::string&, int&, signed char&, long long&)
    AddUser* jag::placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&,
                                signed char&, long long&>(void* param_1, longlong* param_2, basic_string* param_3,
                                                          int* param_4, signed* param_5, longlong* param_6) {
        longlong lVar1;
        eastl::string local_50[32];

        lVar1 = *param_2;
        eastl::string::basic_string(local_50, param_3);
        oldscape::rs2lib::social::ClanChannelDelta::AddUser::AddUser(param_1, lVar1, local_50, *param_4,
                                                                     (int)(char)*param_5, *param_6);
        eastl::string::~basic_string(local_50);
        return param_1;
    }

    // 0x10026ba30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int, oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta::AddUser*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                                           oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(void* param_1,
                                                                                                  int* param_2,
                                                                                                  AddUser** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10026ba50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::AddUser*): jumps straight to the base-object constructor

    // 0x10026ba60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::AddUser*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::ref_counter_shared(ulong param_1,
                                                                                                     AddUser* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7870 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AddUser**)(this + 24) = param_2;
    }

    // 0x10026baa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::DeleteData()
    */

    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 88;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10026bbd0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::DeleteUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(void*, int&, int&, long long&)
    DeleteUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(
        void* param_1, int* param_2, int* param_3, longlong* param_4) {
        oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::DeleteUser(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x10026bbf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                       oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(void* param_1, int* param_2,
                                                                                 DeleteUser** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10026bc10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*): jumps straight to the base-object constructor

    // 0x10026bc20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::ref_counter_shared(
        ulong param_1, DeleteUser* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7850 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DeleteUser**)(this + 24) = param_2;
    }

    // 0x10026bc60, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::DeleteData()
    */

    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 48;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10026bcb0, 128 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&, eastl::string&, bool&>(void*, int&, signed char&, int&, long long&, eastl::string&, bool&)
    UpdateUserDetailsV2*
    jag::placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&,
                       long long&, eastl::string&, bool&>(void* param_1, int* param_2, signed* param_3, int* param_4,
                                                          longlong* param_5, basic_string* param_6, bool* param_7) {
        signed sVar1;
        int iVar2;
        int iVar3;
        longlong lVar4;
        eastl::string local_50[32];

        iVar2 = *param_2;
        sVar1 = *param_3;
        iVar3 = *param_4;
        lVar4 = *param_5;
        eastl::string::basic_string(local_50, param_6);
        oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(
            param_1, iVar2, (int)(char)sVar1, iVar3, lVar4, local_50, *param_7);
        eastl::string::~basic_string(local_50);
        return param_1;
    }

    // 0x10026bd30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>, int, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>, int,
                       oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(
        void* param_1, int* param_2, UpdateUserDetailsV2** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10026bd50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*): jumps straight to the base-object constructor

    // 0x10026bd60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::ref_counter_shared(
        ulong param_1, UpdateUserDetailsV2* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7860 + 16;
        *(ulong*)(this + 16) = param_1;
        *(UpdateUserDetailsV2**)(this + 24) = param_2;
    }

    // 0x10026bda0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::DeleteData()
    /* ref_counter_shared<oldscape::sound::DelayedStream>::DeleteData() */

    void ref_counter_shared<oldscape::sound::DelayedStream>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 96;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10026bdf0, 112 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&, signed char&, signed char&>(void*, eastl::string&, bool&, signed char&, signed char&)
    UpdateClanChannelBaseSettings*
    jag::placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&,
                       signed char&, signed char&>(void* param_1, basic_string* param_2, bool* param_3, signed* param_4,
                                                   signed* param_5) {
        eastl::string local_50[32];

        eastl::string::basic_string(local_50, param_2);
        oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(
            param_1, local_50, *param_3, (int)(char)*param_4, (int)(char)*param_5);
        eastl::string::~basic_string(local_50);
        return param_1;
    }

    // 0x10026be60, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>,
                       int, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(
        void* param_1, int* param_2, UpdateClanChannelBaseSettings** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::
            ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10026be80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*): jumps straight to the base-object constructor

    // 0x10026be90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*)
    void jag::ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::
        ref_counter_shared(ulong param_1, UpdateClanChannelBaseSettings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7868 + 16;
        *(ulong*)(this + 16) = param_1;
        *(UpdateClanChannelBaseSettings**)(this + 24) = param_2;
    }

    // 0x10026bed0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::DeleteData()
    */

    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 72;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10026bf20, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::AddUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser>(void*)
    AddUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser>(void* param_1) {
        oldscape::rs2lib::social::ClanChannelDelta::AddUser::AddUser(param_1);
        return param_1;
    }

    // 0x10026c020, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(void*)
    UpdateClanChannelBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(void* param_1) {
        oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(
            param_1);
        return param_1;
    }

    // 0x10026c090, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::DeleteUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>(void*)
    DeleteUser* placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>(void* param_1) {
        oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::DeleteUser(param_1);
        return param_1;
    }

    // 0x10026c0f0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>(void*)
    UpdateUserDetails* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>(void* param_1) {
        oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(param_1);
        return param_1;
    }

    // 0x10026c110, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>, int, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>, int,
                       oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&>(void* param_1, int* param_2,
                                                                                        UpdateUserDetails** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10026c190, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*): jumps straight to the base-object constructor

    // 0x10026c1a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::ref_counter_shared(
        ulong param_1, UpdateUserDetails* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7858 + 16;
        *(ulong*)(this + 16) = param_1;
        *(UpdateUserDetails**)(this + 24) = param_2;
    }

    // 0x10026c1e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>(void*)
    UpdateUserDetailsV2* placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>(void* param_1) {
        oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(param_1);
        return param_1;
    }

    // 0x10026c380, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanSettings* placement_new<oldscape::rs2lib::social::ClanSettings>(void*)
    ClanSettings* placement_new<oldscape::rs2lib::social::ClanSettings>(void* param_1) {
        oldscape::rs2lib::social::ClanSettings::ClanSettings(param_1);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::rs2lib::social {
    class ClanChannelUser {
    public:
        UserHash();
        ClanChannelUser();
        ~ClanChannelUser();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ClanChannelUser::UserHash();

    // 0x10026b5a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClanChannelUser::ClanChannelUser(): jumps straight to the base-object constructor

    // 0x10026b5b0, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // ClanChannelUser::ClanChannelUser()
    void ClanChannelUser::ClanChannelUser() {
        new (&field_16) DisplayName();
    }

    // 0x10026b6c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClanChannelUser::~ClanChannelUser(): jumps straight to the base-object destructor

    // 0x10026b6d0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanChannelUser::~ClanChannelUser()
    /* eastl::ListNode<console::Console::PendingCommand>::~ListNode() */

    void eastl::ListNode<console::Console::PendingCommand>::~ListNode() {
        ((this + 16))->~pair();
    }

} // namespace jag::oldscape::rs2lib::social
