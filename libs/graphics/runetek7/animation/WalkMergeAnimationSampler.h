// libs/graphics/runetek7/animation/WalkMergeAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WalkMergeAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~WalkMergeAnimationSampler();
        virtual void Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        virtual void GetRT5BoneTransforms(
            WrapArray<math::Matrix43T<float>>&,
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
        WalkMergeAnimationSampler();
        void GetJointPosesFromJoints(Array<Joint, eastl::allocator> const&, WrapArray<JointPose>) const;
        void SetAnimations(AnimationInfo const&, AnimationInfo const&, shared_ptr<WalkMergeDataProvider>);

        // data members, from how the methods use this: 6516360 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        undefined1 field_24; // offset 24
        char _unknown_25[7];
        SampledPoseAnimationSampler field_32; // offset 32
        char _unknown_184[152];
        SampledPoseAnimationSampler field_336; // offset 336
        RT5AnimationSampler field_488;         // offset 488
    };

    // 0x100960a80, 32 bytes, deleting destructor, inline, placed by class name
    // WalkMergeAnimationSampler::~WalkMergeAnimationSampler()
    void WalkMergeAnimationSampler::~WalkMergeAnimationSampler() {
        ~WalkMergeAnimationSampler(this);
        operator_delete(this);
    }

    // 0x10098b050, 16 bytes, complete-object destructor, inline, placed by class name
    // WalkMergeAnimationSampler::~WalkMergeAnimationSampler(): jumps straight to the base-object destructor

    // 0x100992b70, 112 bytes, base-object destructor, inline, placed by class name
    // WalkMergeAnimationSampler::~WalkMergeAnimationSampler()
    void WalkMergeAnimationSampler::~WalkMergeAnimationSampler() {
        field_0 = &PTR__WalkMergeAnimationSampler_100f1b150;
        ((field_488 + 216))->~Sprite();
        ((field_488 + 168))->~Sprite();
        field_488->~RT5AnimationSampler();
        field_336->~SampledPoseAnimationSampler();
        (&field_184)->~RT5AnimationSampler();
        field_32->~SampledPoseAnimationSampler();
        ~AnimationSampler();
    }

} // namespace jag::graphics
