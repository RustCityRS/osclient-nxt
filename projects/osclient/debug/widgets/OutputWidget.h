// projects/osclient/debug/widgets/OutputWidget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::widgets {
    class OutputWidget {
    public:
        // virtual methods in vtable order
        virtual ~OutputWidget();
        virtual void DrawContents(DrawContext&);
        void SetBottomLine(int);
        OutputWidget(eastl::list<console::Line, eastl::allocator> const&);

        // data members, from how the methods use this: 100 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        char field_20;       // offset 20
        char _unknown_21[7];
        GridRect field_28; // offset 28
        char _unknown_48[32];
        list* field_80;   // offset 80
        int field_88;     // offset 88
        int m_bottomLine; // offset 92
        char _unknown_96[4];
    };

    // 0x10007ea00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OutputWidget::OutputWidget(eastl::list<console::Line, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x10007ea20, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // OutputWidget::OutputWidget(eastl::list<console::Line, eastl::allocator> const&)
    void OutputWidget::OutputWidget(list* param_1) {
        new (this) Widget();
        field_0 = &PTR_destruct<highlight::NpcUID*> _100ef28b8;
        field_80 = param_1;
        field_88 = 12;
        m_bottomLine = 0;
    }

} // namespace jag::oldscape::widgets
