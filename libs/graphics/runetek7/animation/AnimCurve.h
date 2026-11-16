// libs/graphics/runetek7/animation/AnimCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimCurve {
    public:
        GetKeyList() const;
        GetPostInfinity() const;
        IsWeighted() const;
        ulong GetValue(float, AnimCurveSegmentCacheData&) const;
        void GetNumKeys() const;
        ulong LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        int GetStart() const;
        int GetEnd() const;
        int GetDuration() const;
        int GetKeyIndexAtTime(float, AnimCurveSegmentCacheData const&) const;
        GetKeyFromIndex(int) const;
        GetKeyAtTime(float, AnimCurveSegmentCacheData&) const;
        GetNextKey(float, AnimCurveSegmentCacheData&) const;
        GetPreInfinity() const;
        IsStatic() const;
        AnimCurve();
        ~AnimCurve();
        AnimCurve(AnimCurve&&);

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0;       // offset 0
        uint field_4;             // offset 4
        uint field_8;             // offset 8
        undefined1 field_12;      // offset 12
        bool m_weighted;          // offset 13
        undefined1 m_static;      // offset 14
        undefined1 m_preInfinity; // offset 15
        undefined1 field_16;      // offset 16
        char _unknown_17[15];
    };

    // 0x100979d20, 160 bytes, inline, placed by class name and debug map
    // AnimCurve::GetValue(float, AnimCurveSegmentCacheData&) const
    ulong AnimCurve::GetValue(float param_1, AnimCurveSegmentCacheData* param_2) {
        undefined1* this_00;
        char cVar1;
        short* psVar2;
        long lVar3;
        ulong uVar4;

        this_00 = &field_24;
        cVar1 = this_00->empty();
        uVar4 = 0;
        if (cVar1 == '\0') {
            psVar2 =
                (short*)Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)this_00, 0);
            if ((float)(int)*psVar2 <= param_1) {
                lVar3 = this_00->end();
                psVar2 = (short*)Array<AnimKey, eastl::allocator>::operator[](
                    (Array<AnimKey, eastl::allocator>*)this_00, lVar3 - 1);
                if (param_1 <= (float)(int)*psVar2) {
                    uVar4 = AnimCurveSampler::SampleCurve(this, param_1, param_2);
                } else {
                    uVar4 = (ulong)field_8;
                }
            } else {
                uVar4 = (ulong)field_4;
            }
        }
        return uVar4;
    }

    // 0x1009822f0, 16 bytes, inline, placed by class name
    // AnimCurve::GetPreInfinity() const
    undefined1 AnimCurve::GetPreInfinity() {
        return m_preInfinity;
    }

    // 0x1009826e0, 16 bytes, inline, placed by class name
    // AnimCurve::IsStatic() const
    undefined1 AnimCurve::IsStatic() {
        return m_static;
    }

    // 0x1009844b0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimCurve::AnimCurve(): jumps straight to the base-object constructor

    // 0x1009844c0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimCurve::~AnimCurve(): jumps straight to the base-object destructor

    // 0x1009914a0, 32 bytes, base-object constructor, inline, placed by class name
    // AnimCurve::AnimCurve()
    void AnimCurve::AnimCurve() {
        field_0 = 0;
        new (&field_24) Array<AnimKey, eastl::allocator>();
    }

    // 0x100991500, 16 bytes, base-object destructor, inline, placed by class name
    // AnimCurve::~AnimCurve()
    void AnimCurve::~AnimCurve() {
        (&field_24)->~Array();
    }

    // 0x10099fb70, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimCurve::AnimCurve(AnimCurve&&): jumps straight to the base-object constructor

    // 0x10099fb80, 32 bytes, base-object constructor, inline, placed by class name
    // AnimCurve::AnimCurve(AnimCurve&&)
    void AnimCurve::AnimCurve(AnimCurve* param_1) {
        uint uVar1;
        uint uVar2;
        undefined1 uVar3;
        bool bVar4;
        undefined1 uVar5;
        undefined1 uVar6;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_4;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_12;
        bVar4 = param_1->m_weighted;
        uVar5 = param_1->m_static;
        uVar6 = param_1->m_preInfinity;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        field_8 = uVar2;
        field_12 = uVar3;
        m_weighted = bVar4;
        m_static = uVar5;
        m_preInfinity = uVar6;
        new (&field_24, (Array*)&param_1->field_24) Array<AnimKey, eastl::allocator>();
    }

} // namespace jag::graphics
