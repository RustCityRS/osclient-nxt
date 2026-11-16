// libs/graphics/runetek7/animation/asm/TwoNodeBlendTreeNode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TwoNodeBlendTreeNode.h"

namespace jag::graphics {
    // 0x10095fb50
    void TwoNodeBlendHelpers::GetLerpPose(WrapArray<JointPose> wrapArray, BlendTreeNode* blendTreeNode1,
                                          BlendTreeNode* blendTreeNode2, float arg4,
                                          BlendTreeNodeBlendMode blendTreeNodeBlendMode,
                                          const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1918;

        if (blendTreeNodeBlendMode == 0) {
            arg4 = 1.0;
        }
        float local_189c = arg4;
        if (arg4 == 0.0) {
            local_1918.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            (*blendTreeNode1->_vptr[1]._dtor)(blendTreeNode1, &local_1918, labelDatas, matrix44);
        }
        WrapArray<JointPose>* local_18a8 = wrapArray;
        (*blendTreeNode2->_vptr[1]._x7e___2)(blendTreeNode2);
    }

    // 0x10095fe40
    void TwoNodeBlendHelpers::GetAdditivePose(WrapArray<JointPose> wrapArray, BlendTreeNode* blendTreeNode1,
                                              BlendTreeNode* blendTreeNode2, float arg4,
                                              BlendTreeNodeBlendMode blendTreeNodeBlendMode,
                                              const Array<LabelData>& labelDatas,
                                              const math::Matrix44T<float>& matrix44) {
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_1908;

        if (blendTreeNodeBlendMode == 0) {
            arg4 = 1.0;
        }
        float local_189c = arg4;
        if (arg4 == 0.0) {
            local_1908.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            (*blendTreeNode1->_vptr[1]._dtor)(blendTreeNode1, &local_1908, labelDatas, matrix44);
        }
        WrapArray<JointPose>* local_18a8 = wrapArray;
        (*blendTreeNode2->_vptr[1]._x7e___2)(blendTreeNode2);
    }

    // 0x100960070
    void TwoNodeBlendHelpers::DebugDrawPose(BlendTreeNode* blendTreeNode1, BlendTreeNode* blendTreeNode2,
                                            const WrapArray<JointPose const>& wrapArray,
                                            const math::Matrix44T<float>& matrix44,
                                            const math::Vector3T<float>& vector31,
                                            const math::Vector3T<float>& vector32) {
        OldscapeAnimCurveLoadJob local_48;

        if (AnimationStateProvider::m_useAsyncAnimUpdate == '\0') {
            local_48 = oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
            (*blendTreeNode1->_vptr[1]._x7e___2)(blendTreeNode1);
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10095fdd0
    float Smoothstep<float>(float arg1) {
        return (3.0 - (arg1 + arg1)) * arg1 * arg1;
    }

    // 0x10095fe00
    float Smootherstep<float>(float arg1) {
        return (arg1 * (arg1 * 6.0 - 15.0) + 10.0) * arg1 * arg1 * arg1;
    }

} // namespace jag::math
