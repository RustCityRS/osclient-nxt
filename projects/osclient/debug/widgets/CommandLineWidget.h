// projects/osclient/debug/widgets/CommandLineWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::widgets {
    class CommandLineWidget {
    public:
        // virtual methods in vtable order
        virtual ~CommandLineWidget();
        virtual void DrawContents(DrawContext& drawContext);
        void SetHighlightColour(unsigned int arg1);
        void SetSelectedTextColour(unsigned int arg1);
        CommandLineWidget(game::console::CommandLine& commandLine);

    private:
        unsigned int field_8;
        unsigned int field_12;
        uint32_t field_16;
        char field_20;
        uint8_t _unknown_21[7];
        GridRect field_28;
        uint8_t _unknown_48[32];
        CommandLine* field_80;
        uint32_t m_highlightColour;
        uint8_t _unknown_92[8];
    };

    // 0x10005fe70
    void CommandLineWidget::SetHighlightColour(unsigned int arg1) {
        m_currentWidth = arg1;
    }

    // 0x10005fe80
    void CommandLineWidget::SetSelectedTextColour(unsigned int arg1) {
        m_bottomLine = arg1;
    }

} // namespace jag::oldscape::widgets
