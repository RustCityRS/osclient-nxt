// libs/graphics/runetek7/animation/SampledPoseAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SampledPoseAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~SampledPoseAnimationSampler();
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
        virtual void SetMergeJoints(WrapArray<JointPose>, bool);
        SampledPoseAnimationSampler();
        ulong GetCurrentFrame(AnimationInfo const&, float) const;
        ulong GetNextFrame(AnimationInfo const&, unsigned int) const;
        float GetFrameInterpolant(AnimationInfo const&, float) const;
        GetFrameInterpolationData(AnimationInfo const&, unsigned long long) const;
        void CopyBoneMatricesToRT5VertexTransformData(WrapArray<JointPose const> const&,
                                                      Array<Joint, eastl::allocator> const&, AnimKeyFrameSet const&,
                                                      VertexTransformData&);
        void UpdatePose(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&, AnimationInfo const&);
        void MergePose();
        void UpdateJointMatricesFromPose(AnimationInfo const&);
        SampledPoseAnimationSampler(SampledPoseAnimationSampler&&);
        GetPose();
        void SetAnimation(AnimationInfo const&);
        void SetDrawDebugSkeleton(bool);

        // data members, from how the methods use this: 152 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        undefined1 field_24; // offset 24
        char _unknown_25[7];
        AnimationInfo field_32; // offset 32
        char _unknown_80[48];
        undefined8 field_128;     // offset 128
        undefined8 field_136;     // offset 136
        undefined1 field_144;     // offset 144
        bool m_drawDebugSkeleton; // offset 145
        char _unknown_146[6];
    };

    // 0x100952370, 32 bytes, inline, placed by debug map only (low confidence)
    // AnimationInfo::IsLooping() const
    bool AnimationInfo::IsLooping() {
        if (field_20 == 2) {
            return false;
        }
        return *(int*)((long)&field_10 + 6) != -1;
    }

    // 0x100953f80, 32 bytes, inline, placed by class name
    // SampledPoseAnimationSampler::SetMergeJoints(WrapArray<JointPose>, bool)
    void SampledPoseAnimationSampler::SetMergeJoints(undefined8* param_2, undefined1 param_3) {
        undefined8 uVar1;

        uVar1 = param_2[1];
        field_128 = *param_2;
        field_136 = uVar1;
        field_144 = param_3;
    }

    // 0x100960a60, 32 bytes, deleting destructor, inline, placed by class name
    // SampledPoseAnimationSampler::~SampledPoseAnimationSampler()
    void SampledPoseAnimationSampler::~SampledPoseAnimationSampler() {
        ~SampledPoseAnimationSampler(this);
        operator_delete(this);
    }

    // 0x10096c150, 16 bytes, complete-object constructor, inline, placed by class name
    // SampledPoseAnimationSampler::SampledPoseAnimationSampler(SampledPoseAnimationSampler&&): jumps straight to the base-object constructor

    // 0x10096c5a0, 128 bytes, base-object constructor, inline, placed by class name
    // SampledPoseAnimationSampler::SampledPoseAnimationSampler(SampledPoseAnimationSampler&&)
    void SampledPoseAnimationSampler::SampledPoseAnimationSampler(SampledPoseAnimationSampler* param_1) {
        bool bVar1;

        new (this) AnimationSampler(param_1);
        field_0 = &PTR__SampledPoseAnimationSampler_100f1b100;
        new (field_32, (AnimationInfo*)param_1->field_32) AnimationInfo();
        new (&field_80, (Array*)&param_1->field_80) Array<JointPose, eastl::allocator>();
        new (&field_104, (Array*)&param_1->field_104) Array<math::Matrix44T<float>, eastl::allocator>();
        new (&field_128, (WrapArray*)&param_1->field_128) WrapArray<JointPose>();
        bVar1 = param_1->m_drawDebugSkeleton;
        field_144 = param_1->field_144;
        m_drawDebugSkeleton = bVar1;
    }

    // 0x10098a9a0, 32 bytes, inline, placed by class name
    // SampledPoseAnimationSampler::GetPose()
    SampledPoseAnimationSampler* SampledPoseAnimationSampler::GetPose() {
        long in_RSI;

        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)this, (Array*)(in_RSI + 80));
        return this;
    }

    // 0x10098aa10, 16 bytes, complete-object destructor, inline, placed by class name
    // SampledPoseAnimationSampler::~SampledPoseAnimationSampler(): jumps straight to the base-object destructor

    // 0x10098b9a0, 16 bytes, inline, placed by class name
    // SampledPoseAnimationSampler::SetAnimation(AnimationInfo const&)
    void SampledPoseAnimationSampler::SetAnimation(AnimationInfo* param_1) {
        AnimationInfo::operator=((AnimationInfo*)field_32, param_1);
    }

    // 0x10098b9c0, 16 bytes, inline, placed by class name
    // SampledPoseAnimationSampler::SetDrawDebugSkeleton(bool)
    void SampledPoseAnimationSampler::SetDrawDebugSkeleton(bool param_1) {
        m_drawDebugSkeleton = param_1;
    }

    // 0x100991820, 80 bytes, base-object destructor, inline, placed by class name
    // SampledPoseAnimationSampler::~SampledPoseAnimationSampler()
    void SampledPoseAnimationSampler::~SampledPoseAnimationSampler() {
        field_0 = &PTR__SampledPoseAnimationSampler_100f1b100;
        (&field_104)->~Array();
        (&field_80)->~Array();
        field_32->~Sprite();
        ~AnimationSampler();
    }

} // namespace jag::graphics
