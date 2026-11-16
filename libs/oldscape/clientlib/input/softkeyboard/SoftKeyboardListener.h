// libs/oldscape/clientlib/input/softkeyboard/SoftKeyboardListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LoginState {
    public:
        ~LoginState();
        LoginState(eastl::string const&, bool, bool);

        // data members, from how the methods use this: 456 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[36];
        bool field_40; // offset 40
        bool field_41; // offset 41
        char _unknown_42[6];
        ClientMessage field_48; // offset 48
        char _unknown_112[8];
        undefined4 field_120; // offset 120
        char _unknown_124[4];
        undefined4 field_128; // offset 128
        char _unknown_132[324];
    };

    class LoginState_AllowLoginResult {
    public:
        ~LoginState_AllowLoginResult();
        LoginState_AllowLoginResult();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class LoginState_Common {
    public:
        ~LoginState_Common();
        LoginState_Common(eastl::string const&, bool, bool);

        // data members, from how the methods use this: 136 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[36];
        bool field_40; // offset 40
        bool field_41; // offset 41
        char _unknown_42[6];
        ClientMessage field_48; // offset 48
        char _unknown_112[8];
        undefined4 field_120; // offset 120
        char _unknown_124[4];
        undefined4 field_128; // offset 128
        char _unknown_132[4];
    };

    class LoginState_OneTimeLoginToken {
    public:
        ~LoginState_OneTimeLoginToken();
        LoginState_OneTimeLoginToken();

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[136];
    };

    class LoginState_ReconnectPacket {
    public:
        ~LoginState_ReconnectPacket();
        LoginState_ReconnectPacket();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10014f1a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent&&): jumps straight to the base-object constructor

    // 0x10014f1b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent&&)
    void InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
    }

    // 0x1001503f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LoginState::LoginState(eastl::string const&, bool, bool): jumps straight to the base-object constructor

    // 0x100150410, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoginState::LoginState(eastl::string const&, bool, bool)
    void LoginState::LoginState(basic_string* param_1, bool param_2, bool param_3) {
        new (this) LoginState_Common(param_1, param_2, param_3);
        new (&field_136) LoginState_OneTimeLoginToken();
        new (&field_296) LoginState_AllowLoginResult();
        new (&field_448) LoginState_ReconnectPacket();
    }

    // 0x100150490, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoginState_Common::LoginState_Common(eastl::string const&, bool, bool)
    void LoginState_Common::LoginState_Common(basic_string* param_1, bool param_2, bool param_3) {
        field_0 = 0;
        new (&field_8, param_1) eastl::string();
        field_40 = param_2;
        field_41 = param_3;
        new (field_48) shared::ClientMessage();
        field_120 = 0;
        new (&field_124) callstack::Callstack();
        field_128 = 4294967295;
    }

    // 0x100150510, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoginState_OneTimeLoginToken::LoginState_OneTimeLoginToken()
    void LoginState_OneTimeLoginToken::LoginState_OneTimeLoginToken() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
        new (&field_64) eastl::string();
        new (&field_96) eastl::string();
        new (&field_128) eastl::string();
    }

    // 0x1001505a0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoginState_AllowLoginResult::LoginState_AllowLoginResult()
    void LoginState_AllowLoginResult::LoginState_AllowLoginResult() {
        new (this) std::array<eastl::string, 3ul>();
    }

    // 0x1001505b0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoginState_ReconnectPacket::LoginState_ReconnectPacket()
    void LoginState_ReconnectPacket::LoginState_ReconnectPacket() {
        new (this) shared::ClientMessage();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10014de90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::DesktopApplicationContext>::ref_counter_shared(unsigned long, oldscape::DesktopApplicationContext*): jumps straight to the base-object constructor

    // 0x10014dea0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::DesktopApplicationContext>::ref_counter_shared(unsigned long, oldscape::DesktopApplicationContext*)
    void
    ref_counter_shared<oldscape::DesktopApplicationContext>::ref_counter_shared(ulong param_1,
                                                                                DesktopApplicationContext* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7658 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DesktopApplicationContext**)(this + 24) = param_2;
    }

    // 0x10014dee0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::DesktopApplicationContext>::DeleteData()
    void ref_counter_shared<oldscape::DesktopApplicationContext>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~DesktopApplicationContext();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 96;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    EntityWaypoint::GetTranslation() const;

    // 0x1001515d0, 192 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool, shared_ptr<oldscape::dash3d::ModelSource>&, int&>(void*, int&, int&&, int&&, int&, int&, int&, int&, bool&&, shared_ptr<oldscape::dash3d::ModelSource>&, int&)
    ClientLocAnim* jag::placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                      shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        bool* param_9, shared_ptr* param_10, int* param_11) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr sVar4;
        undefined4 in_stack_ffffffffffffff9c;
        int in_stack_ffffffffffffffa0;
        shared_ptr<oldscape::dash3d::Decor> local_58[20];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = *param_2;
        local_40 = *param_3;
        local_3c = *param_4;
        local_38 = *param_5;
        local_34 = *param_6;
        iVar2 = *param_7;
        iVar3 = *param_8;
        bVar1 = *param_9;
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, param_10);
        sVar4.field_8._0_4_ = *param_11;
        sVar4._0_8_ = local_58;
        sVar4.field_8._4_4_ = in_stack_ffffffffffffff9c;
        oldscape::ClientLocAnim::ClientLocAnim(param_1, local_44, local_40, local_3c, local_38, local_34, iVar2, iVar3,
                                               bVar1, sVar4, in_stack_ffffffffffffffa0);
        local_58->~shared_ptr();
        return param_1;
    }

    // 0x100151690, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientLocAnim>* placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(void*, int&&, oldscape::ClientLocAnim*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
        void* param_1, int* param_2, ClientLocAnim** param_3) {
        ref_counter_shared<oldscape::ClientLocAnim>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001516b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientLocAnim>::ref_counter_shared(unsigned long, oldscape::ClientLocAnim*): jumps straight to the base-object constructor

    // 0x1001516c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientLocAnim>::ref_counter_shared(unsigned long, oldscape::ClientLocAnim*)
    void ref_counter_shared<oldscape::ClientLocAnim>::ref_counter_shared(ulong param_1, ClientLocAnim* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientLocAnim**)(this + 24) = param_2;
    }

    // 0x100151700, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientLocAnim>::DeleteData()
    void ref_counter_shared<oldscape::ClientLocAnim>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientLocAnim();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::input {
    class SoftKeyboardListener {
    public:
        SoftKeyboardListener();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0
    };

    // 0x10014de40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SoftKeyboardListener::SoftKeyboardListener(): jumps straight to the base-object constructor

    // 0x10014de50, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // SoftKeyboardListener::SoftKeyboardListener()
    void SoftKeyboardListener::SoftKeyboardListener() {
        new (this) InputListener();
    }

} // namespace jag::oldscape::input

namespace jag::math {
    // 0x10014e180, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::y() const
    /* Vector2T<int>::y() const */

    Vector2T<int>* Vector2T<int>::y() {
        return this + 4;
    }

    // 0x10014e190, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T<int>(Vector2T<int> const&)
    void Vector2T<float>::Vector2T<int>(Vector2T* param_1) {
        vector* pvVar1;
        int* piVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(float*)this = (float)*(int*)pvVar1;
        piVar2 = (int*)param_1->y();
        *(float*)(this + 4) = (float)*piVar2;
    }

} // namespace jag::math

namespace jag::game {
    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    EnvLightingSettings::GetSunPosition() const;

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    EnvLightProbeSettings::GetPosOffset() const;

} // namespace jag::game
