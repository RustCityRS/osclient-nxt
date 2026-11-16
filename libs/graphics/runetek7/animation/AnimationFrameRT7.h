// libs/graphics/runetek7/animation/AnimationFrameRT7.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationFrameRT7 {
    public:
        void GetBoneTransforms() const;
        uint8_t* GetSkipTweenLabel() const;
        unsigned int GetMaximumBoneID() const;
        uint8_t* GetSkipTweenBillboard() const;
        void GetLabelDeltas() const;
        uint8_t* GetSkipTweenBone() const;
        void GetBillboardLabelTransforms() const;
        uint8_t GetAnimatesTransparency() const;
        uint8_t GetAnimatesBillboards() const;
        uint8_t GetAnimatesColour() const;
        AnimationFrameRT7();
        AnimationFrameRT7(const shared_ptr<AnimationFrameRT5>& animationFrameRT5, unsigned int arg2,
                          const Array<LabelData>& labelDatas, bool arg4);
        void CalculateMaxBoneOrLabelIDs(int& arg1, int& arg2, int& arg3, const AnimBase& animBase, unsigned int arg5,
                                        AnimTransform animTransform);
        void PreProcessTransforms(const shared_ptr<AnimationFrameRT5>& animationFrameRT5,
                                  const Array<LabelData>& labelDatas, bool arg3);
        ~AnimationFrameRT7();
        void ClearMemberData();
        void ApplyTweenMask(AnimTransform animTransform, const Array<unsigned short>& arg2,
                            const AnimationFrameRT5Transform& animationFrameRT5Transform);
        void GetBoneMatrices(WrapArray<math::Matrix43T<float>>& wrapArray,
                             const eastl::vector_map<unsigned short, unsigned short>& arg2) const;
        void GetVertexTransformDataBoneMatrices(VertexTransformData& vertexTransformData) const;
        void GetInterpolatedBoneMatrices(WrapArray<math::Matrix43T<float>>& wrapArray,
                                         const AnimationFrameRT7& animationFrameRT7, float arg3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg4) const;
        void GetInterpolatedBoneMatricesRT5(WrapArray<math::Matrix43T<float>>& wrapArray,
                                            const AnimationFrameRT7& animationFrameRT7, float arg3,
                                            const eastl::vector_map<unsigned short, unsigned short>& arg4) const;
        void GetInterpolatedVertexTransformData(VertexTransformData& vertexTransformData,
                                                const AnimationFrameRT7& animationFrameRT7, float arg3) const;
        void GetInterpolatedVertexTransformDataRT5(VertexTransformData& vertexTransformData,
                                                   const AnimationFrameRT7& animationFrameRT7, float arg3) const;

    private:
        uint8_t _unknown_0[96];
        unsigned int field_96;
        uint8_t m_animatesTransparency;
        uint8_t m_animatesColour;
        uint8_t m_animatesBillboards;
        uint8_t _unknown_103[1];
        unsigned int m_maximumBoneID;
        uint8_t _unknown_108[12];
    };

    // 0x1009877a0
    uint8_t AnimationFrameRT7::GetAnimatesTransparency() const {
        return m_animatesTransparency;
    }

    // 0x1009877b0
    uint8_t AnimationFrameRT7::GetAnimatesBillboards() const {
        return m_animatesBillboards;
    }

    // 0x1009877c0
    uint8_t AnimationFrameRT7::GetAnimatesColour() const {
        return m_animatesColour;
    }

} // namespace jag::graphics
