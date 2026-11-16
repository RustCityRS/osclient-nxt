// libs/oldscape/rs2lib/util/InputField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class InputField {
    public:
        GetContents() const;
        byte HasFont() const;
        uint GetScrollX() const;
        GetScrollY() const;
        ShowCaret() const;
        ulong GetCaretIndex() const;
        ulong GetSelectionStart() const;
        char HasFocus() const;
        TextRun GetPlaceholderContents() const;
        CanHaveFocus() const;
        void GetMaxLineWidth() const;
        ulong GetCharacterLimit() const;
        GetSelectedText() const;
        void GetWrapMode() const;
        GetEnterAction() const;
        uint GetFilter() const;
        void GetVisibility() const;
        void SetCallbackOnSelectionChanged(std::function<void()>);
        void SetCallbackOnTextChanged(std::function<void()>);
        void ClearFont();
        void SetLineSpacing(int);
        void SetWrapMode(jag::graphics::TextWrapMode);
        void SetEnterAction(InputEnterAction);
        void SetVisibility(jag::graphics::TextContentVisibility);
        InputField();
        void MainLogic();
        void MouseHoldRelease();
        bool SetFocus(bool);
        ulong SetSelection(unsigned long, unsigned long);
        void SetFocusAllowed(bool);
        ulong SetText(eastl::string);
        SetScroll(int, int);
        ulong CropToLimits();
        void OnTextChanged();
        SetPlaceholderText(eastl::string const&);
        ulong SetFont(jstring::PixfontGeneric const&);
        byte SetSize(int, int);
        ulong SetMaxLineWidth(int);
        SetMaxLineCount(unsigned char);
        SetCharacterLimit(unsigned long);
        SetAlignment(int, int);
        ulong SetInputFilter(InputFieldFilter);
        void UpdateScrollCaretVisible();
        GetWord(unsigned long);
        IsWordBreakChar(unsigned int);
        GetLine(unsigned long);
        void MouseDown(int, int, bool, bool);
        void GetOriginForCurrentAlignment() const;
        void CombineSelection(std::pair<unsigned long, unsigned long>, std::pair<unsigned long, unsigned long>);
        void SelectWord(unsigned long);
        void MouseHeld(int, int);
        void ShowEditMenu();
        void DoCursorKey(unsigned long, bool);
        ulong IsCharAllowed(unsigned int);
        TypeCharacter(unsigned int);
        RemoveSelection();
        void SelectAll();
        void SelectWord();
        HasSelection();
        void Backspace();
        void Delete();
        void BackspaceWord();
        void DeleteWord();
        void LineHome(bool);
        void LineEnd(bool);
        void FullHome(bool);
        void FullEnd(bool);
        void Left(bool);
        void Right(bool);
        void WordLeft(bool);
        void WordRight(bool);
        void Up(bool);
        void Down(bool);
        void PageUp(bool);
        GetNumVisibleLines();
        void PageDown(bool);
        void PageUpNoScroll(bool);
        void PageDownNoScroll(bool);
        void ScrollUpOneLine();
        void ScrollDownOneLine();
        void CopySelection();
        void CutSelection();
        void PasteFromClipboard();
        GetKeyboardType();
        bool IsMultiline() const;
        GetMaxLineCount() const;
        ~InputField();

        // data members, from how the methods use this: 312 bytes
        char _unknown_0[16];
        int field_16;   // offset 16
        int field_20;   // offset 20
        int field_24;   // offset 24
        int field_28;   // offset 28
        uchar field_32; // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        char field_40;       // offset 40
        char _unknown_41[31];
        int field_72; // offset 72
        char _unknown_76[4];
        TextRun m_placeholderContents; // offset 80
        char m_hasFocus;               // offset 160
        bool m_focusAllowed;           // offset 161
        undefined1 field_162;          // offset 162
        undefined1 field_163;          // offset 163
        char _unknown_164[4];
        ulonglong field_168; // offset 168
        int field_176;       // offset 176
        byte m_hasFont;      // offset 180
        char _unknown_181[3];
        undefined4 m_enterAction; // offset 184
        int field_188;            // offset 188
        uint m_filter;            // offset 192
        char _unknown_196[4];
        ulong m_caretIndex;      // offset 200
        ulong m_pSelectionStart; // offset 208
        ulong field_216;         // offset 216
        int field_224;           // offset 224
        uint field_228;          // offset 228
        ulong m_characterLimit;  // offset 232
        int field_240;           // offset 240
        int field_244;           // offset 244
        uint m_scrollX;          // offset 248
        int field_252;           // offset 252
        char _unknown_256[56];
    };

    class InputFieldWrapper {
    public:
        ~InputFieldWrapper();
        InputFieldWrapper();

        // data members, from how the methods use this: 1648 bytes
        char _unknown_0[1648];
    };

    // 0x100102f00, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::HasFont() const
    /* hardware::HardwareInfo::Is64BitOS() const */

    undefined1 hardware::HardwareInfo::Is64BitOS() {
        return field_180;
    }

    // 0x100102f20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetScrollX() const
    /* game::GraphicsDefaults::GetFont11pxRegularID() const */

    undefined4 game::GraphicsDefaults::GetFont11pxRegularID() {
        return m_font11pxRegularID;
    }

    // 0x100102f30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetScrollY() const
    /* jag::graphics::SpriteAtlas::GetUsageType() const */

    undefined4 jag::graphics::SpriteAtlas::GetUsageType() {
        return *(undefined4*)((long)&field_248 + 4);
    }

    // 0x100102f40, 80 bytes, inline, placed by class name
    // InputField::ShowCaret() const
    undefined4 InputField::ShowCaret() {
        int iVar2;
        undefined4 uVar3;

        if (HasFocus(this) == '\0') {
            uVar3 = 0;
        } else {
            iVar2 = field_176 % 60;
            uVar3 = CONCAT31((int3)((uint)iVar2 >> 8), iVar2 < 30);
        }
        return uVar3;
    }

    // 0x100102f90, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetCaretIndex() const
    /* jag::graphics::Material::GetWrapV() const */

    undefined* jag::graphics::Material::GetWrapV() {
        return m_pWrapV;
    }

    // 0x100102fa0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetSelectionStart() const
    /* postprocess::PostProcessManager::GetRenderTargetsManager() */

    RenderTargetsManager* postprocess::PostProcessManager::GetRenderTargetsManager() {
        return m_pRenderTargetsManager;
    }

    // 0x100102fb0, 16 bytes, inline, placed by class name
    // InputField::HasFocus() const
    char InputField::HasFocus() {
        return m_hasFocus;
    }

    // 0x100102fc0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetPlaceholderContents() const
    /* worldmap::WorldmapAreaMetadata::GetOrigin() const */

    undefined1* worldmap::WorldmapAreaMetadata::GetOrigin() {
        return m_origin;
    }

    // 0x1001066e0, 16 bytes, inline, placed by class name
    // InputField::CanHaveFocus() const
    undefined1 InputField::CanHaveFocus() {
        return m_focusAllowed;
    }

    // 0x100159b10, 16 bytes, inline, placed by class name
    // InputField::GetMaxLineWidth() const
    void InputField::GetMaxLineWidth() {
        GetMaxLineWidth();
    }

    // 0x100159b20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetCharacterLimit() const
    /* Bucket::GetSlotAlignment() const */

    ulong Bucket::GetSlotAlignment() {
        return m_slotAlignment;
    }

    // 0x100159b30, 48 bytes, inline, placed by class name
    // InputField::GetSelectedText() const
    InputField* InputField::GetSelectedText() {
        ulong in_RSI;

        Slice(in_RSI, *(ulong*)(in_RSI + 208));
        return this;
    }

    // 0x100159b60, 16 bytes, inline, placed by class name
    // InputField::GetWrapMode() const
    void InputField::GetWrapMode() {
        GetWrapMode();
    }

    // 0x100159b70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetEnterAction() const
    /* worldmap::PackableArea::GetMaxLevels() */

    int worldmap::PackableArea::GetMaxLevels() {
        return m_maxLevels;
    }

    // 0x100159b80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputField::GetFilter() const
    /* game::MapSquare::GetMapSquareX() const */

    uint game::MapSquare::GetMapSquareX() {
        return m_mapSquareX;
    }

    // 0x100159b90, 16 bytes, inline, placed by class name
    // InputField::GetVisibility() const
    void InputField::GetVisibility() {
        GetAliveCount();
    }

    // 0x100195320, 32 bytes, inline, placed by class name
    // InputField::SetCallbackOnSelectionChanged(std::function<void ()>)
    /* InputField::SetCallbackOnSelectionChanged(std::function<void ()>) */

    void InputField::SetCallbackOnSelectionChanged(function* param_2) {
        std::function<void()>::operator=((function<void()>*)&field_304, param_2);
    }

    // 0x100195360, 32 bytes, inline, placed by class name
    // InputField::SetCallbackOnTextChanged(std::function<void ()>)
    /* InputField::SetCallbackOnTextChanged(std::function<void ()>) */

    void InputField::SetCallbackOnTextChanged(function* param_2) {
        std::function<void()>::operator=((function<void()>*)&field_256, param_2);
    }

    // 0x1001954c0, 16 bytes, inline, placed by class name
    // InputField::ClearFont()
    void InputField::ClearFont() {
        m_hasFont = 0;
    }

    // 0x1001954d0, 16 bytes, inline, placed by class name
    // InputField::SetLineSpacing(int)
    void InputField::SetLineSpacing(int param_1) {
        SetLineSpacing(param_1);
    }

    // 0x100195550, 16 bytes, inline, placed by class name
    // InputField::SetWrapMode(jag::graphics::TextWrapMode)
    void InputField::SetWrapMode() {
        jag::graphics::TextRun::SetWrapMode();
    }

    // 0x100195560, 16 bytes, inline, placed by class name
    // InputField::SetEnterAction(InputEnterAction)
    void InputField::SetEnterAction(undefined4 param_2) {
        m_enterAction = param_2;
    }

    // 0x100195570, 16 bytes, inline, placed by class name
    // InputField::SetVisibility(jag::graphics::TextContentVisibility)
    void InputField::SetVisibility() {
        jag::graphics::TextRun::SetContentVisibility();
    }

    // 0x1001fd520, 32 bytes, inline, placed by class name
    // InputField::IsWordBreakChar(unsigned int)
    undefined8 InputField::IsWordBreakChar(uint param_1) {
        return CONCAT71(32768, (8388611U >> (param_1 - 9 & 31) & 1) != 0 && param_1 - 9 < 24);
    }

    // 0x1001fdc10, 32 bytes, inline, placed by class name
    // InputField::HasSelection()
    undefined8 InputField::HasSelection() {
        return CONCAT71((int7)(m_caretIndex >> 8), m_caretIndex != m_pSelectionStart);
    }

    // 0x1001fe0a0, 32 bytes, inline, placed by class name
    // InputField::GetNumVisibleLines()
    undefined1[16] InputField::GetNumVisibleLines() {
        int iVar1;
        int iVar2;
        undefined1 auVar3[16];

        iVar1 = field_244;
        iVar2 = GetLineHeight();
        auVar3._0_8_ = (long)iVar1 / (long)iVar2 & 4294967295;
        auVar3._8_8_ = (long)iVar1 % (long)iVar2 & 4294967295;
        return auVar3;
    }

    // 0x1001fe510, 32 bytes, inline, placed by class name
    // InputField::IsMultiline() const
    bool InputField::IsMultiline() {
        int iVar1;

        iVar1 = GetMaxLineCount(this);
        return 1 < iVar1;
    }

    // 0x100216210, 16 bytes, inline, placed by class name
    // InputField::GetMaxLineCount() const
    undefined1 InputField::GetMaxLineCount() {
        return GetAlphaTestThreshold();
    }

    // 0x1002182a0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // InputFieldWrapper::~InputFieldWrapper(): jumps straight to the base-object destructor

    // 0x1002182b0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // InputFieldWrapper::~InputFieldWrapper()
    void InputFieldWrapper::~InputFieldWrapper() {
        (&field_1640)->~Array();
        (&field_1616)->~Array();
        (&field_1592)->~Array();
        (&field_1568)->~Array();
        ~InputField();
    }

    // 0x100218300, 16 bytes, complete-object destructor, inline, placed by class name
    // InputField::~InputField(): jumps straight to the base-object destructor

    // 0x100218310, 64 bytes, base-object destructor, inline, placed by class name
    // InputField::~InputField()
    void InputField::~InputField() {
        std::function<void()>::~function((function<void()>*)&field_304);
        std::function<void()>::~function((function<void()>*)&field_256);
        m_placeholderContents->~TextRun();
        ~TextRun();
    }

    // 0x100218ca0, 16 bytes, inline, placed by class name
    // InputField::SetText(eastl::string)::$_1::operator()(unsigned char) const
    /* InputField::SetText(eastl::basic_string<char,
   eastl::allocator>)::$_1::TEMPNAMEPLACEHOLDERVALUE(unsigned char) const */

    byte InputField::SetText(eastl::string)::$_1::operator()(uchar param_1) {
        undefined3 in_register_00000031;

        return IsCharAllowed(*(InputField**)this, CONCAT31(in_register_00000031, param_1)) ^ 1;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape {
    class InputFieldLayoutParams {
    public:
        InputFieldLayoutParams();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

} // namespace jag::oldscape
