// libs/graphics/runetek7/animation/AnimationFrameRT7.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationFrameRT7 {
    public:
        GetBoneTransforms() const;
        GetSkipTweenLabel() const;
        GetMaximumBoneID() const;
        GetSkipTweenBillboard() const;
        GetLabelDeltas() const;
        GetSkipTweenBone() const;
        GetBillboardLabelTransforms() const;
        GetAnimatesTransparency() const;
        GetAnimatesBillboards() const;
        GetAnimatesColour() const;
        AnimationFrameRT7();
        AnimationFrameRT7(shared_ptr<AnimationFrameRT5> const&, unsigned int, Array<LabelData, eastl::allocator> const&,
                          bool);
        void CalculateMaxBoneOrLabelIDs(int&, int&, int&, AnimBase const&, unsigned int, AnimTransform);
        void PreProcessTransforms(shared_ptr<AnimationFrameRT5> const&, Array<LabelData, eastl::allocator> const&,
                                  bool);
        ~AnimationFrameRT7();
        void ClearMemberData();
        void ApplyTweenMask(AnimTransform, Array<unsigned short, eastl::allocator> const&,
                            AnimationFrameRT5Transform const&);
        void GetBoneMatrices(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&)
            const;
        void GetVertexTransformDataBoneMatrices(VertexTransformData&) const;
        void GetInterpolatedBoneMatrices(
            WrapArray<math::Matrix43T<float>>&, AnimationFrameRT7 const&, float,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&)
            const;
        void GetInterpolatedBoneMatricesRT5(
            WrapArray<math::Matrix43T<float>>&, AnimationFrameRT7 const&, float,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&)
            const;
        void GetInterpolatedVertexTransformData(VertexTransformData&, AnimationFrameRT7 const&, float) const;
        void GetInterpolatedVertexTransformDataRT5(VertexTransformData&, AnimationFrameRT7 const&, float) const;

        // data members, from how the methods use this: 120 bytes
        char _unknown_0[96];
        uint field_96;                     // offset 96
        undefined1 m_animatesTransparency; // offset 100
        undefined1 m_animatesColour;       // offset 101
        undefined1 m_animatesBillboards;   // offset 102
        char _unknown_103[1];
        uint field_104; // offset 104
        char _unknown_108[12];
    };

    // 0x1009877a0, 16 bytes, inline, placed by class name and debug map
    // AnimationFrameRT7::GetAnimatesTransparency() const
    undefined1 AnimationFrameRT7::GetAnimatesTransparency() {
        return m_animatesTransparency;
    }

    // 0x1009877b0, 16 bytes, inline, placed by class name and debug map
    // AnimationFrameRT7::GetAnimatesBillboards() const
    undefined1 AnimationFrameRT7::GetAnimatesBillboards() {
        return m_animatesBillboards;
    }

    // 0x1009877c0, 16 bytes, inline, placed by class name and debug map
    // AnimationFrameRT7::GetAnimatesColour() const
    undefined1 AnimationFrameRT7::GetAnimatesColour() {
        return m_animatesColour;
    }

} // namespace jag::graphics
