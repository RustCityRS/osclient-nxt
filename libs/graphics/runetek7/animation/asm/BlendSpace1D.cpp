// libs/graphics/runetek7/animation/asm/BlendSpace1D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendSpace1D.h"

namespace jag::graphics {
    // 0x10095ac50, 224 bytes, base-object constructor, placed by class name and debug map
    // BlendSpace1D::BlendSpace1D(float, float, float*, std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry> >&&)
    /* BlendSpace1D::BlendSpace1D(float, float, float*,
   std::vector<BlendSpace1D::BlendSpaceEntry,
   std::allocator<BlendSpace1D::BlendSpaceEntry> >&&) */

    void BlendSpace1D::BlendSpace1D(float param_1, float param_2, float* param_3, vector* param_4) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;

        new (this) BlendTreeNode();
        field_0 = &PTR__BlendSpace1D_100f1b268;
        field_36 = param_1;
        field_40 = param_2;
        field_48 = (pose**)param_3;
        this_00 = &field_56;
        new (this_00)
            std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>(param_4);
        new (&field_80) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        if (param_3 == (float*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVariable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace1D.cpp",
                      16, (char*)0);
        }
        uVar1 = this_00->begin();
        uVar2 = this_00->end();
        std::sort<std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>,
                  BlendSpace1D::__wrap_iter(float, float, float*,
                                            std::vector<BlendSpace1D::BlendSpaceEntry,
                                                        std::allocator<BlendSpace1D::BlendSpaceEntry>>&&)::__9>(uVar1,
                                                                                                                uVar2);
    }

    // 0x10095ada0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendSpace1D::BlendSpace1D(float, float, float*, std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry> >&&): jumps straight to the base-object constructor

    // 0x10095adb0, 1040 bytes, placed by class name and debug map
    // BlendSpace1D::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void BlendSpace1D::GetPose(Layout* param_2, undefined8 param_3, undefined8 param_4) {
        undefined1* this_00;
        float fVar1;
        Layout* this_01;
        uint uVar2;
        char cVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;
        long lVar7;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* puVar8;
        long* plVar9;
        long* plVar10;
        ulong uVar11;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1920[16];
        WrapArray<JointPose> local_1910[16];
        WrapArray<JointPose> local_1900[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_18f0[16];
        WrapArray<JointPose> local_18e0[16];
        WrapArray<JointPose> local_18d0[16];
        Layout* local_18c0;
        undefined8 local_18b8;
        undefined8 local_18b0;
        undefined8 local_18a4;
        uint local_189c;
        uint local_1898[780];
        uint local_c68[780];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_56;
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            if (field_48 == (pose**)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_pPosition != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          29, (char*)0);
            }
            if (*(float*)field_48 < field_36) {
                /* WARNING: Subroutine does not return */
                LogAssert("*m_pPosition >= m_min",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          30, (char*)0);
            }
            local_18c0 = param_2;
            local_18b0 = param_4;
            if (field_40 <= *(float*)field_48 && *(float*)field_48 != field_40) {
                /* WARNING: Subroutine does not return */
                LogAssert("*m_pPosition <= m_max",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/BlendSpace1D.cpp",
                          31, (char*)0);
            }
            local_18a4._4_4_ = 0;
            local_189c = 0;
            local_18b8 = param_3;
            uVar6 = this_00->size();
            if (uVar6 != 0) {
                /* WARNING: Load size is inaccurate */
                local_18a4._0_4_ = *field_48;
                uVar11 = 0;
                do {
                    lVar7 = std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::
                    operator[](
                        (vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>*)this_00,
                        uVar11);
                    if ((float)(pose*)local_18a4 < *(float*)(lVar7 + 8) ||
                        (float)(pose*)local_18a4 == *(float*)(lVar7 + 8)) {
                        local_189c = (uint)uVar11;
                        break;
                    }
                    uVar11 = (ulong)((uint)uVar11 + 1);
                } while (uVar11 < uVar6);
            }
            local_18a4._4_4_ = local_189c - 1;
            if (local_189c == 0) {
                local_18a4._4_4_ = 0;
            }
            local_c68[0] = 0;
            iVar4 = this_00->size();
            local_1898[0] = iVar4 - 1;
            local_18a4._4_4_ = math::Clamp<unsigned int>((uint*)((long)&local_18a4 + 4), local_c68, local_1898);
            local_c68[0] = 0;
            iVar4 = this_00->size();
            local_1898[0] = iVar4 - 1;
            uVar5 = math::Clamp<unsigned int>(&local_189c, local_c68, local_1898);
            uVar2 = local_18a4._4_4_;
            local_189c = uVar5;
            puVar8 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::operator[](
                    (vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>*)this_00,
                    (ulong)local_18a4._4_4_);
            plVar9 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::get(puVar8);
            if (uVar2 == uVar5) {
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_1920, local_18c0);
                (**(code**)(*plVar9 + 16))(plVar9, local_1920, local_18b8, local_18b0);
            } else {
                puVar8 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)std::
                    vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::operator[](
                        (vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>*)this_00,
                        (ulong)uVar5);
                plVar10 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::get(puVar8);
                this_01 = local_18c0;
                uVar6 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_18c0);
                new (local_c68) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar6);
                uVar6 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                new (local_1898) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar6);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_1910, (fixed_vector*)local_c68);
                (**(code**)(*plVar9 + 16))(plVar9, local_1910, local_18b8, local_18b0);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_1900, (fixed_vector*)local_1898);
                (**(code**)(*plVar10 + 16))(plVar10, local_1900, local_18b8, local_18b0);
                lVar7 = std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::
                operator[](
                    (vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>*)this_00,
                    (ulong)local_189c);
                local_18b0 = CONCAT44(local_18b0._4_4_, *(undefined4*)(lVar7 + 8));
                lVar7 = std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::
                operator[](
                    (vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>*)this_00,
                    (ulong)local_18a4._4_4_);
                fVar1 = *(float*)(lVar7 + 8);
                local_18a4._0_4_ = (pose*)0;
                if ((float)local_18b0 != fVar1) {
                    local_18a4._0_4_ = (pose*)((*(float*)field_48 - fVar1) / ((float)local_18b0 - fVar1));
                }
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_18f0, this_01);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18e0, (fixed_vector*)local_c68);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18d0, (fixed_vector*)local_1898);
                local_18a4->BlendJointPoses(local_18f0, local_18e0, local_18d0);
                local_1898->~fixed_vector();
                local_c68->~fixed_vector();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics
