// projects/osclient/debug/widgets/ScrollBarWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScrollBarWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: ScrollBarWidget::~ScrollBarWidget() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10005fb50
    void ScrollBarWidget::Value(float arg1) {
        field_80 = jag::math::Clamp<float>(arg1, 0.0, 1.0);
        RecalculateThumbBounds();
    }

    // 0x100060260
    void ScrollBarWidget::SetThumbRelativeHeight(float arg1) {
        field_84 = jag::math::Clamp<float>(arg1, 0.0, 1.0);
        RecalculateThumbBounds();
    }

    // 0x1000602c0
    void ScrollBarWidget::SetThumbVisible(bool arg1) {
        m_thumbVisible = arg1;
        RecalculateThumbBounds();
    }

    // 0x100060690
    void ScrollBarWidget::MoveThumb(int arg1) {
        int iVar2 = ((Minimap*)GetPos())->GetLevel();
        auto piVar1 = m_thumbBounds->qw();
        Value((float)arg1 / (float)(iVar2 - *piVar1) + field_80);
    }

    // 0x100066fb0
    void ScrollBarWidget::DrawContents(DrawContext& drawContext) {
        unsigned int arg2;

        if (m_thumbVisible != false) {
            arg2 = GetMaxLineWidth();
            drawContext.FillRect(*m_thumbBounds, arg2);
        }
    }

    // 0x100066fe0
    void ScrollBarWidget::LayoutOverride() {
        RecalculateThumbBounds();
    }

    // 0x100066ff0
    void ScrollBarWidget::RecalculateThumbBounds() {
        float fVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int arg3;

        auto this_00 = GetPos();
        if (m_thumbVisible == false) {
            iVar4 = this_00->GetX();
            iVar3 = this_00->GetZ();
            arg3 = 0;
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
            arg3 = this_00->GetPos();
        }
        new (m_thumbBounds) dash3d::GridRect(iVar4, iVar3, arg3, iVar2);
    }

} // namespace jag::oldscape::widgets
