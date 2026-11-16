// libs/graphics/runetek7/renderer/DrawableUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DrawableUtils.h"

// 0x1007e3de0
void ceil(float arg1) {
    _ceilf();
}

// 0x1007e3df0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

namespace jag::graphics {
    // 0x1007e38e0
    void ConstructShadowProjectionFrustum(math::Frustum& frustum, const math::Sphere& sphere1,
                                          const math::Matrix33T<float>& matrix33, const math::Vector3T<float>& vector3,
                                          const math::Sphere& sphere2) {
        float in_XMM1_Da;
        uint64_t local_138[2];
        ReturnValue local_128;
        uint64_t local_118[2];
        uint64_t local_108[2];
        ReturnValue local_f8;
        uint64_t local_e8[2];
        uint64_t local_d8[2];
        ReturnValue local_c8;
        float local_7c;
        float local_48;
        float local_44;

        auto puVar1 = sphere2.SSOBeginPtr();
        uint64_t local_98 = *puVar1;
        uint32_t local_90 = *(uint32_t*)(puVar1 + 1);
        auto pVVar2 = sphere1.SSOBeginPtr();
        auto pVVar3 = matrix33.SSOBeginPtr();
        ReturnValue local_40 = (ReturnValue)math::operator-(pVVar3);
        float local_38 = in_XMM1_Da;
        pVVar3 = (Vector3T<float>*)matrix33.qw();
        ReturnValue local_58 = (ReturnValue)math::operator-(pVVar3);
        float local_50 = in_XMM1_Da;
        ReturnValue local_68 = (ReturnValue)local_40 + local_58;
        float local_60 = in_XMM1_Da;
        ReturnValue* pRVar4 = local_68 = math::Vector3T<float>::Normalize();
        float fVar7 = (float)sphere1.GetOutlineRadiusAdjustment();
        uint64_t local_78 = *fVar7 * *pRVar4;
        float local_70 = in_XMM1_Da;
        uint64_t local_168 = *pVVar2 + local_78;
        pVVar2 = (Vector3T<float>*)sphere1.SSOBeginPtr();
        pVVar3 = (Vector3T<float>*)matrix33.SSOBeginPtr();
        auto pVVar5 = matrix33.qw();
        local_118[0] = math::operator-(pVVar5);
        local_128[0] = (ReturnValue)*pVVar3 + *local_118;
        pRVar4 = local_128 = math::Vector3T<float>::Normalize();
        fVar7 = (float)sphere1.GetOutlineRadiusAdjustment();
        local_138[0] = *fVar7 * *pRVar4;
        uint64_t local_15c = *pVVar2 + *local_138;
        pVVar2 = (Vector3T<float>*)sphere1.SSOBeginPtr();
        pVVar3 = (Vector3T<float>*)matrix33.SSOBeginPtr();
        local_e8[0] = math::operator-(pVVar3);
        pVVar3 = (Vector3T<float>*)matrix33.qw();
        local_f8[0] = (ReturnValue)*local_e8 + *pVVar3;
        pRVar4 = local_f8 = math::Vector3T<float>::Normalize();
        fVar7 = (float)sphere1.GetOutlineRadiusAdjustment();
        local_108[0] = *fVar7 * *pRVar4;
        uint64_t local_150 = *pVVar2 + *local_108;
        pVVar2 = (Vector3T<float>*)sphere1.SSOBeginPtr();
        pVVar3 = (Vector3T<float>*)matrix33.SSOBeginPtr();
        pVVar5 = (Vector3T<float>*)matrix33.qw();
        local_c8[0] = (ReturnValue)*pVVar3 + *pVVar5;
        pRVar4 = local_c8 = math::Vector3T<float>::Normalize();
        fVar7 = (float)sphere1.GetOutlineRadiusAdjustment();
        local_d8[0] = *fVar7 * *pRVar4;
        uint64_t local_144 = *pVVar2 + *local_d8;
        Vector4T<float>* vector31 = (Vector4T<float>*)std::array<math::Vector3T<float>, 4ul>::begin();
        Vector4T<float>* local_b0 = (Vector4T<float>*)std::array<math::Vector3T<float>, 4ul>::end();
        if (vector31 != local_b0) {
            do {
                local_70 = *(float*)(vector31 + 8);
                local_78 = *(uint64_t*)vector31;
                local_40 = (ReturnValue)*vector31 - local_98;
                local_38 = in_XMM1_Da;
                pRVar4 = local_40 = math::Vector3T<float>::Normalize();
                local_68 = *pRVar4;
                local_60 = *(float*)(pRVar4 + 1);
                pVVar2 = (Vector3T<float>*)matrix33.second();
                local_7c = math::Vector3Dot<float>(*pVVar2, local_68);
                local_58 = (ReturnValue)local_78 - local_98;
                local_50 = in_XMM1_Da;
                pRVar4 = local_58 = math::Vector3T<float>::Normalize();
                local_40 = (ReturnValue)math::operator-((Vector3T<float>*)pRVar4);
                local_38 = in_XMM1_Da;
                local_48 = (float)((Sphere*)(EntityHighlightGlobalState*)sphere2)->TimeIntersection(local_98, local_40);
                if (1e-06 <= local_48) {
                LAB_1007e3bd0:
                    LogAssert(
                        "t < literals_float::REAL_APPROX_ZERO && std::ceil(t) <= std::ceil(pointLight.GetRadius())",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "renderer/DrawableUtils.cpp",
                        52, nullptr);
                }
                local_44 = (float)ceil(local_48);
                fVar7 = (float)sphere2.GetOutlineRadiusAdjustment();
                fVar7 = (float)ceil(fVar7);
                if (fVar7 < local_44)
                    goto LAB_1007e3bd0;
                fVar7 = (float)::abs(local_48);
                in_XMM1_Da = local_44;
                local_44 = fVar7;
                fVar7 = (float)::abs(local_7c);
                local_58 = (ReturnValue)(*((fVar7 - 1.0) * local_48 + local_44)) * local_68;
                local_50 = in_XMM1_Da;
                local_40 = (ReturnValue)local_98 + local_58;
                local_38 = in_XMM1_Da;
                vector31->SetXYZ(local_40);
                vector31 = vector31 + 12;
            } while (vector31 != local_b0);
        }
        local_68._0_4_ = 3129152111;
        local_78 = vector3 - local_98;
        local_70 = in_XMM1_Da;
        uint32_t uVar8 = local_78.Length();
        local_40 = (ReturnValue)((((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar8) ^ 2147483648);
        auto pfVar6 = std::min<float>(local_68, local_40);
        frustum.Set(local_168, local_98, *pfVar6);
    }

} // namespace jag::graphics
