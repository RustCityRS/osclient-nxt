// libs/game/runetek5/camera/spline/BSplineQuadraticSegment.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BSplineQuadraticSegment.h"

namespace jag::game {
    // 0x1006067a0, 416 bytes, placed by class name and debug map
    // BSplineQuadraticSegment::GetWorldPosition(double)
    BSplineQuadraticSegment* BSplineQuadraticSegment::GetWorldPosition(double param_1) {
        double dVar1;
        double dVar2;
        NXTPixToolkit* this_00;
        vector* pvVar3;
        NXTPixToolkit* this_01;
        NXTPixToolkit* this_02;
        double* pdVar4;
        array<math::Vector3T<double>, 3ul>* in_RSI;
        type* ptVar5;
        double dVar6;
        double dVar7;
        double dVar8;
        double dVar9;

        dVar7 = 1.0 - param_1;
        dVar9 = dVar7 * dVar7;
        dVar8 = (dVar7 + dVar7) * param_1;
        dVar6 = param_1 * param_1;
        new (this) oldscape::dash3d::ModelLit::AABB();
        ptVar5 = (type*)0;
        this_00 = (NXTPixToolkit*)std::array<math::Vector3T<double>, 3ul>::operator[](in_RSI, 0);
        pvVar3 = this_00->SSOBeginPtr(ptVar5);
        dVar7 = *(double*)pvVar3;
        ptVar5 = (type*)&DAT_00000001;
        this_01 = (NXTPixToolkit*)std::array<math::Vector3T<double>, 3ul>::operator[](in_RSI, 1);
        pvVar3 = this_01->SSOBeginPtr(ptVar5);
        dVar1 = *(double*)pvVar3;
        ptVar5 = (type*)2;
        this_02 = (NXTPixToolkit*)std::array<math::Vector3T<double>, 3ul>::operator[](in_RSI, 2);
        pvVar3 = this_02->SSOBeginPtr(ptVar5);
        dVar2 = *(double*)pvVar3;
        pvVar3 = SSOBeginPtr(ptVar5);
        *(double*)pvVar3 = dVar2 * dVar6 + dVar7 * dVar9 + dVar1 * dVar8;
        pdVar4 = (double*)this_00->second();
        dVar7 = *pdVar4;
        pdVar4 = (double*)this_01->second();
        dVar1 = *pdVar4;
        pdVar4 = (double*)this_02->second();
        dVar2 = *pdVar4;
        pdVar4 = (double*)second();
        *pdVar4 = dVar2 * dVar6 + dVar7 * dVar9 + dVar1 * dVar8;
        pdVar4 = (double*)this_00->GetScreen();
        dVar7 = *pdVar4;
        pdVar4 = (double*)this_01->GetScreen();
        dVar1 = *pdVar4;
        pdVar4 = (double*)this_02->GetScreen();
        dVar2 = *pdVar4;
        pdVar4 = (double*)GetScreen();
        *pdVar4 = dVar6 * dVar2 + dVar9 * dVar7 + dVar8 * dVar1;
        return this;
    }

} // namespace jag::game
