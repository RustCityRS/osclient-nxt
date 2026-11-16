// libs/console/CommandLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::console {
    class CommandLine {
    public:
        // virtual methods in vtable order
        virtual ~CommandLine();
        uint GetPos() const;
        void IsEmpty() const;
        GetSelectionStart() const;
        CommandLine();
        void SetCursorShown(bool);
        void GetText() const;
        void Reset();
        void SetText<eastl::string>(eastl::string const&);
        bool GetCursorShown() const;
        void SetSelectionStart(int);
        void ValidatePosition();
        GetSelection(int&, int&) const;
        GetSelection(int&, int&, eastl::fixed_string<char, 256, true, eastl::allocator>&) const;
        void swap(CommandLine&);
        void Home();
        void End();
        void SelectAll();
        void SetSelecting(bool);
        void SetPos(int);
        void SelectNone();
        void Insert(char);
        DeleteSelection();
        void Backspace();
        void Delete();
        void Left();
        void Right();
        void WordLeft();
        void WordRight();
        void DelWordLeft();
        void DelWordRight();
        void DelToStartOfLine();
        void DelToEndOfLine();
        void ClipboardCopy();
        void ClipboardPaste();
        void Insert<eastl::string>(eastl::string const&);
        void ClipboardCut();

        // data members, from how the methods use this: 324 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint m_pos;         // offset 8
        char _unknown_12[4];
        undefined1 field_16; // offset 16
        char _unknown_17[295];
        uint m_selectionStart; // offset 312
        bool m_selecting;      // offset 316
        bool m_cursorShown;    // offset 317
        char _unknown_318[6];
    };

    // 0x10005d050, 16 bytes, inline, placed by class name and debug map
    // CommandLine::IsEmpty() const
    void CommandLine::IsEmpty() {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
    }

    // 0x10005d590, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CommandLine::GetSelectionStart() const
    /* graphics::Model::GetLevel() const */

    undefined4 graphics::Model::GetLevel() {
        return m_level;
    }

    // 0x10005e0e0, 16 bytes, complete-object constructor, inline, placed by class name
    // CommandLine::CommandLine(): jumps straight to the base-object constructor

    // 0x10005e240, 16 bytes, complete-object destructor, inline, placed by class name
    // CommandLine::~CommandLine(): jumps straight to the base-object destructor

    // 0x10005e5b0, 16 bytes, inline, placed by class name
    // CommandLine::SetCursorShown(bool)
    void CommandLine::SetCursorShown(bool param_1) {
        m_cursorShown = param_1;
    }

    // 0x10005e990, 16 bytes, inline, placed by class name
    // CommandLine::GetText() const
    void CommandLine::GetText() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x10005e9a0, 64 bytes, inline, placed by class name
    // CommandLine::Reset()
    void CommandLine::Reset() {
        m_pos = 0;
        eastl::string::clear();
        m_selectionStart = 4294967295;
        m_selecting = false;
    }

    // 0x10005eaa0, 80 bytes, inline, placed by class name
    // void CommandLine::SetText<eastl::string >(eastl::string const&)
    void CommandLine::SetText<eastl::string>(basic_string* param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        ((param_1 + 16))->assign(pcVar1, uVar2);
        ValidatePosition((CommandLine*)param_1);
    }

    // 0x100066b90, 16 bytes, inline, placed by class name
    // CommandLine::GetCursorShown() const
    undefined1 CommandLine::GetCursorShown() {
        return m_cursorShown;
    }

    // 0x1000754f0, 80 bytes, base-object constructor, inline, placed by class name
    // CommandLine::CommandLine()
    void CommandLine::CommandLine() {
        field_0 = PTR_vtable_100ee85e0 + 16;
        m_pos = 0;
        new (&field_16) eastl::fixed_string<char, 256, true, eastl::allocator>();
        m_selectionStart = 4294967295;
        m_selecting = false;
        m_cursorShown = true;
    }

    // 0x100075540, 32 bytes, deleting destructor, inline, placed by class name
    // CommandLine::~CommandLine()
    void CommandLine::~CommandLine() {
        ~CommandLine(this);
        operator_delete(this);
    }

    // 0x100075560, 32 bytes, base-object destructor, inline, placed by class name
    // CommandLine::~CommandLine()
    void CommandLine::~CommandLine() {
        field_0 = PTR_vtable_100ee85e0 + 16;
        /* WARNING: Subroutine does not return */
        (&field_16)->~fixed_string();
    }

    // 0x100c79f80, 16 bytes, inline, placed by class name
    // CommandLine::SetSelecting(bool)
    void CommandLine::SetSelecting(bool param_1) {
        m_selecting = param_1;
    }

    // 0x100c79f90, 16 bytes, inline, placed by class name
    // CommandLine::SetPos(int)
    void CommandLine::SetPos(int param_1) {
        m_pos = param_1;
        ValidatePosition(this);
    }

    // 0x100c7a720, 112 bytes, inline, placed by class name
    // void CommandLine::Insert<eastl::string >(eastl::string const&)
    void CommandLine::Insert<eastl::string>(basic_string* param_1) {
        char* pcVar1;
        ulong uVar2;
        int iVar3;

        DeleteSelection((CommandLine*)param_1);
        iVar3 = *(int*)(param_1 + 8);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        ((param_1 + 16))->replace((long)iVar3, 0, pcVar1, uVar2);
        iVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        *(int*)(param_1 + 8) = *(int*)(param_1 + 8) + iVar3;
    }

} // namespace jag::game::console
