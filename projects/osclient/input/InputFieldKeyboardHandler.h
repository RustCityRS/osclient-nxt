// projects/osclient/input/InputFieldKeyboardHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::dash3d {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelLitImpl::IsForRSeven() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelLitImpl::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelLitImpl::IsUnlit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelRSevenLit::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelRSevenLit::IsUnlit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelUnlitImpl::IsForRSeven() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelUnlitImpl::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelUnlitImpl::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelRSevenUnlit::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelRSevenUnlit::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PointLightSource::GetUniqueID(unsigned long long&) const;

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class InputFieldKeyboardHandler {
    public:
        // virtual methods in vtable order
        virtual KeyPressed(int, unsigned long long);
        virtual void KeyRepeat(int, unsigned long long);
        virtual KeyReleased(int, unsigned long long);
        virtual KeyTyped(char16_t, unsigned long long);
        virtual PointerPress(int, int, int, int, unsigned long long);
        virtual ulong TextCommandReceived(int, unsigned long long);
        virtual ResetState();
        virtual ~InputFieldKeyboardHandler();
        InputFieldKeyboardHandler();
        void SetFocusedComponent(shared_ptr<rs2lib::IfType>);
        void ClearFocusedComponent();
        ulong HandleKeyDown(int);
        HandleArrowKeyDown(rs2lib::InputField*, int);
        KeysModified();
        ModifierKeyPressed(int);
        ModifierKeyReleased(int);
        PointerDrag(int, int, int, unsigned long long);
        WheelScroll(int, unsigned long long);
        PointerCancel(int, int, unsigned long long);
        bool PointerRelease(int, int, int, int, unsigned long long);
        OnLowLevelMouseDown(int, int, int, int);
        KeyboardInputFocusChange(int, unsigned long long);
        MouseMove(int, int, unsigned long long);
        InputFieldKeyboardHandler* GetFocusedComponent();

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        bool field_24;       // offset 24
        undefined1 field_25; // offset 25
        undefined1 field_26; // offset 26
        char _unknown_27[5];
    };

    // 0x100029ea0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)
    /* InputFieldKeyboardHandler::PointerRelease(int, int, int, int, unsigned long long)
    */

    bool InputFieldKeyboardHandler::PointerRelease(_func_void_TestResults_ptr_basic_string_ptr* param_1) {
        return false;
    }

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    NoJs5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&);

    // 0x100029eb0, 32 bytes, deleting destructor, inline, placed by class name
    // InputFieldKeyboardHandler::~InputFieldKeyboardHandler()
    void InputFieldKeyboardHandler::~InputFieldKeyboardHandler() {
        ~InputFieldKeyboardHandler(this);
        operator_delete(this);
    }

    // 0x1000c4b90, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // InputFieldKeyboardHandler::~InputFieldKeyboardHandler(): jumps straight to the base-object destructor

    // 0x10012a770, 32 bytes, base-object destructor, inline, placed by class name
    // InputFieldKeyboardHandler::~InputFieldKeyboardHandler()
    void InputFieldKeyboardHandler::~InputFieldKeyboardHandler() {
        field_0 = &PTR_KeyPressed_100ef0d90;
        (&field_8)->~weak_ptr();
    }

    // 0x100195530, 32 bytes, inline, placed by class name
    // InputFieldKeyboardHandler::GetFocusedComponent()
    InputFieldKeyboardHandler* InputFieldKeyboardHandler::GetFocusedComponent() {
        weak_ptr<rs2lib::IfType>::lock();
        return this;
    }

} // namespace jag::oldscape

namespace jag::input::gesture {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GestureTap::OnTouchDown(GestureManager*, unsigned long, float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GestureTap::OnTouchMove(GestureManager*, unsigned long, float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GestureDoubleTap::OnTouchDown(GestureManager*, unsigned long, float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    GestureDoubleTap::OnTouchMove(GestureManager*, unsigned long, float, float);

} // namespace jag::input::gesture

namespace jag::ui {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComponentSingleValueMultiOptionMixin::GetPreviousValue() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ComponentSingleValueMultiOptionMixin::RequiresSeparatePreviousValueTrigger() const;

} // namespace jag::ui

namespace jag::game::option {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AntialiasingMode::GetDefault();

} // namespace jag::game::option

namespace jag::game {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BaseVarTypeInteger::GetSerialID() const;

} // namespace jag::game
