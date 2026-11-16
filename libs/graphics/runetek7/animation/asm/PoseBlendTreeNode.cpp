// libs/graphics/runetek7/animation/asm/PoseBlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "PoseBlendTreeNode.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PoseBlendTreeNode::Reset(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PoseBlendTreeNode::Update(unsigned int);

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    PoseBlendTreeNode::GetBindInfo() const;

    // 0x10095f810, 192 bytes, placed by class name and debug map
    // PoseBlendTreeNode::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void PoseBlendTreeNode::GetPose(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_2,
                                    undefined8 param_3, undefined8 param_4) {
        undefined1 uVar1;
        JointPose* pJVar2;
        JointPose* pJVar3;
        JointPose* pJVar4;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_40[16];

        pJVar2 = (JointPose*)(&field_40)->data();
        pJVar3 = (JointPose*)(&field_40)->end();
        pJVar4 = (JointPose*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_2);
        std::copy<JointPose*, JointPose*>(pJVar2, pJVar3, pJVar4);
        if ((field_8 != '\0') && (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            uVar1 = field_80;
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_40, param_2);
            pose::DebugDrawSkeleton(field_12, field_20, *(undefined8*)field_24, *(undefined4*)(field_24 + 8),
                                    &m_bindInfo, uVar1, local_40, param_4);
        }
    }

} // namespace jag::graphics
