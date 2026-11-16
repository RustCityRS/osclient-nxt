// projects/osclient/input/InputFieldKeyboardHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    // 0x100029ea0: ModelLitImpl::IsForRSeven() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelLitImpl::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelLitImpl::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelRSevenLit::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelRSevenLit::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelUnlitImpl::IsForRSeven() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelUnlitImpl::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelUnlitImpl::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelRSevenUnlit::IsClientLocAnim() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ModelRSevenUnlit::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PointLightSource::GetUniqueID(unsigned long long&) const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class InputFieldKeyboardHandler {
    public:
        // virtual methods in vtable order
        virtual uint32_t KeyPressed(int arg1, unsigned long long arg2);
        virtual void KeyRepeat(int arg1, unsigned long long arg2);
        virtual uint64_t KeyReleased(int arg1, unsigned long long arg2);
        virtual uint32_t KeyTyped(char16_t arg1, unsigned long long arg2);
        virtual uint64_t PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual unsigned long TextCommandReceived(int arg1, unsigned long long arg2);
        virtual void ResetState();
        virtual ~InputFieldKeyboardHandler();
        InputFieldKeyboardHandler();
        void SetFocusedComponent(shared_ptr<rs2lib::IfType> ifType);
        void ClearFocusedComponent();
        unsigned long HandleKeyDown(int arg1);
        uint64_t HandleArrowKeyDown(rs2lib::InputField* inputField, int arg2);
        uint8_t KeysModified();
        uint64_t ModifierKeyPressed(int arg1);
        uint64_t ModifierKeyReleased(int arg1);
        uint64_t PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4);
        uint64_t WheelScroll(int arg1, unsigned long long arg2);
        uint64_t PointerCancel(int arg1, int arg2, unsigned long long arg3);
        uint64_t PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        uint64_t OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        uint64_t KeyboardInputFocusChange(int arg1, unsigned long long arg2);
        uint64_t MouseMove(int arg1, int arg2, unsigned long long arg3);
        auto GetFocusedComponent();

    private:
        uint8_t _unknown_8[16];
        bool field_24;
        uint8_t field_25;
        uint8_t field_26;
        uint8_t _unknown_27[5];
    };

    // 0x100029ea0
    uint64_t InputFieldKeyboardHandler::PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        return 0;
    }

    // 0x100029ea0: NoJs5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10012a770
    InputFieldKeyboardHandler::~InputFieldKeyboardHandler() {
        field_8.~weak_ptr();
    }

    // 0x100195530
    auto InputFieldKeyboardHandler::GetFocusedComponent() {
        auto result;
        result = field_8.lock();
        return result;
    }

} // namespace jag::oldscape

namespace jag::input::gesture {
    // 0x100029ea0: GestureTap::OnTouchDown(GestureManager*, unsigned long, float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: GestureTap::OnTouchMove(GestureManager*, unsigned long, float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: GestureDoubleTap::OnTouchDown(GestureManager*, unsigned long, float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: GestureDoubleTap::OnTouchMove(GestureManager*, unsigned long, float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::input::gesture

namespace jag::ui {
    // 0x100029ea0: ComponentSingleValueMultiOptionMixin::GetPreviousValue() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ComponentSingleValueMultiOptionMixin::RequiresSeparatePreviousValueTrigger() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::ui

namespace jag::game::option {
    // 0x100029ea0: AntialiasingMode::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::game::option

namespace jag::game {
    // 0x100029ea0: BaseVarTypeInteger::GetSerialID() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::game
