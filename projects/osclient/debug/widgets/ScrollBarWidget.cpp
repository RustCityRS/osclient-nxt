// projects/osclient/debug/widgets/ScrollBarWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScrollBarWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ScrollBarWidget::~ScrollBarWidget();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    ScrollBarWidget::~ScrollBarWidget();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (Client::*)(), Client*&>, std::allocator<std::__bind<void (Client::*)(), Client*&> >, void (ClientWindowMode)>::~__func(), which has identical code
    ScrollBarWidget::~ScrollBarWidget();

    // 0x10005fb50, 80 bytes, placed by class name and debug map
    // ScrollBarWidget::Value(float)
    void ScrollBarWidget::Value(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 0.0;
        local_14 = 1.0;
        local_1c = param_1;
        field_80 = jag::math::Clamp<float>(&local_1c, &local_18, &local_14);
        RecalculateThumbBounds(this);
    }

    // 0x100060260, 80 bytes, placed by class name
    // ScrollBarWidget::SetThumbRelativeHeight(float)
    void ScrollBarWidget::SetThumbRelativeHeight(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 0.0;
        local_14 = 1.0;
        local_1c = param_1;
        field_84 = jag::math::Clamp<float>(&local_1c, &local_18, &local_14);
        RecalculateThumbBounds(this);
    }

    // 0x1000602c0, 16 bytes, placed by class name
    // ScrollBarWidget::SetThumbVisible(bool)
    void ScrollBarWidget::SetThumbVisible(bool param_1) {
        m_thumbVisible = param_1;
        RecalculateThumbBounds(this);
    }

    // 0x100060690, 96 bytes, placed by class name
    // ScrollBarWidget::MoveThumb(int)
    void ScrollBarWidget::MoveThumb(int param_1) {
        Minimap* this_00;
        int* piVar1;
        int iVar2;

        this_00 = (Minimap*)GetPos();
        iVar2 = this_00->GetLevel();
        piVar1 = (int*)field_88->qw();
        Value(this, (float)param_1 / (float)(iVar2 - *piVar1) + field_80);
    }

    // 0x100066fb0, 48 bytes, placed by class name
    // ScrollBarWidget::DrawContents(DrawContext&)
    void ScrollBarWidget::DrawContents(DrawContext* param_1) {
        uint uVar1;

        if (m_thumbVisible != false) {
            uVar1 = GetMaxLineWidth();
            param_1->FillRect((Rect*)field_88, uVar1);
        }
    }

    // 0x100066fe0, 16 bytes, placed by class name
    // ScrollBarWidget::LayoutOverride()
    void ScrollBarWidget::LayoutOverride() {
        RecalculateThumbBounds(this);
    }

    // 0x100066ff0, 224 bytes, placed by class name
    // ScrollBarWidget::RecalculateThumbBounds()
    void ScrollBarWidget::RecalculateThumbBounds() {
        float fVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Minimap* this_00;

        this_00 = (Minimap*)GetPos();
        if (m_thumbVisible == false) {
            iVar4 = this_00->GetX();
            iVar3 = this_00->GetZ();
            iVar5 = 0;
            iVar2 = 0;
        } else {
            fVar1 = field_84;
            iVar2 = this_00->GetLevel();
            iVar2 = jag::math::RoundFloatToInt((float)iVar2 * fVar1);
            iVar3 = this_00->GetZ();
            fVar1 = field_80;
            iVar4 = this_00->GetLevel();
            iVar4 = jag::math::RoundFloatToInt((float)(iVar4 - iVar2) * fVar1);
            iVar3 = iVar3 + iVar4;
            iVar4 = this_00->GetX();
            iVar5 = this_00->GetPos();
        }
        new (field_88, iVar4, iVar3, iVar5, iVar2) dash3d::GridRect();
    }

} // namespace jag::oldscape::widgets
