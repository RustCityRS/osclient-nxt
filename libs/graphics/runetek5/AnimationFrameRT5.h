// libs/graphics/runetek5/AnimationFrameRT5.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationFrameRT5 {
    public:
        GetBase() const;
        IsValid() const;
        GetTransformList();
        AnimationFrameRT5();
        AnimationFrameRT5(shared_ptr<AnimBase>&, PacketT<Array<unsigned char, eastl::allocator>>&);
        AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&,
                          WrapArray<WrapArray<AnimCurveSegmentCacheData>>&, float);
        bool HasBaseTransformInSlot(unsigned int, unsigned int) const;
        void GetTransform(unsigned int) const;
        ~AnimationFrameRT5();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullAnimFrame;

        // data members, from how the methods use this: 40 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[23];
        uint field_24; // offset 24
        char _unknown_28[12];
    };

    class AnimationFrameRT5Transform {
    public:
        AnimationFrameRT5Transform(AnimTransform, unsigned int);
        void ConvertFromCurves(AnimTransform, unsigned int, eastl::vector<AnimCurve, eastl::allocator> const&,
                               WrapArray<AnimCurveSegmentCacheData>&, float, math::Vector3T<float> const&, Joint*);
        void Lerp(AnimationFrameRT5Transform&, AnimationFrameRT5Transform const&, AnimationFrameRT5Transform const&,
                  AnimTransform, float);
        AnimationFrameRT5Transform();
        AnimationFrameRT5Transform(AnimationFrameRT5Transform&&);

        // data members, from how the methods use this: 68 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[16];
        undefined8 field_56; // offset 56
        char _unknown_64[4];
    };

    // 0x100984780, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform(): jumps straight to the base-object constructor

    // 0x100989370, 48 bytes, inline, placed by class name
    // AnimationFrameRT5::HasBaseTransformInSlot(unsigned int, unsigned int) const
    bool AnimationFrameRT5::HasBaseTransformInSlot(uint param_1, uint param_2) {
        uint* puVar1;
        bool bVar2;

        if (param_1 < field_24) {
            puVar1 = (uint*)eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::operator[](
                (vector<AnimationFrameRT5Transform, eastl::allocator>*)&field_32, (ulong)param_1);
            bVar2 = *puVar1 == param_2;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1009893e0, 32 bytes, inline, placed by class name
    // AnimationFrameRT5::GetTransform(unsigned int) const
    void AnimationFrameRT5::GetTransform(uint param_1) {
        eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::operator[](
            (vector<AnimationFrameRT5Transform, eastl::allocator>*)&field_32, (ulong)param_1);
    }

    // 0x1009970d0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationFrameRT5::~AnimationFrameRT5(): jumps straight to the base-object destructor

    // 0x1009970e0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimationFrameRT5::~AnimationFrameRT5()
    void AnimationFrameRT5::~AnimationFrameRT5() {
        (&field_32)->~vector();
        (&field_8)->~shared_ptr();
    }

    // 0x100998a90, 16 bytes, inline, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&, WrapArray<WrapArray<AnimCurveSegmentCacheData> >&, float)::$_0::operator()(eastl::vector<AnimCurve, eastl::allocator> const&) const
    /* AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase>
   const&, AnimKeyFrameSet const&,
   WrapArray<WrapArray<AnimCurveSegmentCacheData> >&,
   float)::$_0::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<AnimCurve, eastl::allocator>
   const&) const */

    byte AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet_const&,
                                              WrapArray<WrapArray<AnimCurveSegmentCacheData>>&,
                                              float)::$_0::operator()(vector* param_1) {
        byte bVar1;

        bVar1 = empty();
        return bVar1 ^ 1;
    }

} // namespace jag::graphics
