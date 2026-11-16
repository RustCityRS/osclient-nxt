// libs/graphics/runetek7/animation/AnimKeyFrameSample.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimKeyFrameSample {
    public:
        HasSampleData() const;
        GetPose() const;
        GetLabelDeltas() const;
        GetBillboardTransforms() const;
        AnimKeyFrameSample();
        ~AnimKeyFrameSample();
        void SampleKeyFrameSet(AnimKeyFrameSet const*, float, AnimCurveSegmentCacheBase&, AnimCurveSegmentCacheBase&);
        void Reset();
        AnimKeyFrameSample(AnimKeyFrameSample const&);

        // data members, from how the methods use this: 73 bytes
        char _unknown_0[8];
        ulong field_8;       // offset 8
        JointPose* field_16; // offset 16
        char _unknown_24[48];
        undefined1 field_72; // offset 72
    };

    // 0x1009519d0, 48 bytes, inline, placed by class name and debug map
    // AnimKeyFrameSample::GetPose() const
    AnimKeyFrameSample* AnimKeyFrameSample::GetPose() {
        Array* in_RSI;

        if (in_RSI[72] == (Array)0) {
            new (this) Array<JointPose, eastl::allocator>();
        } else {
            new (this) Array<JointPose, eastl::allocator>(in_RSI);
        }
        return this;
    }

    // 0x100951f30, 48 bytes, inline, placed by class name and debug map
    // AnimKeyFrameSample::GetLabelDeltas() const
    AnimKeyFrameSample* AnimKeyFrameSample::GetLabelDeltas() {
        long in_RSI;

        if (*(char*)(in_RSI + 72) == '\0') {
            new (this) Array<float, eastl::allocator>();
        } else {
            new (this) Array<float, eastl::allocator>((Array*)(in_RSI + 24));
        }
        return this;
    }

    // 0x100951f60, 48 bytes, inline, placed by class name and debug map
    // AnimKeyFrameSample::GetBillboardTransforms() const
    AnimKeyFrameSample* AnimKeyFrameSample::GetBillboardTransforms() {
        long in_RSI;

        if (*(char*)(in_RSI + 72) == '\0') {
            new (this) Array<float, eastl::allocator>();
        } else {
            new (this) Array<float, eastl::allocator>((Array*)(in_RSI + 48));
        }
        return this;
    }

    // 0x10099fd50, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimKeyFrameSample::AnimKeyFrameSample(AnimKeyFrameSample const&): jumps straight to the base-object constructor

    // 0x10099fd60, 112 bytes, base-object constructor, inline, placed by class name
    // AnimKeyFrameSample::AnimKeyFrameSample(AnimKeyFrameSample const&)
    void AnimKeyFrameSample::AnimKeyFrameSample(AnimKeyFrameSample* param_1) {
        new (this) Array<JointPose, eastl::allocator>(param_1);
        new (&field_24, (Array*)&param_1->field_24) Array<float, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48) Array<float, eastl::allocator>();
        field_72 = param_1->field_72;
    }

} // namespace jag::graphics
