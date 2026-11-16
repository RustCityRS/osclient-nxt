// libs/oldscape/rs2lib/util/InputField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class InputField {
    public:
        void GetContents() const;
        bool HasFont() const;
        int GetScrollX() const;
        SpriteAtlasUsageType GetScrollY() const;
        uint32_t ShowCaret() const;
        unsigned long GetCaretIndex() const;
        unsigned long GetSelectionStart() const;
        bool HasFocus() const;
        TextRun GetPlaceholderContents() const;
        bool CanHaveFocus() const;
        void GetMaxLineWidth() const;
        unsigned long GetCharacterLimit() const;
        auto GetSelectedText() const;
        void GetWrapMode() const;
        int GetEnterAction() const;
        InputFieldFilter GetFilter() const;
        void GetVisibility() const;
        void SetCallbackOnSelectionChanged(std::function<void()> callback);
        void SetCallbackOnTextChanged(std::function<void()> callback);
        void ClearFont();
        void SetLineSpacing(int arg1);
        void SetWrapMode(jag::graphics::TextWrapMode textWrapMode);
        void SetEnterAction(InputEnterAction inputEnterAction);
        void SetVisibility(jag::graphics::TextContentVisibility textContentVisibility);
        InputField();
        void MainLogic();
        void MouseHoldRelease();
        bool SetFocus(bool arg1);
        unsigned long SetSelection(unsigned long arg1, unsigned long arg2);
        void SetFocusAllowed(bool arg1);
        unsigned long SetText(eastl::string str);
        uint64_t SetScroll(int arg1, int arg2);
        unsigned long CropToLimits();
        void OnTextChanged();
        uint8_t SetPlaceholderText(const eastl::string& str);
        unsigned long SetFont(const jstring::PixfontGeneric& pixfontGeneric);
        uint8_t SetSize(int arg1, int arg2);
        unsigned long SetMaxLineWidth(int arg1);
        uint32_t SetMaxLineCount(unsigned char arg1);
        uint32_t SetCharacterLimit(unsigned long arg1);
        uint32_t SetAlignment(int arg1, int arg2);
        unsigned long SetInputFilter(InputFieldFilter inputFieldFilter);
        void UpdateScrollCaretVisible();
        uint8_t[16] GetWord(unsigned long arg1);
        bool IsWordBreakChar(unsigned int arg1);
        uint8_t[16] GetLine(unsigned long arg1);
        void MouseDown(int arg1, int arg2, bool arg3, bool arg4);
        void GetOriginForCurrentAlignment() const;
        void CombineSelection(std::pair<unsigned long, unsigned long> arg1,
                              std::pair<unsigned long, unsigned long> arg2);
        void SelectWord(unsigned long arg1);
        void MouseHeld(int arg1, int arg2);
        void ShowEditMenu();
        void DoCursorKey(unsigned long arg1, bool arg2);
        unsigned long IsCharAllowed(unsigned int arg1);
        uint8_t TypeCharacter(unsigned int arg1);
        uint32_t RemoveSelection();
        void SelectAll();
        void SelectWord();
        bool HasSelection();
        void Backspace();
        void Delete();
        void BackspaceWord();
        void DeleteWord();
        void LineHome(bool arg1);
        void LineEnd(bool arg1);
        void FullHome(bool arg1);
        void FullEnd(bool arg1);
        void Left(bool arg1);
        void Right(bool arg1);
        void WordLeft(bool arg1);
        void WordRight(bool arg1);
        void Up(bool arg1);
        void Down(bool arg1);
        void PageUp(bool arg1);
        uint8_t[16] GetNumVisibleLines();
        void PageDown(bool arg1);
        void PageUpNoScroll(bool arg1);
        void PageDownNoScroll(bool arg1);
        void ScrollUpOneLine();
        void ScrollDownOneLine();
        void CopySelection();
        void CutSelection();
        void PasteFromClipboard();
        uint32_t GetKeyboardType();
        bool IsMultiline() const;
        uint8_t GetMaxLineCount() const;
        ~InputField();

    private:
        uint8_t _unknown_0[16];
        int field_16;
        int field_20;
        TextHorizontalAlignment field_24;
        TextVerticalAlignment field_28;
        uint8_t field_32;
        uint8_t _unknown_33[3];
        TextContentVisibility field_36;
        bool field_40;
        uint8_t _unknown_41[31];
        TextWrapMode field_72;
        uint8_t _unknown_76[4];
        TextRun m_placeholderContents;
        char m_hasFocus;
        bool field_161;
        uint8_t field_162;
        uint8_t field_163;
        uint8_t _unknown_164[4];
        unsigned long long field_168;
        int field_176;
        uint8_t m_hasFont;
        uint8_t _unknown_181[3];
        InputEnterAction m_enterAction;
        int field_188;
        InputFieldFilter m_filter;
        uint8_t _unknown_196[4];
        unsigned long m_caretIndex;
        unsigned long m_pSelectionStart;
        unsigned long field_216;
        int field_224;
        unsigned int field_228;
        unsigned long m_characterLimit;
        int field_240;
        int field_244;
        int m_scrollX;
        int field_252;
        uint8_t _unknown_256[56];
    };

    class InputFieldWrapper {
    public:
        ~InputFieldWrapper();
        InputFieldWrapper();

        uint8_t _unknown_0[1648];
    };

    // 0x100102f00
    bool InputField::HasFont() const {
        return field_180;
    }

    // 0x100102f20
    int InputField::GetScrollX() const {
        return m_font11pxRegularID;
    }

    // 0x100102f30
    SpriteAtlasUsageType InputField::GetScrollY() const {
        return m_usageType;
    }

    // 0x100102f40
    uint32_t InputField::ShowCaret() const {
        int iVar2;
        uint32_t uVar3;

        if (HasFocus() == '\0') {
            uVar3 = 0;
        } else {
            iVar2 = field_176 % 60;
            uVar3 = (((uint32_t)((int32_t)((unsigned int)iVar2 >> 8)) << 8) | (uint8_t)(iVar2 < 30));
        }
        return uVar3;
    }

    // 0x100102f90
    unsigned long InputField::GetCaretIndex() const {
        return m_pWrapV;
    }

    // 0x100102fa0
    unsigned long InputField::GetSelectionStart() const {
        return m_pRenderTargetsManager;
    }

    // 0x100102fb0
    bool InputField::HasFocus() const {
        return m_hasFocus;
    }

    // 0x100102fc0
    TextRun InputField::GetPlaceholderContents() const {
        return m_origin;
    }

    // 0x1001066e0
    bool InputField::CanHaveFocus() const {
        return field_161;
    }

    // 0x100159b10
    void InputField::GetMaxLineWidth() const {
        GetMaxLineWidth();
    }

    // 0x100159b20
    unsigned long InputField::GetCharacterLimit() const {
        return m_slotAlignment;
    }

    // 0x100159b30
    auto InputField::GetSelectedText() const {
        auto result;
        result = Slice(m_pSelectionStart, m_caretIndex);
        return result;
    }

    // 0x100159b60
    void InputField::GetWrapMode() const {
        GetWrapMode();
    }

    // 0x100159b70
    int InputField::GetEnterAction() const {
        return m_maxLevels;
    }

    // 0x100159b80
    InputFieldFilter InputField::GetFilter() const {
        return m_mapSquareX;
    }

    // 0x100159b90
    void InputField::GetVisibility() const {
        GetAliveCount();
    }

    // 0x100195320
    void InputField::SetCallbackOnSelectionChanged(std::function<void()> callback) {
        field_304 = *callback;
    }

    // 0x100195360
    void InputField::SetCallbackOnTextChanged(std::function<void()> callback) {
        field_256 = *callback;
    }

    // 0x1001954c0
    void InputField::ClearFont() {
        m_hasFont = 0;
    }

    // 0x1001954d0
    void InputField::SetLineSpacing(int arg1) {
        SetLineSpacing(arg1);
    }

    // 0x100195550
    void InputField::SetWrapMode(jag::graphics::TextWrapMode textWrapMode) {
        SetWrapMode(textWrapMode);
    }

    // 0x100195560
    void InputField::SetEnterAction(InputEnterAction inputEnterAction) {
        m_enterAction = inputEnterAction;
    }

    // 0x100195570
    void InputField::SetVisibility(jag::graphics::TextContentVisibility textContentVisibility) {
        SetContentVisibility(textContentVisibility);
    }

    // 0x1001fd520
    bool InputField::IsWordBreakChar(unsigned int arg1) {
        return (8388611U >> (arg1 - 9 & 31) & 1) != 0 && arg1 - 9 < 24;
    }

    // 0x1001fdc10
    bool InputField::HasSelection() {
        return m_caretIndex != m_pSelectionStart;
    }

    // 0x1001fe0a0
    uint8_t[16] InputField::GetNumVisibleLines() {
        uint8_t auVar3[16];

        int iVar1 = field_244;
        int iVar2 = GetLineHeight();
        auVar3._0_8_ = (long)iVar1 / (long)iVar2 & 4294967295;
        auVar3._8_8_ = (long)iVar1 % (long)iVar2 & 4294967295;
        return auVar3;
    }

    // 0x1001fe510
    bool InputField::IsMultiline() const {
        int iVar1 = GetMaxLineCount();
        return 1 < iVar1;
    }

    // 0x100216210
    uint8_t InputField::GetMaxLineCount() const {
        return GetAlphaTestThreshold();
    }

    // 0x1002182b0
    InputFieldWrapper::~InputFieldWrapper() {
        field_1640.~Array();
        field_1616.~Array();
        field_1592.~Array();
        field_1568.~Array();
    }

    // 0x100218310
    InputField::~InputField() {
        field_304.~function();
        field_256.~function();
        m_placeholderContents->~TextRun();
    }

    // 0x100218ca0
    uint8_t InputField::SetText(eastl::string)::$_1::operator()(unsigned char arg1) const {
        uint32_t in_register_00000031;

        return IsCharAllowed(*(InputField**)this, (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1)) ^ 1;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape {
    class InputFieldLayoutParams {
    public:
        InputFieldLayoutParams();

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
        uint64_t field_32;
    };

} // namespace jag::oldscape
