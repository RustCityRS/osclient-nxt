// libs/game/runetek5/camera/spline/BSplineQuadraticSegment.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BSplineQuadraticSegment.h"

namespace jag::game {
    // 0x1006067a0
    BSplineQuadraticSegment* BSplineQuadraticSegment::GetWorldPosition(double arg1) {
        array<math::Vector3T<double>, 3ul>* in_RSI;

        double dVar5 = 1.0 - arg1;
        double dVar7 = dVar5 * dVar5;
        double dVar6 = (dVar5 + dVar5) * arg1;
        double dVar4 = arg1 * arg1;
        new (this) oldscape::dash3d::ModelLit::AABB();
        NXTPixToolkit* this_00 = (NXTPixToolkit*)(*in_RSI)[0];
        auto pdVar3 = this_00->SSOBeginPtr();
        dVar5 = *pdVar3;
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*in_RSI)[1];
        pdVar3 = (double*)this_01->SSOBeginPtr();
        double dVar1 = *pdVar3;
        NXTPixToolkit* this_02 = (NXTPixToolkit*)(*in_RSI)[2];
        pdVar3 = (double*)this_02->SSOBeginPtr();
        double dVar2 = *pdVar3;
        pdVar3 = (double*)SSOBeginPtr();
        *pdVar3 = dVar2 * dVar4 + dVar5 * dVar7 + dVar1 * dVar6;
        pdVar3 = (double*)this_00->second();
        dVar5 = *pdVar3;
        pdVar3 = (double*)this_01->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)this_02->second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)second();
        *pdVar3 = dVar2 * dVar4 + dVar5 * dVar7 + dVar1 * dVar6;
        pdVar3 = (double*)this_00->GetScreen();
        dVar5 = *pdVar3;
        pdVar3 = (double*)this_01->GetScreen();
        dVar1 = *pdVar3;
        pdVar3 = (double*)this_02->GetScreen();
        dVar2 = *pdVar3;
        pdVar3 = (double*)GetScreen();
        *pdVar3 = dVar4 * dVar2 + dVar7 * dVar5 + dVar6 * dVar1;
        return this;
    }

} // namespace jag::game
