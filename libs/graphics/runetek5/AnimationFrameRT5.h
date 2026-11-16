// libs/graphics/runetek5/AnimationFrameRT5.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationFrameRT5 {
    public:
        void GetBase() const;
        bool IsValid() const;
        Option<float>* GetTransformList();
        AnimationFrameRT5();
        AnimationFrameRT5(shared_ptr<AnimBase>& animBase, PacketT<Array<unsigned char>>& arg2);
        AnimationFrameRT5(const shared_ptr<AnimBase>& animBase, const AnimKeyFrameSet& animKeyFrameSet,
                          WrapArray<WrapArray<AnimCurveSegmentCacheData>>& wrapArray, float arg4);
        bool HasBaseTransformInSlot(unsigned int arg1, unsigned int arg2) const;
        AnimationFrameRT5Transform* GetTransform(unsigned int arg1) const;
        ~AnimationFrameRT5();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAnimFrame; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t m_valid;
        uint8_t _unknown_1[23];
        unsigned int field_24;
        uint8_t _unknown_28[12];
    };

    class AnimationFrameRT5Transform {
    public:
        AnimationFrameRT5Transform(AnimTransform animTransform, unsigned int arg2);
        void ConvertFromCurves(AnimTransform animTransform, unsigned int arg2,
                               const eastl::vector<AnimCurve>& animCurves,
                               WrapArray<AnimCurveSegmentCacheData>& wrapArray, float arg5,
                               const math::Vector3T<float>& vector3, Joint* joint);
        void Lerp(AnimationFrameRT5Transform& animationFrameRT5Transform1,
                  const AnimationFrameRT5Transform& animationFrameRT5Transform2,
                  const AnimationFrameRT5Transform& animationFrameRT5Transform3, AnimTransform animTransform,
                  float arg5);
        AnimationFrameRT5Transform();
        AnimationFrameRT5Transform(AnimationFrameRT5Transform&& animationFrameRT5Transform);

    private:
        unsigned int field_0;
        uint32_t field_4;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[16];
        uint64_t field_56;
        uint8_t _unknown_64[4];
    };

    // 0x100989370
    bool AnimationFrameRT5::HasBaseTransformInSlot(unsigned int arg1, unsigned int arg2) const {
        unsigned int* puVar1;
        bool bVar2;

        if (arg1 < field_24) {
            puVar1 = &field_32[(unsigned long)arg1];
            bVar2 = *puVar1 == arg2;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1009893e0
    AnimationFrameRT5Transform* AnimationFrameRT5::GetTransform(unsigned int arg1) const {
        return (AnimationFrameRT5Transform*)field_32[(unsigned long)arg1];
    }

    // 0x1009970e0
    AnimationFrameRT5::~AnimationFrameRT5() {
        field_32.~vector();
        field_8.~shared_ptr();
    }

    // 0x100998a90
    uint8_t
    AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&,
                                         WrapArray<WrapArray<AnimCurveSegmentCacheData>>&,
                                         float)::$_0::operator()(const eastl::vector<AnimCurve>& animCurves) const {
        return empty() ^ 1;
    }

} // namespace jag::graphics
