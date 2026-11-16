// libs/game/runetek5/scene/DynamicPointLightManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "DynamicPointLightManager.h"

namespace jag::game {
    // 0x100067280: DynamicPointLightManager::GetAffectedAABBs() const has the same machine code as console::Snow::GetSnowPiles() const

    // 0x100498010
    int DynamicPointLightManager::CreateLight() {
        shared_ptr<StaticPointLight> local_30;

        int local_1c = field_72;
        field_72 = local_1c + 1;
        MakeSharedPool<StaticPointLight, 64>::MakeShared<>();
        ((StaticPointLight*)local_30.operator->())->SetDynamicID(local_1c);
        shared_ptr<StaticPointLight>* this_01 = (shared_ptr<StaticPointLight>*)(*this)[local_1c];
        *this_01 = local_30;
        int iVar1 = local_1c;
        return iVar1;
    }

    // 0x1004982d0
    void DynamicPointLightManager::DestroyLight(int arg1) {
        int local_24 = arg1;
        if (HasLight(arg1) == '\0') {
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      34, nullptr);
        }
        pair<int, shared_ptr<StaticPointLight> _>* arg1_00 = (pair<int, shared_ptr<StaticPointLight> _>*)
            eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this);
        StaticPointLight* this_00 = (StaticPointLight*)(*((arg1_00 + 8))).operator->();
        auto aabb = this_00->GetWorldAABB();
        AABB local_48(*aabb);
        AddAffectedAABB(local_48);
        erase(arg1_00);
    }

    // 0x1004983c0
    long DynamicPointLightManager::GetLight(int arg1) const {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;

        uint64_t uVar3 = (((uint64_t)arg1 << 32) | (uint32_t)in_EAX);
        if (HasLight(arg1) == '\0') {
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      45, nullptr, in_R8, in_R9, uVar3);
        }
        return eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this) + 8;
    }

    // 0x100498410
    void DynamicPointLightManager::SetLight(int arg1, const CoordGrid& coordGrid, float arg3,
                                            const math::Vector3T<float>& vector3, int arg5, int arg6, float arg7,
                                            float arg8, float arg9, float arg10) {
        uint8_t local_a8[32];
        AABB local_88;

        int local_58 = arg1;
        if (HasLight(arg1) == '\0') {
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      51, nullptr);
        }
        long lVar4 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this);
        shared_ptr<StaticPointLight>* this_05 = (shared_ptr<StaticPointLight>*)(lVar4 + 8);
        Vector2T<int>* this_00 = (Vector2T<int>*)(*this_05).operator->();
        auto pVVar5 = this_00->y();
        char local_31 = *pVVar5 == *PTR_ZERO_100ee66e8;
        StaticPointLight* pSVar6 = (StaticPointLight*)(*this_05).operator->();
        auto pAVar7 = pSVar6->GetWorldAABB();
        new (local_a8) math::AABB(*pAVar7);
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* this_01 =
            (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)(*this_05).operator->();
        new (this_01) std::__cxx_atomic_base_impl(coordGrid.field_0);
        int iVar3 = coordGrid.GetLocalX();
        float local_3c = (float)iVar3 * 128.0 + 64.0;
        iVar3 = coordGrid.GetLocalZ();
        ColourHSL local_b8(local_3c, arg3, (float)iVar3 * 128.0 + 64.0);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        local_88._0_8_ = local_b8 + vector3;
        local_88.field_8 = arg3;
        pSVar6->SetPosition(*((local_a8 + 32)));
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetUseTerrainHeight(false);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetRadiusGrid((unsigned int)arg5, true);
        ((PlayerGroupMember*)(*this_05).operator->())->SetStatus(arg6);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetFlickerType(1);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetIntensity(arg7);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetAttenuation(arg8);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetBacklightRatio(arg9);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetShadowsEnabled(0.0 < arg10);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetShadowStrength(arg10);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        pSVar6->SetLightsLevelsAbove(true);
        ((DebugOverlay*)(*this_05).operator->())->SetShow(true);
        SwipeState* this_04 = (SwipeState*)(*this_05).operator->();
        iVar3 = coordGrid.GetMapSquareX();
        int arg2 = coordGrid.GetMapSquareZ();
        this_04->SetStartPosition(iVar3, arg2);
        pSVar6 = (StaticPointLight*)(*this_05).operator->();
        if (local_31 == '\0') {
            pVVar5 = (Vector3T<float>*)pSVar6->y();
            if (*pVVar5 == *PTR_ZERO_100ee66e8) {
                new ((local_a8 + 32)) math::AABB(*local_a8);
            } else {
                pSVar6 = (StaticPointLight*)(*this_05).operator->();
                pAVar7 = (AABB*)pSVar6->GetWorldAABB();
                *((local_a8 + 32)) = math::AABB::Union(*pAVar7, *local_a8);
            }
        } else {
            pAVar7 = (AABB*)pSVar6->GetWorldAABB();
            new ((local_a8 + 32)) math::AABB(*pAVar7);
        }
        AddAffectedAABB(*((local_a8 + 32)));
    }

    // 0x1004987b0
    void DynamicPointLightManager::SetLightPosition(int arg1, int arg2, const math::Vector3T<float>& vector3) {
        int iVar3;
        uint8_t local_88[32];
        AABB local_68;

        local_68._32_4_ = arg1;
        if (HasLight(arg1) == '\0') {
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      87, nullptr);
        }
        long lVar4 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this);
        shared_ptr<StaticPointLight>* this_03 = (shared_ptr<StaticPointLight>*)(lVar4 + 8);
        Vector2T<int>* pVVar5 = (Vector2T<int>*)(*this_03).operator->();
        auto pVVar6 = pVVar5->y();
        if (*pVVar6 == vector3) {
            iVar3 = ((CoordMapSquare*)(*this_03).operator->())->GetX();
            if (iVar3 == arg2) {
                return;
            }
        }
        pVVar5 = (Vector2T<int>*)(*this_03).operator->();
        pVVar6 = (Vector3T<float>*)pVVar5->y();
        char local_31 = *pVVar6 == *PTR_ZERO_100ee66e8;
        StaticPointLight* pSVar7 = (StaticPointLight*)(*this_03).operator->();
        auto pAVar8 = pSVar7->GetWorldAABB();
        new (local_88) math::AABB(*pAVar8);
        CoordGrid local_a8(arg2, vector3);
        iVar3 = local_a8.GetMapSquareX();
        float local_44 = (float)(iVar3 << 13);
        iVar3 = local_a8.GetMapSquareZ();
        ColourHSL local_98(local_44, 0.0, (float)(iVar3 << 13));
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* this_01 =
            (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)(*this_03).operator->();
        new (this_01) std::__cxx_atomic_base_impl(arg2);
        pSVar7 = (StaticPointLight*)(*this_03).operator->();
        local_68._0_8_ = vector3 - local_98;
        local_68.field_8 = (float)0;
        pSVar7->SetPosition(*((local_88 + 32)));
        SwipeState* this_02 = (SwipeState*)(*this_03).operator->();
        iVar3 = local_a8.GetMapSquareX();
        int arg2_00 = local_a8.GetMapSquareZ();
        this_02->SetStartPosition(iVar3, arg2_00);
        pSVar7 = (StaticPointLight*)(*this_03).operator->();
        if (local_31 == '\0') {
            pVVar6 = (Vector3T<float>*)pSVar7->y();
            if (*pVVar6 == *PTR_ZERO_100ee66e8) {
                new ((local_88 + 32)) math::AABB(*local_88);
            } else {
                pSVar7 = (StaticPointLight*)(*this_03).operator->();
                pAVar8 = (AABB*)pSVar7->GetWorldAABB();
                *((local_88 + 32)) = math::AABB::Union(*pAVar8, *local_88);
            }
        } else {
            pAVar8 = (AABB*)pSVar7->GetWorldAABB();
            new ((local_88 + 32)) math::AABB(*pAVar8);
        }
        AddAffectedAABB(*((local_88 + 32)));
    }

    // 0x1004989e0
    void DynamicPointLightManager::ClearLights() {
        int* piVar1;

        while (true) {
            if (empty() != '\0')
                break;
            piVar1 = (int*)back();
            DestroyLight(*piVar1);
        }
        field_72 = 0;
    }

    // 0x100498a60
    void DynamicPointLightManager::GetLightsInMapSquare(
        eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>& staticPointLights, int arg2,
        int arg3) const {
        shared_ptr<StaticPointLight>* this_00;
        StaticPointLight* this_02;
        AABB* aabb;
        shared_ptr<postprocess::PostProcessEffect>* psVar4;
        shared_ptr<postprocess::PostProcessEffect>* psVar5;
        long local_40;

        ColourHSL local_60((float)arg2 * 8192.0, -3.4028235e+38, (float)arg3 * 8192.0);
        ColourHSL local_50((float)(arg2 + 1) * 8192.0, 3.4028235e+38, (float)(arg3 + 1) * 8192.0);
        AABB local_88(&local_60, &local_50);
        long lVar2 = HeapBeginPtr();
        long lVar3 = end();
        if (lVar2 != lVar3) {
            local_40 = lVar3;
            do {
                this_00 = (shared_ptr<StaticPointLight>*)(lVar2 + 8);
                this_02 = (StaticPointLight*)(*this_00).operator->();
                aabb = (AABB*)this_02->GetWorldAABB();
                if (local_88.TestIntersection(*aabb) != '\0') {
                    psVar4 = (shared_ptr<postprocess::PostProcessEffect>*)staticPointLights.HeapBeginPtr();
                    psVar5 = (shared_ptr<postprocess::PostProcessEffect>*)staticPointLights.end();
                    psVar4 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar4, psVar5, *this_00);
                    psVar5 = (shared_ptr<postprocess::PostProcessEffect>*)staticPointLights.end();
                    if (psVar4 != psVar5) {
                        LogAssert("eastl::find(pointLightListOut.begin(), pointLightListOut.end(), light.second) == "
                                  "pointLightListOut.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/DynamicPointLightManager.cpp",
                                  137, nullptr);
                    }
                    staticPointLights.push_back(*this_00);
                    lVar3 = local_40;
                }
                lVar2 = lVar2 + 24;
            } while (lVar2 != lVar3);
        }
    }

} // namespace jag::game
