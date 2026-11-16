// libs/tweaky/TweakyEditLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class EditLine {
    public:
        int GetDrawOffset() const;
        void GetText() const;
        bool SupportsKeyChar(int arg1);
        void Home();
        void End();
        ~EditLine();
        void SetCursorShown(bool arg1);
        void Draw(int arg1, int arg2, int arg3, int arg4, const shared_ptr<graphics::Font>& font,
                  graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers);
        uint64_t GetSelection(int& arg1, int& arg2) const;
        uint8_t HandleChar(int arg1);
        void Insert(StringView stringView);
        unsigned long HandleKeyDown(int arg1);
        void ClipboardCopy();
        void ClipboardPaste();
        void ClipboardCut();
        void WordLeft();
        void Left();
        void WordRight();
        void Right();
        void DelWordRight();
        void Delete();
        void DelWordLeft();
        void Backspace();
        uint64_t HandleKeyUp(int arg1);
        void ValidatePosition();
        void SelectAll();
        void SetSelecting(bool arg1);
        void SetSelectionStart(int arg1);
        void SetPos(int arg1);
        void SelectNone();
        uint64_t DeleteSelection();
        uint64_t GetSelection(int& arg1, int& arg2, eastl::fixed_string<char, 256>& str) const;
        uint8_t GetCursorShown() const;
        void SetText(StringView stringView);
        EditLine();
        static int32_t m_shadowColour[36]; // initialised in its definition

    private:
        int m_drawOffset;
        EnumOptionToggle m_pos;
        uint8_t _unknown_8[296];
        EnumOptionToggle m_selectionStart;
        bool m_selecting;
        bool m_cursorShown;
        uint8_t _unknown_310[6];
    };

    // 0x100a3f450
    void EditLine::SetSelecting(bool arg1) {
        m_selecting = arg1;
    }

    // 0x100a3f460
    void EditLine::SetSelectionStart(int arg1) {
        m_selectionStart = arg1;
    }

    // 0x100a3f470
    void EditLine::SetPos(int arg1) {
        m_pos = arg1;
        ValidatePosition();
    }

    // 0x100a3f480
    void EditLine::SelectNone() {
        SetSelecting(true);
        SetSelectionStart(0);
        SetPos(0);
        SetSelecting(false);
    }

    // 0x100a3f4c0
    uint64_t EditLine::DeleteSelection() {
        int iVar2;

        EnumOptionToggle EVar1 = m_selectionStart;
        if (EVar1 != 4294967295) {
            m_selecting = false;
            if (EVar1 != m_pos) {
                EVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, EVar1);
                iVar2 = eastl::max<int>(m_pos, m_selectionStart);
                (&field_8)->replace((long)(int)EVar1, (long)(int)(iVar2 - EVar1), 0, ' ');
                m_selectionStart = 4294967295;
                m_pos = EVar1;
                return 1;
            }
            m_selectionStart = 4294967295;
        }
        return 0;
    }

    // 0x100a3f660
    uint64_t EditLine::GetSelection(int& arg1, int& arg2, eastl::fixed_string<char, 256>& str) const {
        int iVar1;
        ReturnValue local_158;

        EnumOptionToggle enumOptionToggle2 = m_selectionStart;
        if (enumOptionToggle2 != 4294967295) {
            if (enumOptionToggle2 != m_pos) {
                iVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, enumOptionToggle2);
                arg1 = iVar1;
                iVar1 = eastl::max<int>(m_pos, m_selectionStart);
                arg2 = iVar1;
                local_158 = field_8.substr((long)*arg1, (long)iVar1 - (long)*arg1);
                str = &local_158;
            }
        }
        return 0;
    }

    // 0x100a46f10
    uint8_t EditLine::GetCursorShown() const {
        return m_cursorShown;
    }

    // 0x100a47590
    void EditLine::SetText(StringView stringView) {
        auto str = stringView->end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        (&field_8)->assign(str, arg2);
        ValidatePosition();
    }

} // namespace jag::tweak
