// libs/ui/components/Line.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Line : public Rectangle // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Line();
        virtual GetType() const;
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual int GetVisibleWidth() const;
        virtual int GetVisibleHeight() const;
        GetLineFlipDiagonal() const;
        uint GetLineStrokeWidth() const;

        // data members, from how the methods use this: 400 bytes, the first 393 are Rectangle
        char _unknown_393[3];
        bool m_lineFlipDiagonal; // offset 396
        char _unknown_397[3];
    };

    // 0x10069baf0, 16 bytes, inline, placed by class name and debug map
    // Line::GetLineFlipDiagonal() const
    undefined1 Line::GetLineFlipDiagonal() {
        return m_lineFlipDiagonal;
    }

    // 0x10069bb00, 16 bytes, inline, placed by class name and debug map
    // Line::GetLineStrokeWidth() const
    uint Line::GetLineStrokeWidth() {
        return m_lineStrokeWidth;
    }

    // 0x1006ad9e0, 16 bytes, complete-object destructor, inline, placed by class name
    // Line::~Line(): jumps straight to the base-object destructor

    // 0x1006ad9f0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Line::~Line()
    /* Rectangle::~Rectangle() */

    void Rectangle::~Rectangle() {
        ~Rectangle(this);
        operator_delete(this);
    }

    // 0x1006ada10, 16 bytes, inline, placed by class name
    // Line::GetVisibleWidth() const
    int Line::GetVisibleWidth() {
        return field_88 + 1;
    }

    // 0x1006ada20, 16 bytes, inline, placed by class name
    // Line::GetVisibleHeight() const
    int Line::GetVisibleHeight() {
        return field_92 + 1;
    }

    // 0x1006b2f20, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Line::~Line()
    /* Rectangle::~Rectangle() */

    void Rectangle::~Rectangle() {
        ~Component();
    }

} // namespace jag::ui
