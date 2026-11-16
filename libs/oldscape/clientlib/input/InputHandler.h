// libs/oldscape/clientlib/input/InputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::input {
    class InputHandler {
    public:
        InputHandler();
        void DeviceLostFocus();
        void RegisterKeyDown(std::function<bool(int)>*);
        void RegisterKeyUp(std::function<bool(int)>*);
        void RegisterKeyChar(std::function<bool(int)>*);
        void RegisterTextCommand(std::function<bool(TextCommand)>*);
        void UnregisterKeyDown(std::function<bool(int)>*);
        void UnregisterKeyUp(std::function<bool(int)>*);
        void UnregisterKeyChar(std::function<bool(int)>*);
        void RegisterLMouseUp(std::function<bool(float, float)>*);
        void RegisterLMouseDown(std::function<bool(float, float)>*);
        void RegisterMMouseUp(std::function<bool(float, float)>*);
        void RegisterMMouseDown(std::function<bool(float, float)>*);
        void RegisterRMouseUp(std::function<bool(float, float)>*);
        void RegisterRMouseDown(std::function<bool(float, float)>*);
        void RegisterMouseMove(std::function<bool(float, float)>*);
        void RegisterMouseWheel(std::function<bool(float, float, float, float)>*);
        void RegisterLowLevelMouseDown(std::function<bool(int, int, int, int)>*);
        void RegisterFirstTouchDown(std::function<bool(unsigned long, float, float)>*);
        void RegisterTouchDown(std::function<bool(unsigned long, float, float)>*);
        void RegisterTouchMove(std::function<bool(unsigned long, float, float)>*);
        void RegisterTouchUp(std::function<bool(unsigned long, float, float)>*);
        void UnregisterLMouseUp(std::function<bool(float, float)>*);
        void UnregisterLMouseDown(std::function<bool(float, float)>*);
        void UnregisterMMouseUp(std::function<bool(float, float)>*);
        void UnregisterMMouseDown(std::function<bool(float, float)>*);
        void UnregisterRMouseUp(std::function<bool(float, float)>*);
        void UnregisterRMouseDown(std::function<bool(float, float)>*);
        void UnregisterMouseMove(std::function<bool(float, float)>*);
        void UnregisterMouseWheel(std::function<bool(float, float, float, float)>*);
        void UnregisterLowLevelMouseDown(std::function<bool(int, int, int, int)>*);
        void UnregisterFirstTouchDown(std::function<bool(unsigned long, float, float)>*);
        void UnregisterTouchDown(std::function<bool(unsigned long, float, float)>*);
        void UnregisterTouchMove(std::function<bool(unsigned long, float, float)>*);
        void UnregisterTouchUp(std::function<bool(unsigned long, float, float)>*);
        void AddGesture(gesture::GestureBase*);
        void RegisterGamepadAxis(std::function<bool(unsigned int, GamepadAxis, short)>*);
        void RegisterGamepadButton(std::function<bool(unsigned int, GamepadButton, bool)>*);
        void RegisterGamepadTrigger(std::function<bool(unsigned int, GamepadTrigger, unsigned char)>*);
        void RegisterTouchCanceled(std::function<bool(unsigned long, float, float)>*);
        void UnregisterTouchCanceled(std::function<bool(unsigned long, float, float)>*);
        ~InputHandler();
        void Reset();
        void OnLMouseDown(float, float);
        void OnLMouseUp(float, float);
        OnMMouseDown(float, float);
        OnMMouseUp(float, float);
        OnRMouseDown(float, float);
        OnRMouseUp(float, float);
        void OnMouseMove(float, float);
        void OnMouseWheel(float, float, float, float);
        void OnLowLevelMouseDown(int, int, int, int);
        void OnLowLevelMouseMove(int, int, int, int);
        void OnKeyDown(int);
        void OnKeyUp(int);
        void OnKeyChar(int);
        OnFirstTouchDown(unsigned long, float, float);
        void OnTouchDown(unsigned long, float, float);
        void OnTouchMove(unsigned long, float, float);
        void OnTouchUp(unsigned long, float, float);
        void OnTouchCanceled(unsigned long, float, float);
        void OnTextCommand(TextCommand);
        ulong OnText(eastl::string, int);

        // data members, from how the methods use this: 2312 bytes
        char _unknown_0[680];
        undefined1 field_680; // offset 680
        char _unknown_681[479];
        undefined1 field_1160; // offset 1160
        char _unknown_1161[95];
        undefined1 field_1256; // offset 1256
        char _unknown_1257[95];
        undefined1 field_1352; // offset 1352
        char _unknown_1353[95];
        undefined1 field_1448; // offset 1448
        char _unknown_1449[863];
    };

    // 0x100187940, 16 bytes, complete-object constructor, inline, placed by class name
    // InputHandler::InputHandler(): jumps straight to the base-object constructor

    // 0x100189110, 32 bytes, inline, placed by class name
    // InputHandler::DeviceLostFocus()
    void InputHandler::DeviceLostFocus() {
        (&field_2216)->ResetTouches();
    }

    // 0x100198f80, 896 bytes, base-object constructor, inline, placed by class name
    // InputHandler::InputHandler()
    void InputHandler::InputHandler() {
        _func_decltype_nullptr* in_RSI;

        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_8);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_104);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_200);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_296);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_392);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_488);
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_584);
        EventListeners<std::function<bool(float, float, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680);
        EventListeners<std::function<bool(int)>>::EventListeners((EventListeners<std::function<bool(int)>>*)&field_776);
        EventListeners<std::function<bool(int)>>::EventListeners((EventListeners<std::function<bool(int)>>*)&field_872);
        EventListeners<std::function<bool(int)>>::EventListeners((EventListeners<std::function<bool(int)>>*)&field_968);
        EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1064);
        EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1160);
        EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1256);
        EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1352);
        EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1448);
        EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>*)&field_1544);
        EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>*)&field_1640);
        EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>::EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>*)&field_1736);
        EventListeners<std::function<bool()>>::EventListeners((EventListeners<std::function<bool()>>*)&field_1832);
        EventListeners<std::function<bool(int, int, int, int)>>::EventListeners(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928);
        EventListeners<std::function<bool(int, int, int, int)>>::EventListeners(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_2024);
        EventListeners<std::function<bool(TextCommand)>>::EventListeners(
            (EventListeners<std::function<bool(TextCommand)>>*)&field_2120);
        new (&field_2216) gesture::GestureManager();
        new (&field_2304, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003940d0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterKeyDown(std::function<bool (int)>*)
    /* InputHandler::RegisterKeyDown(std::function<bool (int)>*) */

    void InputHandler::RegisterKeyDown(function* param_1) {
        EventListeners<std::function<bool(int)>>::Register((EventListeners<std::function<bool(int)>>*)&field_776,
                                                           param_1);
    }

    // 0x1003940f0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterKeyUp(std::function<bool (int)>*)
    /* InputHandler::RegisterKeyUp(std::function<bool (int)>*) */

    void InputHandler::RegisterKeyUp(function* param_1) {
        EventListeners<std::function<bool(int)>>::Register((EventListeners<std::function<bool(int)>>*)&field_872,
                                                           param_1);
    }

    // 0x100394110, 32 bytes, inline, placed by class name
    // InputHandler::RegisterKeyChar(std::function<bool (int)>*)
    /* InputHandler::RegisterKeyChar(std::function<bool (int)>*) */

    void InputHandler::RegisterKeyChar(function* param_1) {
        EventListeners<std::function<bool(int)>>::Register((EventListeners<std::function<bool(int)>>*)&field_968,
                                                           param_1);
    }

    // 0x100394130, 32 bytes, inline, placed by class name
    // InputHandler::RegisterTextCommand(std::function<bool (TextCommand)>*)
    /* InputHandler::RegisterTextCommand(std::function<bool (TextCommand)>*) */

    void InputHandler::RegisterTextCommand(function* param_1) {
        EventListeners<std::function<bool(TextCommand)>>::Register(
            (EventListeners<std::function<bool(TextCommand)>>*)&field_2120, param_1);
    }

    // 0x100394220, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterKeyDown(std::function<bool (int)>*)
    /* InputHandler::UnregisterKeyDown(std::function<bool (int)>*) */

    void InputHandler::UnregisterKeyDown(function* param_1) {
        EventListeners<std::function<bool(int)>>::Unregister((EventListeners<std::function<bool(int)>>*)&field_776,
                                                             param_1);
    }

    // 0x100394240, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterKeyUp(std::function<bool (int)>*)
    /* InputHandler::UnregisterKeyUp(std::function<bool (int)>*) */

    void InputHandler::UnregisterKeyUp(function* param_1) {
        EventListeners<std::function<bool(int)>>::Unregister((EventListeners<std::function<bool(int)>>*)&field_872,
                                                             param_1);
    }

    // 0x100394260, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterKeyChar(std::function<bool (int)>*)
    /* InputHandler::UnregisterKeyChar(std::function<bool (int)>*) */

    void InputHandler::UnregisterKeyChar(function* param_1) {
        EventListeners<std::function<bool(int)>>::Unregister((EventListeners<std::function<bool(int)>>*)&field_968,
                                                             param_1);
    }

    // 0x100394d40, 16 bytes, inline, placed by class name
    // InputHandler::RegisterLMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::RegisterLMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::RegisterLMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_104, param_1);
    }

    // 0x100394d50, 16 bytes, inline, placed by class name
    // InputHandler::RegisterLMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::RegisterLMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::RegisterLMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, param_1);
    }

    // 0x100394d60, 32 bytes, inline, placed by class name
    // InputHandler::RegisterMMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::RegisterMMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::RegisterMMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_296, param_1);
    }

    // 0x100394d80, 32 bytes, inline, placed by class name
    // InputHandler::RegisterMMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::RegisterMMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::RegisterMMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_200, param_1);
    }

    // 0x100394da0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterRMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::RegisterRMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::RegisterRMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_488, param_1);
    }

    // 0x100394dc0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterRMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::RegisterRMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::RegisterRMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_392, param_1);
    }

    // 0x100394de0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterMouseMove(std::function<bool (float, float)>*)
    /* InputHandler::RegisterMouseMove(std::function<bool (float, float)>*) */

    void InputHandler::RegisterMouseMove(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Register(
            (EventListeners<std::function<bool(float, float)>>*)&field_584, param_1);
    }

    // 0x100394e00, 32 bytes, inline, placed by class name
    // InputHandler::RegisterMouseWheel(std::function<bool (float, float, float, float)>*)
    /* InputHandler::RegisterMouseWheel(std::function<bool (float, float, float, float)>*)
    */

    void InputHandler::RegisterMouseWheel(function* param_1) {
        EventListeners<std::function<bool(float, float, float, float)>>::Register(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680, param_1);
    }

    // 0x100394e20, 32 bytes, inline, placed by class name
    // InputHandler::RegisterLowLevelMouseDown(std::function<bool (int, int, int, int)>*)
    /* InputHandler::RegisterLowLevelMouseDown(std::function<bool (int, int, int, int)>*) */

    void InputHandler::RegisterLowLevelMouseDown(function* param_1) {
        EventListeners<std::function<bool(int, int, int, int)>>::Register(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928, param_1);
    }

    // 0x100394fe0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterFirstTouchDown(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::RegisterFirstTouchDown(std::function<bool (unsigned long, float,
   float)>*) */

    void InputHandler::RegisterFirstTouchDown(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1064, param_1);
    }

    // 0x100395000, 32 bytes, inline, placed by class name
    // InputHandler::RegisterTouchDown(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::RegisterTouchDown(std::function<bool (unsigned long, float, float)>*)
    */

    void InputHandler::RegisterTouchDown(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1160, param_1);
    }

    // 0x100395020, 32 bytes, inline, placed by class name
    // InputHandler::RegisterTouchMove(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::RegisterTouchMove(std::function<bool (unsigned long, float, float)>*)
    */

    void InputHandler::RegisterTouchMove(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1256, param_1);
    }

    // 0x100395040, 32 bytes, inline, placed by class name
    // InputHandler::RegisterTouchUp(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::RegisterTouchUp(std::function<bool (unsigned long, float, float)>*) */

    void InputHandler::RegisterTouchUp(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1352, param_1);
    }

    // 0x100395150, 16 bytes, inline, placed by class name
    // InputHandler::UnregisterLMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterLMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterLMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_104, param_1);
    }

    // 0x100395160, 16 bytes, inline, placed by class name
    // InputHandler::UnregisterLMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterLMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterLMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_8, param_1);
    }

    // 0x100395170, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterMMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterMMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterMMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_296, param_1);
    }

    // 0x100395190, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterMMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterMMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterMMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_200, param_1);
    }

    // 0x1003951b0, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterRMouseUp(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterRMouseUp(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterRMouseUp(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_488, param_1);
    }

    // 0x1003951d0, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterRMouseDown(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterRMouseDown(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterRMouseDown(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_392, param_1);
    }

    // 0x1003951f0, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterMouseMove(std::function<bool (float, float)>*)
    /* InputHandler::UnregisterMouseMove(std::function<bool (float, float)>*) */

    void InputHandler::UnregisterMouseMove(function* param_1) {
        EventListeners<std::function<bool(float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float)>>*)&field_584, param_1);
    }

    // 0x100395210, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterMouseWheel(std::function<bool (float, float, float, float)>*)
    /* InputHandler::UnregisterMouseWheel(std::function<bool (float, float, float, float)>*)
    */

    void InputHandler::UnregisterMouseWheel(function* param_1) {
        EventListeners<std::function<bool(float, float, float, float)>>::Unregister(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680, param_1);
    }

    // 0x100395230, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterLowLevelMouseDown(std::function<bool (int, int, int, int)>*)
    /* InputHandler::UnregisterLowLevelMouseDown(std::function<bool (int, int, int, int)>*)
    */

    void InputHandler::UnregisterLowLevelMouseDown(function* param_1) {
        EventListeners<std::function<bool(int, int, int, int)>>::Unregister(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928, param_1);
    }

    // 0x100395250, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterFirstTouchDown(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::UnregisterFirstTouchDown(std::function<bool (unsigned long, float,
   float)>*) */

    void InputHandler::UnregisterFirstTouchDown(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1064, param_1);
    }

    // 0x100395270, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterTouchDown(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::UnregisterTouchDown(std::function<bool (unsigned long, float, float)>*)
    */

    void InputHandler::UnregisterTouchDown(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1160, param_1);
    }

    // 0x100395290, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterTouchMove(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::UnregisterTouchMove(std::function<bool (unsigned long, float, float)>*)
    */

    void InputHandler::UnregisterTouchMove(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1256, param_1);
    }

    // 0x1003952b0, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterTouchUp(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::UnregisterTouchUp(std::function<bool (unsigned long, float, float)>*)
    */

    void InputHandler::UnregisterTouchUp(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1352, param_1);
    }

    // 0x1006839d0, 32 bytes, inline, placed by class name
    // InputHandler::AddGesture(gesture::GestureBase*)
    void InputHandler::AddGesture(GestureBase* param_1) {
        (&field_2216, param_1)->AddGesture();
    }

    // 0x1006e24e0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterGamepadAxis(std::function<bool (unsigned int, GamepadAxis, short)>*)
    /* InputHandler::RegisterGamepadAxis(std::function<bool (unsigned int,
   GamepadAxis, short)>*) */

    void InputHandler::RegisterGamepadAxis(function* param_1) {
        EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>::Register(
            (EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>*)&field_1640, param_1);
    }

    // 0x1006e2560, 32 bytes, inline, placed by class name
    // InputHandler::RegisterGamepadButton(std::function<bool (unsigned int, GamepadButton, bool)>*)
    /* InputHandler::RegisterGamepadButton(std::function<bool (unsigned int,
   GamepadButton, bool)>*) */

    void InputHandler::RegisterGamepadButton(function* param_1) {
        EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>::Register(
            (EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>*)&field_1544, param_1);
    }

    // 0x1006e25e0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterGamepadTrigger(std::function<bool (unsigned int, GamepadTrigger, unsigned char)>*)
    /* InputHandler::RegisterGamepadTrigger(std::function<bool (unsigned int,
   GamepadTrigger, unsigned char)>*) */

    void InputHandler::RegisterGamepadTrigger(function* param_1) {
        EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>::Register(
            (EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>*)&field_1736, param_1);
    }

    // 0x100722ce0, 32 bytes, inline, placed by class name
    // InputHandler::RegisterTouchCanceled(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::RegisterTouchCanceled(std::function<bool (unsigned long, float,
   float)>*) */

    void InputHandler::RegisterTouchCanceled(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1448, param_1);
    }

    // 0x1007230f0, 32 bytes, inline, placed by class name
    // InputHandler::UnregisterTouchCanceled(std::function<bool (unsigned long, float, float)>*)
    /* InputHandler::UnregisterTouchCanceled(std::function<bool (unsigned long, float,
   float)>*) */

    void InputHandler::UnregisterTouchCanceled(function* param_1) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1448, param_1);
    }

    // 0x100c9e630, 32 bytes, inline, placed by class name
    // InputHandler::OnLMouseDown(float, float)
    void InputHandler::OnLMouseDown(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnLMouseDown(
            float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_8);
    }

    // 0x100c9e780, 32 bytes, inline, placed by class name
    // InputHandler::OnLMouseUp(float, float)
    void InputHandler::OnLMouseUp(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnLMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_104);
    }

    // 0x100c9e7e0, 32 bytes, inline, placed by class name
    // InputHandler::OnMMouseDown(float, float)
    undefined8 InputHandler::OnMMouseDown(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMMouseDown(
            float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_200);
        return 0;
    }

    // 0x100c9e840, 32 bytes, inline, placed by class name
    // InputHandler::OnMMouseUp(float, float)
    undefined8 InputHandler::OnMMouseUp(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_296);
        return 0;
    }

    // 0x100c9e8a0, 32 bytes, inline, placed by class name
    // InputHandler::OnRMouseDown(float, float)
    undefined8 InputHandler::OnRMouseDown(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnRMouseDown(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_392);
        return 0;
    }

    // 0x100c9e900, 32 bytes, inline, placed by class name
    // InputHandler::OnRMouseUp(float, float)
    undefined8 InputHandler::OnRMouseUp(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnRMouseUp(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_488);
        return 0;
    }

    // 0x100c9ea20, 32 bytes, inline, placed by class name
    // InputHandler::OnMouseMove(float, float)
    void InputHandler::OnMouseMove(float param_1, float param_2) {
        EventListeners<std::function<bool(float, float)>>::CallListeners<InputHandler::OnMouseMove(
            float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float)>>*)&field_584);
    }

    // 0x100c9eb60, 32 bytes, inline, placed by class name
    // InputHandler::OnMouseWheel(float, float, float, float)
    void InputHandler::OnMouseWheel(float param_1, float param_2, float param_3, float param_4) {
        EventListeners<std::function<bool(float, float, float, float)>>::CallListeners<InputHandler::OnMouseWheel(
            float, float, float, float)::_lambda(std::function<bool(float, float, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(float, float, float, float)>>*)param_1, param_3, &field_680);
    }

    // 0x100c9ec70, 48 bytes, inline, placed by class name
    // InputHandler::OnLowLevelMouseDown(int, int, int, int)
    void InputHandler::OnLowLevelMouseDown(int param_1, int param_2, int param_3, int param_4) {
        EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<InputHandler::OnLowLevelMouseDown(
            int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928, CONCAT44(param_2, param_1),
            CONCAT44(param_4, param_3));
    }

    // 0x100c9ed90, 48 bytes, inline, placed by class name
    // InputHandler::OnLowLevelMouseMove(int, int, int, int)
    void InputHandler::OnLowLevelMouseMove(int param_1, int param_2, int param_3, int param_4) {
        EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<InputHandler::OnLowLevelMouseMove(
            int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_2024, CONCAT44(param_2, param_1),
            CONCAT44(param_4, param_3));
    }

    // 0x100c9ee90, 32 bytes, inline, placed by class name
    // InputHandler::OnKeyDown(int)
    void InputHandler::OnKeyDown(int param_1) {
        undefined4 in_register_0000003c;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyDown(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)(CONCAT44(in_register_0000003c, param_1) + 776));
    }

    // 0x100c9efe0, 32 bytes, inline, placed by class name
    // InputHandler::OnKeyUp(int)
    void InputHandler::OnKeyUp(int param_1) {
        undefined4 in_register_0000003c;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyUp(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)(CONCAT44(in_register_0000003c, param_1) + 872));
    }

    // 0x100c9f0d0, 32 bytes, inline, placed by class name
    // InputHandler::OnKeyChar(int)
    void InputHandler::OnKeyChar(int param_1) {
        undefined4 in_register_0000003c;

        EventListeners<std::function<bool(int)>>::CallListeners<InputHandler::OnKeyChar(int)::_lambda(
            std::function<bool(int)> const&) _1_>(
            (EventListeners<std::function<bool(int)>>*)(CONCAT44(in_register_0000003c, param_1) + 968));
    }

    // 0x100c9f1d0, 32 bytes, inline, placed by class name
    // InputHandler::OnFirstTouchDown(unsigned long, float, float)
    undefined8 InputHandler::OnFirstTouchDown(ulong param_1, float param_2, float param_3) {
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnFirstTouchDown(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)(param_1 + 1064));
        return 0;
    }

    // 0x100c9f320, 80 bytes, inline, placed by class name
    // InputHandler::OnTouchDown(unsigned long, float, float)
    void InputHandler::OnTouchDown(ulong param_1, float param_2, float param_3) {
        (&field_2216, param_1, param_2, param_3)->OnTouchDown();
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchDown(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)param_2, &field_1160, param_1);
    }

    // 0x100c9f460, 80 bytes, inline, placed by class name
    // InputHandler::OnTouchMove(unsigned long, float, float)
    void InputHandler::OnTouchMove(ulong param_1, float param_2, float param_3) {
        (&field_2216, param_1, param_2, param_3)->OnTouchMove();
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchMove(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)param_2, &field_1256, param_1);
    }

    // 0x100c9f5a0, 80 bytes, inline, placed by class name
    // InputHandler::OnTouchUp(unsigned long, float, float)
    void InputHandler::OnTouchUp(ulong param_1, float param_2, float param_3) {
        (&field_2216, param_1, param_2, param_3)->OnTouchUp();
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchUp(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)param_2, &field_1352, param_1);
    }

    // 0x100c9f6d0, 80 bytes, inline, placed by class name
    // InputHandler::OnTouchCanceled(unsigned long, float, float)
    void InputHandler::OnTouchCanceled(ulong param_1, float param_2, float param_3) {
        (&field_2216, param_1, param_2, param_3)->OnTouchUp();
        EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<InputHandler::OnTouchCanceled(
            unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)param_2, &field_1448, param_1);
    }

    // 0x100c9f740, 32 bytes, inline, placed by class name
    // InputHandler::OnTextCommand(TextCommand)
    void InputHandler::OnTextCommand(long param_1) {
        EventListeners<std::function<bool(TextCommand)>>::CallListeners<InputHandler::OnTextCommand(
            TextCommand)::_lambda(std::function<bool(TextCommand)>&) _1_>(
            (EventListeners<std::function<bool(TextCommand)>>*)(param_1 + 2120));
    }

    // 0x100c9f7f0, 176 bytes, inline, placed by class name
    // InputHandler::OnText(eastl::string, int)
    ulong InputHandler::OnText(undefined8 param_1, basic_string* param_2, undefined4 param_3) {
        bool bVar1;
        undefined7 extraout_var;
        long* plVar2;
        eastl::string local_58[32];
        shared_ptr local_38;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_38);
        if (bVar1) {
            plVar2 = (long*)shared_ptr<InputTextHandler>::operator->((shared_ptr<InputTextHandler>*)&local_38);
            eastl::string::basic_string(local_58, param_2);
            (**(code**)(*plVar2 + 16))(plVar2, local_58, param_3);
            eastl::string::~basic_string(local_58);
        }
        local_38.~shared_ptr();
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100ca2250, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputHandler::OnLMouseDown(float, float)::{lambda(std::function<bool (float, float)>&)#1}::operator()(std::function<bool (float, float)>&) const
    /* InputHandler::OnLMouseUp(float, float)::{lambda(std::function<bool (float, float)>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (float, float)> const&) const */

    void InputHandler::OnLMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(float, float)> const___1_* this, function * param_1)

    {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)param_1, *(float*)this,
                                                      *(float*)(this + 4));
    }

    // 0x100ca2770, 48 bytes, inline, placed by class name
    // InputHandler::OnMouseWheel(float, float, float, float)::{lambda(std::function<bool (float, float, float, float)> const&)#1}::operator()(std::function<bool (float, float, float, float)> const&) const
    /* InputHandler::OnMouseWheel(float, float, float, float)::{lambda(std::function<bool
   (float, float, float, float)> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (float,
   float, float, float)> const&) const */

    void InputHandler::OnMouseWheel(float, float, float, float)::{
        lambda(std::function<bool(float, float, float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(float, float, float, float)> const___1_* this, function * param_1)

    {
        std::function<bool(float, float, float, float)>::operator()(
            (function<bool(float, float, float, float)>*)param_1, *(float*)this, *(float*)(this + 4),
            *(float*)(this + 8), *(float*)(this + 12));
    }

    // 0x100ca28b0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputHandler::OnLowLevelMouseDown(int, int, int, int)::{lambda(std::function<bool (int, int, int, int)>&)#1}::operator()(std::function<bool (int, int, int, int)>&) const
    /* InputHandler::OnLowLevelMouseMove(int, int, int, int)::{lambda(std::function<bool
   (int, int, int, int)>&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (int, int, int, int)>&)
   const */

    void InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    }
    ::operator()(_lambda_std__function<bool(int, int, int, int)> ___1_* this, function * param_1)

    {
        std::function<bool(int, int, int, int)>::operator()((function<bool(int, int, int, int)>*)param_1, *(int*)this,
                                                            *(int*)(this + 4), *(int*)(this + 8), *(int*)(this + 12));
    }

    // 0x100ca2a80, 32 bytes, inline, placed by class name
    // InputHandler::OnKeyDown(int)::{lambda(std::function<bool (int)> const&)#1}::operator()(std::function<bool (int)> const&) const
    /* InputHandler::OnKeyUp(int)::{lambda(std::function<bool (int)>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (int)> const&) const */

    void InputHandler::OnKeyUp(int)::{
        lambda(std::function<bool(int)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(int)> const___1_* this, function * param_1) {
        std::function<bool(int)>::operator()((function<bool(int)>*)param_1, *(int*)this);
    }

    // 0x100ca2cf0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputHandler::OnFirstTouchDown(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}::operator()(std::function<bool (unsigned long, float, float)> const&) const
    /* InputHandler::OnTouchDown(unsigned long, float, float)::{lambda(std::function<bool
   (unsigned long, float, float)> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (unsigned
   long, float, float)> const&) const */

    void InputHandler::OnTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(unsigned long, float, float)> const___1_* this, function * param_1)

    {
        std::function<bool(unsigned long, float, float)>::operator()(
            (function<bool(unsigned long, float, float)>*)param_1, *(ulong*)this, *(float*)(this + 8),
            *(float*)(this + 12));
    }

    // 0x100ca30d0, 32 bytes, inline, placed by class name
    // InputHandler::OnTextCommand(TextCommand)::{lambda(std::function<bool (TextCommand)>&)#1}::operator()(std::function<bool (TextCommand)>&) const
    /* InputHandler::OnTextCommand(TextCommand)::{lambda(std::function<bool
   (TextCommand)>&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool
   (TextCommand)>&) const */

    void InputHandler::OnTextCommand(TextCommand)::{
        lambda(std::function<bool(TextCommand)>&) #1
    }
    ::operator()(_lambda_std__function<bool(TextCommand)> ___1_* this, function * param_1)

    {
        std::function<bool(TextCommand)>::operator()((function<bool(TextCommand)>*)param_1, *(undefined4*)this);
    }

} // namespace jag::input

namespace jag::oldscape::input {
    class InputHandler {
    public:
        InputHandler();
        InputHandler(InputHandler const&);

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100127cb0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // InputHandler::InputHandler()
    /* InputHandler::InputHandler(InputHandler const&) */

    void InputHandler::InputHandler(InputHandler* param_1) {
        field_0 = PTR_vtable_100ee8930 + 16;
    }

    // 0x100127cb0: the linker folded this into InputHandler::InputHandler(), which has identical code
    InputHandler::InputHandler(InputHandler const&);

} // namespace jag::oldscape::input

namespace jag::oldscape::movement {
    class ExactTileDestination {
    public:
        // virtual methods in vtable order
        virtual bool HasArrived(int, int, int, CollisionMap const&) const;
        ExactTileDestination();
        ExactTileDestination(ExactTileDestination const&);

        // data members, from how the methods use this: 24 bytes
        undefined* field_0;  // offset 0, vtable pointer
        int field_8;         // offset 8
        int field_12;        // offset 12
        undefined8 field_16; // offset 16
    };

    // 0x100128830, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ExactTileDestination::ExactTileDestination()
    void ExactTileDestination::ExactTileDestination() {
        new (this) RouteDestination();
        field_0 = PTR_vtable_100ee8c68 + 16;
    }

    // 0x100128880, 32 bytes, inline, placed by debug map only (low confidence)
    // ExactTileDestination::HasArrived(int, int, int, CollisionMap const&) const
    bool ExactTileDestination::HasArrived(int param_1, int param_2, int param_3, CollisionMap* param_4) {
        if (field_8 == param_2) {
            return field_12 == param_3;
        }
        return false;
    }

} // namespace jag::oldscape::movement
