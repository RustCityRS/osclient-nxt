// libs/graphics/runetek7/animation/asm/PoseBlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

#include "PoseBlendTreeNode.h"

namespace jag::graphics {
    // 0x100009e70: PoseBlendTreeNode::Reset(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PoseBlendTreeNode::Update(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100049810: PoseBlendTreeNode::GetBindInfo() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x10095f810
    void PoseBlendTreeNode::GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                                    const math::Matrix44T<float>& matrix44) {
        unsigned char arg2;
        Vector3T<float>* in_R8;
        Vector3T<float>* in_R9;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_40;

        auto jointPose1 = field_40.data();
        auto jointPose2 = field_40.end();
        auto jointPose3 = wrapArray->end();
        std::copy<JointPose*, JointPose*>(jointPose1, jointPose2, jointPose3);
        if ((field_8 != '\0') && (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            arg2 = field_80;
            local_40.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pose::DebugDrawSkeleton(*m_bindInfo, arg2, local_40, matrix44, in_R8, in_R9);
        }
    }

} // namespace jag::graphics
