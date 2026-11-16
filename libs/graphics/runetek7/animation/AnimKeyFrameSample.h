// libs/graphics/runetek7/animation/AnimKeyFrameSample.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimKeyFrameSample {
    public:
        bool HasSampleData() const;
        auto GetPose() const;
        Array<float> GetLabelDeltas() const;
        Array<float> GetBillboardTransforms() const;
        AnimKeyFrameSample();
        ~AnimKeyFrameSample();
        void SampleKeyFrameSet(const AnimKeyFrameSet* animKeyFrameSet, float arg2,
                               AnimCurveSegmentCacheBase& animCurveSegmentCacheBase1,
                               AnimCurveSegmentCacheBase& animCurveSegmentCacheBase2);
        void Reset();
        AnimKeyFrameSample(const AnimKeyFrameSample& animKeyFrameSample);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        JointPose* field_16;
        uint8_t _unknown_24[48];
        uint8_t m_hasSampleData;
    };

    // 0x1009519d0
    auto AnimKeyFrameSample::GetPose() const {
        if (m_hasSampleData == '\0') {
            auto result;
        } else {
            new (&result) Array<JointPose>(*this);
        }
        return result;
    }

    // 0x100951f30
    Array<float> AnimKeyFrameSample::GetLabelDeltas() const {
        if (m_hasSampleData == '\0') {
            Array<float> result;
        } else {
            new (&result) Array<float>(&field_24);
        }
        return result;
    }

    // 0x100951f60
    Array<float> AnimKeyFrameSample::GetBillboardTransforms() const {
        if (m_hasSampleData == '\0') {
            Array<float> result;
        } else {
            new (&result) Array<float>(&field_48);
        }
        return result;
    }

    // 0x10099fd60
    AnimKeyFrameSample::AnimKeyFrameSample(const AnimKeyFrameSample& animKeyFrameSample)
        : Array<JointPose>(animKeyFrameSample), field_24(&animKeyFrameSample.field_24),
          field_48(&animKeyFrameSample.field_48), m_hasSampleData(animKeyFrameSample.m_hasSampleData) {}

} // namespace jag::graphics
