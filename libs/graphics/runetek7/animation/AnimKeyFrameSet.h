// libs/graphics/runetek7/animation/AnimKeyFrameSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimKeyFrameSet {
    public:
        void GetLastLoadAttempt() const;
        void GetCurves() const;
        void GetJointCurves() const;
        unsigned int* GetBase() const;
        uint8_t GetAnimatesColour() const;
        uint8_t GetBindID() const;
        void GetJointPosesFromKeyFrameData(WrapArray<JointPose> wrapArray, float arg2,
                                           AnimCurveSegmentCacheBase& animCurveSegmentCacheBase) const;
        void GetLabelDeltasAndBillboardTransforms(WrapArray<float> wrapArray1, WrapArray<float> wrapArray2, float arg3,
                                                  AnimCurveSegmentCacheBase& animCurveSegmentCacheBase) const;
        AnimKeyFrameSet(unsigned int arg1, Js5ResourceProvider& js5ResourceProvider,
                        const Js5ArchiveSettings& js5ArchiveSettings1, const Js5ArchiveSettings& js5ArchiveSettings2);
        unsigned long Load();
        void IsLoaded() const;
        void GetRuntimeTransforms(VertexTransformData& vertexTransformData,
                                  WrapArray<WrapArray<AnimCurveSegmentCacheData>>& wrapArray, float arg3,
                                  const Array<bool>* arg4, bool arg5);
        void GetColourLabelDeltas(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2, float arg3,
                                  const eastl::vector<AnimCurve>& animCurves,
                                  WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const;
        uint64_t SampleCurveWithDefault(const eastl::vector<AnimCurve>& animCurves,
                                        WrapArray<AnimCurveSegmentCacheData>& wrapArray, unsigned int arg3, float arg4,
                                        float arg5) const;
        void GetAlphaLabelDeltas(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2, float arg3,
                                 const eastl::vector<AnimCurve>& animCurves,
                                 WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const;
        void GetBillboardTransforms(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2,
                                    AnimTransform animTransform, float arg4, const eastl::vector<AnimCurve>& animCurves,
                                    WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const;
        void RenderCurveDebug(const math::Matrix44T<float>& matrix44, int arg2, int arg3, float arg4, float arg5,
                              float arg6);
        uint8_t GetAnimatesTransparency() const;
        int GetDuration() const;
        float GetEnd() const;
        uint8_t GetAnimatesBillboards() const;
        ~AnimKeyFrameSet();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAnimKeyFrameset; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint64_t field_0;
        uint8_t _unknown_8[64];
        unsigned short field_72;
        unsigned short m_end;
        uint8_t m_bindID;
        uint8_t _unknown_77[3];
        unsigned int field_80;
        uint8_t _unknown_84[4];
        Js5ResourceProvider* field_88;
        Js5ArchiveSettings* field_96;
        Js5ArchiveSettings* field_104;
        uint16_t m_animatesColour;
        uint8_t m_animatesBillboards;
        uint8_t _unknown_115[5];
        shared_ptr field_120;
        uint8_t _unknown_136[8];
    };

    // 0x10097af80
    uint8_t AnimKeyFrameSet::GetBindID() const {
        return m_bindID;
    }

    // 0x1009841a0
    void AnimKeyFrameSet::IsLoaded() const {
        field_136 != nullptr;
    }

    // 0x100986880
    uint8_t AnimKeyFrameSet::GetAnimatesTransparency() const {
        return *(uint8_t*)((long)&m_animatesColour + 1);
    }

    // 0x100986890
    int AnimKeyFrameSet::GetDuration() const {
        return (unsigned int)m_end - (unsigned int)field_72;
    }

    // 0x100986ff0
    float AnimKeyFrameSet::GetEnd() const {
        return (float)m_end;
    }

    // 0x100987350
    uint8_t AnimKeyFrameSet::GetAnimatesBillboards() const {
        return m_animatesBillboards;
    }

    // 0x10099f2c0
    AnimKeyFrameSet::~AnimKeyFrameSet() {
        field_136.~shared_ptr();
        field_120->~shared_ptr();
        field_40.~vector();
        field_8.~vector();
    }

} // namespace jag::graphics
