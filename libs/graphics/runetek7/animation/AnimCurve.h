// libs/graphics/runetek7/animation/AnimCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimCurve {
    public:
        void GetKeyList() const;
        uint8_t GetPostInfinity() const;
        bool IsWeighted() const;
        unsigned long GetValue(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const;
        void GetNumKeys() const;
        unsigned long LoadFromPacket(PacketT<Array<unsigned char>>& arg1);
        int GetStart() const;
        int GetEnd() const;
        int GetDuration() const;
        int GetKeyIndexAtTime(float arg1, const AnimCurveSegmentCacheData& animCurveSegmentCacheData) const;
        short* GetKeyFromIndex(int arg1) const;
        uint64_t GetKeyAtTime(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const;
        uint64_t GetNextKey(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const;
        uint8_t GetPreInfinity() const;
        bool IsStatic() const;
        AnimCurve();
        ~AnimCurve();
        AnimCurve(AnimCurve&& animCurve);

    private:
        uint32_t field_0;
        unsigned int field_4;
        unsigned int field_8;
        uint8_t field_12;
        bool m_weighted;
        uint8_t m_static;
        uint8_t m_preInfinity;
        uint8_t m_postInfinity;
        uint8_t _unknown_17[15];
    };

    // 0x100979d20
    unsigned long AnimCurve::GetValue(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const {
        short* psVar2;
        long lVar3;

        uint8_t* this_00 = &field_24;
        bool cVar1 = this_00->empty();
        unsigned long uVar4 = 0;
        if (!cVar1) {
            psVar2 = (short*)(*this_00)[0];
            if ((float)(int)*psVar2 <= arg1) {
                lVar3 = this_00->end();
                psVar2 = (short*)(*this_00)[lVar3 - 1];
                if (arg1 <= (float)(int)*psVar2) {
                    uVar4 = AnimCurveSampler::SampleCurve(this, arg1, animCurveSegmentCacheData);
                } else {
                    uVar4 = (unsigned long)field_8;
                }
            } else {
                uVar4 = (unsigned long)field_4;
            }
        }
        return uVar4;
    }

    // 0x1009822f0
    uint8_t AnimCurve::GetPreInfinity() const {
        return m_preInfinity;
    }

    // 0x1009826e0
    bool AnimCurve::IsStatic() const {
        return m_static;
    }

    // 0x1009914a0
    AnimCurve::AnimCurve() : field_0(0) {}

    // 0x100991500
    AnimCurve::~AnimCurve() {
        field_24.~Array();
    }

    // 0x10099fb80
    AnimCurve::AnimCurve(AnimCurve&& animCurve) : m_postInfinity(animCurve.m_postInfinity) {
        unsigned int uVar1 = animCurve.field_4;
        unsigned int uVar2 = animCurve.field_8;
        uint8_t uVar3 = animCurve.field_12;
        bool bVar4 = animCurve.m_weighted;
        uint8_t uVar5 = animCurve.m_static;
        uint8_t uVar6 = animCurve.m_preInfinity;
        field_0 = animCurve.field_0;
        field_4 = uVar1;
        field_8 = uVar2;
        field_12 = uVar3;
        m_weighted = bVar4;
        m_static = uVar5;
        m_preInfinity = uVar6;
        new (&field_24) Array<AnimKey>(animCurve.field_24);
    }

} // namespace jag::graphics
