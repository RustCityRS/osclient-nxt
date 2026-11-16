// libs/graphics/runetek7/animation/RealtimePoseAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class RealtimePoseAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RealtimePoseAnimationSampler();
        virtual void Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        virtual void GetRT5BoneTransforms(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void ApplyBoneTransforms(
            math::Vector3T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void GetLabelData(
            WrapArray<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            AnimationLabelType) const;
        virtual void Reset();
        RealtimePoseAnimationSampler();
        ulong GetFrameFromTimeAnimKeyFrameSet(float&, unsigned long long, shared_ptr<Animation> const&, int,
                                              AnimationLoopBehaviour);
        void EnsureCachesReady();
        void SetAnimation(AnimationInfo const&);
        void SetDrawDebugSkeleton(bool);

        // data members, from how the methods use this: 520 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined1 field_24; // offset 24
        char _unknown_25[7];
        AnimationInfo field_32;         // offset 32
        ChangeLocationRequest field_80; // offset 80
        char _unknown_200[88];
        bool m_drawDebugSkeleton; // offset 288
        char _unknown_289[231];
    };

    // 0x100960960, 32 bytes, deleting destructor, inline, placed by class name
    // RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler()
    void RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler() {
        ~RealtimePoseAnimationSampler(this);
        operator_delete(this);
    }

    // 0x10098b9d0, 16 bytes, inline, placed by class name
    // RealtimePoseAnimationSampler::SetDrawDebugSkeleton(bool)
    void RealtimePoseAnimationSampler::SetDrawDebugSkeleton(bool param_1) {
        m_drawDebugSkeleton = param_1;
    }

    // 0x100991be0, 16 bytes, complete-object destructor, inline, placed by class name
    // RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler(): jumps straight to the base-object destructor

    // 0x100991bf0, 80 bytes, base-object destructor, inline, placed by class name
    // RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler()
    void RealtimePoseAnimationSampler::~RealtimePoseAnimationSampler() {
        field_0 = &PTR__RealtimePoseAnimationSampler_100f1b0b8;
        (&field_224)->~AnimCurveSegmentCache();
        ((field_80 + 80))->~AnimCurveSegmentCache();
        field_80->~AnimKeyFrameSample();
        field_32->~Sprite();
        ~AnimationSampler();
    }

} // namespace jag::graphics
