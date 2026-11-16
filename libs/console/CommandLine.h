// libs/console/CommandLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::console {
    class CommandLine {
    public:
        // virtual methods in vtable order
        virtual ~CommandLine();
        EnumOptionToggle GetPos() const;
        void IsEmpty() const;
        uint32_t GetSelectionStart() const;
        CommandLine();
        void SetCursorShown(bool arg1);
        char* GetText() const;
        void Reset();
        void SetText<eastl::string>(const eastl::string& str);
        bool GetCursorShown() const;
        void SetSelectionStart(int arg1);
        void ValidatePosition();
        uint64_t GetSelection(int& arg1, int& arg2) const;
        uint64_t GetSelection(int& arg1, int& arg2, eastl::fixed_string<char, 256>& str) const;
        void swap(CommandLine& commandLine);
        void Home();
        void End();
        void SelectAll();
        void SetSelecting(bool arg1);
        void SetPos(int arg1);
        void SelectNone();
        void Insert(char arg1);
        uint64_t DeleteSelection();
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
        void Insert<eastl::string>(const eastl::string& str);
        void ClipboardCut();

    private:
        EnumOptionToggle m_pos;
        uint8_t _unknown_12[300];
        EnumOptionToggle m_selectionStart;
        bool m_selecting;
        bool m_cursorShown;
        uint8_t _unknown_318[6];
    };

    // 0x10005d050
    void CommandLine::IsEmpty() const {
        field_16.empty();
    }

    // 0x10005d590
    uint32_t CommandLine::GetSelectionStart() const {
        return m_level;
    }

    // 0x10005e5b0
    void CommandLine::SetCursorShown(bool arg1) {
        m_cursorShown = arg1;
    }

    // 0x10005e990
    char* CommandLine::GetText() const {
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x10005e9a0
    void CommandLine::Reset() {
        m_pos = 0;
        field_16.clear();
        m_selectionStart = 4294967295;
        m_selecting = false;
    }

    // 0x10005eaa0
    void CommandLine::SetText<eastl::string>(const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        (&field_16)->assign(str_00, arg2);
        ValidatePosition();
    }

    // 0x100066b90
    bool CommandLine::GetCursorShown() const {
        return m_cursorShown;
    }

    // 0x1000754f0
    CommandLine::CommandLine() : m_pos(0), m_selectionStart(4294967295), m_selecting(false), m_cursorShown(true) {}

    // 0x100075560
    CommandLine::~CommandLine() {
        field_16.~fixed_string();
    }

    // 0x100c79f80
    void CommandLine::SetSelecting(bool arg1) {
        m_selecting = arg1;
    }

    // 0x100c79f90
    void CommandLine::SetPos(int arg1) {
        m_pos = arg1;
        ValidatePosition();
    }

    // 0x100c7a720
    void CommandLine::Insert<eastl::string>(const eastl::string& str) {
        DeleteSelection();
        EnumOptionToggle EVar1 = m_pos;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg4 = str.size();
        (&field_16)->replace((long)(int)EVar1, 0, str_00, arg4);
        int iVar2 = str.size();
        m_pos = m_pos + iVar2;
    }

} // namespace jag::game::console
