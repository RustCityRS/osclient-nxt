// projects/osclient/debug/widgets/Widget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Widget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: Widget::LayoutOverride() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000600e0
    void Widget::Layout(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* this_00 = m_bounds;
        int* piVar7 = (int*)this_00->SSOBeginPtr();
        if ((((*piVar7 == arg1) && (piVar7 = (int*)this_00->y(), *piVar7 == arg2)) &&
             (piVar7 = (int*)this_00->second(), *piVar7 == arg3)) &&
            (piVar7 = (int*)this_00->qw(), *piVar7 == arg4)) {
            return;
        }
        new (this_00) dash3d::GridRect(arg1, arg2, arg3, arg4);
        piVar7 = (int*)this_00->SSOBeginPtr();
        bool bVar1 = m_borderLeft;
        int iVar3 = *piVar7;
        int iVar4 = *(int*)&field_28;
        piVar7 = (int*)this_00->y();
        bool bVar2 = m_borderTop;
        int iVar5 = *piVar7;
        int iVar6 = field_32;
        piVar7 = (int*)this_00->second();
        int arg3_00 = eastl::max<int>(
            0, *piVar7 - (*(int*)&field_28 + field_36 + (unsigned int)m_borderLeft + (unsigned int)field_23));
        piVar7 = (int*)this_00->qw();
        int arg4_00 =
            eastl::max<int>(0, *piVar7 - (field_32 + field_40 + (unsigned int)m_borderTop + (unsigned int)field_24));
        new ((m_bounds + 16)) dash3d::GridRect((unsigned int)bVar1 + iVar3 + iVar4, (unsigned int)bVar2 + iVar5 + iVar6,
                                               arg3_00, arg4_00);
        LayoutOverride();
    }

    // 0x100060420
    void Widget::Draw(DrawContext& drawContext) {
        bool cVar1;
        int iVar2;
        int arg1;
        uint8_t local_50[24];

        uint8_t* this_00 = m_bounds;
        int* piVar3 = (int*)this_00->SSOBeginPtr();
        int arg1_00 = *piVar3;
        piVar3 = (int*)this_00->y();
        int arg2 = *piVar3;
        auto puVar4 = this_00->second();
        unsigned int uVar5 = *puVar4;
        piVar3 = (int*)this_00->qw();
        int arg4 = *piVar3;
        if (m_borderLeft != false) {
            drawContext.Line(arg1_00, arg2, arg1_00, arg4 + arg2, m_borderColour);
            arg1_00 = arg1_00 + 1;
            uVar5 = uVar5 - 1;
        }
        local_50._16_8_ = (uint64_t)uVar5;
        if (m_borderTop != false) {
            drawContext.Line(arg1_00, arg2, uVar5 + arg1_00, arg2, m_borderColour);
            arg2 = arg2 + 1;
            arg4 = arg4 - 1;
        }
        if (field_23 != 0) {
            iVar2 = local_50._16_4_;
            arg1 = iVar2 + arg1_00;
            drawContext.Line(arg1, arg2, arg1, arg4 + arg2, m_borderColour);
            local_50._16_8_ = (uint64_t)(iVar2 - 1);
        }
        if (field_24 == 0) {
            cVar1 = field_20;
        } else {
            drawContext.Line(arg1_00, arg4 + arg2, (int)local_50._16_8_ + arg1_00, arg4 + arg2, m_borderColour);
            arg4 = arg4 - 1;
            cVar1 = field_20;
        }
        if (cVar1) {
            new (local_50) dash3d::GridRect(arg1_00, arg2, (int)local_50._16_8_, arg4);
            drawContext.FillRect(*local_50, m_backgroundColour);
        }
        piVar3 = (int*)((m_bounds + 16))->second();
        if ((0 < *piVar3) && (piVar3 = (int*)((m_bounds + 16))->qw(), 0 < *piVar3)) {
            slot2(drawContext);
        }
    }

    // 0x1000666d0
    Widget::Widget() : m_backgroundColour(4282664004), m_borderColour(4289374890), m_textColour(-1) {
        field_20 = '\x01';
        new (&m_borderLeft) jag::math::Vector4T(false, false, false, false);
        new (&field_28) dash3d::GridRect(0, 0, 0, 0);
        new (m_bounds) shared_ptr();
        new ((m_bounds + 16)) shared_ptr();
    }

    // 0x1000672a0
    Widget::~Widget() {}

} // namespace jag::oldscape::widgets
