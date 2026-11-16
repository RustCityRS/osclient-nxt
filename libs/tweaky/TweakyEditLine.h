// libs/tweaky/TweakyEditLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class EditLine {
    public:
        int GetDrawOffset() const;
        void GetText() const;
        bool SupportsKeyChar(int);
        void Home();
        void End();
        ~EditLine();
        void SetCursorShown(bool);
        void Draw(int, int, int, int, shared_ptr<graphics::Font> const&, graphics::RT7Core*, graphics::FontHelpers*);
        GetSelection(int&, int&) const;
        HandleChar(int);
        void Insert(StringView);
        ulong HandleKeyDown(int);
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
        HandleKeyUp(int);
        void ValidatePosition();
        void SelectAll();
        void SetSelecting(bool);
        void SetSelectionStart(int);
        void SetPos(int);
        void SelectNone();
        DeleteSelection();
        GetSelection(int&, int&, eastl::fixed_string<char, 256, true, eastl::allocator>&) const;
        GetCursorShown() const;
        void SetText(StringView);
        EditLine();
        static /* 144 bytes */ m_shadowColour; // initialised in its definition

        // data members, from how the methods use this: 316 bytes
        int m_drawOffset;   // offset 0
        int m_pos;          // offset 4
        undefined1 field_8; // offset 8
        char _unknown_9[295];
        int m_selectionStart; // offset 304
        bool m_selecting;     // offset 308
        bool m_cursorShown;   // offset 309
        char _unknown_310[6];
    };

    // 0x100a3f450, 16 bytes, inline, placed by debug map only (low confidence)
    // EditLine::SetSelecting(bool)
    void EditLine::SetSelecting(bool param_1) {
        m_selecting = param_1;
    }

    // 0x100a3f460, 16 bytes, inline, placed by debug map only (low confidence)
    // EditLine::SetSelectionStart(int)
    void EditLine::SetSelectionStart(int param_1) {
        m_selectionStart = param_1;
    }

    // 0x100a3f470, 16 bytes, inline, placed by debug map only (low confidence)
    // EditLine::SetPos(int)
    void EditLine::SetPos(int param_1) {
        m_pos = param_1;
        ValidatePosition(this);
    }

    // 0x100a3f480, 64 bytes, placed by debug map only (low confidence)
    // EditLine::SelectNone()
    void EditLine::SelectNone() {
        SetSelecting(this, true);
        SetSelectionStart(this, 0);
        SetPos(this, 0);
        SetSelecting(this, false);
    }

    // 0x100a3f4c0, 128 bytes, placed by debug map only (low confidence)
    // EditLine::DeleteSelection()
    undefined8 EditLine::DeleteSelection() {
        int iVar1;
        int iVar2;

        if (m_selectionStart != -1) {
            m_selecting = false;
            if (m_selectionStart != m_pos) {
                iVar1 = eastl::min<graphics::GraphicsQuality>();
                iVar2 = eastl::max<int>(m_pos, m_selectionStart);
                (&field_8, (long)iVar1, (long)(iVar2 - iVar1), 0, ' ')->replace();
                m_selectionStart = -1;
                m_pos = iVar1;
                return 1;
            }
            m_selectionStart = -1;
        }
        return 0;
    }

    // 0x100a3f660, 208 bytes, placed by debug map only (low confidence)
    // EditLine::GetSelection(int&, int&, eastl::fixed_string<char, 256, true, eastl::allocator>&) const
    undefined8 EditLine::GetSelection(int* param_1, int* param_2, fixed_string* param_3) {
        int iVar1;
        fixed_string local_158[296];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((m_selectionStart != -1) && (m_selectionStart != m_pos)) {
            iVar1 = eastl::min<graphics::GraphicsQuality>();
            *param_1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, m_selectionStart);
            *param_2 = iVar1;
            eastl::fixed_string<char, 256, true, eastl::allocator>::substr((ulong)local_158, (ulong)&field_8);
            eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
                (fixed_string<char, 4096, true, eastl::allocator>*)param_3, local_158);
            /* WARNING: Subroutine does not return */
            local_158->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 0;
    }

    // 0x100a46f10, 16 bytes, inline, placed by class header (inline)
    // EditLine::GetCursorShown() const
    undefined1 EditLine::GetCursorShown() {
        return m_cursorShown;
    }

    // 0x100a47590, 80 bytes, inline, placed by class header (inline)
    // EditLine::SetText(StringView)
    void EditLine::SetText(StringView param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)param_1.field_0->end();
        uVar2 = param_1.field_0->p2_alt2();
        (&field_8, pcVar1, uVar2)->assign();
        ValidatePosition(this);
    }

    // 0x100a48700, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EditLine::EditLine(): jumps straight to the base-object constructor

} // namespace jag::tweak
