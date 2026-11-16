// libs/ui/components/Line.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Line : public Rectangle // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Line();
        virtual uint64_t GetType() const;
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual int GetVisibleWidth() const;
        virtual int GetVisibleHeight() const;
        bool GetLineFlipDiagonal() const;
        unsigned int GetLineStrokeWidth() const;

    private:
        uint8_t _unknown_393[3];
        bool m_lineFlipDiagonal;
        uint8_t _unknown_397[3];
    };

    // 0x10069baf0
    bool Line::GetLineFlipDiagonal() const {
        return m_lineFlipDiagonal;
    }

    // 0x10069bb00
    unsigned int Line::GetLineStrokeWidth() const {
        return m_lineStrokeWidth;
    }

    // 0x1006ada10
    int Line::GetVisibleWidth() const {
        return field_88 + 1;
    }

    // 0x1006ada20
    int Line::GetVisibleHeight() const {
        return field_92 + 1;
    }

    // 0x1006b2f20
    Line::~Line() {}

} // namespace jag::ui
