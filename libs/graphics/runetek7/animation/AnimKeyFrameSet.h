// libs/graphics/runetek7/animation/AnimKeyFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimKeyFrameSet {
    public:
        GetLastLoadAttempt() const;
        GetCurves() const;
        GetJointCurves() const;
        shared_ptr GetBase() const;
        GetAnimatesColour() const;
        GetBindID() const;
        void GetJointPosesFromKeyFrameData(WrapArray<JointPose>, float, AnimCurveSegmentCacheBase&) const;
        void GetLabelDeltasAndBillboardTransforms(WrapArray<float>, WrapArray<float>, float,
                                                  AnimCurveSegmentCacheBase&) const;
        AnimKeyFrameSet(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&);
        ulong Load();
        void IsLoaded() const;
        void GetRuntimeTransforms(VertexTransformData&, WrapArray<WrapArray<AnimCurveSegmentCacheData>>&, float,
                                  Array<bool, eastl::allocator> const*, bool);
        void GetColourLabelDeltas(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, float,
                                  eastl::vector<AnimCurve, eastl::allocator> const&,
                                  WrapArray<AnimCurveSegmentCacheData>&) const;
        SampleCurveWithDefault(eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&,
                               unsigned int, float, float) const;
        void GetAlphaLabelDeltas(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, float,
                                 eastl::vector<AnimCurve, eastl::allocator> const&,
                                 WrapArray<AnimCurveSegmentCacheData>&) const;
        void GetBillboardTransforms(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, AnimTransform,
                                    float, eastl::vector<AnimCurve, eastl::allocator> const&,
                                    WrapArray<AnimCurveSegmentCacheData>&) const;
        void RenderCurveDebug(math::Matrix44T<float> const&, int, int, float, float, float);
        GetAnimatesTransparency() const;
        int GetDuration() const;
        float GetEnd() const;
        GetAnimatesBillboards() const;
        ~AnimKeyFrameSet();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullAnimKeyFrameset;

        // data members, from how the methods use this: 152 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[64];
        ushort field_72;     // offset 72
        ushort m_end;        // offset 74
        undefined1 m_bindID; // offset 76
        char _unknown_77[3];
        uint field_80; // offset 80
        char _unknown_84[4];
        Js5ResourceProvider* field_88;   // offset 88
        Js5ArchiveSettings* field_96;    // offset 96
        Js5ArchiveSettings* field_104;   // offset 104
        undefined2 m_animatesColour;     // offset 112
        undefined1 m_animatesBillboards; // offset 114
        char _unknown_115[5];
        shared_ptr field_120; // offset 120
        shared_ptr m_pBase;   // offset 136
    };

    // 0x10097af80, 16 bytes, inline, placed by class name and debug map
    // AnimKeyFrameSet::GetBindID() const
    undefined1 AnimKeyFrameSet::GetBindID() {
        return m_bindID;
    }

    // 0x1009841a0, 32 bytes, inline, placed by class name
    // AnimKeyFrameSet::IsLoaded() const
    void AnimKeyFrameSet::IsLoaded() {
        operator!=((shared_ptr*)m_pBase, (_func_decltype_nullptr*)0);
    }

    // 0x100986880, 16 bytes, inline, placed by class name
    // AnimKeyFrameSet::GetAnimatesTransparency() const
    undefined1 AnimKeyFrameSet::GetAnimatesTransparency() {
        return *(undefined1*)((long)&m_animatesColour + 1);
    }

    // 0x100986890, 16 bytes, inline, placed by class name
    // AnimKeyFrameSet::GetDuration() const
    int AnimKeyFrameSet::GetDuration() {
        return (uint)m_end - (uint)field_72;
    }

    // 0x100986ff0, 16 bytes, inline, placed by class name
    // AnimKeyFrameSet::GetEnd() const
    float AnimKeyFrameSet::GetEnd() {
        return (float)m_end;
    }

    // 0x100987350, 16 bytes, inline, placed by class name
    // AnimKeyFrameSet::GetAnimatesBillboards() const
    undefined1 AnimKeyFrameSet::GetAnimatesBillboards() {
        return m_animatesBillboards;
    }

    // 0x10099f2b0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimKeyFrameSet::~AnimKeyFrameSet(): jumps straight to the base-object destructor

    // 0x10099f2c0, 64 bytes, base-object destructor, inline, placed by class name
    // AnimKeyFrameSet::~AnimKeyFrameSet()
    void AnimKeyFrameSet::~AnimKeyFrameSet() {
        m_pBase->~shared_ptr();
        field_120->~shared_ptr();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

} // namespace jag::graphics
