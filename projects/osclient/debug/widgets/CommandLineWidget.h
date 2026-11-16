// projects/osclient/debug/widgets/CommandLineWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::widgets {
    class CommandLineWidget {
    public:
        // virtual methods in vtable order
        virtual ~CommandLineWidget();
        virtual void DrawContents(DrawContext&);
        SetHighlightColour(unsigned int);
        SetSelectedTextColour(unsigned int);
        CommandLineWidget(game::console::CommandLine&);

        // data members, from how the methods use this: 100 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        char field_20;       // offset 20
        char _unknown_21[7];
        GridRect field_28; // offset 28
        char _unknown_48[32];
        CommandLine* field_80; // offset 80
        undefined4 field_88;   // offset 88
        char _unknown_92[8];
    };

    // 0x10005fe70, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CommandLineWidget::SetHighlightColour(unsigned int)
    /* ui::Component::SetCurrentWidth(int) */

    void ui::Component::SetCurrentWidth(int param_1) {
        m_currentWidth = param_1;
    }

    // 0x10005fe80, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CommandLineWidget::SetSelectedTextColour(unsigned int)
    /* OutputWidget::SetBottomLine(int) */

    void OutputWidget::SetBottomLine(int param_1) {
        m_bottomLine = param_1;
    }

} // namespace jag::oldscape::widgets
