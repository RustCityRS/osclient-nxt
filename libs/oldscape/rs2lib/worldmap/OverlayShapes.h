// libs/oldscape/rs2lib/worldmap/OverlayShapes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class ColumnData {
    public:
        ColumnData();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint8_t _unknown_8[4];
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    class OverlayShapes {
    public:
        ~OverlayShapes();
        OverlayShapes(int arg1);
        void DrawOverlayShape(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                              graphics::Pix2D& pix2D);
        unsigned int AdjustRotation(int arg1, int arg2);
        int AdjustShape(int arg1);
        void RShapes(int arg1, int arg2);
        void CalcOverlayShapes();
        void CalculateShape1();
        void CalculateShape2();
        void CalculateShape4();
        void CalculateShape5();
        void CalculateShape6();
        void CalculateShape7();
        void CalculateShape3();
        void CalculateShape8();

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x10012bf80
    OverlayShapes::~OverlayShapes() {
        field_8.~Array();
    }

    // 0x10020d9e0
    void OverlayShapes::RShapes(int arg1, int arg2) {
        field_8[(long)(arg1 + arg2 * 8)];
    }

    // 0x100216f10
    ColumnData::ColumnData() : field_0(1), field_4(4), field_12(0) {}

} // namespace jag::oldscape::rs2lib::worldmap
