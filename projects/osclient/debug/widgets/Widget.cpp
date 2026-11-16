// projects/osclient/debug/widgets/Widget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Widget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Widget::LayoutOverride();

    // 0x1000600e0, 288 bytes, placed by class name and debug map
    // Widget::Layout(int, int, int, int)
    void Widget::Layout(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        vector* pvVar9;
        int* piVar10;
        undefined4 in_register_00000034;
        type* ptVar11;

        this_00 = field_44;
        pvVar9 = this_00->SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        if ((((*(int*)pvVar9 == param_1) && (piVar10 = (int*)this_00->y(), *piVar10 == param_2)) &&
             (piVar10 = (int*)this_00->second(), *piVar10 == param_3)) &&
            (piVar10 = (int*)this_00->qw(), *piVar10 == param_4)) {
            return;
        }
        ptVar11 = (type*)(ulong)(uint)param_1;
        new (this_00) dash3d::GridRect(param_1, param_2, param_3, param_4);
        pvVar9 = this_00->SSOBeginPtr(ptVar11);
        bVar1 = m_borderLeft;
        iVar3 = *(int*)pvVar9;
        iVar4 = *(int*)&field_28;
        piVar10 = (int*)this_00->y();
        bVar2 = m_borderTop;
        iVar5 = *piVar10;
        iVar6 = field_32;
        piVar10 = (int*)this_00->second();
        iVar7 = eastl::max<int>(0, *piVar10 - (*(int*)&field_28 + field_36 + (uint)m_borderLeft + (uint)field_23));
        piVar10 = (int*)this_00->qw();
        iVar8 = eastl::max<int>(0, *piVar10 - (field_32 + field_40 + (uint)m_borderTop + (uint)field_24));
        new ((field_44 + 16), (uint)bVar1 + iVar3 + iVar4, (uint)bVar2 + iVar5 + iVar6, iVar7, iVar8)
            dash3d::GridRect();
        (*(code*)field_0[3])(this);
    }

    // 0x100060420, 384 bytes, placed by class name
    // Widget::Draw(DrawContext&)
    void Widget::Draw(DrawContext* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        vector* pvVar3;
        int* piVar4;
        uint* puVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        undefined1 local_50[24];

        this_00 = field_44;
        pvVar3 = this_00->SSOBeginPtr(param_1);
        iVar10 = *(int*)pvVar3;
        piVar4 = (int*)this_00->y();
        iVar8 = *piVar4;
        puVar5 = (uint*)this_00->second();
        uVar9 = *puVar5;
        piVar4 = (int*)this_00->qw();
        iVar7 = *piVar4;
        if (m_borderLeft != false) {
            param_1->Line(iVar10, iVar8, iVar10, iVar7 + iVar8, field_12);
            iVar10 = iVar10 + 1;
            uVar9 = uVar9 - 1;
        }
        local_50._16_8_ = ZEXT48(uVar9);
        if (m_borderTop != false) {
            param_1->Line(iVar10, iVar8, uVar9 + iVar10, iVar8, field_12);
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + -1;
        }
        if (field_23 != 0) {
            iVar2 = local_50._16_4_;
            iVar6 = iVar2 + iVar10;
            param_1->Line(iVar6, iVar8, iVar6, iVar7 + iVar8, field_12);
            local_50._16_8_ = ZEXT48(iVar2 - 1);
        }
        if (field_24 == 0) {
            cVar1 = field_20;
        } else {
            param_1->Line(iVar10, iVar7 + iVar8, (int)local_50._16_8_ + iVar10, iVar7 + iVar8, field_12);
            iVar7 = iVar7 + -1;
            cVar1 = field_20;
        }
        if (cVar1 != '\0') {
            new (local_50) dash3d::GridRect(iVar10, iVar8, (int)local_50._16_8_, iVar7);
            param_1->FillRect(local_50, field_8);
        }
        piVar4 = (int*)((field_44 + 16))->second();
        if ((0 < *piVar4) && (piVar4 = (int*)((field_44 + 16))->qw(), 0 < *piVar4)) {
            (*(code*)field_0[2])(this, param_1);
        }
    }

    // 0x1000666d0, 112 bytes, base-object constructor, placed by class name
    // Widget::Widget()
    void Widget::Widget() {
        field_0 = &PTR__Widget_100ef2858;
        field_8 = 4282664004;
        field_12 = 4289374890;
        field_16 = 4294967295;
        field_20 = '\x01';
        new (&m_borderLeft, '\0', '\0', '\0', '\0') jag::math::Vector4T<unsigned char>();
        new (&field_28, 0, 0, 0, 0) dash3d::GridRect();
        new (field_44, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new ((field_44 + 16), (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1000672a0, 16 bytes, base-object destructor, placed by class name
    // Widget::~Widget()
    void Widget::~Widget() {}

    // 0x1000672b0, 16 bytes, complete-object destructor, placed by class name
    // Widget::~Widget(): jumps straight to the base-object destructor

    // 0x1000672c0, 16 bytes, deleting destructor, placed by class name
    // Widget::~Widget()
    void Widget::~Widget() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

} // namespace jag::oldscape::widgets
