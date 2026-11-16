// libs/game/runetek5/camera/lookat/LookatSpline.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LookatSpline.h"

namespace jag::game {
    // 0x100067280: the linker folded this into console::Snow::GetSnowPiles() const, which has identical code
    LookatSpline::GetSpline();

    // 0x100615830, 192 bytes, base-object constructor, placed by class name and debug map
    // LookatSpline::LookatSpline(LookatMode)
    void LookatSpline::LookatSpline(int param_2) {
        undefined1* puVar1;

        ILookatManager::ILookatManager();
        field_0 = &PTR__LookatSpline_100f0bdc0;
        new (field_16) oldscape::dash3d::ModelLit::AABB();
        puVar1 = field_40;
        new (puVar1) SplineMovement(0);
        if (param_2 == 2) {
            puVar1->SetSpeedProfile(1);
        } else if (param_2 == 4) {
            puVar1->SetSpeedProfile(2);
        } else {
            if (param_2 != 6) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/lookat/LookatSpline.cpp",
                                22, "Unsupported spline mode");
            }
            puVar1->SetSpeedProfile(3);
        }
    }

    // 0x100615920, 16 bytes, complete-object constructor, placed by class name
    // LookatSpline::LookatSpline(LookatMode): jumps straight to the base-object constructor

    // 0x100615930, 128 bytes, placed by class name
    // LookatSpline::GetCurrentLookat() const
    undefined1* LookatSpline::GetCurrentLookat() {
        undefined1* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        vector<BSplineCubic, eastl::allocator>* this_02;
        double dVar2;
        undefined1 local_38[24];

        this_00 = field_40;
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetScreen();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_01) == '\0') {
            this_02 = (vector<BSplineCubic, eastl::allocator>*)this_00->GetScreen();
            eastl::vector<BSplineCubic, eastl::allocator>::operator[](this_02, 0);
            dVar2 = (double)this_00->GetCurrentParameter();
            local_38->GetWorldPositionFromParameter(dVar2);
            math::Vector3T<double>::operator=((Vector3T<double>*)field_16, (Vector3T*)local_38);
        } else {
            field_16->SetToZero();
        }
        return field_16;
    }

    // 0x100615a70, 80 bytes, placed by class name
    // LookatSpline::GetZRotation() const
    undefined8 LookatSpline::GetZRotation() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<BSplineCubic, eastl::allocator>* this_01;
        BSplineCubic* this_02;
        double dVar1;
        char cVar2;
        undefined1* this_03;
        undefined8 uVar3;

        this_03 = field_40;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_03->GetScreen();
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        uVar3 = 0;
        if (cVar2 == '\0') {
            this_01 = (vector<BSplineCubic, eastl::allocator>*)this_03->GetScreen();
            this_02 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](this_01, 0);
            dVar1 = (double)this_03->GetCurrentPoint();
            uVar3 = this_02->GetWorldRollFromDistance(dVar1);
        }
        return uVar3;
    }

    // 0x100615af0, 16 bytes, placed by class name
    // LookatSpline::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&)
    void LookatSpline::GetFinishTriggers(fixed_vector* param_1) {
        (field_40, param_1)->GetOnFinishTriggers();
    }

    // 0x100615b00, 96 bytes, placed by class name
    // LookatSpline::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&)
    void LookatSpline::Update(float param_1, Vector3T* param_2, Vector3T* param_3) {
        undefined8 local_38[2];
        undefined8 local_28;

        local_38[0] = math::Vector3FromVector3T<double>((math*)param_2, param_2);
        local_28 = math::Vector3FromVector3T<double>((math*)param_3, param_2);
        (field_40, param_1, (Vector3T*)local_38, (Vector3T*)&local_28)->Update();
    }

    // 0x100615b60, 176 bytes, placed by class name
    // LookatSpline::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void LookatSpline::ToString(fixed_string* param_1) {
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
            (char*)param_1, "{ LookatSpline : %s }", pcVar2);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_80 + 16))->~fixed_string();
    }

} // namespace jag::game
