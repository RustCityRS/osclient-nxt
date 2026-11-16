// libs/graphics/runetek7/animation/AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationSampler.h"

namespace jag::graphics {
    // 0x1001a4060: AnimationSampler::FrameInterpolationData::FrameInterpolationData() has the same machine code as math::Vector3T<float>::Vector3T()

    // 0x10098a680
    AnimationSampler::AnimationSampler() : field_24(0) {}

    // 0x10098a6b0
    void AnimationSampler::ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                               const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                               const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                               const math::Matrix44T<float>& matrix44) const {
        uint32_t uVar2;
        Matrix43T<float> local_88;
        float fStack_6c;
        uint64_t local_68;
        uint64_t uStack_60;
        WrapArray<unsigned char> local_50;
        Vector3T<float> local_40;

        long lVar1 = arg2.size();
        if (lVar1 != 1) {
            lVar1 = arg3.size();
            if (lVar1 != 1) {
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/AnimationSampler.cpp",
                          16, nullptr);
            }
        }
        lVar1 = arg2.size();
        if (lVar1 == 1) {
            local_88._0_8_ = *(uint64_t*)PTR_IDENTITY_100ee6720;
            local_88._8_8_ = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 8);
            uVar2 = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 16);
            local_88._20_4_ = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 20);
            local_88._24_4_ = *(uint32_t*)(PTR_IDENTITY_100ee6720 + 24);
            fStack_6c = *(float*)(PTR_IDENTITY_100ee6720 + 28);
            local_68 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 32);
            uStack_60 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 40);
            local_88._16_4_ = uVar2;
            local_50 = WrapArray(&local_88, 1);
            slot3(&local_50, arg2, arg3, matrix44);
            local_40._0_8_ = vector3 * local_88;
            local_40._8_4_ = uVar2;
            vector3.SetXYZ(local_40);
        }
    }

    // 0x10098a790
    void AnimationSampler::Reset() {

        field_24 = 0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_8 = local_28;
    }

    // 0x100c92b50: AnimationSampler::~AnimationSampler() has the same machine code as InlineFatalBreak()

} // namespace jag::graphics
