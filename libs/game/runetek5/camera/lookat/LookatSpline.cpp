// libs/game/runetek5/camera/lookat/LookatSpline.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LookatSpline.h"

namespace jag::game {
    // 0x100067280: LookatSpline::GetSpline() has the same machine code as console::Snow::GetSnowPiles() const

    // 0x100615830
    LookatSpline::LookatSpline(LookatMode lookatMode) : ILookatManager(lookatMode) {
        uint8_t* this_00 = field_40;
        new (this_00) SplineMovement(0);
        if (lookatMode == 2) {
            this_00->SetSpeedProfile(1);
        } else if (lookatMode == 4) {
            this_00->SetSpeedProfile(2);
        } else {
            if (lookatMode != 6) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/lookat/LookatSpline.cpp",
                                22, "Unsupported spline mode");
            }
            this_00->SetSpeedProfile(3);
        }
    }

    // 0x100615930
    uint8_t* LookatSpline::GetCurrentLookat() const {
        vector<BSplineCubic>* this_02;
        uint8_t local_38[24];

        uint8_t* this_00 = field_40;
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00->GetScreen())->empty() ==
            '\0') {
            this_02 = (vector<BSplineCubic>*)this_00->GetScreen();
            (*this_02)[0];
            local_38->GetWorldPositionFromParameter((double)this_00->GetCurrentParameter());
            *field_16 = *local_38;
        } else {
            *field_16 = math::Vector3T<double>::SetToZero();
        }
        return field_16;
    }

    // 0x100615a70
    uint64_t LookatSpline::GetZRotation() const {
        vector<BSplineCubic>* this_01;

        uint8_t* this_03 = field_40;
        bool cVar1 =
            ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_03->GetScreen())->empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            this_01 = (vector<BSplineCubic>*)this_03->GetScreen();
            uVar2 = ((BSplineCubic*)(*this_01)[0])->GetWorldRollFromDistance((double)this_03->GetCurrentPoint());
        }
        return uVar2;
    }

    // 0x100615af0
    void LookatSpline::GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1) {
        field_40->GetOnFinishTriggers(arg1);
    }

    // 0x100615b00
    void LookatSpline::Update(float arg1, const math::Vector3T<double>& vector31,
                              const math::Vector3T<double>& vector32) {
        uint64_t local_38[2];

        local_38[0] = math::Vector3FromVector3T<double>(vector31);
        uint64_t local_28 = math::Vector3FromVector3T<double>(vector32);
        field_40->Update(arg1, *local_38, local_28);
    }

    // 0x100615b60
    void LookatSpline::ToString(eastl::fixed_string<char, 512>& str) const {
        uint64_t extraout_var;
        uint8_t local_80[88];

        uint8_t uVar1 = GetCurrentLookat();
        local_80->CoordFine<double>(0, *((Vector3T<double>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        new ((local_80 + 16)) eastl::fixed_string<char, 32>();
        auto pcVar2 = local_80->ToString<32, true>(*((local_80 + 16)));
        str.sprintf("{ LookatSpline : %s }", pcVar2);
        str.begin();
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
