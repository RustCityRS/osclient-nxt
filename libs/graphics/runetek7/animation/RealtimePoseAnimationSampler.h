// libs/graphics/runetek7/animation/RealtimePoseAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class RealtimePoseAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RealtimePoseAnimationSampler();
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
        RealtimePoseAnimationSampler();
        unsigned long GetFrameFromTimeAnimKeyFrameSet(float& arg1, unsigned long long arg2,
                                                      const shared_ptr<Animation>& animation, int arg4,
                                                      AnimationLoopBehaviour animationLoopBehaviour);
        void EnsureCachesReady();
        void SetAnimation(const AnimationInfo& animationInfo);
        void SetDrawDebugSkeleton(bool arg1);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[7];
        uint8_t* field_32;
        uint8_t _unknown_40[8];
        unsigned int field_48;
        AnimationLoopBehaviour field_52;
        uint8_t _unknown_56[24];
        ChangeLocationRequest field_80;
        uint8_t _unknown_200[88];
        bool m_drawDebugSkeleton;
        uint8_t _unknown_289[231];
    };

    // 0x10098b9d0
    void RealtimePoseAnimationSampler::SetDrawDebugSkeleton(bool arg1) {
        m_drawDebugSkeleton = arg1;
    }

    // 0x100991bf0
    RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler() {
        field_224.~AnimCurveSegmentCache();
        ((field_80 + 80))->~AnimCurveSegmentCache();
        field_80->~AnimKeyFrameSample();
    }

} // namespace jag::graphics
