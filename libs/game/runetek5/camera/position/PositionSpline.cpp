// libs/game/runetek5/camera/position/PositionSpline.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PositionSpline.h"

namespace jag::game {
    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    PositionSpline::IsSpline() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    PositionSpline::GetSpline();

    // 0x100615ce0, 80 bytes, placed by class name and debug map
    // PositionSpline::GetSplineParameter()
    undefined8 PositionSpline::GetSplineParameter() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<BSplineCubic, eastl::allocator>* this_01;
        BSplineCubic* this_02;
        double dVar1;
        char cVar2;
        undefined1* this_03;
        undefined8 uVar3;

        this_03 = field_16;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_03->GetScreen();
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        uVar3 = 0;
        if (cVar2 == '\0') {
            this_01 = (vector<BSplineCubic, eastl::allocator>*)this_03->GetScreen();
            this_02 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](this_01, 0);
            dVar1 = (double)this_03->GetCurrentPoint();
            uVar3 = this_02->GetParameterFromWorldDistance(dVar1);
        }
        return uVar3;
    }

    // 0x100617be0, 192 bytes, base-object constructor, placed by class name
    // PositionSpline::PositionSpline(PositionMode)
    void PositionSpline::PositionSpline(int param_2) {
        undefined1* puVar1;

        IPositionManager::IPositionManager();
        field_0 = &PTR__PositionSpline_100f0be58;
        puVar1 = field_16;
        new (puVar1) SplineMovement(1);
        new (field_288) oldscape::dash3d::ModelLit::AABB();
        if (param_2 == 2) {
            puVar1->SetSpeedProfile(1);
        } else if (param_2 == 3) {
            puVar1->SetSpeedProfile(2);
        } else {
            if (param_2 != 4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/position/PositionSpline.cpp",
                                24, "Unsupported spline mode");
            }
            puVar1->SetSpeedProfile(3);
        }
    }

    // 0x100617ca0, 16 bytes, complete-object constructor, placed by class name
    // PositionSpline::PositionSpline(PositionMode): jumps straight to the base-object constructor

    // 0x100617dc0, 96 bytes, placed by class name
    // PositionSpline::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&)
    void PositionSpline::Update(float param_1, Vector3T* param_2, Vector3T* param_3) {
        undefined8 local_38[2];
        undefined8 local_28;

        local_38[0] = math::Vector3FromVector3T<double>((math*)param_2, param_2);
        local_28 = math::Vector3FromVector3T<double>((math*)param_3, param_2);
        (field_16, param_1, (Vector3T*)local_38, (Vector3T*)&local_28)->Update();
    }

    // 0x100617e20, 192 bytes, placed by class name
    // PositionSpline::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void PositionSpline::ToString(fixed_string* param_1) {
        char* pcVar1;
        undefined1 local_80[88];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        (*(code*)field_0[6])((Vector3T*)(local_80 + 16));
        CoordFine::CoordFine<double>((CoordFine*)local_80, 0, (Vector3T*)(local_80 + 16));
        new ((local_80 + 16)) eastl::fixed_string<char, 32, true, eastl::allocator>();
        pcVar1 = CoordFine::ToString<32, true>((CoordFine*)local_80, (fixed_string*)(local_80 + 16));
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ PositionSpline : %s }", pcVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        /* WARNING: Subroutine does not return */
        ((local_80 + 16))->~fixed_string();
    }

    // 0x1006197d0: the linker folded this into PositionSpline::GetPosition(math::Vector3T<double>&, unsigned long long) const, which has identical code
    PositionSpline::GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const;

} // namespace jag::game
