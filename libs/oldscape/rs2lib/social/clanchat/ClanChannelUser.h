// libs/oldscape/rs2lib/social/clanchat/ClanChannelUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    // 0x10026b5d0
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelUser* clanChannelUser)
        : ref_counter_base() {}

    // 0x10026b610
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ListNode<console::Console::PendingCommand>*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ListNode();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::social::ClanChannelUser> _vtbl*)((long)&prVar1->_dtor +
                                                                                               1);
                    lVar2 = lVar2 + 96;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10026b9b0
    oldscape::rs2lib::social::ClanChannelDelta::AddUser*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&,
                  long long&>(void* arg1, long long& arg2, eastl::string& str, int& arg4, signed char& arg5,
                              long long& arg6) {

        eastl::string local_50(str);
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::AddUser((long long)arg2, &local_50, arg4, arg5, arg6);
        return arg1;
    }

    // 0x10026ba30
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                  oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanChannelDelta::AddUser*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10026ba60
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::AddUser* addUser)
        : ref_counter_base() {}

    // 0x10026baa0
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<
                              oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails> _vtbl*)((long)&prVar2
                                                                                                         ->_dtor +
                                                                                                     1);
                    lVar1 = lVar1 + 88;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10026bbd0
    oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(void* arg1, int& arg2,
                                                                                                  int& arg3,
                                                                                                  long long& arg4) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::DeleteUser(arg2, arg3, arg4);
        return arg1;
    }

    // 0x10026bbf0
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                  oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10026bc20
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser* deleteUser)
        : ref_counter_base() {}

    // 0x10026bc60
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo> _vtbl*)((long)&prVar2
                                                                                                           ->_dtor +
                                                                                                       1);
                    lVar1 = lVar1 + 48;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10026bcb0
    oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&,
                  eastl::string&, bool&>(void* arg1, int& arg2, signed char& arg3, int& arg4, long long& arg5,
                                         eastl::string& str, bool& arg7) {

        eastl::string local_50(str);
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2((int)arg2, (schar)arg3, (int)arg4,
                                                                                   (long long)arg5, &local_50, arg7);
        return arg1;
    }

    // 0x10026bd30
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>, int,
                  oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*& arg3) {
        new (arg1)
            ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10026bd60
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2* updateUserDetailsV2)
        : ref_counter_base() {}

    // 0x10026bda0
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::sound::DelayedStream> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::sound::DelayedStream> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 96;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10026bdf0
    oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&,
                  signed char&, signed char&>(void* arg1, eastl::string& str, bool& arg3, signed char& arg4,
                                              signed char& arg5) {

        eastl::string local_50(str);
        new (arg1)
            oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings(&local_50, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10026be60
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int,
                  oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(
            (long)*arg2, arg3);
        return arg1;
    }

    // 0x10026be90
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::ref_counter_shared(
        unsigned long arg1,
        oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings* updateClanChannelBaseSettings)
        : ref_counter_base() {}

    // 0x10026bed0
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<
                              oldscape::rs2lib::social::ClanSettingsDelta::AddBanned> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 72;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10026bf20
    oldscape::rs2lib::social::ClanChannelDelta::AddUser*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::AddUser();
        return arg1;
    }

    // 0x10026c020
    oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings();
        return arg1;
    }

    // 0x10026c090
    oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::DeleteUser();
        return arg1;
    }

    // 0x10026c0f0
    oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails();
        return arg1;
    }

    // 0x10026c110
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>, int,
                  oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10026c1a0
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails* updateUserDetails)
        : ref_counter_base() {}

    // 0x10026c1e0
    oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2();
        return arg1;
    }

    // 0x10026c380
    oldscape::rs2lib::social::ClanSettings* placement_new<oldscape::rs2lib::social::ClanSettings>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettings();
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::rs2lib::social {
    class ClanChannelUser {
    public:
        void UserHash();
        ClanChannelUser();
        ~ClanChannelUser();

        uint8_t _unknown_0[24];
    };

    // 0x100009d10: ClanChannelUser::UserHash() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10026b5b0
    ClanChannelUser::ClanChannelUser() {
        new (&field_16) DisplayName();
    }

    // 0x10026b6d0
    ClanChannelUser::~ClanChannelUser() {
        ((this + 16))->~pair();
    }

} // namespace jag::oldscape::rs2lib::social
