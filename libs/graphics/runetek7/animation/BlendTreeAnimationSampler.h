// libs/graphics/runetek7/animation/BlendTreeAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendTreeAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeAnimationSampler();
        virtual void Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual void GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                          const math::Matrix44T<float>& matrix44) const;
        virtual void ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                         const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        virtual void Reset();
        Option<float>* GetJointPoses() const;
        Layout* GetBlendTree() const;
        BlendTreeAnimationSampler();
        void CopyBoneMatricesToRT5VertexTransformData(const WrapArray<JointPose const>& wrapArray,
                                                      const Array<Joint>& joints,
                                                      const AnimKeyFrameSet& animKeyFrameSet,
                                                      VertexTransformData& vertexTransformData);
        void UpdateJointMatricesFromPose(const shared_ptr<AnimBase>& animBase, unsigned char arg2);
        void SetDrawDebugSkeleton(bool arg1);
        void SetBlendTree(BlendTree* vertexTransformData);
        BlendTreeAnimationSampler(BlendTreeAnimationSampler&& blendTreeAnimationSampler);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[55];
        Layout* m_pBlendTree;
        bool m_drawDebugSkeleton;
    };

    // 0x10096c350
    BlendTreeAnimationSampler::BlendTreeAnimationSampler(BlendTreeAnimationSampler&& blendTreeAnimationSampler)
        : AnimationSampler(blendTreeAnimationSampler), field_32(blendTreeAnimationSampler.field_32),
          field_56(blendTreeAnimationSampler.field_56),
          m_drawDebugSkeleton(blendTreeAnimationSampler.m_drawDebugSkeleton),
          m_pBlendTree(blendTreeAnimationSampler.m_pBlendTree) {}

    // 0x10098b980
    void BlendTreeAnimationSampler::Reset() {
        m_pBlendTree = nullptr;
    }

    // 0x100992b30
    BlendTreeAnimationSampler::~BlendTreeAnimationSampler() {
        field_56.~Array();
        field_32.~Array();
    }

} // namespace jag::graphics
