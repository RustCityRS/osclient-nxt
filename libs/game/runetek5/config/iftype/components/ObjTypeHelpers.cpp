// libs/game/runetek5/config/iftype/components/ObjTypeHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ObjTypeHelpers.h"

namespace jag::game {
    // 0x100f3c9f8, 16 bytes, __data; set at startup by ___cxx_global_var_init.16
    math::ColourHSL ObjSpriteBuilder::m_ambientColour = ColourHSL(1.0, 1.0, 1.0);

    // 0x100f3ca10, 16 bytes, __data; set at startup by ___cxx_global_var_init.17
    math::ColourHSL ObjSpriteBuilder::m_sunlightColour = ColourHSL(1.25, 1.25, 1.25);

    // 0x100f3ca28, 16 bytes, __data
    ObjSpriteBuilder::m_lightDirection = {0, 0, 0, 0};

    // 0x100f3ca40, 16 bytes, __data; set at startup by ___cxx_global_var_init.19
    math::ColourHSL ObjSpriteBuilder::m_cameraOffset = ColourHSL(-6.0, 0.0, 0.0);

    // 0x1005382e0, 64 bytes, placed by debug map only (low confidence)
    // ObjSpriteBuilder::GetObjSpriteCacheKey(int, bool, bool, unsigned int, unsigned int)
    ulong ObjSpriteBuilder::GetObjSpriteCacheKey(int param_1, bool param_2, bool param_3, uint param_4, uint param_5) {
        undefined7 in_register_00000011;
        undefined7 in_register_00000031;

        return (ulong)param_5 << 22 | (ulong)param_4 << 18 |
               (CONCAT71(in_register_00000011, param_3) & 4294967295) << 21 |
               (CONCAT71(in_register_00000031, param_2) & 4294967295) << 20 | (long)param_1 |
               (ulong)(param_1 != -1) << 17;
    }

    // 0x100538320, 4416 bytes, placed by debug map only (low confidence)
    // ObjSpriteBuilder::BuildObjectSprite(ui::SpriteData&, int, unsigned long long, graphics::RT7Core&, AssetBuilder&, ConfigProvider*, PlayerModel const*, int, int, bool&)
    undefined* ObjSpriteBuilder::BuildObjectSprite(SpriteData* param_1, int param_2, ulonglong param_3,
                                                   RT7Core* param_4, AssetBuilder* param_5, ConfigProvider* param_6,
                                                   PlayerModel* param_7, int param_8, int param_9, bool* param_10) {
        PlayerModel* pPVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        byte bVar5;
        char cVar6;
        uint uVar7;
        uint uVar8;
        int iVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        TextureManager* this_00;
        GUIManager* pGVar12;
        shared_ptr* psVar13;
        ObjType* pOVar14;
        long lVar15;
        undefined* puVar16;
        vector* pvVar17;
        Model* pMVar18;
        undefined* puVar19;
        int* piVar20;
        GameToken* this_01;
        ImPool<ImGuiTabBar>* this_02;
        RenderTargets* pRVar21;
        RenderTargets* pRVar22;
        Texture* pTVar23;
        SunlightDirectLighting* pSVar24;
        undefined1* puVar25;
        shared_ptr* psVar26;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        Layout* this_04;
        OutputMergerState* this_05;
        PostProcessManager* this_06;
        RenderToTextureHelper* this_07;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_08;
        undefined8* puVar27;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_09;
        shared_ptr* psVar28;
        SpriteAtlasReference* this_10;
        long lVar29;
        MapArea* this_11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_12;
        undefined8 uVar30;
        undefined** ppuVar31;
        PlayerModel* pPVar32;
        RT7Core* pRVar33;
        RT7Core* pRVar34;
        SpriteData* pSVar35;
        RenderContext* pRVar36;
        ObjSpriteBuilder* pOVar37;
        DrawCallState* pDVar38;
        AssetBuilder* pAVar39;
        RenderContext* this_13;
        bool bVar40;
        undefined1 auVar41[16];
        ulong in_stack_ffffffffffffd6f8;
        undefined8 in_stack_ffffffffffffd718;
        undefined4 uVar42;
        SunlightEffectSaveRestore local_28d0;
        GUIProjectionSaveRestore local_2808;
        ImVec4 local_27d8[24];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_27c0[16];
        undefined1 local_27b0[48];
        shared_ptr local_2780;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_2770[16];
        RT7Core* local_2760;
        int local_2758;
        int local_2754;
        int local_2750;
        int local_274c;
        undefined4 local_2748;
        undefined4 local_2744;
        ObjType* local_2740;
        longlong local_2738;
        RenderContext* local_2730;
        long local_2728;
        ObjSpriteBuilder* local_2720;
        uint local_2714;
        ObjType* local_2710;
        uint local_2704;
        SpriteData* local_2700;
        AssetBuilder* local_26f8;
        PlayerModel* local_26f0;
        undefined4 local_26e4;
        RT7Core* local_26e0;
        shared_ptr* local_26d8;
        ObjSpriteBuilder local_26d0[123];
        fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>
            local_1380[4936];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        *param_10 = false;
        local_2720 = this;
        local_2710 = (ObjType*)param_3;
        local_26f8 = param_5;
        local_2730 = (RenderContext*)GetRenderContext();
        this_00 = (TextureManager*)param_4->GetTextureManager();
        local_2738 = this_00->GetSpriteAtlasManager();
        pGVar12 = (GUIManager*)param_4->GetGUIManager();
        new (&local_2808) graphics::GUIProjectionSaveRestore(pGVar12);
        cVar2 = param_1->GetUsePlayerModelRecolours();
        if (cVar2 == '\0') {
            param_7 = (PlayerModel*)0;
        }
        local_26f0 = param_7;
        uVar7 = param_1->GetSpriteOutline();
        local_2700 = param_1;
        uVar8 = param_1->GetZ();
        psVar13 = ConfigProvider::GetConfig<ObjType>(param_6, param_2, (DataStatus**)0);
        pOVar14 = (ObjType*)psVar13->end();
        if (pOVar14 == (ObjType*)0) {
            ppuVar31 = &DataStatus::MISSING;
        } else {
            local_2740 = (ObjType*)pOVar14->GetStackSizeAlt((longlong)local_2710);
            local_2714 = uVar8;
            local_26e0 = param_4;
            iVar9 = local_2740->GetStatus();
            pSVar35 = local_2700;
            bVar3 = (bool)local_2700->GetObjSpriteIsHighRes();
            bVar40 = local_26f0 != (PlayerModel*)0;
            uVar8 = pSVar35->GetZ();
            local_2704 = uVar7 & 255;
            lVar15 = GetObjSpriteCacheKey(iVar9, bVar40, bVar3, local_2704, uVar8);
            local_2728 = lVar15;
            if (lVar15 == 0) {
                pRVar34 = local_26e0;
                pOVar37 = local_2720;
                pOVar14 = local_2740;
            } else {
                if (lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("key != -1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/components/ObjTypeHelpers.cpp",
                              235, (char*)0);
                }
                cVar2 = local_2700->GetObjSpriteIsHighRes();
                if (cVar2 == '\0') {
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_27c0, (_func_decltype_nullptr*)0);
                    graphics::SpriteAtlasManager::GetSpriteReference(local_26d0, local_2738, lVar15, local_27c0, 2);
                    pRVar34 = local_26e0;
                    pOVar37 = local_2720;
                    pOVar14 = local_2740;
                    local_27c0->~shared_ptr();
                } else {
                    new (local_26d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    pOVar14 = local_2740;
                    pOVar37 = local_2720;
                    pRVar34 = local_26e0;
                }
                bVar3 = local_26d0->operator_cast_to_bool();
                if ((bVar3) || (cVar2 = local_2700->GetObjSpriteIsHighRes(), cVar2 != '\0')) {
                    lVar15 = local_2700->size();
                    pSVar35 = local_2700;
                    if (lVar15 != local_2728) {
                        *param_10 = true;
                    }
                    local_2700->SetSpriteAtlasReference(local_2728, local_26d0);
                    cVar2 = pSVar35->GetObjSpriteIsHighRes();
                    local_26d8 = (shared_ptr*)DataStatus::READY;
                } else {
                    cVar2 = '\x01';
                }
                local_26d0->~shared_ptr();
                if (cVar2 == '\0')
                    goto LAB_10053861e;
            }
            local_2760 = (RT7Core*)pRVar34->GetEffectManager();
            pRVar33 = pRVar34;
            puVar16 = (undefined*)pOVar14->GetModel(pRVar34, local_26f8, pOVar37, local_26f0);
            ppuVar31 = &DataStatus::READY;
            if (puVar16 != DataStatus::READY) {
                local_26d8 = (shared_ptr*)puVar16;
                goto LAB_10053861e;
            }
            cVar2 = pOVar37->IsTaskDone();
            if (cVar2 == '\0') {
                bVar4 = 0;
            } else {
                pvVar17 = pOVar37->SSOBeginPtr(pRVar33);
                pMVar18 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar17);
                bVar4 = pMVar18->IsReadyToRender();
            }
            iVar9 = pOVar14->GetCertTemplate();
            if (iVar9 == -1) {
                iVar9 = pOVar14->GetShardTemplate();
                if (iVar9 != -1) {
                    iVar9 = pOVar14->GetShardLink();
                    goto LAB_1005386b3;
                }
                iVar9 = pOVar14->GetLentTemplate();
                if (iVar9 == -1) {
                    iVar9 = pOVar14->GetBoughtTemplate();
                    local_26e4 = (undefined4)CONCAT71((int7)((ulong)ppuVar31 >> 8), 1);
                    if (iVar9 == -1) {
                        iVar9 = -1;
                    } else {
                        iVar9 = pOVar14->GetBoughtLink();
                    }
                } else {
                    iVar9 = pOVar14->GetLentLink();
                    local_26e4 = (undefined4)CONCAT71((int7)((ulong)ppuVar31 >> 8), 1);
                }
            } else {
                iVar9 = pOVar14->GetCertLink();
            LAB_1005386b3:
                local_26e4 = 0;
            }
            if (iVar9 == -1) {
                local_2710 = (ObjType*)0;
            } else {
                psVar13 = ConfigProvider::GetConfig<ObjType>(param_6, iVar9, (DataStatus**)0);
                pOVar14 = (ObjType*)psVar13->end();
                local_2710 = (ObjType*)pOVar14->GetStackSizeAlt((longlong)local_2710);
                puVar25 = &pOVar37->field_32;
                pRVar33 = pRVar34;
                puVar19 = (undefined*)local_2710->GetModel(pRVar34, local_26f8, puVar25, local_26f0);
                puVar16 = DataStatus::READY;
                psVar13 = (shared_ptr*)puVar19;
                if (puVar19 == DataStatus::READY) {
                    cVar2 = puVar25->IsTaskDone();
                    if (cVar2 == '\0') {
                        bVar5 = 0;
                    } else {
                        pvVar17 = puVar25->SSOBeginPtr(pRVar33);
                        pMVar18 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar17);
                        bVar5 = pMVar18->IsReadyToRender();
                    }
                    bVar4 = bVar4 & bVar5;
                    psVar13 = local_26d8;
                }
                local_26d8 = psVar13;
                if (puVar19 != puVar16)
                    goto LAB_10053861e;
            }
            if (bVar4 != 0) {
                pGVar12 = (GUIManager*)pRVar34->GetGUIManager();
                pGVar12->Render(0);
                pSVar35 = local_2700;
                cVar2 = local_2700->GetObjSpriteIsHighRes();
                uVar7 = local_2714;
                iVar9 = 0;
                pAVar39 = (AssetBuilder*)32;
                if (cVar2 != '\0') {
                    pAVar39 = (AssetBuilder*)(ulong)(uint)param_9;
                }
                pPVar32 = (PlayerModel*)36;
                if (cVar2 != '\0') {
                    pPVar32 = (PlayerModel*)(ulong)(uint)param_8;
                    local_2704 = 0;
                }
                bVar4 = pSVar35->GetObjSpriteIsHighRes();
                local_2714 = uVar7 | 4278190081;
                uVar7 = (uint)bVar4 * 2;
                bVar3 = true;
                local_26f8 = pAVar39;
                local_26f0 = pPVar32;
                do {
                    cVar2 = CreateObjectSpriteRT((ObjSpriteBuilder*)pSVar35, local_26e0, uVar7 + iVar9,
                                                 (int)pPVar32 + 2, (int)pAVar39 + 2);
                    pRVar34 = local_26e0;
                    pPVar1 = local_26f0;
                    uVar42 = (undefined4)((ulong)in_stack_ffffffffffffd718 >> 32);
                    if (cVar2 == '\0') {
                        local_26d8 = (shared_ptr*)DataStatus::NOTLOADED;
                        break;
                    }
                    bVar3 = iVar9 == 0;
                    iVar9 = 1;
                } while (bVar3);
                if (bVar3)
                    goto LAB_10053861e;
                psVar13 = (shared_ptr*)local_26e0->GetObjectSpriteRT((ulong)uVar7);
                local_26d8 = (shared_ptr*)pRVar34->GetObjectSpriteRT((ulong)(uVar7 | 1));
                piVar20 = (int*)pRVar34->GetPixelBuffer();
                local_2758 = *piVar20;
                local_2754 = piVar20[1];
                local_2750 = piVar20[2];
                local_274c = piVar20[3];
                pRVar34->SetClippingRectangle(1, 1, (int)pPVar1, (int)local_26f8, true);
                this_01 = (GameToken*)pRVar34->GetGUIManager();
                uVar10 = this_01->GetStatus();
                this_02 = (ImPool<ImGuiTabBar>*)pRVar34->GetGUIManager();
                local_2748 = ImPool<ImGuiTabBar>::GetAliveCount(this_02);
                pGVar12 = (GUIManager*)pRVar34->GetGUIManager();
                pGVar12->SetProjection(2, 36, 32);
                this_13 = local_2730;
                lVar15 = pGVar12->Instance();
                pRVar36 = this_13;
                this_13->SetBlendState((BlendState*)(lVar15 + 1524));
                lVar15 = pRVar36->Instance();
                this_13->SetDepthStencilState((DepthStencilState*)(lVar15 + 720));
                ImVec4::ImVec4(local_27d8, 0.0, 0.0, 0.0, 0.0);
                uVar7 = local_2714;
                pRVar21 = (RenderTargets*)psVar13->end();
                this_13->ClearRenderTargets(pRVar21, local_27d8, 1);
                pRVar21 = (RenderTargets*)psVar13->end();
                pRVar22 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)psVar13);
                pTVar23 = (Texture*)pRVar22->GetDepthStencilTargetTexture();
                uVar8 = render::GetDepthTextureClearFlags(pTVar23);
                this_13->ClearDepthStencilTarget(pRVar21, 1.0, 0, uVar8);
                pSVar24 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(
                    (EffectManager*)local_2760, 29);
                new (&local_28d0) graphics::SunlightEffectSaveRestore(pSVar24);
                graphics::SunlightDirectLighting::SetAmbientColour((Vector3T*)pSVar24,
                                                                   (longlong)PTR_m_ambientColour_100ee6608, 0);
                graphics::SunlightDirectLighting::SetColour((Vector3T*)pSVar24,
                                                            (longlong)PTR_m_sunlightColour_100ee6618, 0);
                graphics::SunlightDirectLighting::SetDirection((Vector3T*)pSVar24,
                                                               (longlong)PTR_m_lightDirection_100ee6610, 0);
                eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                 eastl::allocator>::fixed_map(local_1380);
                local_26d0[0]._0_1_ = 51;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 29;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 1;
                local_26d0[0]._0_1_ = 7;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 1;
                local_26d0[0]._0_1_ = 48;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 50;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 57;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 110;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 30;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 35;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 21;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 107;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 108;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 24;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 63;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 27;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 44;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 42;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 1;
                local_26d0[0]._0_1_ = 94;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 85;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 49;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 116;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 117;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                local_26d0[0]._0_1_ = 26;
                local_2744 = uVar10;
                puVar25 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1380,
                        (EffectType*)local_26d0);
                *puVar25 = 0;
                pOVar37 = local_26d0;
                pRVar34 = local_2760;
                new (pOVar37) graphics::EffectStateSaveRestore(local_2760, local_1380);
                uVar10 = (undefined4)(in_stack_ffffffffffffd6f8 >> 32);
                cVar2 = '\x01';
                if ((char)local_26e4 == '\x01' && local_2710 != (ObjType*)0) {
                    pOVar37 = (ObjSpriteBuilder*)&local_2720->field_32;
                    psVar26 = (shared_ptr*)pOVar37->SSOBeginPtr(pRVar34);
                    in_stack_ffffffffffffd6f8 = CONCAT44(uVar10, 1);
                    pRVar34 = local_26e0;
                    psVar28 = psVar13;
                    cVar2 = RenderObjectSpriteModel(pOVar37, local_26e0, local_2710, psVar26, (int)local_26f0,
                                                    (int)local_26f8, 1, local_2704, uVar7, false, psVar13, false);
                    uVar42 = (undefined4)((ulong)psVar28 >> 32);
                }
                uVar10 = (undefined4)(in_stack_ffffffffffffd6f8 >> 32);
                cVar6 = '\0';
                if (cVar2 != '\0') {
                    pOVar37 = local_2720;
                    psVar26 = (shared_ptr*)local_2720->SSOBeginPtr(pRVar34);
                    in_stack_ffffffffffffd6f8 = CONCAT44(uVar10, 1);
                    psVar28 = psVar13;
                    cVar6 = RenderObjectSpriteModel(pOVar37, local_26e0, local_2740, psVar26, (int)local_26f0,
                                                    (int)local_26f8, 1, local_2704, uVar7, false, psVar13, true);
                    uVar42 = (undefined4)((ulong)psVar28 >> 32);
                }
                if ((char)local_26e4 == '\0' && (cVar6 != '\0' && local_2710 != (ObjType*)0)) {
                    lVar15 = pOVar37->Instance();
                    pRVar36 = this_13;
                    this_13->SetDepthStencilState((DepthStencilState*)(lVar15 + 720));
                    lVar15 = pRVar36->Instance();
                    this_13->SetBlendState((BlendState*)(lVar15 + 1524));
                    pRVar21 = (RenderTargets*)local_26d8->end();
                    this_13->ClearRenderTargets(pRVar21, local_27d8, 1);
                    psVar28 = local_26d8;
                    pRVar21 = (RenderTargets*)local_26d8->end();
                    pRVar22 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)psVar28);
                    pTVar23 = (Texture*)pRVar22->GetDepthStencilTargetTexture();
                    uVar7 = render::GetDepthTextureClearFlags(pTVar23);
                    this_13->ClearDepthStencilTarget(pRVar21, 1.0, 0, uVar7);
                    pOVar37 = (ObjSpriteBuilder*)&local_2720->field_32;
                    psVar26 = (shared_ptr*)pOVar37->SSOBeginPtr(pRVar21);
                    psVar28 = local_26d8;
                    cVar6 = RenderObjectSpriteModel(pOVar37, local_26e0, local_2710, psVar26, (int)local_26f0,
                                                    (int)local_26f8, 1, 1, 0, true, local_26d8, true);
                    uVar42 = (undefined4)((ulong)psVar28 >> 32);
                    new (local_27b0) render::DrawCallState();
                    pDVar38 = (DrawCallState*)local_27b0;
                    this_03 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar38->GetRenderPipelineState();
                    auVar41 = pDVar38->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(this_03,
                                                                       (EntityHighlight**)(auVar41._0_8_ + 1676),
                                                                       auVar41._8_8_);
                    pDVar38 = (DrawCallState*)local_27b0;
                    this_04 = (Layout*)pDVar38->GetRenderPipelineState();
                    lVar15 = pDVar38->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(this_04, lVar15 + 1080);
                    this_05 = (OutputMergerState*)local_27b0->GetOutputMergerState();
                    pRVar21 = (RenderTargets*)local_26d8->end();
                    this_05->SetRenderTargets(pRVar21);
                    this_06 = (PostProcessManager*)local_26e0->GetVertexDataBuffer();
                    this_07 = (RenderToTextureHelper*)this_06->GetRenderToTexture();
                    pRVar21 = (RenderTargets*)psVar13->end();
                    pRVar22 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)local_26d8);
                    this_08 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar22->GetColourTargetTextures();
                    puVar27 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_08,
                                                                                                               0);
                    in_stack_ffffffffffffd6f8 = 0;
                    this_07->RenderTextureToQuad(local_2730, local_27b0, pRVar21, (Texture*)*puVar27, 0, 0, -1);
                    local_27b0->~DrawCallState();
                    this_13 = local_2730;
                }
                local_26e0->SetClippingRectangle(local_2758, local_2754, local_2750 - local_2758,
                                                 local_274c - local_2754, true);
                pGVar12 = (GUIManager*)local_26e0->GetGUIManager();
                pGVar12->SetProjection(2, local_2744, local_2748);
                if (cVar6 == '\0') {
                    ppuVar31 = &DataStatus::NOTLOADED;
                LAB_100539091:
                    local_26d8 = (shared_ptr*)*ppuVar31;
                } else {
                    cVar2 = local_2700->GetObjSpriteIsHighRes();
                    if (cVar2 != '\0') {
                        ppuVar31 = &DataStatus::READY;
                        goto LAB_100539091;
                    }
                    local_27b0->AddObjSpriteReference(local_2738, (uint)local_2728, (uint)local_26f0);
                    this_09 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_27b0);
                    psVar28 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_09);
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar28);
                    lVar15 = local_2728;
                    if (!bVar3) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("atlas",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/components/ObjTypeHelpers.cpp",
                                  441, (char*)0);
                    }
                    this_10 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                        (shared_ptr<graphics::SpriteAtlasReference>*)local_27b0);
                    lVar29 = this_10->GetRenderMapping();
                    pRVar21 = (RenderTargets*)psVar13->end();
                    this_13->SetRenderTargets(pRVar21);
                    this_11 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar28);
                    this_12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_11->GetOrigin();
                    uVar30 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_12);
                    uVar10 = ((lVar29 + 72))->GetX();
                    uVar11 = ((lVar29 + 72))->GetZ();
                    this_13->CopyColourTargetData(uVar30, 0, 0, uVar10, uVar11,
                                                  in_stack_ffffffffffffd6f8 & 18446744069414584320, 0, (int)local_26f0,
                                                  (int)local_26f8, CONCAT44(uVar42, 4294967295));
                    lVar29 = local_2700->size();
                    *param_10 = (bool)(*param_10 | lVar29 != lVar15);
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_2770, (_func_decltype_nullptr*)0);
                    graphics::SpriteAtlasManager::GetSpriteReference(local_27b0 + 48, local_2738, lVar15, local_2770,
                                                                     2);
                    local_2700->SetSpriteAtlasReference(lVar15, (shared_ptr*)(local_27b0 + 48));
                    ((local_27b0 + 48))->~shared_ptr();
                    local_2770->~shared_ptr();
                    pGVar12 = (GUIManager*)local_26e0->GetGUIManager();
                    pGVar12->SetProjection(1, 4294967295, 4294967295);
                    ClearCache(local_2720);
                    local_26d8 = (shared_ptr*)DataStatus::READY;
                    local_27b0->~shared_ptr();
                }
                local_26d0->~EffectStateSaveRestore();
                eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                 eastl::allocator>::~fixed_map(local_1380);
                local_28d0.~SunlightEffectSaveRestore();
                goto LAB_10053861e;
            }
            ppuVar31 = &DataStatus::NOTLOADED;
        }
        local_26d8 = (shared_ptr*)*ppuVar31;
    LAB_10053861e:
        local_2808.~GUIProjectionSaveRestore();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (undefined*)local_26d8;
    }

    // 0x1005394b0, 624 bytes, placed by neighbouring functions
    // ObjSpriteBuilder::CreateObjectSpriteRT(graphics::RT7Core&, int, unsigned int, unsigned int)
    void ObjSpriteBuilder::CreateObjectSpriteRT(RT7Core* param_1, int param_2, uint param_3, uint param_4) {
        uint uVar1;
        bool bVar2;
        shared_ptr* this_00;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar4;
        undefined8* puVar5;
        uint* puVar6;
        long lVar7;
        RenderTargetsManager* this_01;
        undefined8 uVar8;
        undefined8 uVar9;
        array<render::Texture::Desc, 2ul> local_120[128];
        undefined1 local_a0[88];
        shared_ptr local_48;
        uint local_38;
        uint local_34;

        local_38 = param_3;
        local_34 = param_4;
        local_38 = math::RoundUpToPowerOf2(param_3);
        local_34 = math::RoundUpToPowerOf2(local_34);
        this_00 = (shared_ptr*)param_1->GetObjectSpriteRT((long)param_2);
        bVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar2) {
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar4 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar3->GetColourTargetTextures();
            puVar5 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar4, 0);
            puVar6 = (uint*)(*puVar5)->second();
            if (local_38 <= *puVar6) {
                pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                pvVar4 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar3->GetColourTargetTextures();
                puVar5 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar4, 0);
                lVar7 = (*puVar5)->second();
                if (local_34 <= *(uint*)(lVar7 + 4))
                    goto LAB_1005395d1;
            }
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar4 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar3->GetColourTargetTextures();
            puVar5 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar4, 0);
            puVar6 = (uint*)(*puVar5)->second();
            puVar6 = std::max<unsigned int>(puVar6, &local_38);
            local_38 = *puVar6;
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar4 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar3->GetColourTargetTextures();
            puVar5 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar4, 0);
            lVar7 = (*puVar5)->second();
            puVar6 = std::max<unsigned int>((uint*)(lVar7 + 4), &local_34);
            local_34 = *puVar6;
            this_01 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
            this_01->Unregister(this_00);
        }
    LAB_1005395d1:
        bVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar2) {
            std::array<render::Texture::Desc, 2ul>::array(local_120);
            uVar1 = local_38;
            puVar6 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_120);
            *puVar6 = uVar1;
            puVar6[1] = local_34;
            puVar6[6] = 0;
            *(undefined1*)(puVar6 + 8) = 0;
            puVar6[3] = 7;
            new (local_a0) render::Texture::Desc();
            local_a0._0_4_ = local_38;
            local_a0._4_4_ = local_34;
            local_a0._12_4_ = render::GetFormatFromDepthStencilBits(16, 0, false);
            local_a0._24_4_ = 0;
            local_a0[32] = 0;
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            eastl::basic_string<char, BucketAllocatorEASTL>::sprintf(local_a0 + 64, "ObjectSprite%i",
                                                                     (ulong)(uint)param_2);
            uVar8 = param_1->GetRenderTargetsManager();
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_48.Register(uVar8, uVar9, 3553, local_120, 1, local_a0, 1, 1);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00, &local_48);
            local_48.~shared_ptr();
            ((local_a0 + 64))->~basic_string();
        }
        shared_ptr::operator_cast_to_bool(this_00);
    }

    // 0x100539730, 2336 bytes, placed by __FILE__ string
    // ObjSpriteBuilder::RenderObjectSpriteModel(graphics::RT7Core&, ObjType const*, shared_ptr<graphics::Model> const&, int, int, int, unsigned int, unsigned int, bool, shared_ptr<render::RenderTargets>&, bool)
    undefined4 ObjSpriteBuilder::RenderObjectSpriteModel(RT7Core* param_1, ObjType* param_2, shared_ptr* param_3,
                                                         int param_4, int param_5, int param_6, uint param_7,
                                                         uint param_8, bool param_9, shared_ptr* param_10,
                                                         bool param_11) {
        int iVar1;
        Texture* this_00;
        undefined* puVar2;
        RT7Core* this_01;
        shared_ptr* this_02;
        char cVar3;
        bool bVar4;
        undefined4 uVar5;
        long* plVar6;
        NXTPixToolkit* pNVar7;
        Vector3T<int>* pVVar8;
        int* piVar9;
        Vector3T<float>* pVVar10;
        float* pfVar11;
        Vector3T<short>* pVVar12;
        short* psVar13;
        Vector4T<float>* this_03;
        Model* pMVar14;
        ulonglong uVar15;
        AABB* pAVar16;
        vector* this_04;
        RenderPass* pRVar17;
        EffectManager* pEVar18;
        RT7Core* pRVar19;
        DrawableQueue* pDVar20;
        RenderContext* pRVar21;
        PostProcessManager* this_05;
        Config* pCVar22;
        RenderTargets* pRVar23;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_06;
        undefined8* puVar24;
        long lVar25;
        ViewTransforms* pVVar26;
        Matrix44T* this_07;
        type* ptVar27;
        float fVar28;
        float fVar29;
        Matrix44T local_1f08;
        undefined1 local_1ec8[32];
        Matrix44T local_1ea8;
        ColourHSL local_1e68;
        allocator local_1e58[12];
        float local_1e4c;
        int local_1e48;
        int local_1e44;
        RT7Core* local_1e40;
        shared_ptr* local_1e38;
        float local_1e30;
        float local_1e2c;
        undefined1 local_1e28[136];
        Transitionable<float> local_1da0[84];
        undefined1 local_1d4c;
        undefined1 local_1d48;
        undefined1 local_1c54;
        undefined1 local_1c20;
        undefined1 local_1c18;
        undefined1 local_1c10;
        uint local_1c0c;
        undefined4 local_1c08;
        uint local_1c04;
        undefined2 local_1c00;
        undefined1 local_1bb0[24];
        Renderer local_1b98;
        undefined1 local_2d8[672];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1e48 = param_5;
        local_1e44 = param_4;
        local_1e40 = param_1;
        local_1e38 = param_3;
        plVar6 = (long*)Instance();
        cVar3 = (**(code**)(*plVar6 + 224))(plVar6);
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/components/ObjTypeHelpers.cpp",
                      530, (char*)0);
        }
        bVar4 = operator!=(local_1e38, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("model != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/components/ObjTypeHelpers.cpp",
                      532, (char*)0);
        }
        graphics::Model::DeferredRenderKeepAlive(local_1e38);
        local_1e2c = (float)param_2->GetZoom2D();
        if (param_9) {
            fVar28 = (float)(int)local_1e2c * 1.5;
        } else {
            if (param_7 < 2)
                goto LAB_100539813;
            fVar28 = (float)(int)local_1e2c * 1.08;
        }
        local_1e2c = (float)(int)fVar28;
    LAB_100539813:
        pNVar7 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_1e38);
        pNVar7 = (NXTPixToolkit*)pNVar7->GetScreen();
        pVVar8 = (Vector3T<int>*)param_2->GetOffset2D();
        piVar9 = (int*)math::Vector3T<int>::operator[](pVVar8, 1);
        local_1e30 = (float)*piVar9;
        pVVar8 = (Vector3T<int>*)param_2->GetOffset2D();
        piVar9 = (int*)math::Vector3T<int>::operator[](pVVar8, 0);
        local_1e4c = (float)*piVar9;
        pVVar10 = (Vector3T<float>*)pNVar7->GetScreen();
        pfVar11 = (float*)math::Vector3T<float>::operator[](pVVar10, 1);
        fVar29 = *pfVar11 * -0.5 - local_1e30;
        new (&local_1e68) math::ColourHSL(local_1e4c, fVar29, local_1e30);
        pVVar12 = (Vector3T<short>*)param_2->GetLightProbe();
        psVar13 = (short*)math::Vector3T<short>::operator[](pVVar12, 2);
        fVar28 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar13);
        math::Matrix33RotationZ<float>((math*)&local_1b98, fVar28);
        puVar2 = PTR_ZERO_100ee66e8;
        this_07 = &local_1f08;
        new (this_07) math::Matrix44T<float>((Matrix33T*)&local_1b98, PTR_ZERO_100ee66e8);
        pVVar12 = (Vector3T<short>*)param_2->GetLightProbe();
        psVar13 = (short*)math::Vector3T<short>::operator[](pVVar12, 1);
        fVar28 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar13);
        math::Matrix33RotationY<float>((math*)local_2d8, fVar28);
        new (&local_1b98) math::Matrix44T<float>(local_2d8, puVar2);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_07, (Matrix44T*)&local_1b98);
        local_2d8._0_8_ = math::operator+((Vector3T*)&local_1e68, (Vector3T*)PTR_m_cameraOffset_100ee6600);
        local_2d8._8_4_ = fVar29;
        new (&local_1b98) math::Matrix44T<float>(PTR_IDENTITY_100ee6718, local_2d8);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_07, (Matrix44T*)&local_1b98);
        pVVar12 = (Vector3T<short>*)param_2->GetLightProbe();
        psVar13 = (short*)math::Vector3T<short>::operator[](pVVar12, 0);
        fVar28 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar13);
        math::Matrix33RotationX<float>((math*)local_2d8, -fVar28);
        new (&local_1b98) math::Matrix44T<float>(local_2d8, puVar2);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_07, (Matrix44T*)&local_1b98);
        local_1e2c = (float)(int)local_1e2c;
        this_03 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)this_07, 3);
        pfVar11 = (float*)math::Vector4T<float>::operator[](this_03, 2);
        this_02 = local_1e38;
        *pfVar11 = local_1e2c + *pfVar11;
        pMVar14 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_1e38);
        pMVar14->SetWorldTransform(PTR_IDENTITY_100ee6730);
        pMVar14 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
        uVar15 = FrameTime::GetCurrentTimeMS();
        this_01 = local_1e40;
        pMVar14->Update(local_1e40, 0, uVar15);
        pNVar7 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
        pAVar16 = (AABB*)pNVar7->GetScreen();
        new (local_1ec8) math::AABB(pAVar16);
        local_1ec8->Transform(this_07);
        this_04 = local_1ec8->SSOBeginPtr(this_07);
        pfVar11 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_04, 2);
        local_1e2c = (float)eastl::max_alt(*pfVar11 + -10.0, 0.1);
        pVVar10 = (Vector3T<float>*)local_1ec8->GetScreen();
        pfVar11 = (float*)math::Vector3T<float>::operator[](pVVar10, 2);
        local_1e30 = *pfVar11 + 10.0;
        new (&local_1ea8) math::Matrix44T<float>();
        math::Matrix44JagexPerspective<float>(&local_1ea8, 16.0, 16.0, 512.0, 512.0, local_1e2c, local_1e30, 36.0,
                                              32.0);
        new (local_2d8) graphics::SceneViewData();
        new (&local_1b98) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        new (local_1e28) render::Viewport(param_6, param_6, local_1e44, local_1e48, 0.0, 1.0);
        local_1b98.push_back(local_1e28);
        local_2d8->SetRenderTargetViewports((fixed_vector*)&local_1b98);
        local_1b98.~fixed_vector();
        new (&local_1b98) ViewTransforms(&local_1f08, &local_1ea8);
        local_2d8->SetTransforms((ViewTransforms*)&local_1b98);
        new (local_1e28) ImVec4(0.0, 0.0, 0.0, 1.0);
        new (&local_1b98) render::RenderTargetData(0, local_1e28, 1, 1.0, 0);
        local_1b98._48_4_ = 0;
        local_1b98.field_0 = (undefined**)param_10->end();
        local_2d8->SetRenderTargets((RenderTargetData*)&local_1b98);
        pRVar17 = (RenderPass*)this_01->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar17);
        new (local_1bb0) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 16, 2);
        eastl::allocator::allocator(local_1e58, "EASTL fixed_vector");
        eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_1e28, local_1bb0, 1, local_1e58);
        new (&local_1b98) graphics::Renderer(this_01, local_1e28, 16, 0);
        local_1e28->~fixed_vector();
        pEVar18 = (EffectManager*)this_01->GetEffectManager();
        pRVar19 = (RT7Core*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_1e38);
        pDVar20 = (DrawableQueue*)local_1b98.GetOrigin();
        pRVar19->GatherDrawableElements(pDVar20, this_01, local_2d8, pEVar18);
        pRVar21 = (RenderContext*)pRVar19->GetRenderContext();
        local_1e28._0_4_ = 0;
        new (local_1e28) callstack::Callstack();
        local_1b98.RenderViewBegin(pRVar21, local_2d8, pEVar18, local_1e28);
        local_1e28._0_4_ = 0;
        new (local_1e28) callstack::Callstack();
        local_1b98.RenderViewRenderPasses(local_2d8, pRVar21, false, pEVar18, local_1e28);
        pDVar20 = (DrawableQueue*)local_1b98.GetOrigin();
        pDVar20->ClearAllGroupsInAllPasses();
        if (param_11) {
            pRVar19 = (RT7Core*)this_01->GetPostProcessController();
            this_05 = (PostProcessManager*)this_01->GetVertexDataBuffer();
            pCVar22 = (Config*)pRVar19->GetCurrentConfig();
            new (local_1e28) graphics::PostProcessController::Config(pCVar22);
            local_1bb0._0_4_ = 1.0;
            math::Transitionable<float>::operator=((Transitionable<float>*)(local_1e28 + 72), (float*)local_1bb0);
            local_1bb0._0_4_ = 1.5;
            math::Transitionable<float>::operator=(local_1da0, (float*)local_1bb0);
            local_1c20 = 0;
            local_1c54 = 0;
            local_1d4c = 1;
            local_1d48 = 0;
            local_1c18 = 0;
            local_1c10 = param_7 != 0 || param_8 != 0;
            local_1c0c = param_7;
            local_1c08 = 1;
            local_1c04 = param_8;
            local_1c00 = 0;
            graphics::PostProcessController::PushConfig((Config*)pRVar19);
            pRVar23 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)param_10);
            this_06 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar24 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_06, 0);
            this_00 = (Texture*)*puVar24;
            if (this_00 == (Texture*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargetTexture != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ObjTypeHelpers.cpp",
                          637, (char*)0);
            }
            local_1e40 = pRVar19;
            pRVar23 = (RenderTargets*)param_10->end();
            piVar9 = (int*)this_00->second();
            iVar1 = *piVar9;
            lVar25 = this_00->second();
            ptVar27 = (type*)0;
            new (local_1bb0) render::Viewport(0, 0, iVar1, *(int*)(lVar25 + 4), 0.0, 1.0);
            pVVar26 = (ViewTransforms*)local_2d8->SSOBeginPtr(ptVar27);
            this_05->RenderEffects(pRVar21, pRVar23, this_00, 0, local_1bb0, pVVar26, 0.0, 2, false, 0);
            local_1e40->PopConfig();
            local_1e28->~Config();
        }
        graphics::Renderer::RenderViewEnd((RenderContext*)&local_1b98);
        pMVar14 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_1e38);
        uVar5 = pMVar14->ShadersReady();
        local_1b98.~Renderer();
        local_2d8->~SceneViewData();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar5;
    }

    // 0x1005432f0, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        if (*PTR_m_ambientColour_100ee4760 == '\0') {
            if (___cxa_guard_acquire(PTR_m_ambientColour_100ee4760) != 0) {
                new (PTR_m_ambientColour_100ee6608) math::ColourHSL(1.0, 1.0, 1.0);
                ___cxa_guard_release(PTR_m_ambientColour_100ee4760);
            }
        }
    }

    // 0x100543360, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17() {
        if (*PTR_m_sunlightColour_100ee4770 == '\0') {
            if (___cxa_guard_acquire(PTR_m_sunlightColour_100ee4770) != 0) {
                new (PTR_m_sunlightColour_100ee6618) math::ColourHSL(1.25, 1.25, 1.25);
                ___cxa_guard_release(PTR_m_sunlightColour_100ee4770);
            }
        }
    }

    // 0x100543460, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        if (*PTR_m_cameraOffset_100ee4758 == '\0') {
            if (___cxa_guard_acquire(PTR_m_cameraOffset_100ee4758) != 0) {
                new (PTR_m_cameraOffset_100ee6600) math::ColourHSL(-6.0, 0.0, 0.0);
                ___cxa_guard_release(PTR_m_cameraOffset_100ee4758);
            }
        }
    }

} // namespace jag::game
