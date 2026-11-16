// libs/game/runetek5/camera/position/PositionSpline.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PositionSpline.h"

namespace jag::game {
    // 0x10002d860: PositionSpline::IsSpline() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1000b9950: PositionSpline::GetSpline() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100615ce0
    uint64_t PositionSpline::GetSplineParameter() {
        vector<BSplineCubic>* this_01;

        uint8_t* this_03 = m_spline;
        bool cVar1 =
            ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_03->GetScreen())->empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            this_01 = (vector<BSplineCubic>*)this_03->GetScreen();
            uVar2 = ((BSplineCubic*)(*this_01)[0])->GetParameterFromWorldDistance((double)this_03->GetCurrentPoint());
        }
        return uVar2;
    }

    // 0x100617be0
    PositionSpline::PositionSpline(PositionMode positionMode) : IPositionManager(positionMode) {
        uint8_t* this_00 = m_spline;
        new (this_00) SplineMovement(1);
        new (&field_288) oldscape::dash3d::ModelLit::AABB();
        if (positionMode == 2) {
            this_00->SetSpeedProfile(1);
        } else if (positionMode == 3) {
            this_00->SetSpeedProfile(2);
        } else {
            if (positionMode != 4) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/position/PositionSpline.cpp",
                                24, "Unsupported spline mode");
            }
            this_00->SetSpeedProfile(3);
        }
    }

    // 0x100617dc0
    void PositionSpline::Update(float arg1, const math::Vector3T<double>& vector31,
                                const math::Vector3T<double>& vector32) {
        uint64_t local_38[2];

        local_38[0] = math::Vector3FromVector3T<double>(vector31);
        uint64_t local_28 = math::Vector3FromVector3T<double>(vector32);
        m_spline->Update(arg1, *local_38, local_28);
    }

    // 0x100617e20
    void PositionSpline::ToString(eastl::fixed_string<char, 512>& str) const {
        uint8_t local_80[16];

        GetCurrentPosition((ReturnValue*)(local_80 + 16), this);
        local_80->CoordFine<double>(0, *((local_80 + 16)));
        new ((local_80 + 16)) eastl::fixed_string<char, 32>();
        auto pcVar1 = local_80->ToString<32, true>(*((local_80 + 16)));
        str.sprintf("{ PositionSpline : %s }", pcVar1);
        str.begin();
        ((local_80 + 16))->~fixed_string();
    }

    // 0x1006197d0: PositionSpline::GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const has the same machine code as PositionSpline::GetPosition(math::Vector3T<double>&, unsigned long long) const

} // namespace jag::game
