// libs/oldscape/clientlib/input/softkeyboard/SoftKeyboardListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LoginState {
    public:
        ~LoginState();
        LoginState(const eastl::string& str, bool arg2, bool arg3);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[36];
        bool field_40;
        bool field_41;
        uint8_t _unknown_42[6];
        ClientMessage field_48;
        uint8_t _unknown_112[8];
        uint32_t field_120;
        uint8_t _unknown_124[4];
        uint32_t field_128;
        uint8_t _unknown_132[324];
    };

    class LoginState_AllowLoginResult {
    public:
        ~LoginState_AllowLoginResult();
        LoginState_AllowLoginResult();

        uint8_t _unknown_0[1];
    };

    class LoginState_Common {
    public:
        ~LoginState_Common();
        LoginState_Common(const eastl::string& str, bool arg2, bool arg3);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[36];
        bool field_40;
        bool field_41;
        uint8_t _unknown_42[6];
        ClientMessage field_48;
        uint8_t _unknown_112[8];
        uint32_t field_120;
        uint8_t _unknown_124[4];
        uint32_t field_128;
        uint8_t _unknown_132[4];
    };

    class LoginState_OneTimeLoginToken {
    public:
        ~LoginState_OneTimeLoginToken();
        LoginState_OneTimeLoginToken();

        uint8_t _unknown_0[136];
    };

    class LoginState_ReconnectPacket {
    public:
        ~LoginState_ReconnectPacket();
        LoginState_ReconnectPacket();

        uint8_t _unknown_0[1];
    };

    // 0x10014f1b0
    InterfaceMouseEvent::InterfaceMouseEvent(InterfaceMouseEvent&& interfaceMouseEvent)
        : field_8(interfaceMouseEvent.field_8), field_0(interfaceMouseEvent.field_0) {
        field_16.shared_ptr<FileRSevenDebugPresetProvider, void>(interfaceMouseEvent.field_16);
    }

    // 0x100150410
    LoginState::LoginState(const eastl::string& str, bool arg2, bool arg3) : LoginState_Common(str, arg2, arg3) {}

    // 0x100150490
    LoginState_Common::LoginState_Common(const eastl::string& str, bool arg2, bool arg3)
        : field_0(0), field_8(str), field_40(arg2), field_41(arg3), field_120(0), field_128(4294967295) {}

    // 0x100150510
    LoginState_OneTimeLoginToken::LoginState_OneTimeLoginToken() : eastl::string() {}

    // 0x1001505a0
    LoginState_AllowLoginResult::LoginState_AllowLoginResult() : std::array<eastl::string, 3ul>() {}

    // 0x1001505b0
    LoginState_ReconnectPacket::LoginState_ReconnectPacket() : shared::ClientMessage() {}

} // namespace jag::oldscape

namespace jag {
    // 0x10014dea0
    ref_counter_shared<oldscape::DesktopApplicationContext>::ref_counter_shared(
        unsigned long arg1, oldscape::DesktopApplicationContext* desktopApplicationContext)
        : ref_counter_base() {}

    // 0x10014dee0
    void ref_counter_shared<oldscape::DesktopApplicationContext>::DeleteData() {
        ref_counter_shared<oldscape::DesktopApplicationContext> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((DesktopApplicationContext*)((long)&(this[3]._vptr)->_dtor + lVar2))->~DesktopApplicationContext();
                    prVar1 = (ref_counter_shared<oldscape::DesktopApplicationContext> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 96;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10014e180: EntityWaypoint::GetTranslation() const has the same machine code as math::Vector2T<float>::y() const

    // 0x1001515d0
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool,
                                           shared_ptr<oldscape::dash3d::ModelSource>&, int&>(
        void* arg1, int& arg2, int&& arg3, int&& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool&& arg9,
        shared_ptr<oldscape::dash3d::ModelSource>& modelSource, int& arg11) {

        shared_ptr<oldscape::dash3d::Decor> local_58(modelSource);
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100151690
    ref_counter_shared<oldscape::ClientLocAnim>*
    placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
        void* arg1, int&& arg2, oldscape::ClientLocAnim*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientLocAnim>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001516c0
    ref_counter_shared<oldscape::ClientLocAnim>::ref_counter_shared(unsigned long arg1,
                                                                    oldscape::ClientLocAnim* clientLocAnim)
        : ref_counter_base() {}

    // 0x100151700
    void ref_counter_shared<oldscape::ClientLocAnim>::DeleteData() {
        ref_counter_shared<oldscape::ClientLocAnim> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientLocAnim*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientLocAnim();
                    prVar1 = (ref_counter_shared<oldscape::ClientLocAnim> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::input {
    class SoftKeyboardListener {
    public:
        SoftKeyboardListener();

    private:
        uint8_t** field_0;
    };

    // 0x10014de50
    SoftKeyboardListener::SoftKeyboardListener() : InputListener() {}

} // namespace jag::oldscape::input

namespace jag::math {
    // 0x10014e180
    Vector2T<int>* Vector2T<float>::y() const {
        return this + 4;
    }

    // 0x10014e190
    Vector2T<float>::Vector2T<int>(const Vector2T<int>& vector2) {
        int* piVar1 = (int*)vector2.SSOBeginPtr();
        *(float*)this = (float)*piVar1;
        piVar1 = (int*)vector2.y();
        *(float*)(this + 4) = (float)*piVar1;
    }

} // namespace jag::math

namespace jag::game {
    // 0x10014e180: EnvLightingSettings::GetSunPosition() const has the same machine code as math::Vector2T<float>::y() const

    // 0x10014e180: EnvLightProbeSettings::GetPosOffset() const has the same machine code as math::Vector2T<float>::y() const

} // namespace jag::game
