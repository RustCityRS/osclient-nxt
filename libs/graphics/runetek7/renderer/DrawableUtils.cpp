// libs/graphics/runetek7/renderer/DrawableUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DrawableUtils.h"

// 0x1007e3de0, 16 bytes, placed by debug map only (low confidence)
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

// 0x1007e3df0, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

namespace jag::graphics {
    // 0x1007e38e0, 1248 bytes, placed by debug map only (low confidence)
    // ConstructShadowProjectionFrustum(math::Frustum&, math::Sphere const&, math::Matrix33T<float> const&, math::Vector3T<float> const&, math::Sphere const&)
    void ConstructShadowProjectionFrustum(Frustum* param_1, Sphere* param_2, Matrix33T* param_3, Vector3T* param_4,
                                          Sphere* param_5) {
        vector* pvVar1;
        math* pmVar2;
        Vector3T* pVVar3;
        vector* pvVar4;
        Vector4T<float>* this;
        undefined8* puVar5;
        float* pfVar6;
        Sphere* pSVar7;
        float fVar8;
        undefined4 uVar9;
        float in_XMM1_Da;
        undefined8 local_168;
        undefined8 local_15c;
        undefined8 local_150;
        undefined8 local_144;
        undefined8 local_138[2];
        undefined8 local_128[2];
        undefined8 local_118[2];
        undefined8 local_108[2];
        undefined8 local_f8[2];
        undefined8 local_e8[2];
        undefined8 local_d8[2];
        undefined8 local_c8[2];
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* local_b8;
        Vector4T<float>* local_b0;
        Frustum* local_a8;
        Vector3T* local_a0;
        undefined8 local_98;
        undefined4 local_90;
        EntityHighlightGlobalState* local_88;
        float local_7c;
        undefined8 local_78;
        float local_70;
        undefined8 local_68;
        float local_60;
        undefined8 local_58;
        float local_50;
        float local_48;
        float local_44;
        undefined8 local_40;
        float local_38;

        pSVar7 = param_2;
        local_a8 = param_1;
        local_a0 = param_4;
        local_88 = (EntityHighlightGlobalState*)param_5;
        pvVar1 = param_5->SSOBeginPtr(param_2);
        local_98 = *(undefined8*)pvVar1;
        local_90 = *(undefined4*)(pvVar1 + 8);
        pvVar1 = param_2->SSOBeginPtr(pSVar7);
        pmVar2 = (math*)param_3->SSOBeginPtr(pSVar7);
        local_40 = math::operator-(pmVar2, (Vector3T*)pSVar7);
        local_38 = in_XMM1_Da;
        pmVar2 = (math*)param_3->qw();
        local_58 = math::operator-(pmVar2, (Vector3T*)pSVar7);
        local_50 = in_XMM1_Da;
        local_68 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_58);
        local_60 = in_XMM1_Da;
        pVVar3 = (Vector3T*)local_68.Normalize();
        fVar8 = (float)param_2->GetOutlineRadiusAdjustment();
        local_78 = math::operator*(pVVar3, fVar8);
        pVVar3 = (Vector3T*)&local_78;
        local_70 = in_XMM1_Da;
        local_168 = math::operator+((Vector3T*)pvVar1, pVVar3);
        pvVar1 = param_2->SSOBeginPtr(pVVar3);
        pvVar4 = param_3->SSOBeginPtr(pVVar3);
        pmVar2 = (math*)param_3->qw();
        local_118[0] = math::operator-(pmVar2, pVVar3);
        local_128[0] = math::operator+((Vector3T*)pvVar4, (Vector3T*)local_118);
        pVVar3 = (Vector3T*)local_128->Normalize();
        fVar8 = (float)param_2->GetOutlineRadiusAdjustment();
        local_138[0] = math::operator*(pVVar3, fVar8);
        pVVar3 = (Vector3T*)local_138;
        local_15c = math::operator+((Vector3T*)pvVar1, pVVar3);
        pvVar1 = param_2->SSOBeginPtr(pVVar3);
        pmVar2 = (math*)param_3->SSOBeginPtr(pVVar3);
        local_e8[0] = math::operator-(pmVar2, pVVar3);
        pVVar3 = (Vector3T*)param_3->qw();
        local_f8[0] = math::operator+((Vector3T*)local_e8, pVVar3);
        pVVar3 = (Vector3T*)local_f8->Normalize();
        fVar8 = (float)param_2->GetOutlineRadiusAdjustment();
        local_108[0] = math::operator*(pVVar3, fVar8);
        pVVar3 = (Vector3T*)local_108;
        local_150 = math::operator+((Vector3T*)pvVar1, pVVar3);
        pvVar1 = param_2->SSOBeginPtr(pVVar3);
        pvVar4 = param_3->SSOBeginPtr(pVVar3);
        local_b8 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                param_3;
        pVVar3 = (Vector3T*)param_3->qw();
        local_c8[0] = math::operator+((Vector3T*)pvVar4, pVVar3);
        pVVar3 = (Vector3T*)local_c8->Normalize();
        fVar8 = (float)param_2->GetOutlineRadiusAdjustment();
        local_d8[0] = math::operator*(pVVar3, fVar8);
        local_144 = math::operator+((Vector3T*)pvVar1, (Vector3T*)local_d8);
        this = (Vector4T<float>*)local_168.begin();
        local_b0 = (Vector4T<float>*)local_168.end();
        if (this != local_b0) {
            do {
                local_70 = *(float*)(this + 8);
                local_78 = *(undefined8*)this;
                local_40 = math::operator-((Vector3T*)this, (Vector3T*)&local_98);
                local_38 = in_XMM1_Da;
                puVar5 = (undefined8*)local_40.Normalize();
                local_68 = *puVar5;
                local_60 = *(float*)(puVar5 + 1);
                pVVar3 = (Vector3T*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(local_b8);
                local_7c = math::Vector3Dot<float>(pVVar3, (Vector3T*)&local_68);
                pVVar3 = (Vector3T*)&local_98;
                local_58 = math::operator-((Vector3T*)&local_78, (Vector3T*)&local_98);
                local_50 = in_XMM1_Da;
                pmVar2 = (math*)local_58.Normalize();
                local_40 = math::operator-(pmVar2, pVVar3);
                local_38 = in_XMM1_Da;
                local_48 = (float)local_88->TimeIntersection((Vector3T*)&local_98, (Vector3T*)&local_40);
                if (1e-06 <= local_48) {
                LAB_1007e3bd0:
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "t < literals_float::REAL_APPROX_ZERO && std::ceil(t) <= std::ceil(pointLight.GetRadius())",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "renderer/DrawableUtils.cpp",
                        52, (char*)0);
                }
                local_44 = (float)ceil(local_48);
                fVar8 = (float)local_88->GetOutlineRadiusAdjustment();
                fVar8 = (float)ceil(fVar8);
                if (fVar8 < local_44)
                    goto LAB_1007e3bd0;
                fVar8 = (float)::abs(local_48);
                in_XMM1_Da = local_44;
                local_44 = fVar8;
                fVar8 = (float)::abs(local_7c);
                local_58 = math::operator*((Vector3T*)&local_68, (fVar8 + -1.0) * local_48 + local_44);
                local_50 = in_XMM1_Da;
                local_40 = math::operator+((Vector3T*)&local_98, (Vector3T*)&local_58);
                local_38 = in_XMM1_Da;
                math::Vector4T<float>::SetXYZ(this, (Vector3T*)&local_40);
                this = this + 12;
            } while (this != local_b0);
        }
        local_68 = CONCAT44(local_68._4_4_, 3129152111);
        local_78 = math::operator-(local_a0, (Vector3T*)&local_98);
        local_70 = in_XMM1_Da;
        uVar9 = local_78.Length();
        local_40 = CONCAT44(local_40._4_4_, uVar9) ^ 2147483648;
        pfVar6 = std::min<float>((float*)&local_68, (float*)&local_40);
        local_a8->Set((array*)&local_168, (Vector3T*)&local_98, *pfVar6);
    }

} // namespace jag::graphics
