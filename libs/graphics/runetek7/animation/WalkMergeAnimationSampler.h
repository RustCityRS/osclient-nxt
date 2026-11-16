// libs/graphics/runetek7/animation/WalkMergeAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WalkMergeAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~WalkMergeAnimationSampler();
        virtual void Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual void GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                          const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        WalkMergeAnimationSampler();
        void GetJointPosesFromJoints(const Array<Joint>& joints, WrapArray<JointPose> wrapArray) const;
        void SetAnimations(const AnimationInfo& animationInfo1, const AnimationInfo& animationInfo2,
                           shared_ptr<WalkMergeDataProvider> walkMergeDataProvider);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[7];
        SampledPoseAnimationSampler field_32;
        uint8_t _unknown_184[152];
        SampledPoseAnimationSampler field_336;
        RT5AnimationSampler field_488;
    };

    // 0x100992b70
    WalkMergeAnimationSampler::~WalkMergeAnimationSampler() {
        ((field_488 + 216))->~Sprite();
        ((field_488 + 168))->~Sprite();
        field_488->~RT5AnimationSampler();
        field_336->~SampledPoseAnimationSampler();
        field_184.~RT5AnimationSampler();
        field_32->~SampledPoseAnimationSampler();
    }

} // namespace jag::graphics
