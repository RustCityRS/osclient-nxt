// libs/graphics/runetek7/animation/AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationSampler {
    public:
        class FrameInterpolationData;
        // virtual methods in vtable order
        virtual ~AnimationSampler();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual void ApplyBoneTransforms(
            math::Vector3T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void __pure_slot_5() = 0;
        virtual void Reset();
        void ConcatenateArrays(
            WrapArray<float>&, WrapArray<float const> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            Array<float, eastl::allocator> const&);
        void SetWalkMergeDataProvider(shared_ptr<WalkMergeDataProvider> const&);
        AnimationSampler(AnimationSampler const&);
        AnimationSampler();

        // data members, from how the methods use this: 25 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined1 field_24; // offset 24
    };

    class AnimationSampler::FrameInterpolationData {
    public:
        FrameInterpolationData();
    };

    // 0x100950480, 288 bytes, inline, placed by class name and debug map
    // AnimationSampler::ConcatenateArrays(WrapArray<float>&, WrapArray<float const> const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, Array<float, eastl::allocator> const&)
    void AnimationSampler::ConcatenateArrays(WrapArray* param_1, WrapArray* param_2, vector_map* param_3,
                                             Array* param_4) {
        ushort uVar1;
        ushort uVar2;
        int iVar3;
        void* pvVar4;
        void* pvVar5;
        ushort* puVar6;
        ushort* puVar7;
        ulong uVar8;

        iVar3 = param_4->end();
        pvVar4 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, 0);
        pvVar5 = (void*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
        _memcpy(pvVar4, pvVar5, (ulong)(uint)(iVar3 * 4));
        puVar6 = (ushort*)param_3->HeapBeginPtr();
        puVar7 = (ushort*)param_3->end();
        while (true) {
            if (puVar6 == puVar7) {
                return;
            }
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            if ((uint)uVar2 * iVar3 == 0)
                break;
            uVar8 = param_2->HeapBeginPtr();
            if ((uint)uVar1 * iVar3 < uVar8) {
                pvVar4 = (void*)WrapArray<float const>::operator[]((WrapArray<float const>*)param_2,
                                                                   (ulong)((uint)uVar1 * iVar3));
            } else {
                pvVar4 = (void*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
            }
            pvVar5 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)((uint)uVar2 * iVar3));
            _memcpy(pvVar5, pvVar4, (ulong)(uint)(iVar3 * 4));
            puVar6 = puVar6 + 2;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("labelSlotIndex != 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "AnimationSampler.h",
                  151, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
    }

    // 0x100953fa0, 16 bytes, inline, placed by class name
    // AnimationSampler::SetWalkMergeDataProvider(shared_ptr<WalkMergeDataProvider> const&)
    void AnimationSampler::SetWalkMergeDataProvider(shared_ptr* param_1) {
        shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)&field_8, param_1);
    }

    // 0x10096c3a0, 64 bytes, base-object constructor, inline, placed by class name
    // AnimationSampler::AnimationSampler(AnimationSampler const&)
    void AnimationSampler::AnimationSampler(AnimationSampler* param_1) {
        field_0 = &PTR__OptionStore_100f1bb10;
        new (&field_8, (shared_ptr*)&param_1->field_8) shared_ptr<oldscape::dash3d::Decor>();
        field_24 = param_1->field_24;
    }

    // 0x100991870, 32 bytes, base-object destructor, inline, placed by class name
    // AnimationSampler::~AnimationSampler()
    void AnimationSampler::~AnimationSampler() {
        field_0 = &PTR__OptionStore_100f1bb10;
        (&field_8)->~shared_ptr();
    }

} // namespace jag::graphics
