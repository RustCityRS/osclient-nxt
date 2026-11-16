// libs/math/primitives/Rect.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x10012c880, 208 bytes, inline, placed by class name and debug map
    // Rect<int>::Intersection(Rect<int>) const
    Rect<int>* Rect<int>::Intersection(CoordMapSquare* param_2, Layout* param_3) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        vector* pvVar7;
        int* piVar8;

        iVar1 = param_2->GetX();
        pvVar7 = eastl::string::Layout::SSOBeginPtr(param_3, (type*)param_2);
        iVar1 = eastl::max<int>(iVar1, *(int*)pvVar7);
        iVar2 = param_2->GetZ();
        piVar8 = (int*)param_3->y();
        iVar2 = eastl::max<int>(iVar2, *piVar8);
        uVar3 = Right((Rect<int>*)param_2);
        uVar4 = Right((Rect<int>*)param_3);
        iVar5 = eastl::min<graphics::GraphicsQuality>(uVar3, uVar4);
        uVar3 = MaxZ((Rect<int>*)param_2);
        uVar4 = MaxZ((Rect<int>*)param_3);
        iVar6 = eastl::min<graphics::GraphicsQuality>(uVar3, uVar4);
        new (this) oldscape::dash3d::GridRect(iVar1, iVar2, iVar5 - iVar1, iVar6 - iVar2);
        return this;
    }

    // 0x10012c950, 208 bytes, inline, placed by class name and debug map
    // Rect<int>::Intersects(Rect<int> const&) const
    bool Rect<int>::Intersects(Rect* param_1) {
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;

        iVar2 = GetPos();
        iVar3 = GetLevel();
        iVar4 = param_1->GetPos();
        iVar5 = param_1->GetLevel();
        bVar1 = false;
        if ((((0 < iVar4) && (0 < iVar5)) && (0 < iVar2)) && (0 < iVar3)) {
            iVar6 = GetX();
            iVar7 = GetZ();
            iVar8 = param_1->GetX();
            iVar9 = param_1->GetZ();
            if (((iVar6 < iVar4 + iVar8) && ((iVar5 < 0 || (iVar7 < iVar5 + iVar9)))) &&
                ((iVar2 < 0 || (iVar8 < iVar6 + iVar2)))) {
                bVar1 = iVar9 < iVar7 + iVar3 || iVar3 < 0;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

} // namespace jag::math
