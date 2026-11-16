// libs/graphics/runetek7/animation/SampledPoseAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SampledPoseAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~SampledPoseAnimationSampler();
        virtual void Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual void GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                          const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        virtual void SetMergeJoints(WrapArray<JointPose> wrapArray, bool arg2);
        SampledPoseAnimationSampler();
        unsigned long GetCurrentFrame(const AnimationInfo& animationInfo, float arg2) const;
        unsigned long GetNextFrame(const AnimationInfo& animationInfo, unsigned int arg2) const;
        float GetFrameInterpolant(const AnimationInfo& animationInfo, float arg2) const;
        uint64_t GetFrameInterpolationData(const AnimationInfo& animationInfo, unsigned long long arg2) const;
        void CopyBoneMatricesToRT5VertexTransformData(const WrapArray<JointPose const>& wrapArray,
                                                      const Array<Joint>& joints,
                                                      const AnimKeyFrameSet& animKeyFrameSet,
                                                      VertexTransformData& vertexTransformData);
        void UpdatePose(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44,
                        const AnimationInfo& animationInfo);
        void MergePose();
        void UpdateJointMatricesFromPose(const AnimationInfo& animationInfo);
        SampledPoseAnimationSampler(SampledPoseAnimationSampler&& sampledPoseAnimationSampler);
        auto GetPose();
        void SetAnimation(const AnimationInfo& animationInfo);
        void SetDrawDebugSkeleton(bool arg1);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[7];
        AnimationInfo field_32;
        uint8_t _unknown_72[56];
        uint64_t field_128;
        uint64_t field_136;
        bool field_144;
        bool m_drawDebugSkeleton;
        uint8_t _unknown_146[6];
    };

    // 0x100952370
    bool AnimationInfo::IsLooping() const {
        if (field_20 == 2) {
            return false;
        }
        return *(int*)((long)&field_10 + 6) != -1;
    }

    // 0x100953f80
    void SampledPoseAnimationSampler::SetMergeJoints(WrapArray<JointPose> wrapArray, bool arg2) {
        uint64_t uVar1 = *(uint64_t*)(wrapArray + 8);
        field_128 = *(uint64_t*)wrapArray;
        field_136 = uVar1;
        field_144 = arg2;
    }

    // 0x10096c5a0
    SampledPoseAnimationSampler::SampledPoseAnimationSampler(SampledPoseAnimationSampler&& sampledPoseAnimationSampler)
        : AnimationSampler(sampledPoseAnimationSampler), field_32(sampledPoseAnimationSampler.field_32),
          field_80(sampledPoseAnimationSampler.field_80), field_104(sampledPoseAnimationSampler.field_104),
          field_128(sampledPoseAnimationSampler.field_128) {
        bool bVar1 = sampledPoseAnimationSampler.m_drawDebugSkeleton;
        field_144 = sampledPoseAnimationSampler.field_144;
        m_drawDebugSkeleton = bVar1;
    }

    // 0x10098a9a0
    auto SampledPoseAnimationSampler::GetPose() {
        auto result;
        result.WrapArray<Array<unsigned char>>(field_80);
        return result;
    }

    // 0x10098b9a0
    void SampledPoseAnimationSampler::SetAnimation(const AnimationInfo& animationInfo) {
        *field_32 = animationInfo;
    }

    // 0x10098b9c0
    void SampledPoseAnimationSampler::SetDrawDebugSkeleton(bool arg1) {
        m_drawDebugSkeleton = arg1;
    }

    // 0x100991820
    SampledPoseAnimationSampler::~SampledPoseAnimationSampler() {
        field_104.~Array();
        field_80.~Array();
        field_32->~Sprite();
    }

} // namespace jag::graphics
