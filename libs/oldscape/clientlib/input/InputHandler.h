// libs/oldscape/clientlib/input/InputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::input {
    class InputHandler {
    public:
        InputHandler();
        void DeviceLostFocus();
        void RegisterKeyDown(std::function<bool(int)>* callback);
        void RegisterKeyUp(std::function<bool(int)>* callback);
        void RegisterKeyChar(std::function<bool(int)>* callback);
        void RegisterTextCommand(std::function<bool(TextCommand)>* callback);
        void UnregisterKeyDown(std::function<bool(int)>* callback);
        void UnregisterKeyUp(std::function<bool(int)>* callback);
        void UnregisterKeyChar(std::function<bool(int)>* callback);
        void RegisterLMouseUp(std::function<bool(float, float)>* callback);
        void RegisterLMouseDown(std::function<bool(float, float)>* callback);
        void RegisterMMouseUp(std::function<bool(float, float)>* callback);
        void RegisterMMouseDown(std::function<bool(float, float)>* callback);
        void RegisterRMouseUp(std::function<bool(float, float)>* callback);
        void RegisterRMouseDown(std::function<bool(float, float)>* callback);
        void RegisterMouseMove(std::function<bool(float, float)>* callback);
        void RegisterMouseWheel(std::function<bool(float, float, float, float)>* callback);
        void RegisterLowLevelMouseDown(std::function<bool(int, int, int, int)>* callback);
        void RegisterFirstTouchDown(std::function<bool(unsigned long, float, float)>* callback);
        void RegisterTouchDown(std::function<bool(unsigned long, float, float)>* callback);
        void RegisterTouchMove(std::function<bool(unsigned long, float, float)>* callback);
        void RegisterTouchUp(std::function<bool(unsigned long, float, float)>* callback);
        void UnregisterLMouseUp(std::function<bool(float, float)>* callback);
        void UnregisterLMouseDown(std::function<bool(float, float)>* callback);
        void UnregisterMMouseUp(std::function<bool(float, float)>* callback);
        void UnregisterMMouseDown(std::function<bool(float, float)>* callback);
        void UnregisterRMouseUp(std::function<bool(float, float)>* callback);
        void UnregisterRMouseDown(std::function<bool(float, float)>* callback);
        void UnregisterMouseMove(std::function<bool(float, float)>* callback);
        void UnregisterMouseWheel(std::function<bool(float, float, float, float)>* callback);
        void UnregisterLowLevelMouseDown(std::function<bool(int, int, int, int)>* callback);
        void UnregisterFirstTouchDown(std::function<bool(unsigned long, float, float)>* callback);
        void UnregisterTouchDown(std::function<bool(unsigned long, float, float)>* callback);
        void UnregisterTouchMove(std::function<bool(unsigned long, float, float)>* callback);
        void UnregisterTouchUp(std::function<bool(unsigned long, float, float)>* callback);
        void AddGesture(gesture::GestureBase* gestureBase);
        void RegisterGamepadAxis(std::function<bool(unsigned int, GamepadAxis, short)>* callback);
        void RegisterGamepadButton(std::function<bool(unsigned int, GamepadButton, bool)>* callback);
        void RegisterGamepadTrigger(std::function<bool(unsigned int, GamepadTrigger, unsigned char)>* callback);
        void RegisterTouchCanceled(std::function<bool(unsigned long, float, float)>* callback);
        void UnregisterTouchCanceled(std::function<bool(unsigned long, float, float)>* callback);
        ~InputHandler();
        void Reset();
        void OnLMouseDown(float arg1, float arg2);
        void OnLMouseUp(float arg1, float arg2);
        uint64_t OnMMouseDown(float arg1, float arg2);
        uint64_t OnMMouseUp(float arg1, float arg2);
        uint64_t OnRMouseDown(float arg1, float arg2);
        uint64_t OnRMouseUp(float arg1, float arg2);
        void OnMouseMove(float arg1, float arg2);
        void OnMouseWheel(float arg1, float arg2, float arg3, float arg4);
        void OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        void OnLowLevelMouseMove(int arg1, int arg2, int arg3, int arg4);
        void OnKeyDown(int arg1);
        void OnKeyUp(int arg1);
        void OnKeyChar(int arg1);
        uint64_t OnFirstTouchDown(unsigned long arg1, float arg2, float arg3);
        void OnTouchDown(unsigned long arg1, float arg2, float arg3);
        void OnTouchMove(unsigned long arg1, float arg2, float arg3);
        void OnTouchUp(unsigned long arg1, float arg2, float arg3);
        void OnTouchCanceled(unsigned long arg1, float arg2, float arg3);
        void OnTextCommand(TextCommand textCommand);
        uint32_t OnText(eastl::string str, int arg2);

        uint8_t _unknown_0[2312];
    };

    // 0x100189110
    void InputHandler::DeviceLostFocus() {
        field_2216.ResetTouches();
    }

    // 0x100198f80
    InputHandler::InputHandler() {
        new (&field_8) EventListeners<std::function<bool(float, float)>>();
        new (&field_104) EventListeners<std::function<bool(float, float)>>();
        new (&field_200) EventListeners<std::function<bool(float, float)>>();
        new (&field_296) EventListeners<std::function<bool(float, float)>>();
        new (&field_392) EventListeners<std::function<bool(float, float)>>();
        new (&field_488) EventListeners<std::function<bool(float, float)>>();
        new (&field_584) EventListeners<std::function<bool(float, float)>>();
        new (&field_680) EventListeners<std::function<bool(float, float, float, float)>>();
        new (&field_776) EventListeners<std::function<bool(int)>>();
        new (&field_872) EventListeners<std::function<bool(int)>>();
        new (&field_968) EventListeners<std::function<bool(int)>>();
        new (&field_1064) EventListeners<std::function<bool(unsigned long, float, float)>>();
        new (&field_1160) EventListeners<std::function<bool(unsigned long, float, float)>>();
        new (&field_1256) EventListeners<std::function<bool(unsigned long, float, float)>>();
        new (&field_1352) EventListeners<std::function<bool(unsigned long, float, float)>>();
        new (&field_1448) EventListeners<std::function<bool(unsigned long, float, float)>>();
        new (&field_1544) EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>();
        new (&field_1640) EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>();
        new (&field_1736) EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>();
        new (&field_1832) EventListeners<std::function<bool()>>();
        new (&field_1928) EventListeners<std::function<bool(int, int, int, int)>>();
        new (&field_2024) EventListeners<std::function<bool(int, int, int, int)>>();
        new (&field_2120) EventListeners<std::function<bool(TextCommand)>>();
        new (&field_2216) gesture::GestureManager();
        new (&field_2304) shared_ptr();
    }

    // 0x1003940d0
    void InputHandler::RegisterKeyDown(std::function<bool(int)>* callback) {
        field_776.Register(callback);
    }

    // 0x1003940f0
    void InputHandler::RegisterKeyUp(std::function<bool(int)>* callback) {
        field_872.Register(callback);
    }

    // 0x100394110
    void InputHandler::RegisterKeyChar(std::function<bool(int)>* callback) {
        field_968.Register(callback);
    }

    // 0x100394130
    void InputHandler::RegisterTextCommand(std::function<bool(TextCommand)>* callback) {
        field_2120.Register(callback);
    }

    // 0x100394220
    void InputHandler::UnregisterKeyDown(std::function<bool(int)>* callback) {
        field_776.Unregister(callback);
    }

    // 0x100394240
    void InputHandler::UnregisterKeyUp(std::function<bool(int)>* callback) {
        field_872.Unregister(callback);
    }

    // 0x100394260
    void InputHandler::UnregisterKeyChar(std::function<bool(int)>* callback) {
        field_968.Unregister(callback);
    }

    // 0x100394d40
    void InputHandler::RegisterLMouseUp(std::function<bool(float, float)>* callback) {
        field_104.Register(callback);
    }

    // 0x100394d50
    void InputHandler::RegisterLMouseDown(std::function<bool(float, float)>* callback) {
        field_8.Register(callback);
    }

    // 0x100394d60
    void InputHandler::RegisterMMouseUp(std::function<bool(float, float)>* callback) {
        field_296.Register(callback);
    }

    // 0x100394d80
    void InputHandler::RegisterMMouseDown(std::function<bool(float, float)>* callback) {
        field_200.Register(callback);
    }

    // 0x100394da0
    void InputHandler::RegisterRMouseUp(std::function<bool(float, float)>* callback) {
        field_488.Register(callback);
    }

    // 0x100394dc0
    void InputHandler::RegisterRMouseDown(std::function<bool(float, float)>* callback) {
        field_392.Register(callback);
    }

    // 0x100394de0
    void InputHandler::RegisterMouseMove(std::function<bool(float, float)>* callback) {
        field_584.Register(callback);
    }

    // 0x100394e00
    void InputHandler::RegisterMouseWheel(std::function<bool(float, float, float, float)>* callback) {
        field_680.Register(callback);
    }

    // 0x100394e20
    void InputHandler::RegisterLowLevelMouseDown(std::function<bool(int, int, int, int)>* callback) {
        field_1928.Register(callback);
    }

    // 0x100394fe0
    void InputHandler::RegisterFirstTouchDown(std::function<bool(unsigned long, float, float)>* callback) {
        field_1064.Register(callback);
    }

    // 0x100395000
    void InputHandler::RegisterTouchDown(std::function<bool(unsigned long, float, float)>* callback) {
        field_1160.Register(callback);
    }

    // 0x100395020
    void InputHandler::RegisterTouchMove(std::function<bool(unsigned long, float, float)>* callback) {
        field_1256.Register(callback);
    }

    // 0x100395040
    void InputHandler::RegisterTouchUp(std::function<bool(unsigned long, float, float)>* callback) {
        field_1352.Register(callback);
    }

    // 0x100395150
    void InputHandler::UnregisterLMouseUp(std::function<bool(float, float)>* callback) {
        field_104.Unregister(callback);
    }

    // 0x100395160
    void InputHandler::UnregisterLMouseDown(std::function<bool(float, float)>* callback) {
        field_8.Unregister(callback);
    }

    // 0x100395170
    void InputHandler::UnregisterMMouseUp(std::function<bool(float, float)>* callback) {
        field_296.Unregister(callback);
    }

    // 0x100395190
    void InputHandler::UnregisterMMouseDown(std::function<bool(float, float)>* callback) {
        field_200.Unregister(callback);
    }

    // 0x1003951b0
    void InputHandler::UnregisterRMouseUp(std::function<bool(float, float)>* callback) {
        field_488.Unregister(callback);
    }

    // 0x1003951d0
    void InputHandler::UnregisterRMouseDown(std::function<bool(float, float)>* callback) {
        field_392.Unregister(callback);
    }

    // 0x1003951f0
    void InputHandler::UnregisterMouseMove(std::function<bool(float, float)>* callback) {
        field_584.Unregister(callback);
    }

    // 0x100395210
    void InputHandler::UnregisterMouseWheel(std::function<bool(float, float, float, float)>* callback) {
        field_680.Unregister(callback);
    }

    // 0x100395230
    void InputHandler::UnregisterLowLevelMouseDown(std::function<bool(int, int, int, int)>* callback) {
        field_1928.Unregister(callback);
    }

    // 0x100395250
    void InputHandler::UnregisterFirstTouchDown(std::function<bool(unsigned long, float, float)>* callback) {
        field_1064.Unregister(callback);
    }

    // 0x100395270
    void InputHandler::UnregisterTouchDown(std::function<bool(unsigned long, float, float)>* callback) {
        field_1160.Unregister(callback);
    }

    // 0x100395290
    void InputHandler::UnregisterTouchMove(std::function<bool(unsigned long, float, float)>* callback) {
        field_1256.Unregister(callback);
    }

    // 0x1003952b0
    void InputHandler::UnregisterTouchUp(std::function<bool(unsigned long, float, float)>* callback) {
        field_1352.Unregister(callback);
    }

    // 0x1006839d0
    void InputHandler::AddGesture(gesture::GestureBase* gestureBase) {
        field_2216.AddGesture(gestureBase);
    }

    // 0x1006e24e0
    void InputHandler::RegisterGamepadAxis(std::function<bool(unsigned int, GamepadAxis, short)>* callback) {
        field_1640.Register(callback);
    }

    // 0x1006e2560
    void InputHandler::RegisterGamepadButton(std::function<bool(unsigned int, GamepadButton, bool)>* callback) {
        field_1544.Register(callback);
    }

    // 0x1006e25e0
    void
    InputHandler::RegisterGamepadTrigger(std::function<bool(unsigned int, GamepadTrigger, unsigned char)>* callback) {
        field_1736.Register(callback);
    }

    // 0x100722ce0
    void InputHandler::RegisterTouchCanceled(std::function<bool(unsigned long, float, float)>* callback) {
        field_1448.Register(callback);
    }

    // 0x1007230f0
    void InputHandler::UnregisterTouchCanceled(std::function<bool(unsigned long, float, float)>* callback) {
        field_1448.Unregister(callback);
    }

    // 0x100c9e630
    void InputHandler::OnLMouseDown(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> ___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnLMouseDown(
            float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, in_RSI);
    }

    // 0x100c9e780
    void InputHandler::OnLMouseUp(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnLMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_104, in_RSI);
    }

    // 0x100c9e7e0
    uint64_t InputHandler::OnMMouseDown(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> ___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMMouseDown(
            float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_200, in_RSI);
        return 0;
    }

    // 0x100c9e840
    uint64_t InputHandler::OnMMouseUp(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_296, in_RSI);
        return 0;
    }

    // 0x100c9e8a0
    uint64_t InputHandler::OnRMouseDown(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnRMouseDown(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_392, in_RSI);
        return 0;
    }

    // 0x100c9e900
    uint64_t InputHandler::OnRMouseUp(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnRMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_488, in_RSI);
        return 0;
    }

    // 0x100c9ea20
    void InputHandler::OnMouseMove(float arg1, float arg2) {
        _lambda_std__function<bool_(float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMouseMove(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_584, in_RSI);
    }

    // 0x100c9eb60
    void InputHandler::OnMouseWheel(float arg1, float arg2, float arg3, float arg4) {
        _lambda_std__function<bool_(float, float, float, float)> _const___1_* in_RSI;

        EventListeners<std::function<bool(float, float, float, float)>>::CallListeners<InputHandler::OnMouseWheel(
            float, float, float, float)::_lambda(std::function<bool(float, float, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680, in_RSI);
    }

    // 0x100c9ec70
    void InputHandler::OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4) {
        EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<InputHandler::OnLowLevelMouseDown(
            int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928,
            (_lambda_std__function<bool_(int, int, int, int)> ___1_*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
    }

    // 0x100c9ed90
    void InputHandler::OnLowLevelMouseMove(int arg1, int arg2, int arg3, int arg4) {
        EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<InputHandler::OnLowLevelMouseMove(
            int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_2024,
            (_lambda_std__function<bool_(int, int, int, int)> ___1_*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
    }

    // 0x100c9ee90
    void InputHandler::OnKeyDown(int arg1) {
        uint32_t in_register_00000034;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyDown(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)&field_776,
            (_lambda_std__function<bool_(int)> _const___1_*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x100c9efe0
    void InputHandler::OnKeyUp(int arg1) {
        uint32_t in_register_00000034;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyUp(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)&field_872,
            (_lambda_std__function<bool_(int)> _const___1_*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x100c9f0d0
    void InputHandler::OnKeyChar(int arg1) {
        uint32_t in_register_00000034;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyChar(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)&field_968,
            (_lambda_std__function<bool_(int)> _const___1_*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x100c9f1d0
    uint64_t InputHandler::OnFirstTouchDown(unsigned long arg1, float arg2, float arg3) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnFirstTouchDown(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1064,
            (_lambda_std__function<bool_(unsigned long, float, float)> _const___1_*)arg1);
        return 0;
    }

    // 0x100c9f320
    void InputHandler::OnTouchDown(unsigned long arg1, float arg2, float arg3) {
        field_2216.OnTouchDown(arg1, arg2, arg3);
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchDown(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1160,
            (_lambda_std__function<bool_(unsigned long, float, float)> _const___1_*)arg1);
    }

    // 0x100c9f460
    void InputHandler::OnTouchMove(unsigned long arg1, float arg2, float arg3) {
        field_2216.OnTouchMove(arg1, arg2, arg3);
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchMove(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1256,
            (_lambda_std__function<bool_(unsigned long, float, float)> _const___1_*)arg1);
    }

    // 0x100c9f5a0
    void InputHandler::OnTouchUp(unsigned long arg1, float arg2, float arg3) {
        field_2216.OnTouchUp(arg1, arg2, arg3);
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchUp(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1352,
            (_lambda_std__function<bool_(unsigned long, float, float)> _const___1_*)arg1);
    }

    // 0x100c9f6d0
    void InputHandler::OnTouchCanceled(unsigned long arg1, float arg2, float arg3) {
        field_2216.OnTouchUp(arg1, arg2, arg3);
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchCanceled(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1448,
            (_lambda_std__function<bool_(unsigned long, float, float)> _const___1_*)arg1);
    }

    // 0x100c9f740
    void InputHandler::OnTextCommand(TextCommand textCommand) {
        uint32_t in_register_00000034;

        EventListeners<std::function<bool(TextCommand)>>::CallListeners<InputHandler::OnTextCommand(
            TextCommand)::_lambda(std::function<bool(TextCommand)>&) _1_>(
            (EventListeners<std::function<bool(TextCommand)>>*)&field_2120,
            (_lambda_std__function<bool_(TextCommand)> ___1_*)(((uint64_t)in_register_00000034 << 32) |
                                                               (uint32_t)textCommand));
    }

    // 0x100c9f7f0
    uint32_t InputHandler::OnText(eastl::string str, int arg2) {
        long* plVar2;
        eastl::string local_58;

        shared_ptr local_38 = field_2304.lock();
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(&local_38);
        if ((char)uVar1 != '\0') {
            plVar2 = (long*)local_38.operator->();
            local_58 = eastl::string(*str);
            (**(void (**)(...))(*plVar2 + 16))(plVar2, &local_58, arg2);
        }
        return uVar1;
    }

    // 0x100ca2250
    void InputHandler::OnLMouseDown(float, float)::{
        lambda(std::function<bool(float, float)>&) #1
    }
    ::operator()(std::function<bool(float, float)>& float) const {
        lambda(std::function<bool(float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(float, float)> const___1_* this, function<bool_(float, float)>* callback) {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)callback, *(float*)this,
                                                      *(float*)(this + 4));
        return;
    }

    // 0x100ca2770
    void InputHandler::OnMouseWheel(float, float, float, float)::{
        lambda(std::function<bool(float, float, float, float)> const&) #1
    }
    ::operator()(const std::function<bool(float, float, float, float)>& float) const {
        lambda(std::function<bool(float, float, float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(float, float, float, float)> const___1_* this,
                 function<bool_(float, float, float, float)>* callback) {
        std::function<bool(float, float, float, float)>::operator()(
            (function<bool(float, float, float, float)>*)callback, *(float*)this, *(float*)(this + 4),
            *(float*)(this + 8), *(float*)(this + 12));
        return;
    }

    // 0x100ca28b0
    void InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    }
    ::operator()(std::function<bool(int, int, int, int)>& int) const {
        lambda(std::function<bool(int, int, int, int)>&) #1
    }
    ::operator()(_lambda_std__function<bool(int, int, int, int)> ___1_* this,
                 function<bool_(int, int, int, int)>* callback) {
        std::function<bool(int, int, int, int)>::operator()((function<bool(int, int, int, int)>*)callback, *(int*)this,
                                                            *(int*)(this + 4), *(int*)(this + 8), *(int*)(this + 12));
        return;
    }

    // 0x100ca2a80
    void InputHandler::OnKeyDown(int)::{
        lambda(std::function<bool(int)> const&) #1
    }
    ::operator()(const std::function<bool(int)>& callback) const {
        std::function<bool(int)>::operator()((function<bool(int)>*)callback, *(int*)this);
    }

    // 0x100ca2cf0
    void InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    ::operator()(const std::function<bool(unsigned long, float, float)>& unsigned long) const {
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(unsigned long, float, float)> const___1_* this,
                 function<bool_(unsigned long, float, float)>* callback) {
        std::function<bool(unsigned long, float, float)>::operator()(
            (function<bool(unsigned long, float, float)>*)callback, *(unsigned long*)this, *(float*)(this + 8),
            *(float*)(this + 12));
        return;
    }

    // 0x100ca30d0
    void InputHandler::OnTextCommand(TextCommand)::{
        lambda(std::function<bool(TextCommand)>&) #1
    }
    ::operator()(std::function<bool(TextCommand)>& TextCommand) const {
        lambda(std::function<bool(TextCommand)>&) #1
    }
    ::operator()(_lambda_std__function<bool(TextCommand)> ___1_* this, function<bool_(TextCommand)>* callback) {
        std::function<bool(TextCommand)>::operator()((function<bool(TextCommand)>*)callback, *(TextCommand*)this);
        return;
    }

} // namespace jag::input

namespace jag::oldscape::input {
    class InputHandler {
    public:
        InputHandler();
        InputHandler(const InputHandler& arg1);
    };

    // 0x100127cb0
    InputHandler::InputHandler() {
        field_0 = PTR_vtable_100ee8930 + 16;
    }

    // 0x100127cb0: InputHandler::InputHandler(InputHandler const&) has the same machine code as InputHandler::InputHandler()

} // namespace jag::oldscape::input

namespace jag::oldscape::movement {
    class ExactTileDestination {
    public:
        // virtual methods in vtable order
        virtual bool HasArrived(int arg1, int arg2, int arg3, const CollisionMap& collisionMap) const;
        ExactTileDestination();
        ExactTileDestination(const ExactTileDestination& exactTileDestination);

    private:
        int field_8;
        int field_12;
        uint64_t field_16;
    };

    // 0x100128830
    ExactTileDestination::ExactTileDestination() : RouteDestination() {}

    // 0x100128880
    bool ExactTileDestination::HasArrived(int arg1, int arg2, int arg3, const CollisionMap& collisionMap) const {
        if (field_8 == arg2) {
            return field_12 == arg3;
        }
        return false;
    }

} // namespace jag::oldscape::movement
