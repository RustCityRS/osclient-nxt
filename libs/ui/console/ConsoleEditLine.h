// libs/ui/console/ConsoleEditLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::ui {
    class ConsoleEditLine {
    public:
        GetPos() const;
        GetDrawOffset() const;
        void Draw(int, int, int, int, shared_ptr<graphics::Font> const&, graphics::RT7Core*, graphics::FontHelpers*,
                  int,
                  std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                                     eastl::fixed_string<char, 256, true, eastl::allocator> const&)>*);
        GetSelectionRange(int&, int&) const;
        HandleChar(int);
        bool SupportsKeyChar(int);
        void Insert(StringView);
        ulong HandleKeyDown(int);
        void ClipboardCopy();
        void ClipboardPaste();
        void ClipboardCut();
        void Home();
        void End();
        void WordLeft();
        void Left();
        void WordRight();
        void Right();
        void DelWordRight();
        void Delete();
        void DelWordLeft();
        void Backspace();
        HandleKeyUp(int);
        DeleteSelection();
        void ValidatePosition();
        ConsoleEditLine();
        ~ConsoleEditLine();
        GetText() const;
        void SetCursorShown(bool);
        void SetPos(int);
        void IsEmpty() const;
        void Reset();
        void SetText(StringView);

        // data members, from how the methods use this: 336 bytes
        int field_0;        // offset 0
        int m_pos;          // offset 4
        undefined1 field_8; // offset 8
        char _unknown_9[295];
        int field_304;  // offset 304
        bool field_308; // offset 308
        char field_309; // offset 309
        char _unknown_310[2];
        undefined4 field_312; // offset 312
        uint field_316;       // offset 316
        uint field_320;       // offset 320
        undefined4 field_324; // offset 324
        undefined4 field_328; // offset 328
        char _unknown_332[4];
    };

    // 0x100681af0, 32 bytes, inline, placed by class name and debug map
    // ConsoleEditLine::SupportsKeyChar(int)
    /* tweak::EditLine::SupportsKeyChar(int) */

    bool tweak::EditLine::SupportsKeyChar(int param_1) {
        return param_1 - 32U < 160 && param_1 != 128;
    }

    // 0x100682030, 48 bytes, inline, placed by class name and debug map
    // ConsoleEditLine::Home()
    /* tweak::EditLine::Home() */

    void tweak::EditLine::Home() {
        m_pos = 0;
        if (m_selecting == false) {
            m_selectionStart = -1;
            return;
        }
    }

    // 0x100682060, 48 bytes, inline, placed by class name and debug map
    // ConsoleEditLine::End()
    /* tweak::EditLine::End() */

    void tweak::EditLine::End() {
        m_pos = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (m_selecting == false) {
            m_selectionStart = -1;
        }
    }

    // 0x100683440, 16 bytes, complete-object constructor, inline, placed by class name
    // ConsoleEditLine::ConsoleEditLine(): jumps straight to the base-object constructor

    // 0x100683a40, 16 bytes, complete-object destructor, inline, placed by class name
    // ConsoleEditLine::~ConsoleEditLine(): jumps straight to the base-object destructor

    // 0x100683ec0, 32 bytes, inline, placed by class name
    // ConsoleEditLine::GetText() const
    ConsoleEditLine* ConsoleEditLine::GetText() {
        long in_RSI;

        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)this,
                                                                                      (fixed_string*)(in_RSI + 8));
        return this;
    }

    // 0x100684e50, 16 bytes, inline, placed by class name
    // ConsoleEditLine::SetCursorShown(bool)
    /* tweak::EditLine::SetCursorShown(bool) */

    void tweak::EditLine::SetCursorShown(bool param_1) {
        m_cursorShown = param_1;
    }

    // 0x1006856c0, 16 bytes, inline, placed by class name
    // ConsoleEditLine::SetPos(int)
    void ConsoleEditLine::SetPos(int param_1) {
        m_pos = param_1;
        ValidatePosition(this);
    }

    // 0x100686820, 16 bytes, inline, placed by class name
    // ConsoleEditLine::IsEmpty() const
    void ConsoleEditLine::IsEmpty() {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
    }

    // 0x100686f10, 64 bytes, inline, placed by class name
    // ConsoleEditLine::Reset()
    void ConsoleEditLine::Reset() {
        m_pos = 0;
        eastl::string::clear();
        field_304 = -1;
        field_308 = false;
    }

    // 0x100686ff0, 96 bytes, inline, placed by class name
    // ConsoleEditLine::SetText(StringView)
    void ConsoleEditLine::SetText(StringView param_1) {
        char* pcVar1;
        ulong uVar2;

        field_304 = -1;
        pcVar1 = (char*)param_1.field_0->end();
        uVar2 = param_1.field_0->p2_alt2();
        (&field_8, pcVar1, uVar2)->assign();
        ValidatePosition(this);
    }

    // 0x1006ae460, 80 bytes, base-object constructor, inline, placed by class name
    // ConsoleEditLine::ConsoleEditLine()
    void ConsoleEditLine::ConsoleEditLine() {
        field_0 = 0;
        m_pos = 0;
        new (&field_8) eastl::fixed_string<char, 256, true, eastl::allocator>();
        field_304 = -1;
        field_308 = false;
        field_309 = '\x01';
        field_312 = 4294967295;
        field_316 = 255;
        field_320 = 255;
        field_324 = 2155937696;
        field_328 = 4286611711;
    }

    // 0x1006aeba0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ConsoleEditLine::~ConsoleEditLine()
    /* tweak::EditLine::~EditLine() */

    void tweak::EditLine::~EditLine() {
        /* WARNING: Subroutine does not return */
        (&field_8)->~fixed_string();
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x1006aeba0: the linker folded this into ui::ConsoleEditLine::~ConsoleEditLine(), which has identical code
    EditLine::~EditLine();

} // namespace jag::tweak
