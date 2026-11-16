// projects/osclient/debug/widgets/OutputWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::widgets {
    class OutputWidget {
    public:
        // virtual methods in vtable order
        virtual ~OutputWidget();
        virtual void DrawContents(DrawContext& drawContext);
        void SetBottomLine(int arg1);
        OutputWidget(const eastl::list<console::Line>& lines);

    private:
        unsigned int field_8;
        unsigned int field_12;
        uint32_t field_16;
        char field_20;
        uint8_t _unknown_21[7];
        GridRect field_28;
        uint8_t _unknown_48[32];
        list<console::Line>* field_80;
        int field_88;
        int m_bottomLine;
        uint8_t _unknown_96[4];
    };

    // 0x10007ea20
    OutputWidget::OutputWidget(const eastl::list<console::Line>& lines)
        : Widget(), field_80(lines), field_88(12), m_bottomLine(0) {}

} // namespace jag::oldscape::widgets
