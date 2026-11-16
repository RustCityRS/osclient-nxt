// libs/ui/utils/UIPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::ui {
    class UIPoint {
    public:
        UIPoint();
        auto Accumulate(const UIPoint& uiPoint);
    };

    // 0x100030be0: UIPoint::UIPoint() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

    // 0x1006a5f10
    auto UIPoint::Accumulate(const UIPoint& uiPoint) {
        auto result;

        result = result + *(int*)uiPoint;
        *(int*)&result.field_4 = *(int*)&result.field_4 + *(int*)(uiPoint + 4);
        float fVar1 = *(float*) && result[1].field_4;
        *(float*)(&result + 1) = *(float*)(&result + 1) + *(float*)(uiPoint + 8);
        *(float*) && result[1].field_4 = fVar1 + *(float*)(uiPoint + 12);
        return result;
    }

} // namespace jag::ui
