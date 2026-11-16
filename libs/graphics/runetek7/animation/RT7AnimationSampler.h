// libs/graphics/runetek7/animation/RT7AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class RT7AnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RT7AnimationSampler();
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
        void SetUseAsyncOptimisedPath(bool);
        RT7AnimationSampler();
        void UpdateAsyncOptimised(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&,
                                  AnimationInfo const&);
        void UpdateImmediate(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&,
                             AnimationInfo const&);
        void GetRT5BoneTransformsAsyncOptimised(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        void GetRT5BoneTransformsImmediate(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        void SetAnimation(AnimationInfo const&);

        // data members, from how the methods use this: 188 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined1 field_24; // offset 24
        char _unknown_25[55];
        ulonglong field_80; // offset 80
        char _unknown_88[8];
        undefined4 field_96;  // offset 96
        undefined4 field_100; // offset 100
        char _unknown_104[1];
        undefined1 field_105; // offset 105
        char _unknown_106[6];
        shared_ptr field_112;         // offset 112
        bool m_useAsyncOptimisedPath; // offset 128
        char _unknown_129[59];
    };

    // 0x100960a40, 32 bytes, deleting destructor, inline, placed by class name
    // RT7AnimationSampler::~RT7AnimationSampler()
    void RT7AnimationSampler::~RT7AnimationSampler() {
        ~RT7AnimationSampler(this);
        operator_delete(this);
    }

    // 0x10098ba20, 16 bytes, inline, placed by class name
    // RT7AnimationSampler::SetAnimation(AnimationInfo const&)
    void RT7AnimationSampler::SetAnimation(AnimationInfo* param_1) {
        AnimationInfo::operator=((AnimationInfo*)&field_80, param_1);
    }

    // 0x100991ab0, 16 bytes, complete-object destructor, inline, placed by class name
    // RT7AnimationSampler::~RT7AnimationSampler(): jumps straight to the base-object destructor

    // 0x100991ac0, 64 bytes, base-object destructor, inline, placed by class name
    // RT7AnimationSampler::~RT7AnimationSampler()
    void RT7AnimationSampler::~RT7AnimationSampler() {
        field_0 = &PTR__RT7AnimationSampler_100f1b070;
        (&field_80)->~Sprite();
        (&field_32)->~VertexTransformData();
        ~AnimationSampler();
    }

} // namespace jag::graphics
