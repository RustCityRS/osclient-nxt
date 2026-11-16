// libs/graphics/runetek7/animation/asm/BlendSpace2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendSpace2D.h"

namespace jag::graphics {
    // 0x10095bfa0, 240 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace2D::BlendSpace2D(float*, float*, std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry> >&&, eastl::vector<int, eastl::allocator>&&)
    /* BlendSpace2D::BlendSpace2D(float*, float*,
   std::vector<BlendSpace2D::BlendSpaceEntry,
   std::allocator<BlendSpace2D::BlendSpaceEntry> >&&, eastl::vector<int,
   eastl::allocator>&&) */

    void BlendSpace2D::BlendSpace2D(float* param_1, float* param_2, vector* param_3, vector* param_4) {
        new (this) BlendTreeNode();
        field_0 = &PTR__BlendSpace2D_100f1b2f8;
        field_40 = param_1;
        field_48 = param_2;
        new (&field_56, param_3)
            std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>();
        new (&field_80, param_4) eastl::vector<int, eastl::allocator>();
        new (&field_112) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        if (param_1 == (float*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVariableX != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.cpp",
                      17, (char*)0);
        }
        if (param_2 == (float*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVariableY != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.cpp",
                      18, (char*)0);
        }
    }

    // 0x10095c0b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace2D::BlendSpace2D(float*, float*, std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry> >&&, eastl::vector<int, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x10095c0c0, 1440 bytes, placed by class name and debug map
    // BlendSpace2D::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void BlendSpace2D::GetPose(Layout* param_2, undefined8 param_3, undefined8 param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>* this_00;
        undefined8 this_01;
        char cVar4;
        bool bVar5;
        long lVar6;
        ulong uVar7;
        int* piVar8;
        long lVar9;
        long lVar10;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* puVar11;
        long* plVar12;
        long* plVar13;
        long* plVar14;
        ulong uVar15;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const>* this_02;
        vector<unsigned int, eastl::allocator>* this_03;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_19a0[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1990[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1980[16];
        WrapArray<JointPose> local_1970[16];
        WrapArray<JointPose> local_1960[16];
        WrapArray<JointPose> local_1950[16];
        WrapArray<JointPose> local_1940[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1930[16];
        Point<float> local_1920[16];
        vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>* local_1910;
        Point<float> local_1908[16];
        ulong local_18f8;
        BlendSpace2D* local_18f0;
        vector<unsigned int, eastl::allocator>* local_18e8;
        float local_18e0;
        float local_18dc;
        ulong local_18d8;
        ulong local_18d0;
        long* local_18c8;
        undefined1 local_18bc[12];
        undefined8 local_18b0;
        undefined8 local_18a8;
        char local_1899;
        Point<float> local_1898[3120];
        Point<float> local_c68[3120];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1910 = (vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>*)&field_56;
        local_18f0 = this;
        local_18bc._4_8_ = param_2;
        local_18b0 = param_4;
        local_18a8 = param_3;
        cVar4 = std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::empty(
            local_1910);
        if (cVar4 == '\0') {
            if (local_18f0->field_40 == (float*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_pPositionX != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          29, (char*)0);
            }
            if (local_18f0->field_48 == (float*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_pPositionY != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          30, (char*)0);
            }
            this_03 = (vector<unsigned int, eastl::allocator>*)&local_18f0->field_80;
            lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_03);
            if (6148914691236517205 < (ulong)(lVar6 * -6148914691236517205)) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_indices.size() % 3 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace2D.cpp",
                          31, (char*)0);
            }
            lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(this_03);
            if (lVar6 != 0) {
                uVar15 = 0;
                local_18e8 = this_03;
                do {
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_03, uVar15);
                    iVar1 = *piVar8;
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_03, uVar15 + 1);
                    iVar2 = *piVar8;
                    local_18f8 = uVar15 + 2;
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_03, local_18f8);
                    this_00 = local_1910;
                    iVar3 = *piVar8;
                    local_18d0 = (long)iVar1;
                    lVar6 =
                        std::vector<BlendSpace2D::BlendSpaceEntry,
                                    std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](local_1910, (long)iVar1);
                    local_18d8 = (long)iVar2;
                    lVar9 =
                        std::vector<BlendSpace2D::BlendSpaceEntry,
                                    std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](this_00, (long)iVar2);
                    local_18c8 = (long*)(long)iVar3;
                    lVar10 = std::vector<BlendSpace2D::BlendSpaceEntry,
                                         std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](this_00,
                                                                                                    (ulong)(long)iVar3);
                    math::Point<float>::Point(local_c68, *local_18f0->field_40, *local_18f0->field_48);
                    math::Point<float>::Point(local_1898, *(float*)(lVar6 + 8), *(float*)(lVar6 + 12));
                    math::Point<float>::Point(local_1908, *(float*)(lVar9 + 8), *(float*)(lVar9 + 12));
                    math::Point<float>::Point(local_1920, *(float*)(lVar10 + 8), *(float*)(lVar10 + 12));
                    bVar5 = math::GetBarycentricCoordinates<float>(&local_18e0, &local_18dc, (float*)local_18bc,
                                                                   (Vector2T*)local_c68, (Vector2T*)local_1898,
                                                                   (Vector2T*)local_1908, (Vector2T*)local_1920);
                    if (bVar5) {
                        local_1899 = bVar5;
                        puVar11 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                            std::vector<BlendSpace2D::BlendSpaceEntry,
                                        std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](this_00, local_18d0);
                        plVar12 =
                            (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::get(puVar11);
                        puVar11 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                            std::vector<BlendSpace2D::BlendSpaceEntry,
                                        std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](this_00, local_18d8);
                        plVar13 =
                            (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::get(puVar11);
                        puVar11 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                            std::vector<BlendSpace2D::BlendSpaceEntry,
                                        std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](this_00,
                                                                                                   (ulong)local_18c8);
                        plVar14 =
                            (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::get(puVar11);
                        this_01 = local_18bc._4_8_;
                        this_03 = local_18e8;
                        uVar15 = local_18f8;
                        if (local_18e0 == 1.0) {
                            this_02 = local_19a0;
                            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(this_02,
                                                                                        (WrapArray*)local_18bc._4_8_);
                            lVar6 = *plVar12;
                            plVar13 = plVar12;
                        LAB_10095c3f0:
                            (**(code**)(lVar6 + 16))(plVar13, this_02, local_18a8, local_18b0);
                        } else {
                            local_18d8 = CONCAT44(local_18d8._4_4_, local_18e0);
                            local_18c8 = plVar14;
                            if (local_18dc == 1.0) {
                                this_02 = local_1990;
                                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(
                                    this_02, (WrapArray*)local_18bc._4_8_);
                                lVar6 = *plVar13;
                                goto LAB_10095c3f0;
                            }
                            local_18d0 = CONCAT44(local_18d0._4_4_, local_18dc);
                            if ((float)local_18bc._0_4_ == 1.0) {
                                this_02 = local_1980;
                                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(
                                    this_02, (WrapArray*)local_18bc._4_8_);
                                lVar6 = *local_18c8;
                                plVar13 = local_18c8;
                                goto LAB_10095c3f0;
                            }
                            uVar7 = local_18bc._4_8_->HeapBeginPtr();
                            new (local_c68) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar7);
                            uVar7 = this_01->HeapBeginPtr();
                            new (local_1898) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar7);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(local_1970,
                                                                                              (fixed_vector*)local_c68);
                            (**(code**)(*plVar12 + 16))(plVar12, local_1970, local_18a8, local_18b0);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                local_1960, (fixed_vector*)local_1898);
                            (**(code**)(*plVar13 + 16))(plVar13, local_1960, local_18a8, local_18b0);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(local_1950,
                                                                                              (fixed_vector*)local_c68);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                (WrapArray<JointPose>*)local_1908, (fixed_vector*)local_c68);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                (WrapArray<JointPose>*)local_1920, (fixed_vector*)local_1898);
                            (((float)local_18d0 / ((float)local_18d8 + (float)local_18d0)))
                                ->BlendJointPoses(local_1950, local_1908, local_1920);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                local_1940, (fixed_vector*)local_1898);
                            (**(code**)(*local_18c8 + 16))(local_18c8, local_1940, local_18a8, local_18b0);
                            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_1930,
                                                                                        (WrapArray*)local_18bc._4_8_);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                (WrapArray<JointPose>*)local_1908, (fixed_vector*)local_c68);
                            WrapArray<JointPose>::WrapArray<
                                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                                (WrapArray<JointPose>*)local_1920, (fixed_vector*)local_1898);
                            local_18bc._0_4_->BlendJointPoses(local_1930, local_1908, local_1920);
                            local_1898->~fixed_vector();
                            local_c68->~fixed_vector();
                        }
                        if (local_1899 != '\0')
                            break;
                    } else {
                        uVar15 = local_18f8;
                        this_03 = local_18e8;
                    }
                    uVar7 = eastl::vector<unsigned int, eastl::allocator>::size(this_03);
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar7);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100970dc0: the linker folded this into BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry(), which has identical code
    BlendSpace2D::BlendSpaceEntry::~BlendSpaceEntry();

    // 0x100970dd0: the linker folded this into BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry(), which has identical code
    BlendSpace2D::BlendSpaceEntry::~BlendSpaceEntry();

} // namespace jag::graphics

namespace jag::math {
    // 0x10095c680, 400 bytes, inline, placed by debug map only (low confidence)
    // bool GetBarycentricCoordinates<float>(float&, float&, float&, Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&)
    bool GetBarycentricCoordinates<float>(float* param_1, float* param_2, float* param_3, Vector2T* param_4,
                                          Vector2T* param_5, Vector2T* param_6, Vector2T* param_7) {
        bool bVar1;
        float fVar2;

        fVar2 = (*(float*)(param_5 + 4) - *(float*)(param_7 + 4)) * (*(float*)param_7 - *(float*)param_6) +
                (*(float*)param_5 - *(float*)param_7) * (*(float*)(param_6 + 4) - *(float*)(param_7 + 4));
        if (fVar2 == 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("denominator != T(0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/IntersectionTests.h",
                      229, "Degenerate triangle passed into GetBarycentricCoordinates()", param_5, param_6, param_2,
                      param_3);
        }
        fVar2 = 1.0 / fVar2;
        *param_1 = ((*(float*)(param_4 + 4) - *(float*)(param_7 + 4)) * (*(float*)param_7 - *(float*)param_6) +
                    (*(float*)param_4 - *(float*)param_7) * (*(float*)(param_6 + 4) - *(float*)(param_7 + 4))) *
                   fVar2;
        fVar2 = ((*(float*)(param_4 + 4) - *(float*)(param_7 + 4)) * (*(float*)param_5 - *(float*)param_7) +
                 (*(float*)param_4 - *(float*)param_7) * (*(float*)(param_7 + 4) - *(float*)(param_5 + 4))) *
                fVar2;
        *param_2 = fVar2;
        fVar2 = 1.0 - (fVar2 + *param_1);
        *param_3 = fVar2;
        bVar1 = false;
        if ((0.0 <= *param_1) && (*param_1 <= 1.0)) {
            bVar1 = fVar2 <= 1.0 && (0.0 <= fVar2 && (*param_2 <= 1.0 && 0.0 <= *param_2));
        }
        return bVar1;
    }

} // namespace jag::math
