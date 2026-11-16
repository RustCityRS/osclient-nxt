// libs/math/primitives/Rect.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x10012c880
    auto Rect<int>::Intersection(Rect<int> rect) const {
        auto SVar1 = GetX();
        auto pSVar6 = rect->SSOBeginPtr();
        int arg1 = eastl::max<int>(SVar1, *pSVar6);
        SVar1 = GetZ();
        pSVar6 = (ShaderVariablePrecision*)rect->y();
        int arg2 = eastl::max<int>(SVar1, *pSVar6);
        auto EVar2 = Right(this);
        auto EVar3 = Right(rect);
        int iVar4 = eastl::min<graphics::GraphicsQuality>(EVar2, EVar3);
        EVar2 = MaxZ(this);
        EVar3 = MaxZ(rect);
        int iVar5 = eastl::min<graphics::GraphicsQuality>(EVar2, EVar3);
        return auto(arg1, arg2, iVar4 - arg1, iVar5 - arg2);
    }

    // 0x10012c950
    bool Rect<int>::Intersects(const Rect<int>& rect) const {
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;

        int iVar2 = GetPos();
        int iVar3 = GetLevel();
        int iVar4 = rect.GetPos();
        int iVar5 = rect.GetLevel();
        bool bVar1 = false;
        if ((((0 < iVar4) && (0 < iVar5)) && (0 < iVar2)) && (0 < iVar3)) {
            iVar6 = GetX();
            iVar7 = GetZ();
            iVar8 = rect.GetX();
            iVar9 = rect.GetZ();
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
