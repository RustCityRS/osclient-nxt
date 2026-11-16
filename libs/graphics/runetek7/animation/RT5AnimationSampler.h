// libs/graphics/runetek7/animation/RT5AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class RT5AnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RT5AnimationSampler();
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
        virtual void Reset();
        GetVertexTransformData();
        RT5AnimationSampler();
        void ClearWalkMergeData();
        uint GetFrameFromTimeInRange(float&, float, unsigned int, Animation const&);
        ulong GetFrameFromTime(float&, unsigned long long, Animation const&, int, AnimationLoopBehaviour);
        void GetFramesBeforeAndAfter(unsigned int&, eastl::optional<unsigned int>&, float&, Animation const&,
                                     unsigned long long, int, AnimationLoopBehaviour, bool);
        void CalculateMaxBoneOrLabelIDsForFrames(int&, int&, int&, AnimationFrameRT5*, AnimationFrameRT5*);
        void SetOverrideAnimationInfo(AnimationInfo*);
        SetTransformMaskToggle(bool);
        SetVertexTransformsOverride(VertexTransformData*);
        RT5AnimationSampler(RT5AnimationSampler&&);
        void SetAnimation(AnimationInfo const&);

        // data members, from how the methods use this: 6515872 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        undefined1 field_24; // offset 24
        char _unknown_25[7];
        VertexTransformData field_32; // offset 32
        char _unknown_72[8];
        VertexTransformData* field_80; // offset 80
        undefined1 field_88;           // offset 88
        char _unknown_89[55];
        AnimationInfo* m_pOverrideAnimationInfo; // offset 144
        char _unknown_152[6515720];
    };

    // 0x10094f450, 112 bytes, inline, placed by class name and debug map
    // RT5AnimationSampler::ClearWalkMergeData()
    void RT5AnimationSampler::ClearWalkMergeData() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)field_8, &local_28);
        local_28.~shared_ptr();
        field_88 = 1;
        field_80 = (VertexTransformData*)0;
        m_pOverrideAnimationInfo = (AnimationInfo*)0;
    }

    // 0x100953fc0, 16 bytes, inline, placed by class name
    // RT5AnimationSampler::SetOverrideAnimationInfo(AnimationInfo*)
    void RT5AnimationSampler::SetOverrideAnimationInfo(AnimationInfo* param_1) {
        m_pOverrideAnimationInfo = param_1;
    }

    // 0x100953fd0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RT5AnimationSampler::SetTransformMaskToggle(bool)
    /* BlendTreeAnimationSampler::SetDrawDebugSkeleton(bool) */

    void BlendTreeAnimationSampler::SetDrawDebugSkeleton(bool param_1) {
        m_drawDebugSkeleton = param_1;
    }

    // 0x100953fe0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RT5AnimationSampler::SetVertexTransformsOverride(VertexTransformData*)
    /* SimpleTwoNodeBlendTreeNode<unsigned long
   long>::SetRightNode(BlendTreeNode*) */

    void SimpleTwoNodeBlendTreeNode<unsigned long long>::SetRightNode(BlendTreeNode* param_1) {
        *(BlendTreeNode**)(this + 80) = param_1;
    }

    // 0x100960a20, 32 bytes, deleting destructor, inline, placed by class name
    // RT5AnimationSampler::~RT5AnimationSampler()
    void RT5AnimationSampler::~RT5AnimationSampler() {
        ~RT5AnimationSampler(this);
        operator_delete(this);
    }

    // 0x10096c140, 16 bytes, complete-object constructor, inline, placed by class name
    // RT5AnimationSampler::RT5AnimationSampler(RT5AnimationSampler&&): jumps straight to the base-object constructor

    // 0x10096c4a0, 128 bytes, base-object constructor, inline, placed by class name
    // RT5AnimationSampler::RT5AnimationSampler(RT5AnimationSampler&&)
    void RT5AnimationSampler::RT5AnimationSampler(RT5AnimationSampler* param_1) {
        new (this) AnimationSampler(param_1);
        field_0 = &PTR__RT5AnimationSampler_100f1b028;
        new (field_32, (VertexTransformData*)param_1->field_32) VertexTransformData();
        field_88 = param_1->field_88;
        field_80 = param_1->field_80;
        new (&field_96, (AnimationInfo*)&param_1->field_96) AnimationInfo();
        m_pOverrideAnimationInfo = param_1->m_pOverrideAnimationInfo;
    }

    // 0x10098ba10, 16 bytes, inline, placed by class name
    // RT5AnimationSampler::SetAnimation(AnimationInfo const&)
    void RT5AnimationSampler::SetAnimation(AnimationInfo* param_1) {
        AnimationInfo::operator=((AnimationInfo*)&field_96, param_1);
    }

    // 0x1009919f0, 16 bytes, complete-object destructor, inline, placed by class name
    // RT5AnimationSampler::~RT5AnimationSampler(): jumps straight to the base-object destructor

    // 0x100991a00, 64 bytes, base-object destructor, inline, placed by class name
    // RT5AnimationSampler::~RT5AnimationSampler()
    void RT5AnimationSampler::~RT5AnimationSampler() {
        field_0 = &PTR__RT5AnimationSampler_100f1b028;
        (&field_96)->~Sprite();
        field_32->~VertexTransformData();
        ~AnimationSampler();
    }

} // namespace jag::graphics
