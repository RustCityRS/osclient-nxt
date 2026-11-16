// libs/game/runetek5/camera/lookat/LookatSplineMatchPosition.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LookatSplineMatchPosition.h"

namespace jag::game {
    // 0x100029ea0: LookatSplineMatchPosition::GetFinishTriggers(eastl::fixed_vector<int, 2ul>&) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100615c10
    void LookatSplineMatchPosition::GetLookatPosition(math::Vector3T<double>& vector3) const {
        PositionSpline* this_00;
        uint8_t local_48[24];

        *((local_48 + 24)) = field_104.lock();
        if (((local_48 + 24))->operator_cast_to_bool() != '\0') {
            this_00 = (PositionSpline*)(*((local_48 + 24))).operator->();
            local_48->GetWorldPositionFromParameter((double)this_00->GetSplineParameter());
            vector3 = *local_48;
        }
        ((local_48 + 24))->~shared_ptr();
    }

    // 0x100615d30
    uint8_t* LookatSplineMatchPosition::GetCurrentLookat() const {
        PositionSpline* this_00;
        uint8_t local_40[24];

        *((local_40 + 24)) = field_104.lock();
        if (((local_40 + 24))->operator_cast_to_bool() == '\0') {
            *field_16 = math::Vector3T<double>::SetToZero();
        } else {
            this_00 = (PositionSpline*)(*((local_40 + 24))).operator->();
            local_40->GetWorldPositionFromParameter((double)this_00->GetSplineParameter());
            *field_16 = *local_40;
        }
        ((local_40 + 24))->~shared_ptr();
        return field_16;
    }

    // 0x100615dc0
    uint64_t LookatSplineMatchPosition::GetZRotation() const {
        PositionSpline* this_00;

        shared_ptr local_30 = field_104.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_30);
        return local_20 = 0;
        if (cVar1) {
            this_00 = (PositionSpline*)local_30.operator->();
            local_20 = field_40->GetWorldRollFromParameter((double)this_00->GetSplineParameter());
        }
        return local_20;
    }

    // 0x100615ed0
    void LookatSplineMatchPosition::ProcessServerUpdate(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
        const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {

        BSplineCubic local_58(arg1);
        *field_40 = local_58;
    }

    // 0x100615f30
    void LookatSplineMatchPosition::ToString(eastl::fixed_string<char, 512>& str) const {
        uint64_t extraout_var;
        uint8_t local_80[88];

        uint8_t uVar1 = GetCurrentLookat();
        local_80->CoordFine<double>(0, *((Vector3T<double>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        new ((local_80 + 16)) eastl::fixed_string<char, 32>();
        auto pcVar2 = local_80->ToString<32, true>(*((local_80 + 16)));
        str.sprintf("{ LookatSplineMatchPosition : %s }", pcVar2);
        str.begin();
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
