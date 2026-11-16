// libs/graphics/runetek7/animation/AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationSampler.h"

namespace jag::graphics {
    // 0x10017a110: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    AnimationSampler::FrameInterpolationData::FrameInterpolationData();

    // 0x1001a4060: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    AnimationSampler::FrameInterpolationData::FrameInterpolationData();

    // 0x10098a680, 48 bytes, base-object constructor, placed by class name and debug map
    // AnimationSampler::AnimationSampler()
    void AnimationSampler::AnimationSampler() {
        _func_decltype_nullptr* in_RSI;

        field_0 = &PTR__OptionStore_100f1bb10;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_24 = 0;
    }

    // 0x10098a6b0, 224 bytes, placed by class name and debug map
    // AnimationSampler::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationSampler::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                               Matrix44T* param_4) {
        long lVar1;
        undefined4 uVar2;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined4 local_78;
        undefined4 uStack_74;
        undefined4 uStack_70;
        undefined4 uStack_6c;
        undefined8 local_68;
        undefined8 uStack_60;
        WrapArray<unsigned char> local_50[16];
        undefined8 local_40;
        undefined4 local_38;

        lVar1 = param_2->size();
        if (lVar1 != 1) {
            lVar1 = param_3->size();
            if (lVar1 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/AnimationSampler.cpp",
                          16, (char*)0);
            }
        }
        lVar1 = param_2->size();
        if (lVar1 == 1) {
            local_88 = *(undefined8*)PTR_IDENTITY_100ee6720;
            uStack_80 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar2 = *(undefined4*)(PTR_IDENTITY_100ee6720 + 16);
            uStack_74 = *(undefined4*)(PTR_IDENTITY_100ee6720 + 20);
            uStack_70 = *(undefined4*)(PTR_IDENTITY_100ee6720 + 24);
            uStack_6c = *(undefined4*)(PTR_IDENTITY_100ee6720 + 28);
            local_68 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            uStack_60 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            local_78 = uVar2;
            WrapArray<unsigned char>::WrapArray(local_50, (uchar*)&local_88, 1);
            (*(code*)field_0[3])(this, local_50, param_2, param_3, param_4);
            local_40 = math::operator*(param_1, (Matrix43T*)&local_88);
            local_38 = uVar2;
            param_1->SetXYZ((Vector3T*)&local_40);
        }
    }

    // 0x10098a790, 96 bytes, placed by class name and debug map
    // AnimationSampler::Reset()
    void AnimationSampler::Reset() {
        shared_ptr local_28;

        field_24 = 0;
        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)&field_8, &local_28);
        local_28.~shared_ptr();
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationSampler::~AnimationSampler();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationSampler::~AnimationSampler();

} // namespace jag::graphics
