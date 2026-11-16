// libs/graphics/runetek7/animation/BlendTreeAnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendTreeAnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~BlendTreeAnimationSampler();
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
        GetJointPoses() const;
        GetBlendTree() const;
        BlendTreeAnimationSampler();
        void CopyBoneMatricesToRT5VertexTransformData(WrapArray<JointPose const> const&,
                                                      Array<Joint, eastl::allocator> const&, AnimKeyFrameSet const&,
                                                      VertexTransformData&);
        void UpdateJointMatricesFromPose(shared_ptr<AnimBase> const&, unsigned char);
        void SetDrawDebugSkeleton(bool);
        SetBlendTree(BlendTree*);
        BlendTreeAnimationSampler(BlendTreeAnimationSampler&&);

        // data members, from how the methods use this: 89 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined1 field_24; // offset 24
        char _unknown_25[55];
        Layout* field_80;         // offset 80
        bool m_drawDebugSkeleton; // offset 88
    };

    // 0x100960a00, 32 bytes, deleting destructor, inline, placed by class name
    // BlendTreeAnimationSampler::~BlendTreeAnimationSampler()
    void BlendTreeAnimationSampler::~BlendTreeAnimationSampler() {
        ~BlendTreeAnimationSampler(this);
        operator_delete(this);
    }

    // 0x10096c130, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendTreeAnimationSampler::BlendTreeAnimationSampler(BlendTreeAnimationSampler&&): jumps straight to the base-object constructor

    // 0x10096c350, 80 bytes, base-object constructor, inline, placed by class name
    // BlendTreeAnimationSampler::BlendTreeAnimationSampler(BlendTreeAnimationSampler&&)
    void BlendTreeAnimationSampler::BlendTreeAnimationSampler(BlendTreeAnimationSampler* param_1) {
        new (this) AnimationSampler(param_1);
        field_0 = &PTR__BlendTreeAnimationSampler_100f1afe0;
        new (&field_32, (Array*)&param_1->field_32) Array<JointPose, eastl::allocator>();
        new (&field_56, (Array*)&param_1->field_56) Array<math::Matrix44T<float>, eastl::allocator>();
        m_drawDebugSkeleton = param_1->m_drawDebugSkeleton;
        field_80 = param_1->field_80;
    }

    // 0x10098b040, 16 bytes, complete-object destructor, inline, placed by class name
    // BlendTreeAnimationSampler::~BlendTreeAnimationSampler(): jumps straight to the base-object destructor

    // 0x10098b980, 16 bytes, inline, placed by class name
    // BlendTreeAnimationSampler::Reset()
    void BlendTreeAnimationSampler::Reset() {
        field_80 = (Layout*)0;
    }

    // 0x100992b30, 64 bytes, base-object destructor, inline, placed by class name
    // BlendTreeAnimationSampler::~BlendTreeAnimationSampler()
    void BlendTreeAnimationSampler::~BlendTreeAnimationSampler() {
        field_0 = &PTR__BlendTreeAnimationSampler_100f1afe0;
        (&field_56)->~Array();
        (&field_32)->~Array();
        ~AnimationSampler();
    }

} // namespace jag::graphics
