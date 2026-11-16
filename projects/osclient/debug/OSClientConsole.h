// projects/osclient/debug/OSClientConsole.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class OSClientConsole : public console::Console // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSClientConsole();
        virtual unsigned int LoadCommandHistoryAndVars();
        virtual unsigned int SaveCommandHistoryAndVars();
        Client* GetClient();
        CommandLine GetCommandLineObject();
        void AddPendingCommandFromInput();
        OSClientConsoleUI* GetConsoleUI();
        void PasteFromClipboard();
        void SetCommandLineToPrevious();
        void SetCommandLineToNext();
        bool HasFocus() const;
        void Focus(bool arg1);
        bool IsOpen() const;
        void ToggleConsole();
        OSClientConsole(Client& client);
        void Reset();
        void OnFocusChanged();
        void OnShow();
        void OnHide();
        bool PrintCommandHelp(const char* str);
        void SetCommandLinePos(const StringView& stringView);
        void MainLogic(float arg1);
        void Clear();
        void Draw();
        void GetCommands();
        void SetOutputDirectory(const Filename& filename);
        void SetCommandHistoryFilename(const Filename& filename);
        uint8_t* GetInputHandler();

    private:
        Client* m_pClient;
        uint8_t _unknown_584[160];
        uint8_t m_open;
        uint8_t field_745;
        $_1 field_746;
        uint8_t _unknown_747[85];
        CommandLine m_commandLineObject;
        uint8_t _unknown_1156[612];
        int field_1768;
        uint8_t _unknown_1772[4];
    };

    // 0x10005a820
    Client* OSClientConsole::GetClient() {
        return m_pClient;
    }

    // 0x10005cf50
    CommandLine OSClientConsole::GetCommandLineObject() {
        return &field_832;
    }

    // 0x10005cfb0
    OSClientConsoleUI* OSClientConsole::GetConsoleUI() {
        return (OSClientConsoleUI*)*field_592;
    }

    // 0x10005d4c0
    bool OSClientConsole::HasFocus() const {
        return field_746[0];
    }

    // 0x10005d5a0
    bool OSClientConsole::IsOpen() const {
        return m_open;
    }

    // 0x100076c20
    void OSClientConsole::GetCommands() {
        *field_584;
    }

    // 0x1000dfb20
    void OSClientConsole::SetOutputDirectory(const Filename& filename) {
        field_1160 = filename;
    }

    // 0x1000dfb40
    void OSClientConsole::SetCommandHistoryFilename(const Filename& filename) {
        field_1464 = filename;
    }

    // 0x100189180
    uint8_t* OSClientConsole::GetInputHandler() {
        return m_headIconIndex;
    }

} // namespace jag::oldscape
