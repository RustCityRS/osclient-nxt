// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShadowMapUtils.h"

namespace jag::graphics {
    // 0x1008ab360
    void CalcPracticalCascadeSplitDistances(std::array<float, 4ul>& arg1, unsigned int arg2, float arg3, float arg4,
                                            float arg5) {
        unsigned long uVar1;
        float* pfVar3;
        uint32_t* puVar4;
        uint32_t* puVar5;
        unsigned long uVar6;
        float fVar7;
        float local_48;
        float local_44;
        float local_34;

        unsigned int local_40 = arg2;
        float local_38 = arg4;
        unsigned int uVar2 = math::Clamp<unsigned int>(local_40, 1, MAX_ATLAS_CASCADES);
        local_40 = uVar2;
        if (uVar2 != 0) {
            local_48 = (float)uVar2;
            local_44 = local_38 / arg3;
            local_38 = local_38 - arg3;
            uVar6 = 0;
            do {
                uVar1 = uVar6 + 1;
                local_34 = (float)(uVar1 & 4294967295) / local_48;
                fVar7 = (float)pow(local_44, local_34);
                local_34 = local_34 * local_38 + arg3;
                local_34 = (fVar7 * arg3 - local_34) * arg5 + local_34;
                pfVar3 = &arg1[uVar6];
                *pfVar3 = local_34;
                uVar6 = uVar1;
            } while (uVar2 != uVar1);
        }
        if ((uVar2 - 1 < 3) && (uVar2 < 4)) {
            puVar4 = &arg1[(unsigned long)(uVar2 - 1)];
            uVar6 = (unsigned long)(int)uVar2;
            do {
                local_34 = (float)*puVar4;
                puVar5 = &arg1[uVar6];
                *puVar5 = local_34;
                uVar6 = uVar6 + 1;
            } while ((unsigned int)uVar6 < 4);
        }
    }

    // 0x1008b2320
    void SnapProjectionToTexelBoundaries(math::Vector4T<float>* vector4, const math::Matrix44T<float>& matrix44,
                                         unsigned int arg3) {
        if (vector4 == nullptr) {
            LogAssert("pProjTransOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapUtils.cpp",
                      204, nullptr);
        }
        ImVec4 local_68(0.0, 0.0, 0.0, 1.0);
        local_68 *= matrix44;
        local_68 *= ((float)arg3 * 0.5);
        uint64_t local_58 = math::Vector4Round<float>(local_68);
        float fStack_50 = (float)arg3;
        uint32_t uStack_4c = 0;
        uint64_t local_48 = local_58 - local_68;
        float fStack_40 = (float)arg3;
        uint32_t uStack_3c = 0;
        local_48 *= (2.0 / (float)arg3);
        auto puVar1 = local_48.second();
        *puVar1 = 0;
        puVar1 = (uint32_t*)local_48.qw();
        *puVar1 = 0;
        *vector4 += local_48;
    }

    // 0x1008b28e0
    void SnapProjectionToTexelBoundaries(math::Vector4T<float>* vector41, math::Vector4T<float>* vector42,
                                         unsigned int arg3) {
        uint64_t local_98[2];
        uint64_t local_78[2];

        if ((vector41 == nullptr) || (vector42 == nullptr)) {
            LogAssert("pLightCamOrthographicMinOut && pLightCamOrthographicMaxOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapUtils.cpp",
                      181, nullptr);
        }
        local_78[0] = *vector42 - *vector41;
        local_98[0] = math::Vector4Abs<float>(*local_78);
        auto pfVar1 = local_98->SSOBeginPtr();
        float local_2c = 1.0 / (float)arg3;
        float local_30 = *pfVar1 * local_2c;
        pfVar1 = (float*)local_98->y();
        float arg2 = local_2c * *pfVar1;
        new (local_78) ImVec4(local_30, arg2, 1.0, 1.0);
        uint64_t local_58 = *vector41 / *local_78;
        uint64_t uStack_50 = (((uint64_t)0 << 32) | (uint32_t)arg2);
        uint64_t local_68 = math::Vector4Round<float>(local_58);
        float fStack_60 = arg2;
        uint32_t uStack_5c = 0;
        uint64_t local_88 = local_68 * *local_78;
        float fStack_80 = arg2;
        uint32_t uStack_7c = 0;
        uint64_t local_48 = *vector42 / *local_78;
        float fStack_40 = arg2;
        uint32_t uStack_3c = 0;
        local_58 = math::Vector4Round<float>(local_48);
        uStack_50 = (((uint64_t)0 << 32) | (uint32_t)arg2);
        uint64_t uVar2 = local_58 * *local_78;
        local_58 = 0;
        uStack_50 = 4294967297;
        fStack_60 = arg2;
        uStack_5c = 0;
        local_68 = uVar2;
        uVar2 = math::Vector4ComponentSelect<float>(local_88, *vector41, local_58);
        fStack_40 = arg2;
        uStack_3c = 0;
        local_48 = uVar2;
        *vector41 = local_48;
        uVar2 = math::Vector4ComponentSelect<float>(local_68, *vector42, local_58);
        fStack_40 = arg2;
        uStack_3c = 0;
        local_48 = uVar2;
        *vector42 = local_48;
    }

} // namespace jag::graphics
