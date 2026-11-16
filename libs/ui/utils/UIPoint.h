// libs/ui/utils/UIPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::ui {
    class UIPoint {
    public:
        UIPoint();
        UIPoint* Accumulate(UIPoint const&);

        // data members, from how the methods use this: 20 bytes
        int field_0;    // offset 0
        int field_4;    // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    UIPoint::UIPoint();

    // 0x100030be0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    UIPoint::UIPoint();

    // 0x1006a5f10, 64 bytes, inline, placed by class name and debug map
    // UIPoint::Accumulate(UIPoint const&)
    UIPoint* UIPoint::Accumulate(UIPoint* param_1) {
        field_0 = field_0 + param_1->field_0;
        field_4 = field_4 + param_1->field_4;
        field_8 = field_8 + param_1->field_8;
        field_12 = field_12 + param_1->field_12;
        return this;
    }

} // namespace jag::ui
