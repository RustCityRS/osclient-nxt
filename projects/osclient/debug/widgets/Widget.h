// projects/osclient/debug/widgets/Widget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::widgets {
    class Padding {
    public:
        Padding(int, int, int, int);
    };

    class Widget {
    public:
        // virtual methods in vtable order
        virtual ~Widget();
        virtual void __pure_slot_2() = 0;
        virtual LayoutOverride();
        GetPadding() const;
        GridRect GetBounds() const;
        SetBackgroundColour(unsigned int);
        void SetPadding(Padding const&);
        SetTextColour(unsigned int);
        SetBorderColour(unsigned int);
        void SetBorderTop(bool);
        void SetPadding(int, int);
        void SetBorderLeft(bool);
        void SetPadding(int);
        void Layout(int, int, int, int);
        void Draw(DrawContext&);
        GetContentBounds() const;
        Widget();
        int GetTextColour() const;

        // data members, from how the methods use this: 80 bytes
        undefined** field_0;     // offset 0, vtable pointer
        uint m_backgroundColour; // offset 8
        uint m_borderColour;     // offset 12
        int m_textColour;        // offset 16
        char field_20;           // offset 20
        bool m_borderLeft;       // offset 21
        bool m_borderTop;        // offset 22
        byte field_23;           // offset 23
        byte field_24;           // offset 24
        char _unknown_25[7];
        int field_32;      // offset 32
        int field_36;      // offset 36
        int field_40;      // offset 40
        GridRect m_bounds; // offset 44
        char _unknown_64[16];
    };

    // 0x10005f250, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Padding::Padding(int, int, int, int): jumps straight to the base-object constructor

    // 0x10005fbf0, 16 bytes, inline, placed by class name
    // Widget::GetPadding() const
    undefined1* Widget::GetPadding() {
        return &field_28;
    }

    // 0x10005fc30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::GetBounds() const
    /* render::ImmediateRenderContext::GetStats() const */

    undefined1* render::ImmediateRenderContext::GetStats() {
        return &field_44;
    }

    // 0x10005fd90, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::SetBackgroundColour(unsigned int)
    /* ServerConnectionWorkItem::ServerConnectionWorkItem(ServerConnectionWorkItem::WorkType)
    */

    void ServerConnectionWorkItem::ServerConnectionWorkItem(undefined4 param_2) {
        field_8 = param_2;
    }

    // 0x10005fda0, 16 bytes, inline, placed by class name
    // Widget::SetPadding(Padding const&)
    void Widget::SetPadding(Padding* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)&field_28 = *(undefined8*)param_1;
        field_36 = (int)uVar1;
        field_40 = (int)((ulong)uVar1 >> 32);
    }

    // 0x10005fe40, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::SetTextColour(unsigned int)
    /* rs2lib::StockPlayerOffer::SetCompletedCount(int) */

    void rs2lib::StockPlayerOffer::SetCompletedCount(int param_1) {
        m_completedCount = param_1;
    }

    // 0x10005fe50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::SetBorderColour(unsigned int)
    /* minimap::Minimap::SetLevel(int) */

    void minimap::Minimap::SetLevel(int param_1) {
        m_level = param_1;
    }

    // 0x10005fe60, 16 bytes, inline, placed by class name
    // Widget::SetBorderTop(bool)
    void Widget::SetBorderTop(bool param_1) {
        m_borderTop = param_1;
    }

    // 0x10005fe90, 32 bytes, inline, placed by class name
    // Widget::SetPadding(int, int)
    void Widget::SetPadding(int param_1, int param_2) {
        *(int*)&field_28 = param_1;
        field_32 = param_2;
        field_36 = param_1;
        field_40 = param_2;
    }

    // 0x10005ff50, 16 bytes, inline, placed by class name
    // Widget::SetBorderLeft(bool)
    void Widget::SetBorderLeft(bool param_1) {
        m_borderLeft = param_1;
    }

    // 0x10005ff60, 32 bytes, inline, placed by class name
    // Widget::SetPadding(int)
    void Widget::SetPadding(int param_1) {
        *(int*)&field_28 = param_1;
        field_32 = param_1;
        field_36 = param_1;
        field_40 = param_1;
    }

    // 0x1000605a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::GetContentBounds() const
    /* Camera::GetPos() const */

    undefined1* Camera::GetPos() {
        return m_pos;
    }

    // 0x100066b70, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Widget::GetTextColour() const
    /* jag::graphics::TextRun::GetMaxLineWidth() const */

    int jag::graphics::TextRun::GetMaxLineWidth() {
        return m_maxLineWidth;
    }

} // namespace jag::oldscape::widgets

namespace jag::oldscape {
    // 0x10005fd90: the linker folded this into widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    ServerConnectionWorkItem::ServerConnectionWorkItem(ServerConnectionWorkItem::WorkType);

} // namespace jag::oldscape

namespace jag::oldscape::jagex3 {
    // 0x10005fe40: the linker folded this into widgets::Widget::SetTextColour(unsigned int), which has identical code
    RAII_RequestFailureHandler::SetCode(int);

} // namespace jag::oldscape::jagex3
