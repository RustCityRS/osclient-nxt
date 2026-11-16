// libs/graphics/runetek7/scenegraph/VisFilters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VisFilters.h"

namespace jag::graphics {
    // 0x100f43834, 4 bytes, __data
    SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale = 1062417203;

    // 0x100f43838, 1 bytes, __data
    SunShadowPassVisTestFunctor::m_shadowCasterAreaCulling = 1;

    // 0x100f43839, 1 bytes, __data
    SunShadowPassVisTestFunctor::m_shadowCasterVolumeCulling = 1;

    // 0x1039bd1e8, 1 bytes, __common; zero-initialised
    SunShadowPassVisTestFunctor::m_shadowCasterVolumeIntersection;

    // 0x1039bd1e9, 1 bytes, __common; zero-initialised
    SunShadowPassVisTestFunctor::m_showShadowCasterVolumeCapsules;

    // 0x1007b0da0, 480 bytes, placed by debug map only (low confidence)
    // EstimateShadowVolumeCapsuleLength(math::Capsule3D&, math::OBB const&, math::Vector3T<float> const&, GraphRoot*, unsigned int)
    void EstimateShadowVolumeCapsuleLength(Capsule3D* param_1, OBB* param_2, Vector3T* param_3, GraphRoot* param_4,
                                           uint param_5) {
        vector* pvVar2;
        EntityHighlightGlobalState* pEVar3;
        Vector3T* pVVar4;
        Sphere* pSVar5;
        float fVar6;
        float fVar7;
        undefined1 local_88[32];
        undefined1 local_68[16];
        undefined1 local_58[16];
        AABB* local_48;
        undefined8 local_40;
        float local_38;
        float local_34;

        local_34 = (float)param_5;
        new (local_88) math::Sphere();
        pEVar3 = (EntityHighlightGlobalState*)local_88;
        param_2->GetMinimumEnclosingSphere(local_88);
        pvVar2 = local_88->SSOBeginPtr(pEVar3);
        fVar6 = (float)local_88->GetOutlineRadiusAdjustment();
        local_68._0_8_ = math::operator*(param_3, fVar6);
        pVVar4 = (Vector3T*)local_68;
        local_88._16_8_ = math::operator+((Vector3T*)pvVar2, pVVar4);
        local_48 = (AABB*)0;
        pvVar2 = local_88->SSOBeginPtr(pVVar4);
        fVar6 = (float)param_1->GetCylinderLength();
        local_58._0_8_ = math::operator*(param_3, fVar6);
        local_68._0_8_ = math::operator+((Vector3T*)pvVar2, (Vector3T*)local_58);
        param_4->TestIntersection((Vector3T*)(local_88 + 16), local_68, (uint)local_34, -1, 0, &local_48);
        if (local_48 != (AABB*)0) {
            pSVar5 = (Sphere*)local_68;
            math::Sphere::Sphere(pSVar5);
            local_48->GetMinimumEnclosingSphere(pSVar5);
            pvVar2 = local_88->SSOBeginPtr(pSVar5);
            local_40 = local_48->GetCentrePos();
            local_58._0_8_ = math::operator-((Vector3T*)pvVar2, (Vector3T*)&local_40);
            local_34 = (float)local_58->Length();
            fVar6 = (float)param_1->GetCylinderLength();
            if (local_34 < fVar6) {
                fVar6 = local_34;
                local_40 = local_48->GetCentrePos();
                local_38 = fVar6;
                fVar7 = (float)param_1->GetMainRenderTargetScaleFactor();
                pSVar5 = (Sphere*)local_58;
                math::Sphere::Sphere(pSVar5, (Vector3T*)&local_40, fVar7);
                if (local_68->IsInside(pSVar5) != '\0') {
                    pvVar2 = local_88->SSOBeginPtr(pSVar5);
                    local_40 = math::operator*(param_3, local_34);
                    local_38 = fVar6;
                    local_58._0_8_ = math::operator+((Vector3T*)pvVar2, (Vector3T*)&local_40);
                    local_58._8_4_ = fVar6;
                    param_1->SetHalfSize(local_58);
                }
            }
        }
    }

    // 0x1007b1030, 368 bytes, placed by __FILE__ string
    // SunShadowPassVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&) const
    /* SunShadowPassVisTestFunctor::TEMPNAMEPLACEHOLDERVALUE(std::array<math::IntersectionType,
   10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&,
   math::OBB const&) const */

    ulong SunShadowPassVisTestFunctor::operator()(array* param_1, Frustum* param_2, Frustum* param_3, int param_4,
                                                  AABB* param_5, OBB* param_6) {
        uint uVar2;
        int iVar3;
        char* pcVar4;
        long* plVar5;
        long* plVar6;
        ulong uVar7;
        bool bVar8;
        Capsule3D local_58;

        if (field_176 == (QueryPass*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_cascade != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "scenegraph/VisFilters.cpp",
                      86, (char*)0);
        }
        uVar2 = param_3->TestIntersection(param_6);
        pcVar4 = (char*)std::array<math::IntersectionType, 10ul>::operator[](
            (array<math::IntersectionType, 10ul>*)param_1, (long)param_4);
        *pcVar4 = (char)uVar2;
        if ((char)uVar2 == '\0') {
        LAB_1007b1188:
            uVar7 = 0;
        } else {
            ConstructDirLightShadowVolumeCapsule((OBB*)&local_58, (Vector3T*)param_6);
            if (m_shadowCasterVolumeCulling != '\0') {
                if (TestIntersection(&local_58) == '\0')
                    goto LAB_1007b1188;
            }
            plVar6 = (long*)(ulong)uVar2;
            if (m_showShadowCasterVolumeCapsules != '\0') {
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    new (&local_58.field_32) oldscape::sidebars::SideBarData(-1, 2);
                    (**(code**)(*plVar5 + 48))(plVar5, &local_58, &local_58.field_32);
                    plVar6 = plVar5;
                }
            }
            uVar7 = CONCAT71((int7)((ulong)plVar6 >> 8), 1);
            if (m_shadowCasterAreaCulling != '\0') {
                iVar3 = field_176->GetMode();
                if (2 < iVar3) {
                    uVar2 = field_184;
                    bVar8 = true;
                    if (3 < (int)uVar2) {
                        uVar7 = (ulong)(uVar2 - 2);
                        do {
                            pcVar4 = (char*)std::array<math::IntersectionType, 10ul>::operator[](
                                (array<math::IntersectionType, 10ul>*)param_1, uVar7);
                            bVar8 = *pcVar4 != '\x01';
                            if ((long)uVar7 < 3)
                                break;
                            uVar7 = uVar7 - 1;
                        } while (*pcVar4 != '\x01');
                    }
                    pcVar4 = (char*)std::array<math::IntersectionType, 10ul>::operator[](
                        (array<math::IntersectionType, 10ul>*)param_1, (ulong)uVar2);
                    uVar7 = CONCAT71((int7)(uVar7 >> 8), *pcVar4 != '\x01' | bVar8);
                }
            }
        }
        return uVar7 & 4294967295;
    }

} // namespace jag::graphics
