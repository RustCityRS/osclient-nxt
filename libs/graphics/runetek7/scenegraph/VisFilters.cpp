// libs/graphics/runetek7/scenegraph/VisFilters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VisFilters.h"

namespace jag::graphics {
    // 0x100f43834
    int32_t SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale = 1062417203;

    // 0x100f43838
    bool SunShadowPassVisTestFunctor::m_shadowCasterAreaCulling = 1;

    // 0x100f43839
    bool SunShadowPassVisTestFunctor::m_shadowCasterVolumeCulling = 1;

    // 0x1039bd1e8
    bool SunShadowPassVisTestFunctor::m_shadowCasterVolumeIntersection;

    // 0x1039bd1e9
    bool SunShadowPassVisTestFunctor::m_showShadowCasterVolumeCapsules;

    // 0x1007b0da0
    void EstimateShadowVolumeCapsuleLength(math::Capsule3D& capsule3D, const math::OBB& obb,
                                           const math::Vector3T<float>& vector3, GraphRoot* graphRoot,
                                           unsigned int arg5) {
        float arg2;
        uint8_t local_88[32];
        uint8_t local_68[16];
        uint8_t local_58[16];
        uint64_t local_40;
        float local_38;

        float local_34 = (float)arg5;
        new (local_88) math::Sphere();
        obb.GetMinimumEnclosingSphere(*local_88);
        auto pVVar2 = local_88->SSOBeginPtr();
        float fVar3 = (float)local_88->GetOutlineRadiusAdjustment();
        local_68._0_8_ = *fVar3 vector3;
        local_88._16_8_ = *pVVar2 + *local_68;
        AABB* local_48 = nullptr;
        pVVar2 = (Vector3T<float>*)local_88->SSOBeginPtr();
        fVar3 = (float)capsule3D.GetCylinderLength();
        local_58._0_8_ = *fVar3 vector3;
        local_68._0_8_ = *pVVar2 + *local_58;
        GraphRoot::TestIntersection(*graphRoot, *((local_88 + 16)), (unsigned int)local_68, (int)local_34, -1, nullptr);
        if (local_48 != nullptr) {
            new (local_68) math::Sphere();
            local_48->GetMinimumEnclosingSphere(*local_68);
            pVVar2 = (Vector3T<float>*)local_88->SSOBeginPtr();
            local_40 = local_48->GetCentrePos();
            local_58._0_8_ = *pVVar2 - local_40;
            local_34 = (float)local_58->Length();
            fVar3 = (float)capsule3D.GetCylinderLength();
            if (local_34 < fVar3) {
                fVar3 = local_34;
                local_40 = local_48->GetCentrePos();
                local_38 = fVar3;
                arg2 = (float)capsule3D.GetMainRenderTargetScaleFactor();
                new (local_58) math::Sphere(local_40, arg2);
                if (local_68->IsInside(*local_58) != '\0') {
                    pVVar2 = (Vector3T<float>*)local_88->SSOBeginPtr();
                    local_40 = *local_34 vector3;
                    local_38 = fVar3;
                    local_58._0_8_ = *pVVar2 + local_40;
                    local_58._8_4_ = fVar3;
                    capsule3D.SetHalfSize(*local_58);
                }
            }
        }
    }

    // 0x1007b1030
    unsigned long SunShadowPassVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes,
                                                          math::Frustum& frustum1, const math::Frustum& frustum2,
                                                          int arg4, const math::AABB& aabb,
                                                          const math::OBB& obb) const {
        int iVar3;
        long* plVar5;
        long* plVar6;
        unsigned long arg1;
        bool bVar7;
        Capsule3D local_58;

        if (field_176 == nullptr) {
            LogAssert("m_cascade != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/VisFilters.cpp",
                      86, nullptr);
        }
        unsigned int uVar2 = frustum2.TestIntersection(obb);
        char* pcVar4 = &intersectionTypes[(long)arg4];
        *pcVar4 = (char)uVar2;
        if ((char)uVar2 == '\0') {
        LAB_1007b1188:
            arg1 = 0;
        } else {
            ConstructDirLightShadowVolumeCapsule((OBB*)&local_58, (Vector3T<float>*)obb);
            if (m_shadowCasterVolumeCulling != '\0') {
                if (TestIntersection(local_58) == '\0')
                    goto LAB_1007b1188;
            }
            plVar6 = (long*)(unsigned long)uVar2;
            if (m_showShadowCasterVolumeCapsules != '\0') {
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    new (&local_58.field_32) oldscape::sidebars::SideBarData(-1, 2);
                    (**(void (**)(...))(*plVar5 + 48))(plVar5, &local_58, &local_58.field_32);
                    plVar6 = plVar5;
                }
            }
            arg1 = (((uint64_t)((int64_t)((unsigned long)plVar6 >> 8)) << 8) | (uint8_t)1);
            if (m_shadowCasterAreaCulling != '\0') {
                iVar3 = field_176->GetMode();
                if (2 < iVar3) {
                    uVar2 = field_184;
                    bVar7 = true;
                    if (3 < (int)uVar2) {
                        arg1 = (unsigned long)(uVar2 - 2);
                        do {
                            pcVar4 = &intersectionTypes[arg1];
                            bVar7 = *pcVar4 != '\x01';
                            if ((long)arg1 < 3)
                                break;
                            arg1 = arg1 - 1;
                        } while (*pcVar4 != '\x01');
                    }
                    pcVar4 = &intersectionTypes[(unsigned long)uVar2];
                    arg1 = (((uint64_t)((int64_t)(arg1 >> 8)) << 8) | (uint8_t)(*pcVar4 != '\x01' | bVar7));
                }
            }
        }
        return arg1 & 4294967295;
    }

} // namespace jag::graphics
