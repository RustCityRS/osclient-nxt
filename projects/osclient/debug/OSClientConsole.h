// projects/osclient/debug/OSClientConsole.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class OSClientConsole : public console::Console // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~OSClientConsole();
        virtual uint LoadCommandHistoryAndVars();
        virtual uint SaveCommandHistoryAndVars();
        Client* GetClient();
        CommandLine GetCommandLineObject();
        void AddPendingCommandFromInput();
        void GetConsoleUI();
        void PasteFromClipboard();
        void SetCommandLineToPrevious();
        void SetCommandLineToNext();
        HasFocus() const;
        void Focus(bool);
        byte IsOpen() const;
        void ToggleConsole();
        OSClientConsole(Client&);
        void Reset();
        void OnFocusChanged();
        void OnShow();
        void OnHide();
        bool PrintCommandHelp(char const*);
        void SetCommandLinePos(StringView const&);
        void MainLogic(float);
        void Clear();
        void Draw();
        void GetCommands();
        void SetOutputDirectory(Filename const&);
        void SetCommandHistoryFilename(Filename const&);
        GetInputHandler();

        // data members, from how the methods use this: 1776 bytes, the first 576 are Console
        Client* m_pClient; // offset 576
        char _unknown_584[160];
        byte m_open;          // offset 744
        undefined1 field_745; // offset 745
        $_1 field_746;        // offset 746
        char _unknown_747[85];
        CommandLine m_commandLineObject; // offset 832
        char _unknown_1156[4];
        Filename field_1160; // offset 1160
        char _unknown_1176[288];
        Filename field_1464; // offset 1464
        char _unknown_1480[288];
        int field_1768; // offset 1768
        char _unknown_1772[4];
    };

    // 0x10005a820, 16 bytes, inline, placed by class name and debug map
    // OSClientConsole::GetClient()
    Client* OSClientConsole::GetClient() {
        return m_pClient;
    }

    // 0x10005cf50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSClientConsole::GetCommandLineObject()
    /* jag::graphics::ShadowMapCascade::GetLightOrthProjMax() const */

    undefined1* jag::graphics::ShadowMapCascade::GetLightOrthProjMax() {
        return &field_832;
    }

    // 0x10005cfb0, 32 bytes, inline, placed by class name
    // OSClientConsole::GetConsoleUI()
    void OSClientConsole::GetConsoleUI() {
        std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator*(
            (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
    }

    // 0x10005d4c0, 16 bytes, inline, placed by class name
    // OSClientConsole::HasFocus() const
    undefined1 OSClientConsole::HasFocus() {
        return field_746[0];
    }

    // 0x10005d5a0, 16 bytes, inline, placed by class name
    // OSClientConsole::IsOpen() const
    byte OSClientConsole::IsOpen() {
        return m_open;
    }

    // 0x100076c20, 32 bytes, inline, placed by class name
    // OSClientConsole::GetCommands()
    void OSClientConsole::GetCommands() {
        std::unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>::operator*(
            (unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>*)&field_584);
    }

    // 0x1000dfb20, 32 bytes, inline, placed by class name and debug map
    // OSClientConsole::SetOutputDirectory(Filename const&)
    void OSClientConsole::SetOutputDirectory(Filename* param_1) {
        Filename::operator=((Filename*)field_1160, param_1);
    }

    // 0x1000dfb40, 32 bytes, inline, placed by class name and debug map
    // OSClientConsole::SetCommandHistoryFilename(Filename const&)
    void OSClientConsole::SetCommandHistoryFilename(Filename* param_1) {
        Filename::operator=((Filename*)field_1464, param_1);
    }

    // 0x100189180, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSClientConsole::GetInputHandler()
    /* game::NPCType::GetHeadIconIndex() const */

    undefined1* game::NPCType::GetHeadIconIndex() {
        return &m_headIconIndex;
    }

} // namespace jag::oldscape
