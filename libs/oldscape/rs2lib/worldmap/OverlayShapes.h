// libs/oldscape/rs2lib/worldmap/OverlayShapes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class ColumnData {
    public:
        ColumnData();

        // data members, from how the methods use this: 20 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[4];
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    class OverlayShapes {
    public:
        ~OverlayShapes();
        OverlayShapes(int);
        void DrawOverlayShape(int, int, int, int, int, int, int, int, graphics::Pix2D&);
        uint AdjustRotation(int, int);
        int AdjustShape(int);
        void RShapes(int, int);
        void CalcOverlayShapes();
        void CalculateShape1();
        void CalculateShape2();
        void CalculateShape4();
        void CalculateShape5();
        void CalculateShape6();
        void CalculateShape7();
        void CalculateShape3();
        void CalculateShape8();

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x10012bf70, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OverlayShapes::~OverlayShapes(): jumps straight to the base-object destructor

    // 0x10012bf80, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // OverlayShapes::~OverlayShapes()
    void OverlayShapes::~OverlayShapes() {
        (&field_8)->~Array();
    }

    // 0x10020d9e0, 32 bytes, inline, placed by class name
    // OverlayShapes::RShapes(int, int)
    void OverlayShapes::RShapes(int param_1, int param_2) {
        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)&field_8, (long)(param_1 + param_2 * 8));
    }

    // 0x100210b90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColumnData::ColumnData(): jumps straight to the base-object constructor

    // 0x100216f10, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ColumnData::ColumnData()
    void ColumnData::ColumnData() {
        field_0 = 1;
        field_4 = 4;
        field_12 = 0;
    }

} // namespace jag::oldscape::rs2lib::worldmap
