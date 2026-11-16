// libs/graphics/runetek7/animation/AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationSampler {
    public:
        class FrameInterpolationData;
        // virtual methods in vtable order
        virtual ~AnimationSampler();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual void ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                         const math::Matrix44T<float>& matrix44) const;
        virtual void __pure_slot_5() = 0;
        virtual void Reset();
        void ConcatenateArrays(WrapArray<float>& wrapArray1, const WrapArray<float const>& wrapArray2,
                               const eastl::vector_map<unsigned short, unsigned short>& arg3, const Array<float>& arg4);
        void SetWalkMergeDataProvider(const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider);
        AnimationSampler(const AnimationSampler& animationSampler);
        AnimationSampler();

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
    };

    class AnimationSampler::FrameInterpolationData {
    public:
        FrameInterpolationData();
    };

    // 0x100950480
    void AnimationSampler::ConcatenateArrays(WrapArray<float>& wrapArray1, const WrapArray<float const>& wrapArray2,
                                             const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                             const Array<float>& arg4) {
        unsigned short uVar1;
        unsigned short uVar2;
        unsigned long uVar8;

        int iVar3 = arg4.end();
        void* pvVar4 = &wrapArray1[0];
        void* pvVar5 = &arg4[0];
        _memcpy(pvVar4, pvVar5, (unsigned long)(unsigned int)(iVar3 * 4));
        auto puVar6 = arg3.HeapBeginPtr();
        auto puVar7 = arg3.end();
        while (true) {
            if (puVar6 == puVar7) {
                return;
            }
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            if ((unsigned int)uVar2 * iVar3 == 0)
                break;
            uVar8 = wrapArray2.HeapBeginPtr();
            if ((unsigned int)uVar1 * iVar3 < uVar8) {
                pvVar4 = (void*)wrapArray2[(unsigned long)((unsigned int)uVar1 * iVar3)];
            } else {
                pvVar4 = &arg4[0];
            }
            pvVar5 = &wrapArray1[(unsigned long)((unsigned int)uVar2 * iVar3)];
            _memcpy(pvVar5, pvVar4, (unsigned long)(unsigned int)(iVar3 * 4));
            puVar6 = puVar6 + 2;
        }
        LogAssert("labelSlotIndex != 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "AnimationSampler.h",
                  151, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
    }

    // 0x100953fa0
    void AnimationSampler::SetWalkMergeDataProvider(const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider) {
        field_8 = walkMergeDataProvider;
    }

    // 0x10096c3a0
    AnimationSampler::AnimationSampler(const AnimationSampler& animationSampler)
        : field_8(&animationSampler.field_8), field_24(animationSampler.field_24) {}

    // 0x100991870
    AnimationSampler::~AnimationSampler() {
        field_8.~shared_ptr();
    }

} // namespace jag::graphics
