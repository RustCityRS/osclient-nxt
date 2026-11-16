// projects/osclient/debug/widgets/Widget.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::widgets {
    class Padding {
    public:
        Padding(int arg1, int arg2, int arg3, int arg4);
    };

    class Widget {
    public:
        // virtual methods in vtable order
        virtual ~Widget();
        virtual void __pure_slot_2() = 0;
        virtual void LayoutOverride();
        uint8_t* GetPadding() const;
        GridRect GetBounds() const;
        void SetBackgroundColour(unsigned int arg1);
        void SetPadding(const Padding& padding);
        void SetTextColour(unsigned int arg1);
        void SetBorderColour(unsigned int arg1);
        void SetBorderTop(bool arg1);
        void SetPadding(int arg1, int arg2);
        void SetBorderLeft(bool arg1);
        void SetPadding(int arg1);
        void Layout(int arg1, int arg2, int arg3, int arg4);
        void Draw(DrawContext& drawContext);
        uint8_t* GetContentBounds() const;
        Widget();
        int GetTextColour() const;

    private:
        unsigned int m_backgroundColour;
        unsigned int m_borderColour;
        int m_textColour;
        char field_20;
        bool m_borderLeft;
        bool m_borderTop;
        uint8_t field_23;
        uint8_t field_24;
        uint8_t _unknown_25[7];
        int field_32;
        int field_36;
        int field_40;
        GridRect m_bounds;
        uint8_t _unknown_64[16];
    };

    // 0x10005fbf0
    uint8_t* Widget::GetPadding() const {
        return &field_28;
    }

    // 0x10005fc30
    GridRect Widget::GetBounds() const {
        return &field_44;
    }

    // 0x10005fd90
    void Widget::SetBackgroundColour(unsigned int arg1) {
        field_8 = arg1;
    }

    // 0x10005fda0
    void Widget::SetPadding(const Padding& padding) {
        uint64_t uVar1 = *(uint64_t*)(padding + 8);
        *(uint64_t*)&field_28 = *(uint64_t*)padding;
        field_36 = (int)uVar1;
        field_40 = (int)((unsigned long)uVar1 >> 32);
    }

    // 0x10005fe40
    void Widget::SetTextColour(unsigned int arg1) {
        m_completedCount = arg1;
    }

    // 0x10005fe50
    void Widget::SetBorderColour(unsigned int arg1) {
        m_level = arg1;
    }

    // 0x10005fe60
    void Widget::SetBorderTop(bool arg1) {
        m_borderTop = arg1;
    }

    // 0x10005fe90
    void Widget::SetPadding(int arg1, int arg2) {
        *(int*)&field_28 = arg1;
        field_32 = arg2;
        field_36 = arg1;
        field_40 = arg2;
    }

    // 0x10005ff50
    void Widget::SetBorderLeft(bool arg1) {
        m_borderLeft = arg1;
    }

    // 0x10005ff60
    void Widget::SetPadding(int arg1) {
        *(int*)&field_28 = arg1;
        field_32 = arg1;
        field_36 = arg1;
        field_40 = arg1;
    }

    // 0x1000605a0
    uint8_t* Widget::GetContentBounds() const {
        return m_pos;
    }

    // 0x100066b70
    int Widget::GetTextColour() const {
        return m_maxLineWidth;
    }

} // namespace jag::oldscape::widgets

namespace jag::oldscape {
    // 0x10005fd90: ServerConnectionWorkItem::ServerConnectionWorkItem(ServerConnectionWorkItem::WorkType) has the same machine code as widgets::Widget::SetBackgroundColour(unsigned int)

} // namespace jag::oldscape

namespace jag::oldscape::jagex3 {
    // 0x10005fe40: RAII_RequestFailureHandler::SetCode(int) has the same machine code as widgets::Widget::SetTextColour(unsigned int)

} // namespace jag::oldscape::jagex3
