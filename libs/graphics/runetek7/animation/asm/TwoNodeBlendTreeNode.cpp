// libs/graphics/runetek7/animation/asm/TwoNodeBlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TwoNodeBlendTreeNode.h"

namespace jag::graphics {
    // 0x10095fb50, 640 bytes, placed by debug map only (low confidence)
    // TwoNodeBlendHelpers::GetLerpPose(WrapArray<JointPose>, BlendTreeNode*, BlendTreeNode*, float, BlendTreeNodeBlendMode, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void TwoNodeBlendHelpers::GetLerpPose(pose* param_1, Layout* param_2, long* param_3, long* param_4, int param_5,
                                          undefined8 param_6, undefined8 param_7) {
        bool bVar1;
        long lVar2;
        ulong uVar3;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const>* this;
        undefined1 auVar4[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1918[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1908[16];
        WrapArray<JointPose> local_18f8[16];
        WrapArray<JointPose> local_18e8[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_18d8[16];
        WrapArray<JointPose> local_18c8[16];
        WrapArray<JointPose> local_18b8[16];
        Layout* local_18a8;
        undefined8 local_189c;
        fixed_vector<JointPose, 64ul, true, eastl::allocator> local_c68[3120];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_5 == 0) {
            param_1._0_4_ = (pose*)1065353216;
        }
        local_189c._0_4_ = param_1._0_4_;
        if ((float)param_1._0_4_ == 0.0) {
        LAB_10095fbcf:
            this = local_1918;
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(this, param_2);
            lVar2 = *param_3;
            param_4 = param_3;
        } else {
            local_18a8 = param_2;
            auVar4 = (**(code**)(*param_4 + 24))(param_4);
            bVar1 = operator==(auVar4._0_8_, (shared_ptr*)&BlendTreeNode::NullAnimBase, auVar4._8_8_);
            param_2 = local_18a8;
            if (bVar1)
                goto LAB_10095fbcf;
            if ((float)(pose*)local_189c != 1.0) {
                auVar4 = (**(code**)(*param_3 + 24))(param_3);
                bVar1 = operator==(auVar4._0_8_, (shared_ptr*)&BlendTreeNode::NullAnimBase, auVar4._8_8_);
                if (!bVar1) {
                    uVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_18a8);
                    eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>::fixed_vector(local_c68, uVar3);
                    uVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_18a8);
                    new (((long)&local_189c + 4)) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar3);
                    WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                        local_18f8, (fixed_vector*)local_c68);
                    (**(code**)(*param_3 + 16))(param_3, local_18f8, param_6, param_7);
                    WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                        local_18e8, (fixed_vector*)((long)&local_189c + 4));
                    (**(code**)(*param_4 + 16))(param_4, local_18e8, param_6, param_7);
                    if (param_5 == 3) {
                        local_189c._0_4_ = (pose*)math::Smootherstep<float>((float)(pose*)local_189c);
                    } else if (param_5 == 2) {
                        local_189c._0_4_ = (pose*)math::Smoothstep<float>((float)(pose*)local_189c);
                    }
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                        WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_18d8, local_18a8);
                    WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                        local_18c8, (fixed_vector*)local_c68);
                    WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                        local_18b8, (fixed_vector*)((long)&local_189c + 4));
                    local_189c->BlendJointPoses(local_18d8, local_18c8, local_18b8);
                    (((long)&local_189c + 4))->~fixed_vector();
                    eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>::~fixed_vector(local_c68);
                    goto LAB_10095fbf0;
                }
            }
            this = local_1908;
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(this, local_18a8);
            lVar2 = *param_4;
        }
        (**(code**)(lVar2 + 16))(param_4, this, param_6, param_7);
    LAB_10095fbf0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10095fe40, 560 bytes, placed by debug map only (low confidence)
    // TwoNodeBlendHelpers::GetAdditivePose(WrapArray<JointPose>, BlendTreeNode*, BlendTreeNode*, float, BlendTreeNodeBlendMode, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void TwoNodeBlendHelpers::GetAdditivePose(pose* param_1, Layout* param_2, long* param_3, long* param_4, int param_5,
                                              undefined8 param_6, undefined8 param_7) {
        bool bVar1;
        ulong uVar2;
        undefined1 auVar3[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_1908[16];
        WrapArray<JointPose> local_18f8[16];
        WrapArray<JointPose> local_18e8[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_18d8[16];
        WrapArray<JointPose> local_18c8[16];
        WrapArray<JointPose> local_18b8[16];
        Layout* local_18a8;
        undefined8 local_189c;
        fixed_vector<JointPose, 64ul, true, eastl::allocator> local_c68[3120];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_5 == 0) {
            param_1._0_4_ = (pose*)1065353216;
        }
        local_189c._0_4_ = param_1._0_4_;
        if ((float)param_1._0_4_ != 0.0) {
            local_18a8 = param_2;
            auVar3 = (**(code**)(*param_4 + 24))(param_4);
            bVar1 = operator==(auVar3._0_8_, (shared_ptr*)&BlendTreeNode::NullAnimBase, auVar3._8_8_);
            param_2 = local_18a8;
            if (!bVar1) {
                uVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_18a8);
                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>::fixed_vector(local_c68, uVar2);
                uVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_18a8);
                new (((long)&local_189c + 4)) eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>(uVar2);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18f8, (fixed_vector*)local_c68);
                (**(code**)(*param_3 + 16))(param_3, local_18f8, param_6, param_7);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18e8, (fixed_vector*)((long)&local_189c + 4));
                (**(code**)(*param_4 + 16))(param_4, local_18e8, param_6, param_7);
                if (param_5 == 3) {
                    local_189c._0_4_ = (pose*)math::Smootherstep<float>((float)(pose*)local_189c);
                } else if (param_5 == 2) {
                    local_189c._0_4_ = (pose*)math::Smoothstep<float>((float)(pose*)local_189c);
                }
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                    WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_18d8, local_18a8);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18c8, (fixed_vector*)local_c68);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    local_18b8, (fixed_vector*)((long)&local_189c + 4));
                local_189c->AddJointPoses(local_18d8, local_18c8, local_18b8);
                (((long)&local_189c + 4))->~fixed_vector();
                eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>::~fixed_vector(local_c68);
                goto LAB_10095fee0;
            }
        }
        WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_1908, param_2);
        (**(code**)(*param_3 + 16))(param_3, local_1908, param_6, param_7);
    LAB_10095fee0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100960070, 272 bytes, placed by debug map only (low confidence)
    // TwoNodeBlendHelpers::DebugDrawPose(BlendTreeNode*, BlendTreeNode*, WrapArray<JointPose const> const&, math::Matrix44T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&)
    void TwoNodeBlendHelpers::DebugDrawPose(BlendTreeNode* param_1, BlendTreeNode* param_2, WrapArray* param_3,
                                            Matrix44T* param_4, Vector3T* param_5, Vector3T* param_6) {
        bool bVar1;
        shared_ptr* psVar2;
        BindInfo* pBVar3;
        BindInfo local_48;

        if (AnimationStateProvider::m_useAsyncAnimUpdate == '\0') {
            new (&local_48) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
            psVar2 = (shared_ptr*)(**(code**)(param_1->field_0 + 24))(param_1);
            bVar1 = operator!=(psVar2, (shared_ptr*)&BlendTreeNode::NullAnimBase);
            if (bVar1) {
                pBVar3 = (BindInfo*)(**(code**)(param_1->field_0 + 24))(param_1);
                BindInfo::operator=(&local_48, pBVar3);
            } else {
                pBVar3 = (BindInfo*)(**(code**)(param_2->field_0 + 24))(param_2);
                BindInfo::operator=(&local_48, pBVar3);
            }
            bVar1 = operator!=((shared_ptr*)&local_48, (shared_ptr*)&BlendTreeNode::NullAnimBase);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("bindInfo.m_animBase != BlendTreeNode::NullAnimBase",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.cpp",
                          106, (char*)0);
            }
            pose::DebugDrawSkeleton(*(undefined8*)param_5, *(undefined4*)(param_5 + 8), *(undefined8*)param_6,
                                    *(undefined4*)(param_6 + 8), &local_48, local_48.field_16, param_3, param_4);
            local_48.~LRUHashCacheWrapper();
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10095fdd0, 48 bytes, inline, placed by debug map only (low confidence)
    // float Smoothstep<float>(float)
    float Smoothstep<float>(float param_1) {
        return (3.0 - (param_1 + param_1)) * param_1 * param_1;
    }

    // 0x10095fe00, 64 bytes, inline, placed by debug map only (low confidence)
    // float Smootherstep<float>(float)
    float Smootherstep<float>(float param_1) {
        return (param_1 * (param_1 * 6.0 + -15.0) + 10.0) * param_1 * param_1 * param_1;
    }

} // namespace jag::math
