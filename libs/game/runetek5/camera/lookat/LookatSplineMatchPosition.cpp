// libs/game/runetek5/camera/lookat/LookatSplineMatchPosition.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LookatSplineMatchPosition.h"

namespace jag::game {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LookatSplineMatchPosition::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x100615c10, 144 bytes, placed by class name and debug map
    // LookatSplineMatchPosition::GetLookatPosition(math::Vector3T<double>&) const
    void LookatSplineMatchPosition::GetLookatPosition(Vector3T* param_1) {
        PositionSpline* this_00;
        double dVar2;
        undefined1 local_48[24];

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (((local_48 + 24))->operator_cast_to_bool()) {
            this_00 =
                (PositionSpline*)shared_ptr<PositionSpline>::operator->((shared_ptr<PositionSpline>*)(local_48 + 24));
            dVar2 = (double)this_00->GetSplineParameter();
            local_48->GetWorldPositionFromParameter(dVar2);
            math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)local_48);
        }
        ((local_48 + 24))->~shared_ptr();
    }

    // 0x100615d30, 144 bytes, placed by class name
    // LookatSplineMatchPosition::GetCurrentLookat() const
    undefined1* LookatSplineMatchPosition::GetCurrentLookat() {
        PositionSpline* this_00;
        double dVar2;
        undefined1 local_40[24];

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (((local_40 + 24))->operator_cast_to_bool()) {
            this_00 =
                (PositionSpline*)shared_ptr<PositionSpline>::operator->((shared_ptr<PositionSpline>*)(local_40 + 24));
            dVar2 = (double)this_00->GetSplineParameter();
            local_40->GetWorldPositionFromParameter(dVar2);
            math::Vector3T<double>::operator=((Vector3T<double>*)field_16, (Vector3T*)local_40);
        } else {
            field_16->SetToZero();
        }
        ((local_40 + 24))->~shared_ptr();
        return field_16;
    }

    // 0x100615dc0, 128 bytes, placed by class name
    // LookatSplineMatchPosition::GetZRotation() const
    undefined8 LookatSplineMatchPosition::GetZRotation() {
        PositionSpline* this_00;
        bool bVar1;
        double dVar2;
        shared_ptr local_30;
        undefined8 local_20;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_30);
        local_20 = 0;
        if (bVar1) {
            this_00 = (PositionSpline*)shared_ptr<PositionSpline>::operator->((shared_ptr<PositionSpline>*)&local_30);
            dVar2 = (double)this_00->GetSplineParameter();
            local_20 = (field_40, dVar2)->GetWorldRollFromParameter();
        }
        local_30.~shared_ptr();
        return local_20;
    }

    // 0x100615ed0, 80 bytes, placed by class name
    // LookatSplineMatchPosition::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatSplineMatchPosition::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatSplineMatchPosition::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        BSplineCubic local_58;

        new (&local_58) BSplineCubic(param_1);
        BSplineCubic::operator=((BSplineCubic*)field_40, &local_58);
        local_58.~BSplineCubic();
    }

    // 0x100615f30, 176 bytes, placed by class name
    // LookatSplineMatchPosition::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void LookatSplineMatchPosition::ToString(fixed_string* param_1) {
        Vector3T* pVVar1;
        char* pcVar2;
        undefined1 local_80[88];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        pVVar1 = (Vector3T*)(*(code*)field_0[4])();
        CoordFine::CoordFine<double>((CoordFine*)local_80, 0, pVVar1);
        new ((local_80 + 16)) eastl::fixed_string<char, 32, true, eastl::allocator>();
        pcVar2 = CoordFine::ToString<32, true>((CoordFine*)local_80, (fixed_string*)(local_80 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ LookatSplineMatchPosition : %s }", pcVar2);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
