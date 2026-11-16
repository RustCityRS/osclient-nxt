// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShadowMapUtils.h"

namespace jag::graphics {
    // 0x1008ab360, 336 bytes, placed by debug map only (low confidence)
    // CalcPracticalCascadeSplitDistances(std::array<float, 4ul>&, unsigned int, float, float, float)
    /* CalcPracticalCascadeSplitDistances(std::array<float, 4ul>&, unsigned int, float,
   float, float) */

    void CalcPracticalCascadeSplitDistances(array* param_1, uint param_2, float param_3, float param_4, float param_5) {
        ulong uVar1;
        uint uVar2;
        float* pfVar3;
        undefined4* puVar4;
        undefined4* puVar5;
        ulong uVar6;
        float fVar7;
        uint local_50;
        float local_48;
        float local_44;
        uint local_40;
        float local_38;
        float local_34;

        local_50 = 1;
        local_40 = param_2;
        local_38 = param_4;
        uVar2 = math::Clamp<unsigned int>(&local_40, &local_50, (uint*)&MAX_ATLAS_CASCADES);
        local_40 = uVar2;
        if (uVar2 != 0) {
            local_48 = (float)uVar2;
            local_44 = local_38 / param_3;
            local_38 = local_38 - param_3;
            uVar6 = 0;
            do {
                uVar1 = uVar6 + 1;
                local_34 = (float)(uVar1 & 4294967295) / local_48;
                fVar7 = (float)pow(local_44, local_34);
                local_34 = local_34 * local_38 + param_3;
                local_34 = (fVar7 * param_3 - local_34) * param_5 + local_34;
                pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, uVar6);
                *pfVar3 = local_34;
                uVar6 = uVar1;
            } while (uVar2 != uVar1);
        }
        if ((uVar2 - 1 < 3) && (uVar2 < 4)) {
            puVar4 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, (ulong)(uVar2 - 1));
            uVar6 = (ulong)(int)uVar2;
            do {
                local_34 = (float)*puVar4;
                puVar5 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, uVar6);
                *puVar5 = local_34;
                uVar6 = uVar6 + 1;
            } while ((uint)uVar6 < 4);
        }
    }

    // 0x1008b2320, 256 bytes, placed by __FILE__ string
    // SnapProjectionToTexelBoundaries(math::Vector4T<float>*, math::Matrix44T<float> const&, unsigned int)
    void SnapProjectionToTexelBoundaries(Vector4T* param_1, Matrix44T* param_2, uint param_3) {
        undefined4* puVar1;
        ImVec4 local_68[16];
        undefined8 local_58;
        float fStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        float fStack_40;
        undefined4 uStack_3c;

        if (param_1 == (Vector4T*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pProjTransOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapUtils.cpp",
                      204, (char*)0);
        }
        ImVec4::ImVec4(local_68, 0.0, 0.0, 0.0, 1.0);
        math::Vector4T<float>::operator*=((Vector4T<float>*)local_68, param_2);
        math::Vector4T<float>::operator*=((Vector4T<float>*)local_68, (float)param_3 * 0.5);
        local_58 = math::Vector4Round<float>((Vector4T*)local_68);
        fStack_50 = (float)param_3;
        uStack_4c = 0;
        local_48 = math::operator-((Vector4T*)&local_58, (Vector4T*)local_68);
        fStack_40 = (float)param_3;
        uStack_3c = 0;
        math::Vector4T<float>::operator*=((Vector4T<float>*)&local_48, 2.0 / (float)param_3);
        puVar1 = (undefined4*)local_48.second();
        *puVar1 = 0;
        puVar1 = (undefined4*)local_48.qw();
        *puVar1 = 0;
        math::QuaternionT<float>::operator+=((QuaternionT<float>*)param_1, (QuaternionT*)&local_48);
    }

    // 0x1008b28e0, 416 bytes, placed by __FILE__ string
    // SnapProjectionToTexelBoundaries(math::Vector4T<float>*, math::Vector4T<float>*, unsigned int)
    void SnapProjectionToTexelBoundaries(Vector4T* param_1, Vector4T* param_2, uint param_3) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 uVar4;
        float fVar5;
        undefined8 local_98[2];
        undefined8 local_88;
        float fStack_80;
        undefined4 uStack_7c;
        undefined8 local_78[2];
        undefined8 local_68;
        float fStack_60;
        undefined4 uStack_5c;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        float fStack_40;
        undefined4 uStack_3c;
        float local_30;
        float local_2c;

        if ((param_1 == (Vector4T*)0) || (param_2 == (Vector4T*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pLightCamOrthographicMinOut && pLightCamOrthographicMaxOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapUtils.cpp",
                      181, (char*)0);
        }
        local_78[0] = math::operator-(param_2, param_1);
        local_98[0] = math::Vector4Abs<float>((Vector4T*)local_78);
        pvVar1 = local_98->SSOBeginPtr(param_1);
        local_2c = 1.0 / (float)param_3;
        local_30 = *(float*)pvVar1 * local_2c;
        pfVar2 = (float*)local_98->y();
        fVar5 = local_2c * *pfVar2;
        new (local_78) ImVec4(local_30, fVar5, 1.0, 1.0);
        local_58 = math::operator/(param_1, (Vector4T*)local_78);
        uStack_50 = CONCAT44(0, fVar5);
        local_68 = math::Vector4Round<float>((Vector4T*)&local_58);
        fStack_60 = fVar5;
        uStack_5c = 0;
        local_88 = math::operator*((Vector4T*)&local_68, (Vector4T*)local_78);
        fStack_80 = fVar5;
        uStack_7c = 0;
        local_48 = math::operator/(param_2, (Vector4T*)local_78);
        fStack_40 = fVar5;
        uStack_3c = 0;
        local_58 = math::Vector4Round<float>((Vector4T*)&local_48);
        uStack_50 = CONCAT44(0, fVar5);
        uVar4 = math::operator*((Vector4T*)&local_58, (Vector4T*)local_78);
        local_58 = 0;
        uStack_50 = 4294967297;
        fStack_60 = fVar5;
        uStack_5c = 0;
        local_68 = uVar4;
        uVar4 = math::Vector4ComponentSelect<float>((Vector4T*)&local_88, param_1, (array*)&local_58);
        fStack_40 = fVar5;
        uStack_3c = 0;
        local_48 = uVar4;
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)&local_48);
        uVar4 = math::Vector4ComponentSelect<float>((Vector4T*)&local_68, param_2, (array*)&local_58);
        fStack_40 = fVar5;
        uStack_3c = 0;
        local_48 = uVar4;
        math::Rect<float>::operator=((Rect<float>*)param_2, (Rect*)&local_48);
    }

} // namespace jag::graphics
