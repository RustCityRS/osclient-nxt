// libs/game/runetek5/scene/DynamicPointLightManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "DynamicPointLightManager.h"

namespace jag::game {
    // 0x100067280: the linker folded this into console::Snow::GetSnowPiles() const, which has identical code
    DynamicPointLightManager::GetAffectedAABBs() const;

    // 0x100498010, 128 bytes, placed by class name and debug map
    // DynamicPointLightManager::CreateLight()
    int DynamicPointLightManager::CreateLight() {
        int iVar1;
        StaticPointLight* this_00;
        shared_ptr<StaticPointLight>* this_01;
        MakeSharedPool<StaticPointLight, 64>* in_RSI;
        shared_ptr local_30;
        int local_1c;

        local_1c = field_72;
        field_72 = local_1c + 1;
        MakeSharedPool<StaticPointLight, 64>::MakeShared<>(&local_30, in_RSI);
        this_00 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)&local_30);
        this_00->SetDynamicID(local_1c);
        this_01 = (shared_ptr<StaticPointLight>*)
            eastl::vector_map<int, shared_ptr<StaticPointLight>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<StaticPointLight>>, eastl::allocator>>::
            operator[](
                (vector_map<int, shared_ptr<StaticPointLight>, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, shared_ptr<StaticPointLight>>, eastl::allocator>>*)this,
                &local_1c);
        shared_ptr<StaticPointLight>::operator=(this_01, &local_30);
        iVar1 = local_1c;
        local_30.~shared_ptr();
        return iVar1;
    }

    // 0x1004982d0, 144 bytes, placed by class name and debug map
    // DynamicPointLightManager::DestroyLight(int)
    void DynamicPointLightManager::DestroyLight(int param_1) {
        pair* ppVar2;
        StaticPointLight* this_00;
        AABB* pAVar3;
        AABB local_48;
        int local_24;

        local_24 = param_1;
        if (HasLight(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      34, (char*)0);
        }
        ppVar2 = (pair*)find(&local_24);
        this_00 =
            (StaticPointLight*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(ppVar2 + 8));
        pAVar3 = (AABB*)this_00->GetWorldAABB();
        new (&local_48) math::AABB(pAVar3);
        AddAffectedAABB(this, &local_48);
        erase(ppVar2);
    }

    // 0x1004983c0, 80 bytes, placed by class name and debug map
    // DynamicPointLightManager::GetLight(int) const
    long DynamicPointLightManager::GetLight(int param_1) {
        undefined4 in_EAX;
        long lVar2;
        undefined8 in_R8;
        undefined8 in_R9;
        int aiStackY_218[128];
        undefined8 uVar3;

        uVar3 = CONCAT44(param_1, in_EAX);
        if (HasLight(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      45, (char*)0, in_R8, in_R9, uVar3);
        }
        lVar2 = find(aiStackY_218 + 129);
        return lVar2 + 8;
    }

    // 0x100498410, 784 bytes, placed by class name and debug map
    // DynamicPointLightManager::SetLight(int, CoordGrid const&, float, math::Vector3T<float> const&, int, int, float, float, float, float)
    void DynamicPointLightManager::SetLight(int param_1, CoordGrid* param_2, float param_3, Vector3T* param_4,
                                            int param_5, int param_6, float param_7, float param_8, float param_9,
                                            float param_10) {
        int iVar3;
        int iVar4;
        long lVar5;
        Vector2T<int>* this_00;
        Vector3T* pVVar6;
        StaticPointLight* pSVar7;
        AABB* pAVar8;
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* p_Var9;
        PlayerGroupMember* pPVar10;
        DebugOverlay* this_01;
        SwipeState* this_02;
        shared_ptr<StaticPointLight>* this_03;
        ColourHSL local_b8;
        undefined1 local_a8[32];
        AABB local_88;
        int local_58;
        float local_3c;
        char local_31;

        local_58 = param_1;
        if (HasLight(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      51, (char*)0);
        }
        lVar5 = find(&local_58);
        this_03 = (shared_ptr<StaticPointLight>*)(lVar5 + 8);
        this_00 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(this_03);
        pVVar6 = (Vector3T*)this_00->y();
        local_31 = math::operator==(pVVar6, (Vector3T*)PTR_ZERO_100ee66e8);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pAVar8 = (AABB*)pSVar7->GetWorldAABB();
        new (local_a8) math::AABB(pAVar8);
        p_Var9 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)
                     shared_ptr<StaticPointLight>::operator->(this_03);
        std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
            p_Var9, param_2->field_0);
        iVar3 = param_2->GetLocalX();
        local_3c = (float)iVar3 * 128.0 + 64.0;
        iVar3 = param_2->GetLocalZ();
        new (&local_b8) math::ColourHSL(local_3c, param_3, (float)iVar3 * 128.0 + 64.0);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        local_88._0_8_ = math::operator+((Vector3T*)&local_b8, param_4);
        local_88.field_8 = param_3;
        pSVar7->SetPosition((Vector3T*)(local_a8 + 32));
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetUseTerrainHeight(false);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetRadiusGrid((uint)param_5, true);
        pPVar10 = (PlayerGroupMember*)shared_ptr<StaticPointLight>::operator->(this_03);
        pPVar10->SetStatus(param_6);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetFlickerType(1);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetIntensity(param_7);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetAttenuation(param_8);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetBacklightRatio(param_9);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetShadowsEnabled(0.0 < param_10);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetShadowStrength(param_10);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        pSVar7->SetLightsLevelsAbove(true);
        this_01 = (DebugOverlay*)shared_ptr<StaticPointLight>::operator->(this_03);
        this_01->SetShow(true);
        this_02 = (SwipeState*)shared_ptr<StaticPointLight>::operator->(this_03);
        iVar3 = param_2->GetMapSquareX();
        iVar4 = param_2->GetMapSquareZ();
        this_02->SetStartPosition(iVar3, iVar4);
        pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
        if (local_31 == '\0') {
            pVVar6 = (Vector3T*)pSVar7->y();
            if (math::operator==(pVVar6, (Vector3T*)PTR_ZERO_100ee66e8)) {
                new ((local_a8 + 32)) math::AABB(local_a8);
            } else {
                pSVar7 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_03);
                pAVar8 = (AABB*)pSVar7->GetWorldAABB();
                ((local_a8 + 32))->Union(pAVar8, local_a8);
            }
        } else {
            pAVar8 = (AABB*)pSVar7->GetWorldAABB();
            new ((local_a8 + 32)) math::AABB(pAVar8);
        }
        AddAffectedAABB((DynamicPointLightManager*)this, (AABB*)(local_a8 + 32));
    }

    // 0x1004987b0, 544 bytes, placed by class name and debug map
    // DynamicPointLightManager::SetLightPosition(int, int, math::Vector3T<float> const&)
    void DynamicPointLightManager::SetLightPosition(int param_1, int param_2, Vector3T* param_3) {
        bool bVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        Vector2T<int>* pVVar6;
        Vector3T* pVVar7;
        CoordMapSquare* this_00;
        StaticPointLight* pSVar8;
        AABB* pAVar9;
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* p_Var10;
        SwipeState* this_01;
        shared_ptr<StaticPointLight>* this_02;
        CoordGrid local_a8;
        ColourHSL local_98;
        undefined1 local_88[32];
        AABB local_68;
        float local_44;
        char local_31;

        local_68._32_4_ = param_1;
        if (HasLight(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasLight(lightID)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "DynamicPointLightManager.cpp",
                      87, (char*)0);
        }
        lVar5 = find((int*)&local_68.field_32);
        this_02 = (shared_ptr<StaticPointLight>*)(lVar5 + 8);
        pVVar6 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(this_02);
        pVVar7 = (Vector3T*)pVVar6->y();
        bVar2 = math::operator==(pVVar7, param_3);
        if (bVar2) {
            this_00 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(this_02);
            iVar3 = this_00->GetX();
            if (iVar3 == param_2) {
                return;
            }
        }
        pVVar6 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(this_02);
        pVVar7 = (Vector3T*)pVVar6->y();
        local_31 = math::operator==(pVVar7, (Vector3T*)PTR_ZERO_100ee66e8);
        pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_02);
        pAVar9 = (AABB*)pSVar8->GetWorldAABB();
        new (local_88) math::AABB(pAVar9);
        new (&local_a8) game::CoordGrid(param_2, param_3);
        iVar3 = local_a8.GetMapSquareX();
        local_44 = (float)(iVar3 << 13);
        iVar3 = local_a8.GetMapSquareZ();
        new (&local_98) math::ColourHSL(local_44, 0.0, (float)(iVar3 << 13));
        p_Var10 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)
                      shared_ptr<StaticPointLight>::operator->(this_02);
        std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
            p_Var10, param_2);
        pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_02);
        local_68._0_8_ = math::operator-(param_3, (Vector3T*)&local_98);
        local_68.field_8 = 0.0;
        pSVar8->SetPosition((Vector3T*)(local_88 + 32));
        this_01 = (SwipeState*)shared_ptr<StaticPointLight>::operator->(this_02);
        iVar3 = local_a8.GetMapSquareX();
        iVar4 = local_a8.GetMapSquareZ();
        this_01->SetStartPosition(iVar3, iVar4);
        pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_02);
        if (local_31 == '\0') {
            pVVar7 = (Vector3T*)pSVar8->y();
            bVar2 = math::operator==(pVVar7, (Vector3T*)PTR_ZERO_100ee66e8);
            if (bVar2) {
                new ((local_88 + 32)) math::AABB(local_88);
            } else {
                pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_02);
                pAVar9 = (AABB*)pSVar8->GetWorldAABB();
                ((local_88 + 32))->Union(pAVar9, local_88);
            }
        } else {
            pAVar9 = (AABB*)pSVar8->GetWorldAABB();
            new ((local_88 + 32)) math::AABB(pAVar9);
        }
        AddAffectedAABB((DynamicPointLightManager*)this, (AABB*)(local_88 + 32));
    }

    // 0x1004989e0, 64 bytes, placed by class name and debug map
    // DynamicPointLightManager::ClearLights()
    void DynamicPointLightManager::ClearLights() {
        int* piVar1;
        char cVar2;

        while (true) {
            cVar2 = empty();
            if (cVar2 != '\0')
                break;
            piVar1 = (int*)back();
            DestroyLight(this, *piVar1);
        }
        field_72 = 0;
    }

    // 0x100498a60, 368 bytes, placed by class name and debug map
    // DynamicPointLightManager::GetLightsInMapSquare(eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>&, int, int) const
    void DynamicPointLightManager::GetLightsInMapSquare(vector* param_1, int param_2, int param_3) {
        shared_ptr* this_00;
        long lVar2;
        long lVar3;
        StaticPointLight* this_02;
        AABB* pAVar4;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        AABB local_88;
        ColourHSL local_60;
        ColourHSL local_50;
        long local_40;

        new (&local_60) math::ColourHSL((float)param_2 * 8192.0, -3.4028235e+38, (float)param_3 * 8192.0);
        new (&local_50) math::ColourHSL((float)(param_2 + 1) * 8192.0, 3.4028235e+38, (float)(param_3 + 1) * 8192.0);
        new (&local_88) math::AABB((Vector3T*)&local_60, (Vector3T*)&local_50);
        lVar2 = HeapBeginPtr();
        lVar3 = end();
        if (lVar2 != lVar3) {
            local_40 = lVar3;
            do {
                this_00 = (shared_ptr*)(lVar2 + 8);
                this_02 =
                    (StaticPointLight*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)this_00);
                pAVar4 = (AABB*)this_02->GetWorldAABB();
                if (local_88.TestIntersection(pAVar4) != '\0') {
                    psVar5 = (shared_ptr*)param_1->HeapBeginPtr();
                    psVar6 = (shared_ptr*)param_1->end();
                    psVar5 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar5, psVar6, this_00);
                    psVar6 = (shared_ptr*)param_1->end();
                    if (psVar5 != psVar6) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("eastl::find(pointLightListOut.begin(), pointLightListOut.end(), light.second) == "
                                  "pointLightListOut.end()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/DynamicPointLightManager.cpp",
                                  137, (char*)0);
                    }
                    param_1->push_back(this_00);
                    lVar3 = local_40;
                }
                lVar2 = lVar2 + 24;
            } while (lVar2 != lVar3);
        }
    }

} // namespace jag::game
